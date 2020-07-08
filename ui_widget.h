/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QTabWidget *mainTab;
    QWidget *LClicker;
    QSlider *leftMinSlider;
    QCheckBox *LToggler;
    QLabel *label_3;
    QLabel *label_4;
    QSlider *leftMaxSlider;
    QLabel *leftMaxCPS;
    QLabel *leftMinCPS;
    QCheckBox *breakBlocks;
    QLineEdit *clickWindow;
    QLabel *label_clickwindow;
    QWidget *RClicker;
    QLabel *label_5;
    QCheckBox *RToggler;
    QSlider *rightMaxSlider;
    QLabel *label_6;
    QLabel *rightMinCPS;
    QSlider *rightMinSlider;
    QLabel *rightMaxCPS;
    QWidget *destruct;
    QLabel *labelDestruct;
    QPushButton *destructButton;
    QCheckBox *ssmode;
    QLabel *copyright;
    QFrame *frame;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(377, 452);
        Widget->setMinimumSize(QSize(377, 452));
        Widget->setMaximumSize(QSize(377, 452));
        Widget->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
""));
        mainTab = new QTabWidget(Widget);
        mainTab->setObjectName(QString::fromUtf8("mainTab"));
        mainTab->setGeometry(QRect(20, 80, 321, 281));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        mainTab->setFont(font);
        mainTab->setAutoFillBackground(false);
        mainTab->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"background-image: url(:/new/prefix1/background.png);\n"
"\n"
""));
        LClicker = new QWidget();
        LClicker->setObjectName(QString::fromUtf8("LClicker"));
        leftMinSlider = new QSlider(LClicker);
        leftMinSlider->setObjectName(QString::fromUtf8("leftMinSlider"));
        leftMinSlider->setGeometry(QRect(10, 130, 141, 22));
        leftMinSlider->setMinimum(1);
        leftMinSlider->setMaximum(20);
        leftMinSlider->setOrientation(Qt::Horizontal);
        LToggler = new QCheckBox(LClicker);
        LToggler->setObjectName(QString::fromUtf8("LToggler"));
        LToggler->setGeometry(QRect(10, 10, 71, 16));
        LToggler->setFont(font);
        label_3 = new QLabel(LClicker);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 110, 54, 12));
        label_3->setFont(font);
        label_4 = new QLabel(LClicker);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 160, 54, 12));
        label_4->setFont(font);
        leftMaxSlider = new QSlider(LClicker);
        leftMaxSlider->setObjectName(QString::fromUtf8("leftMaxSlider"));
        leftMaxSlider->setGeometry(QRect(10, 180, 141, 22));
        leftMaxSlider->setMinimum(1);
        leftMaxSlider->setMaximum(20);
        leftMaxSlider->setOrientation(Qt::Horizontal);
        leftMaxCPS = new QLabel(LClicker);
        leftMaxCPS->setObjectName(QString::fromUtf8("leftMaxCPS"));
        leftMaxCPS->setGeometry(QRect(40, 160, 54, 12));
        leftMaxCPS->setFont(font);
        leftMinCPS = new QLabel(LClicker);
        leftMinCPS->setObjectName(QString::fromUtf8("leftMinCPS"));
        leftMinCPS->setGeometry(QRect(40, 110, 54, 12));
        leftMinCPS->setFont(font);
        breakBlocks = new QCheckBox(LClicker);
        breakBlocks->setObjectName(QString::fromUtf8("breakBlocks"));
        breakBlocks->setGeometry(QRect(10, 30, 101, 16));
        breakBlocks->setFont(font);
        clickWindow = new QLineEdit(LClicker);
        clickWindow->setObjectName(QString::fromUtf8("clickWindow"));
        clickWindow->setGeometry(QRect(10, 80, 161, 20));
        clickWindow->setFont(font);
        label_clickwindow = new QLabel(LClicker);
        label_clickwindow->setObjectName(QString::fromUtf8("label_clickwindow"));
        label_clickwindow->setGeometry(QRect(10, 60, 81, 16));
        label_clickwindow->setFont(font);
        mainTab->addTab(LClicker, QString());
        RClicker = new QWidget();
        RClicker->setObjectName(QString::fromUtf8("RClicker"));
        label_5 = new QLabel(RClicker);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(10, 110, 54, 12));
        label_5->setFont(font);
        RToggler = new QCheckBox(RClicker);
        RToggler->setObjectName(QString::fromUtf8("RToggler"));
        RToggler->setGeometry(QRect(10, 20, 71, 16));
        RToggler->setFont(font);
        rightMaxSlider = new QSlider(RClicker);
        rightMaxSlider->setObjectName(QString::fromUtf8("rightMaxSlider"));
        rightMaxSlider->setGeometry(QRect(10, 130, 141, 22));
        rightMaxSlider->setMinimum(1);
        rightMaxSlider->setMaximum(20);
        rightMaxSlider->setOrientation(Qt::Horizontal);
        label_6 = new QLabel(RClicker);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(10, 60, 54, 12));
        label_6->setFont(font);
        rightMinCPS = new QLabel(RClicker);
        rightMinCPS->setObjectName(QString::fromUtf8("rightMinCPS"));
        rightMinCPS->setGeometry(QRect(40, 60, 54, 12));
        rightMinCPS->setFont(font);
        rightMinSlider = new QSlider(RClicker);
        rightMinSlider->setObjectName(QString::fromUtf8("rightMinSlider"));
        rightMinSlider->setGeometry(QRect(10, 80, 141, 22));
        rightMinSlider->setMinimum(1);
        rightMinSlider->setMaximum(20);
        rightMinSlider->setOrientation(Qt::Horizontal);
        rightMaxCPS = new QLabel(RClicker);
        rightMaxCPS->setObjectName(QString::fromUtf8("rightMaxCPS"));
        rightMaxCPS->setGeometry(QRect(40, 110, 54, 12));
        rightMaxCPS->setFont(font);
        mainTab->addTab(RClicker, QString());
        destruct = new QWidget();
        destruct->setObjectName(QString::fromUtf8("destruct"));
        labelDestruct = new QLabel(destruct);
        labelDestruct->setObjectName(QString::fromUtf8("labelDestruct"));
        labelDestruct->setGeometry(QRect(10, 40, 171, 16));
        labelDestruct->setFont(font);
        destructButton = new QPushButton(destruct);
        destructButton->setObjectName(QString::fromUtf8("destructButton"));
        destructButton->setGeometry(QRect(10, 110, 75, 23));
        destructButton->setFont(font);
        destructButton->setStyleSheet(QString::fromUtf8("background-color: rgb(225, 225, 225);\n"
""));
        ssmode = new QCheckBox(destruct);
        ssmode->setObjectName(QString::fromUtf8("ssmode"));
        ssmode->setGeometry(QRect(10, 70, 131, 16));
        ssmode->setFont(font);
        mainTab->addTab(destruct, QString());
        copyright = new QLabel(Widget);
        copyright->setObjectName(QString::fromUtf8("copyright"));
        copyright->setGeometry(QRect(290, 430, 91, 21));
        copyright->setFont(font);
        frame = new QFrame(Widget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(80, 10, 191, 61));
        frame->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/NoobClicker.png);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);

        retranslateUi(Widget);

        mainTab->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        LToggler->setText(QCoreApplication::translate("Widget", "Toggle?", nullptr));
        label_3->setText(QCoreApplication::translate("Widget", "Min:", nullptr));
        label_4->setText(QCoreApplication::translate("Widget", "Max:", nullptr));
        leftMaxCPS->setText(QCoreApplication::translate("Widget", "[NONE]", nullptr));
        leftMinCPS->setText(QCoreApplication::translate("Widget", "[NONE]", nullptr));
        breakBlocks->setText(QCoreApplication::translate("Widget", "Break Blocks?", nullptr));
        label_clickwindow->setText(QCoreApplication::translate("Widget", "Window Title:", nullptr));
        mainTab->setTabText(mainTab->indexOf(LClicker), QCoreApplication::translate("Widget", "LeftClicker", nullptr));
        label_5->setText(QCoreApplication::translate("Widget", "Max:", nullptr));
        RToggler->setText(QCoreApplication::translate("Widget", "Toggle?", nullptr));
        label_6->setText(QCoreApplication::translate("Widget", "Min:", nullptr));
        rightMinCPS->setText(QCoreApplication::translate("Widget", "[NONE]", nullptr));
        rightMaxCPS->setText(QCoreApplication::translate("Widget", "[NONE]", nullptr));
        mainTab->setTabText(mainTab->indexOf(RClicker), QCoreApplication::translate("Widget", "RightClicker", nullptr));
        labelDestruct->setText(QCoreApplication::translate("Widget", "Click there to destruct:", nullptr));
        destructButton->setText(QCoreApplication::translate("Widget", "Destruct", nullptr));
        ssmode->setText(QCoreApplication::translate("Widget", "Screenshare mode", nullptr));
        mainTab->setTabText(mainTab->indexOf(destruct), QCoreApplication::translate("Widget", "Destruct", nullptr));
        copyright->setText(QCoreApplication::translate("Widget", "@NoobPvPerL", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
