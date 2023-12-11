#include <cstdlib>
#include <iostream>
#include <ostream>
#include <vector>

#include "game.hpp"
#include "player.hpp"

Game::Game() {
  this->game_status_ = OVER;
  this->goal = 20;
  std::cout << "Creat a game" << std::endl;
}

void Game::Start() {
  std::cout << "Game start" << std::endl;
  std::cout << this->players_.size() << " players in the game\n\n";
  game_status_ = RUNNING;
}

void Game::End() {
  std::cout << "Game over!" << std::endl;
  std::cout << this->winner.name_ << " WIN" << std::endl;
}

void Game::Run() {
  while (this->game_status_ != OVER) {
    std::cout << "Round " << this->round++ << std::endl;
    for (auto &player : this->players_) {
      auto temp_level = player.Play();
      if (temp_level > goal) {
        this->game_status_ = OVER;
        this->winner = player;
        break;
      }
    }

    for (std::vector<Player>::iterator player = players_.begin();
         player != players_.end(); player++) {
      std::cout << player->name_ << " level " << player->GetLevel()
                << std::endl;
    }

    std::cout << std::endl;
  }
}

void Game::AddPlayer(Player &player) { this->players_.push_back(player); }

void Game::AddPlayer(std::string player_name) {
  auto new_player = Player(player_name);
  this->players_.push_back(new_player);
}
