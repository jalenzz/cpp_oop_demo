#pragma once

#include <string>

class Player {
public:
  Player() = default;
  explicit Player(std::string name);
  ~Player() = default;

  /**
   * @brief 玩家进行游戏
   * @return level
   */
  int Play();

  // 返回玩家等级
  int GetLevel();

  std::string name_; // 玩家名字
  int level_ = 0;    // 玩家等级

private:
  /**
   * @brief 玩家升级
   * @return 玩家当前等级
   */
  virtual int LevelUp(int value);
};
