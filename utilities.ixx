module;

#include <SFML/Graphics.hpp> //Global module fragment

export module utilities;

export void app() {

  sf::RenderWindow window(sf::VideoMode({400, 400}), "SFML works!");
  sf::CircleShape shape(200.f);
  shape.setFillColor(sf::Color::Blue);

  while (window.isOpen()) {
    while (const std::optional event = window.pollEvent()) {
      if (event->is<sf::Event::Closed>())
        window.close();
    }

    window.clear();
    window.draw(shape);
    window.display();
  }
}