#include <SFML/Graphics.hpp>
#include <math.h>
#include <cmath>
#include <vector>
#include <iostream>

const float PI = 3.14159265359;

sf::Vector2f toScreen(float x, float y){
    float screenX = (x / PI) * (1920 - 100) + 50;  
    float screenY = 1080 - ((y + 1) / 2) * (1080 - 100)-50;  
    return {screenX, screenY};
}

int main(){
    sf::RenderWindow window(sf::VideoMode(1920, 1080), "Beautiful trapecia");

    std::vector<sf::Vector2f> pointsF1, pointsF2;
    for (float x = 0; x <= PI; x += 0.01f){
        pointsF1.push_back(toScreen(x, sin(x)));
        pointsF2.push_back(toScreen(x, 0));
    }

    float pnt1 = 0; float pnt2 = PI;

    sf::VertexArray trapecia(sf::TriangleFan);
    trapecia.append({toScreen(pnt1, 0), sf::Color::Magenta});

    for (const auto point : pointsF1){
        trapecia.append({point, sf::Color::Magenta});
    }
    
    while (window.isOpen()){
        sf::Event event;
        while (window.pollEvent(event)){
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear(sf::Color::White);

        sf::Vertex xAxis[] = {
            sf::Vertex(toScreen(0, 0), sf::Color::Black),
            sf::Vertex(toScreen(PI, 0), sf::Color::Black)
        };
        sf::Vertex yAxis[] = {
            sf::Vertex(toScreen(0, -1), sf::Color::Black),
            sf::Vertex(toScreen(0, 1), sf::Color::Black)
        };
        window.draw(xAxis, 2, sf::Lines);
        window.draw(yAxis, 2, sf::Lines);

        window.draw(trapecia);

        sf::VertexArray graphF1(sf::LineStrip);
        for (const auto& point : pointsF1){
            graphF1.append({point, sf::Color::Red});
        }
        window.draw(graphF1);

        sf::VertexArray graphF2(sf::LineStrip);
        for (const auto point : pointsF2){
            graphF2.append({point, sf::Color::Blue});
        }
        window.draw(graphF2);

        sf::Font font;
        font.loadFromFile("/usr/share/fonts/truetype/dejavu/DejaVuSans.ttf");

        sf::Text PodpisF1("f1(x) = sin(x)", font, 16);
        PodpisF1.setFillColor(sf::Color::Red);
        PodpisF1.setPosition(50, 50);
        window.draw(PodpisF1);

        sf::Text PodpisF2("f2(x) = 0", font, 16);
        PodpisF2.setFillColor(sf::Color::Blue);
        PodpisF2.setPosition(50, 70);
        window.draw(PodpisF2);

        sf::Text Peresek1("(0, 0)", font, 14);
        Peresek1.setFillColor(sf::Color::Green);
        Peresek1.setPosition(toScreen(0, 0).x, toScreen(0, 0).y + 5);
        window.draw(Peresek1);

        sf::Text peresek2("(Pi, 0)", font, 14);
        peresek2.setFillColor(sf::Color::Green);
        peresek2.setPosition(toScreen(pnt2, 0).x, toScreen(pnt2, 0).y + 5);
        window.draw(peresek2);

        window.display();
    }
}