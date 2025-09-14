#include "Game.hpp"

Game::Game() : window(sf::VideoMode(800, 600), "Geometry Dash Clone") {
    window.setFramerateLimit(60);
}

void Game::run() {
    sf::Clock clock;
    while (window.isOpen()) {
        sf::Time deltaTime = clock.restart();
        processEvents();
        update(deltaTime);
        render();
    }
}

void Game::processEvents() {
    sf::Event event;
    while (window.pollEvent(event)) {
        if (event.type == sf::Event::Closed) {
            window.close();
        }
    }
}

void Game::update(sf::Time deltaTime) {
    player.update();
    // Add logic for obstacles, score, etc.
}

void Game::render() {
    window.clear(sf::Color::Black);
    player.draw(window);
    window.display();
}

int main() {
    Game game;
    game.run();
    return 0;
}