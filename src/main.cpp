#include "game.hpp"
#include "player.hpp"

int main() {
  Game game;
  Player hero("hero");

  game.AddPlayer(hero);
  game.AddPlayer("Jalen");
  game.AddPlayer("Bob");
  game.AddPlayer("pt");

  game.Start();
  game.Run();
  game.End();

  return 0;
}
