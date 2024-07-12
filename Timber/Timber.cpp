// Timber.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <SFML/Graphics.hpp>

int main()
{
    sf::VideoMode vm{1920, 1080};
    sf::RenderWindow window(vm, "Timber!!!", sf::Style::Fullscreen);

    sf::Texture textureBackground;
    textureBackground.loadFromFile("graphics/background.png");

    sf::Sprite spriteBackground;
    spriteBackground.setTexture(textureBackground);
    spriteBackground.setPosition(0, 0);

    ////////////////////////
    // TREE SPRITE & TEXTURE
    ////////////////////////
    sf::Texture textureTree;
    textureTree.loadFromFile("graphics/tree.png");

    sf::Sprite spriteTree;
    spriteTree.setTexture(textureTree);
    spriteTree.setPosition(810, 0);

    ///////////////////////
    // BEE SPRITE & TEXTURE
    ///////////////////////
    sf::Texture beeTexture;
    beeTexture.loadFromFile("graphics/bee.png");

    sf::Sprite spriteBee;
    spriteBee.setTexture(beeTexture);
    spriteBee.setPosition(0, 800);

    bool beeActive{ false };
    float beeSpeed{ 0.0f };

    /////////////////////////
    // CLOUD SPRITE & TEXTURE
    /////////////////////////
    sf::Texture textureCloud;
    textureCloud.loadFromFile("graphics/cloud.png");

    sf::Sprite spriteCloud1, spriteCloud2, spriteCloud3;
    spriteCloud1.setTexture(textureCloud);
    spriteCloud2.setTexture(textureCloud);
    spriteCloud3.setTexture(textureCloud);
    spriteCloud1.setPosition(0, 0);
    spriteCloud2.setPosition(0, 250);
    spriteCloud3.setPosition(0, 500);

    bool cloud1Active{ false }, cloud2Active{ false }, cloud3Active{ false };
    float cloud1Speed{ 0.0f }, cloud2Speed{ 0.0f }, cloud3Speed{ 0.0f };

    ///////////////////////////
    // WINDOW DRAWING & DISPLAY
    ///////////////////////////
    window.clear();
    window.draw(spriteBackground);
    window.draw(spriteCloud1);
    window.draw(spriteCloud2);
    window.draw(spriteCloud3);
    window.draw(spriteTree);
    window.draw(spriteBee);
    window.display();

    while (window.isOpen())
    {
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
        {
            window.close();
        }
    }

    return 0;
}
