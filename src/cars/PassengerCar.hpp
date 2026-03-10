#ifndef HSE_CPP_PROJECT_PASSENGERCAR_HPP
#define HSE_CPP_PROJECT_PASSENGERCAR_HPP
class PassengerCar : public Car {
    size_t passengerCount;
    public:
    PassengerCar(Color c, Position pos, size_t passengers = 1);
    void update() override;
    // pathIndex++ → position = currentPath[pathIndex]
    std::string describe() const override;
    // "Passenger Red (3,4) passengers=2"
};
#endif //HSE_CPP_PROJECT_PASSENGERCAR_HPP