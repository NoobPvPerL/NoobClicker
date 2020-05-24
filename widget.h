#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <map>
#include <vector>
#include <QTimer>
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
    QTimer* timer = new QTimer(this);

private slots:
    void init();
    void leftCPSChanged();
    void rightCPSChanged();
    void click();
    void LToggleChanger();
    void RToggleChanger();
    int random(int a,int b);

private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
