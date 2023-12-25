#include "player.hpp"

Player::Player(std::string player_name) {
    this->name_ = player_name;
}

int Player::LevelUp(int value) {
    this->level_ += value;
    return this->level_;
}

int Player::Play() {
    auto value = std::rand() / ((RAND_MAX + 1u) / 6);
    return this->LevelUp(value);
}

int Player::GetLevel() {
    return this->level_;
}