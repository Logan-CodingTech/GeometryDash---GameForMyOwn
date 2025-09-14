#ifndef PLAYER_HPP
#define PLAYER_HPP

#include <SFML/Graphics.hpp>

class Player {
public:
    // Constructor initializes the player's properties
    Player();

    // Updates the player's state (movement, jumping, gravity)
    void update(sf::Time deltaTime);

    // Draws the player on the window
    void draw(sf::RenderWindow& window);

    // Get the player's current position for collision checks
    sf::Vector2f getPosition() const;
    
    // Handle player jumping
    void jump();

private:
    sf::RectangleShape shape;
    sf::Vector2f velocity;
    float gravity;
    bool isJumping;
};

#endif