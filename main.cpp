#include "targetgeneratedialog.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TargetGenerateDialog w;
    w.show();
    return a.exec();
}
