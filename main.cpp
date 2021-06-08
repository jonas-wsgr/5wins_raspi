#include "fivewins.h"
#include "menu.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    fiveWins w;

    menu m(&w);
    m.show();
    return a.exec();
}
