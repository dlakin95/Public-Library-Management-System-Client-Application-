#include<QLabel>
#include<QPixmap>
#include"windowmacros.hpp"
#include<QLineEdit>
#include"formatabledata.hpp"
#include"formatabledatafield.hpp"
#include"emptyenum.hpp"


template <typename ParamName>
FormatableDataField<ParamName>::FormatableDataField(bool editable, FormatableData<ParamName>* formatableData, bool newFDInstance, void *parent, QString postfix, bool centerText){
    if(newFDInstance){
        if(formatableData)
            this->formatableData = new FormatableData<ParamName>(*formatableData);
        fDNewInstance = newFDInstance;
    }
    else
        this->formatableData = formatableData;
    this->editable = editable;
    this->postfix = postfix;
    setParent(static_cast<QWidget*>(parent));
    if(editable)
        createTextEditElement(centerText);
    else
        createLabelElement(centerText);
}

template <typename ParamName>
FormatableDataField<ParamName>::~FormatableDataField(){
    if(editable)
        delete data.textEdit;
    else
        delete data.label;
    delete changeFormatButton;
    if(fDNewInstance)
        delete formatableData;
}

template <typename ParamName>
QLineEdit* FormatableDataField<ParamName>::getDataUTextEdit(){
    return data.textEdit;
}

template <typename ParamName>
QLabel* FormatableDataField<ParamName>::getDataULabel(){
    return data.label;
}

template <typename ParamName>
QLabel* FormatableDataField<ParamName>::getChangeFormatButton(){
    return changeFormatButton;
}

template <typename ParamName>
FormatableData<ParamName>* FormatableDataField<ParamName>::getFormatableData(){
    return formatableData;
}

template <typename ParamName>
bool FormatableDataField<ParamName>::isEditable(){
    return editable;
}

template <typename ParamName>
void FormatableDataField<ParamName>::setFormatableData(FormatableData<ParamName> *set){
    if(fDNewInstance){
        if(formatableData)
            delete formatableData;
        formatableData = new FormatableData<ParamName>(*set);
    }
    else
        formatableData = set;
}

template <typename ParamName>
void FormatableDataField<ParamName>::createChangeFormatButton(int offset){
    if(changeFormatButtonExist)
        return;
    changeFormatButtonExist = true;
    changeFormatButton = new QLabel(this);
    changeFormatButton->setGeometry(offset, 0, 25, 25);
    //changeFormatButton->setPixmap(QPixmap(OPTIONS_PIXMAP));
    changeFormatButton->show();
}

template <typename ParamName>
void FormatableDataField<ParamName>::deleteChangeFormatButton(){
    if(changeFormatButtonExist){
        changeFormatButtonExist = false;
        changeFormatButton->deleteLater();
        changeFormatButton = nullptr;
    }
}

template <typename ParamName>
void FormatableDataField<ParamName>::rewriteData(bool useCorrectionFactor){
    Q_UNUSED(useCorrectionFactor);
    if(formatableData){
        if(editable)
            data.textEdit->setText(formatableData->useStringFormat());
        else
            data.label->setText(formatableData->useStringFormat() + postfix);
    }
}

template <typename ParamName>
void FormatableDataField<ParamName>::multiSpaceKeyDetection(){
    uint curPos = data.textEdit->cursorPosition();
    QString str = data.textEdit->text();
    QString newStr = QString();
    uint len = str.length();
    if(len != 0 && str.at(0) != ' ')
        newStr.append(str.at(0));
    for(uint i = 1; i < len; i++)
        if(str.at(i).toLatin1() == str.at(i - 1).toLatin1() && str.at(i).toLatin1() == ' ')
            curPos--;
        else
            newStr.append(str.at(i));
    data.textEdit->setText(newStr);
    data.textEdit->setCursorPosition(curPos);
}

template <typename ParamName>
bool FormatableDataField<ParamName>::isFormatValid(){
    return formatValidity;
}

template <typename ParamName>
void FormatableDataField<ParamName>::setFormatValidity(bool set){
    formatValidity = set;
}

template <typename ParamName>
void FormatableDataField<ParamName>::createLabelElement(bool centerText){
    QLabel* temp = new QLabel(this);
    temp->setGeometry(geometry());
    if(formatableData){
        temp->setText(formatableData->useStringFormat() + postfix);
        formatValidity = true;
    }else{
        if(data.textEdit)
        temp->setText(data.textEdit->text());
    }
    SET_PTR_DO(data.textEdit, nullptr);
    SET_PTR_NDO(data.label, temp);
    if(centerText)
        data.label->setAlignment(Qt::AlignCenter);
    data.label->show();
}

template <typename ParamName>
void FormatableDataField<ParamName>::createTextEditElement(bool centerText){
    QLineEdit* temp = new QLineEdit(this);
    temp->setGeometry(geometry());
        if(formatableData){
            temp->setText(formatableData->useStringFormat());
            formatValidity = true;
        }else{
            if(data.label)
            temp->setText(data.label->text());
        }
        SET_PTR_DO(data.label, nullptr);
        SET_PTR_NDO(data.textEdit, temp);
        if(centerText)
            data.textEdit->setAlignment(Qt::AlignCenter);
        data.textEdit->show();
}

template <typename ParamName>
void FormatableDataField<ParamName>::switchDisplayForm(bool centerText){
    if(editable){
        createLabelElement(centerText);
    }else{
        createTextEditElement(centerText);
    }
    editable = !editable;
}

template<typename ParamName>
void FormatableDataField<ParamName>::installEventFilter(QObject* evFilter){
    if(editable)
        data.textEdit->installEventFilter(evFilter);
    else {
        data.label->installEventFilter(evFilter);
    }
}

template<typename ParamName>
void FormatableDataField<ParamName>::setGeometry(int x, int y, int width, int height){
    if(editable)
        data.textEdit->setGeometry(0, 0, width, height);
    else {
        data.label->setGeometry(0, 0, width, height);
    }
    QFrame::setGeometry(x, y, width, height);
}

// Instances
template class FormatableDataField<Empty>;
