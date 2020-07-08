#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <map>
#include <vector>
#include <QTimer>
#include <string>
using namespace std;

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
    vector<bool> toggler {false,false};
    vector<int> leftCPS {9,13},rightCPS {9,13};
    bool ssmodeToggler = false;
    bool breakblocksToggler = false;
    QTimer* timer = new QTimer(this);
    string WindowTitle = "Minecraft 1.7.10";
private slots:
    void init();
    void leftCPSChanged();
    void rightCPSChanged();
    void click();
    void LToggleChanger();
    void RToggleChanger();
    int random(int a,int b);
    void destruct();
    void ssmodeChanger();
    void breakBlocksChanger();
    void windowTitleChanged();
private:
    Ui::Widget *ui;
};

#endif // WIDGET_H
