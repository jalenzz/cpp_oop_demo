#pragma once

#include "player.hpp"

class AiPlayer: public Player {
public:
    AiPlayer() = default;
    explicit AiPlayer(std::string name);
    ~AiPlayer() = default;

private:
    int LevelUp(int value) override;
};
