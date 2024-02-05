#include <SFML/Graphics.hpp>

#define WIDHT 40
#define HEIGHT 40
#define SIZE 16
#define W  SIZE*WIDHT
#define H  SIZE*HEIGHT


using namespace sf;
int main()
{
    RenderWindow window(VideoMode(W, H), "SFML works!");
    Texture texture1;
    texture1.loadFromFile("images/green.png");
    Sprite s1(texture1);

    while (window.isOpen())
    {
        Event event;
        while (window.pollEvent(event))
        {
            if (event.type == Event::Closed)
                window.close();
        }


        for(int i =0; i<=W; i++)
        {
            for(int j=0; j<=H; j++)
            {
                s1.setPosition(i*SIZE,j*SIZE);
                window.draw(s1);
            }
        }
        window.display();



    }

    return 0;
}

