#include "foodhandler.h"

FoodHandler::FoodHandler(Snake::Controller& controller) : _controller(controller) {}

void FoodHandler::sendPlaceNewFood(int x, int y)
{
    /*m_foodPosition = std::make_pair(x, y);

    DisplayInd placeNewFood;
    placeNewFood.x = x;
    placeNewFood.y = y;
    placeNewFood.value = Cell_FOOD;

    m_displayPort.send(std::make_unique<EventT<DisplayInd>>(placeNewFood));*/
}
