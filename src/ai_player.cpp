#include "ai_player.hpp"

AiPlayer::AiPlayer(std::string name) { this->name_ = name; }

int AiPlayer::LevelUp(int value) {
  ++level_;
  level_ += value;
  return level_;
}
