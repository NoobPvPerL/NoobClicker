#include "widget.h"

#include <ObjBase.h>
#include <string>
#include <iostream>
#include <Windows.h>
#include <QApplication>
#include <windows.h>
using namespace std;
#define KEY_DOWN(VK_NONAME) ((GetAsyncKeyState(VK_NONAME) & 0x8000) ? 1:0)
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    w.setWindowTitle("NoobClicker V1.0");
    w.show();
    return a.exec();
}
