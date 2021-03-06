#ifndef FORMATABLEDATAFIELD_HPP
#define FORMATABLEDATAFIELD_HPP
#include<QFrame>

class QLineEdit;
class QLabel;
template <typename ParamName> class FormatableData;
template <typename ParamName> class FormatableDataField : public QFrame{
public:
    FormatableDataField(bool, FormatableData<ParamName>*, bool, void*, QString, bool);
    ~FormatableDataField();

private:
    bool editable = false;
    union Data{
        QLineEdit *textEdit = nullptr;
        QLabel *label;
    } data;
    FormatableData<ParamName> *formatableData = nullptr;
    QLabel *changeFormatButton = nullptr;
    bool changeFormatButtonExist = false;
    QString postfix = QString();
    bool formatValidity = false;
    bool fDNewInstance = false;

public:
    // Funkcje get
    QLabel* getDataULabel();
    QLineEdit* getDataUTextEdit();
    QLabel* getChangeFormatButton();
    FormatableData<ParamName>* getFormatableData();
    bool isEditable();
    void setFormatableData(FormatableData<ParamName>*);
    void multiSpaceKeyDetection();
    bool isFormatValid();
    void setFormatValidity(bool);
    void createLabelElement(bool);
    void createTextEditElement(bool);

    // Funkcje sterujące
    void createChangeFormatButton(int offset);
    void deleteChangeFormatButton();
    void rewriteData(bool);

    // Funkcja zmiany elementu QTextEdit / QLabel
    void switchDisplayForm(bool);

    // Funkcja ustawiania Event Filtera
    void installEventFilter(QObject*);
    void setGeometry(int x, int y, int width, int height);

};
#endif // FORMATABLEDATAFIELD_HPP
