// #ifndef HSE_CPP_PROJECT_CARMANAGER_HPP
// #define HSE_CPP_PROJECT_CARMANAGER_HPP
// class CarManager {
//     std::vector<std::unique_ptr<Car>> cars;
//     // unique_ptr — CarManager ВЛАДЕЕТ машинами.
//     // Когда машина удаляется из вектора — объект уничтожается автоматически.
//     public:
//     void spawnCar(std::unique_ptr<Car> car);
//     // cars.pushback(std::move(car));
//     // move обязателен — unique_ptr нельзя копировать.
//     void updateAll();
//     // Для каждой машины: car->update()
//     void removeArrived();
//     // Удалить из вектора все машины, где hasArrived() == true.
//     // Используйте идиому erase-remove.
//     void reassignPaths(Pathfinder& pf, const GameMap& map);
//     // Пересчитать маршруты всех машин (если дороги изменились).
//     size_t count() const;
//     std::vector<Car*> getCarsAt(Position pos) const;
//     std::vector<Car*> getCarsByColor(Color c) const;
// };
// #endif //HSE_CPP_PROJECT_CARMANAGER_HPP