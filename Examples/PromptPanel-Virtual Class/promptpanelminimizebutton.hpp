#ifndef PROMPTPANELMINIMIZEBUTTON_HPP
#define PROMPTPANELMINIMIZEBUTTON_HPP
#include<QFrame>

class QLabel;
class PromptPanel;
class PromptPanelMinimizeButton : public QFrame{
    Q_OBJECT
public:
    PromptPanelMinimizeButton(PromptPanel*);
    ~PromptPanelMinimizeButton();

private:
    // Parent
    PromptPanel *parent = nullptr;

    // Elementy
    QLabel *arrowPixmap = nullptr;
    QLabel *warningPixmap = nullptr;
    QLabel *numberOfWarnings = nullptr;
    QLabel *informationPixmap = nullptr;
    QLabel *numberOfInformations = nullptr;

    // Funkcje zarządzania działaniem konstuktora
    void init();
    void setWindow();
    void createWidgets();
    void createLayout();
    void deleteWidgets();
    void connectAll();
    void disconnectAll();

public:
    // Funkcje Get / Set
    QLabel* getNumberOfWarnings();
    QLabel* getNumberOfInformations();
    void setNumbOfWarnings(uint);
    void setNumbOfInfos(uint);
    PromptPanel* getParent();

    // Funkcja odświeżenia informacji na podstawie stanu rodzica
    void repaint();    
};

#endif // PROMPTPANELMINIMIZEBUTTON_HPP
