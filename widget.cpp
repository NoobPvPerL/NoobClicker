#include "widget.h"
#include "ui_widget.h"
#include <QApplication>
#include <string>
#include <windows.h>
#include <QDebug>
#include <QTimer>
#include <time.h>

#define KEY_DOWN(VK_NONAME) ((GetAsyncKeyState(VK_NONAME) & 0x8000) ? 1:0)


using namespace std;

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    init();
    connect(timer,SIGNAL(timeout()),SLOT(click()));
    connect(ui->destructButton,SIGNAL(clicked(bool)),SLOT(close()));
    connect(ui->leftMinSlider,SIGNAL(valueChanged(int)),SLOT(leftCPSChanged()));
    connect(ui->leftMaxSlider,SIGNAL(valueChanged(int)),SLOT(leftCPSChanged()));
    connect(ui->rightMinSlider,SIGNAL(valueChanged(int)),SLOT(rightCPSChanged()));
    connect(ui->rightMaxSlider,SIGNAL(valueChanged(int)),SLOT(rightCPSChanged()));
    connect(ui->LToggler,SIGNAL(clicked(bool)),SLOT(LToggleChanger()));
    connect(ui->RToggler,SIGNAL(clicked(bool)),SLOT(RToggleChanger()));
}

Widget::~Widget()
{
    delete ui;
}


void Widget::init(){
    Widget::timer->start(50);
    srand(time(0));
    this->ui->leftMinSlider->setValue(leftCPS[0]);
    this->ui->leftMaxSlider->setValue(leftCPS[1]);
    this->ui->rightMinSlider->setValue(rightCPS[0]);
    this->ui->rightMaxSlider->setValue(rightCPS[1]);
    this->ui->leftMinCPS->setText(QString::number(leftCPS[0],10));
    this->ui->leftMaxCPS->setText(QString::number(leftCPS[1],10));
    this->ui->rightMinCPS->setText(QString::number(rightCPS[0],10));
    this->ui->rightMaxCPS->setText(QString::number(rightCPS[1],10));
}


void Widget::leftCPSChanged(){
    if (this->ui->leftMinSlider->value() > this->ui->leftMaxSlider->value())
        this->ui->leftMinSlider->setValue(this->ui->leftMinSlider->value()-1);
    leftCPS[0] = this->ui->leftMinSlider->value();
    leftCPS[1] = this->ui->leftMaxSlider->value();
    this->ui->leftMinCPS->setText(QString::number(leftCPS[0],10));
    this->ui->leftMaxCPS->setText(QString::number(leftCPS[1],10));
}


void Widget::rightCPSChanged(){
    if (this->ui->rightMinSlider->value() > this->ui->rightMaxSlider->value())
        this->ui->rightMinSlider->setValue(this->ui->rightMinSlider->value()-1);
    rightCPS[0] = this->ui->rightMinSlider->value();
    rightCPS[1] = this->ui->rightMaxSlider->value();
    this->ui->rightMinCPS->setText(QString::number(rightCPS[0],10));
    this->ui->rightMaxCPS->setText(QString::number(rightCPS[1],10));
}


void Widget::click(){
    if (Widget::toggler[0] == true and KEY_DOWN(VK_LBUTTON)){ mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);Sleep((int)1000/random(leftCPS[0],leftCPS[1])-30); }

    if (Widget::toggler[1] == true and KEY_DOWN(VK_RBUTTON)){ mouse_event(MOUSEEVENTF_RIGHTDOWN, 0, 0, 0, 0);Sleep((int)1000/random(rightCPS[0],rightCPS[1])-30);}
}


void Widget::LToggleChanger(){
    if (Widget::toggler[0] == false) Widget::toggler[0] = true;
    else Widget::toggler[0] = false;
}


void Widget::RToggleChanger(){
    if (Widget::toggler[1] == false) Widget::toggler[1] = true;
    else Widget::toggler[1] = false;
}


int Widget::random(int a,int b){
    return a+rand()%(b-a+1);
}
