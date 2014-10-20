#include <QtGui/QApplication>
#include "frmmain.h"
#include"myhelper.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MyHelper::SetUTF8Code();

    MyHelper::SetStyle("black");
    MyHelper::setChinese();
    frmMain w;
    w.show();

    return a.exec();
}
