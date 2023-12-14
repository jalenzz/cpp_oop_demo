#include "ai_player.hpp"
#include "game.hpp"
#include "player.hpp"

int main() {
  Game game;
  Player hero("hero");
  AiPlayer ai_player("ai_player");

  game.AddPlayer(hero);
  game.AddPlayer("Jalen");
  game.AddPlayer("Bob");
  game.AddPlayer("pt");
  game.AddPlayer(ai_player);

  game.Start();
  game.Run();
  game.End();

  return 0;
}
