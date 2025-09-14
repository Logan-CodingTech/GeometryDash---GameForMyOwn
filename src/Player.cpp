#include "Player.hpp"

Player::Player() {
    shape.setSize(sf::Vector2f(50.f, 50.f));
    shape.setPosition(100.f, 400.f);
    shape.setFillColor(sf::Color::Blue);

    velocity = sf::Vector2f(0.f, 0.f);
    gravity = 980.f; // Pixels per second squared
    isJumping = false;
}

void Player::update(sf::Time deltaTime) {
    // Apply gravity
    velocity.y += gravity * deltaTime.asSeconds();

    // Update position based on velocity
    shape.move(velocity * deltaTime.asSeconds());

    // Simple ground collision
    if (shape.getPosition().y >= 400.f) {
        shape.setPosition(shape.getPosition().x, 400.f);
        velocity.y = 0;
        isJumping = false;
    }
}

void Player::draw(sf::RenderWindow& window) {
    window.draw(shape);
}

void Player::jump() {
    if (!isJumping) {
        velocity.y = -600.f; // Initial jump velocity
        isJumping = true;
    }
}

sf::Vector2f Player::getPosition() const {
    return shape.getPosition();
}