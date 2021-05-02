#include "renderarea.h"

#include <QPainter>

RenderArea::RenderArea(QWidget* parent)
    : QWidget(parent),
      levels(1)
{
}

void RenderArea::setLevels(int lvls)
{
    levels = lvls;
    update();
}

void RenderArea::paintEvent(QPaintEvent* /* event */)
{
    QPainter painter(this);

    painter.setBrush(Qt::GlobalColor::gray);
    
    //                     x  y     width        height
    painter.drawRect(QRect(0, 0, width() - 1, height() - 1));
    
    
    painter.setBrush(Qt::GlobalColor::black);
    painter.setPen(Qt::GlobalColor::red);
    
    int height = 10;
    
    painter.drawRect(QRect(0, 0, width() - 1, height));
    
    if (levels > 1)
    {
        painter.drawRect(QRect(0, height*2, width() / 3, height));
        painter.drawRect(QRect(width() * 2 / 3, height*2, width() / 3, height));
    }

}
