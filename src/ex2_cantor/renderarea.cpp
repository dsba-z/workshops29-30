#include "renderarea.h"

#include <QPainter>

RenderArea::RenderArea(QWidget* parent)
    : QWidget(parent)
{

}


void RenderArea::paintEvent(QPaintEvent* /* event */)
{
    QPainter painter(this);


    painter.setBrush(Qt::GlobalColor::gray);
    painter.drawRect(QRect(0, 0, width() - 1, height() - 1));

}
