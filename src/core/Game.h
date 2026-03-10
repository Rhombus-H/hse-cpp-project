#ifndef CORE_LIB_GAME_H
#define CORE_LIB_GAME_H
#include <memory>

#include "TickSystem.h"
#include "Types.h"

class Game {
    std::unique_ptr<GameMap> map;
    std::unique_ptr<CarManager> carManager;
    std::unique_ptr<SaveManager> saveManager;
    std::unique_ptr<ActionLog> actionLog;
    std::unique_ptr<ConsoleRenderer> renderer;
    TickSystem tickSystem;
    bool running = true;
    size_t delivered = 0; // счётчик доставленных машин
public:
    void init(const std::string& levelPath);
    // Загружает уровень из файла, создаёт все подсистемы.
    void run();
    // Главный цикл: while(running) { render(); processInput(); update(); }
    void processInput(const std::string& cmd);
    // Разбирает команду из консоли:
    // "place 3 4" → placeRoad({3,4})
    // "remove 3 4" → removeRoad({3,4})
    // "undo" → отменить последнее действие
    // "save slot1" → сохранить
    // "load slot1" → загрузить
    // "quit" → running = false
    void update();
    // Один тик:
    // 1. tickSystem.advance()
    // 2. Проверить здания — пора ли спавнить машину
    // 3. carManager->updateAll() — все машины двигаются
    // 4. carManager->removeArrived() — удалить доехавших, увеличить delivered
    void placeRoad(Position pos);
    void removeRoad(Position pos);
    void undo();
    void save(const std::string& slot);
    void load(const std::string& slot);
};
#endif //HSE_CPP_PROJECT_GAME_H