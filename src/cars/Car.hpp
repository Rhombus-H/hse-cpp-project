#ifndef HSE_CPP_PROJECT_CAR_H
#define HSE_CPP_PROJECT_CAR_H

#include <
#include <string>

class Car {
protected:
    Color color;
    Position position;
    Path currentPath;
    size_t pathIndex = 0;
    public:
    Car(Color c, Position startPos);
    virtual ~Car() = default;
    virtual void update() = 0;
    // Обычно: сдвинуться на следующую клетку по пути.
    virtual std::string describe() const = 0;
    // Для логов/сохранений: "Passenger Red (3,4)"
    void assignPath(Path newPath);
    // currentPath = std::move(newPath); pathIndex = 0;
    bool hasArrived() const;
    // pathIndex >= currentPath.size()
    Position getPosition() const;
    Color getColor() const;
};
#endif //HSE_CPP_PROJECT_CAR_H