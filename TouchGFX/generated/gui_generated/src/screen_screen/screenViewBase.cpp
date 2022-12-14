/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/screen_screen/screenViewBase.hpp>
#include <touchgfx/Color.hpp>
#include <touchgfx/canvas_widget_renderer/CanvasWidgetRenderer.hpp>


screenViewBase::screenViewBase()
{

    touchgfx::CanvasWidgetRenderer::setupBuffer(canvasBuffer, CANVAS_BUFFER_SIZE);

    __background.setPosition(0, 0, 640, 480);
    __background.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));

    circle1.setPosition(213, 90, 80, 80);
    circle1.setCenter(40, 40);
    circle1.setRadius(40);
    circle1.setLineWidth(0);
    circle1.setArc(0, 360);
    circle1Painter.setColor(touchgfx::Color::getColorFromRGB(47, 194, 172));
    circle1.setPainter(circle1Painter);

    add(__background);
    add(circle1);
}

void screenViewBase::setupScreen()
{

}
