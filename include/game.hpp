#pragma once

#include <vector>

#include "player.hpp"

#define OVER 0
#define RUNNING 1

class Game {
public:
  Game();
  ~Game() = default;

  // 开始游戏
  void Start();
  // 结束游戏
  void End();
  // 游戏进行一部
  void Run();

  /**
   * @brief 添加玩家
   *
   * @param std::string player_name
   */
  void AddPlayer(std::string player_name);
  /**
   * @brief 添加玩家
   *
   * @param Player &player
   */
  void AddPlayer(Player &player);

private:
  int goal;                     // 获胜目标
  int round;                    // 游戏局数
  bool game_status_;            // 游戏状态
  Player winner;                // 最终赢家
  std::vector<Player> players_; // 游戏中的全部玩家
};
