#include "bar.h"
#include "generate.h"
#include <SFML/Graphics.hpp>

const int WIDTH = 1080;
const int HEIGHT = 720;

int main()
{
  auto window = sf::RenderWindow({1080u, 720u}, "CMake SFML Project");
  window.setFramerateLimit(144);

  std::vector<Bar> bars;
  populate(bars, 5);

  while (window.isOpen())
  {
    for (auto event = sf::Event(); window.pollEvent(event);)
    {
      if (event.type == sf::Event::Closed)
      {
        window.close();
      }
    }

    window.clear();

    for (const auto& bar : bars){
      sf::RectangleShape rectangle(bar.size);
      rectangle.setPosition(bar.position);
      window.draw(rectangle);
    }


    window.display();
  }
}
