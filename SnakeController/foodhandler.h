#pragma once
#include "SnakeController.hpp"

class FoodHandler
{
public:
    FoodHandler(Snake::Controller& controller);
    void sendPlaceNewFood(int, int);
private:
    Snake::Controller& _controller;
};

