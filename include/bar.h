#pragma once
#include <SFML/Graphics.hpp>

class Bar{
public:
  sf::Vector2f size;
  sf::Vector2f position;
  bool selected;

  Bar(float h, float w, float x, float y, bool s){
    size = sf::Vector2f(h,w);
    position = sf::Vector2f(x,y);
    selected = s;
  }

};


