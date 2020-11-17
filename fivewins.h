#ifndef FIVEWINS_H
#define FIVEWINS_H

#include <QWidget>
#include <QGraphicsScene>
#include "cell_gui.h"
#include "game.h"


QT_BEGIN_NAMESPACE
namespace Ui { class fiveWins; }
QT_END_NAMESPACE

class fiveWins : public QWidget
{
    Q_OBJECT

public:
    fiveWins(QWidget *parent = nullptr);
    ~fiveWins();

private:
    Ui::fiveWins *ui;
    CellGUI *area[15*15];
    QGraphicsScene *scene;

    void initArea();
    void startGame();
};
#endif // FIVEWINS_H
