// #ifndef HSE_CPP_PROJECT_CARGOCAR_HPP
// #define HSE_CPP_PROJECT_CARGOCAR_HPP
// // Примеры типов груза:
// struct Food {
//     std::string name;
//     float weight;
// };
// struct Electronics {
//     std::string model;
//     int quantity;
// };
// template<typename CargoType>
// class CargoCar : public Car {
//     std::optional<CargoType> cargo;
//     // optional: машина может ехать пустой (cargo == nullopt).
// public:
//     CargoCar(Color c, Position pos);
//     void loadCargo(CargoType c) { cargo = std::move(c); }
//     std::optional<CargoType> unloadCargo() {
//         auto result = std::move(cargo);
//         cargo = std::nullopt;
//         return result;
//     }
//     bool hasCargo() const { return cargo.has
//     _
//     value(); }
//     void update() override;
//     // Такой же как у PassengerCar, но можно добавить
//     // замедление если гружёная.
//     std::string describe() const override;
// };
// #endif //HSE_CPP_PROJECT_CARGOCAR_HPP