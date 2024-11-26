#include <SFML/Graphics.hpp>
#include <vector>

int main()
{
    // create the window
    sf::RenderWindow window(sf::VideoMode(800, 600), "Bubble Sort");

    // Create vector of rectangles
    std::vector<sf::RectangleShape> rectangles;

    // create and configure rectangles
    for (int i = 0; i < 5; ++i) {
        sf::RectangleShape rectangle(sf::Vector2f(5.f, 250.f));
        rectangle.setFillColor(sf::Color(100, 250, 50));
        rectangle.setPosition(100.f * i, 355.f);
        rectangles.push_back(rectangle);
    }

    // run the program as long as the window is open
    while (window.isOpen())
    {
        // check all the window's events that were triggered since the last iteration of the loop
        sf::Event event;
        while (window.pollEvent(event))
        {
            // "close requested" event: we close the window
            if (event.type == sf::Event::Closed)
                window.close();
        }

        // clear the window with black color
        window.clear(sf::Color::Black);

        // draw everything here...
        for (const auto& rectangle : rectangles) {
            window.draw(rectangle);
        }

        // end the current frame
        window.display();
    }

    return 0;
}