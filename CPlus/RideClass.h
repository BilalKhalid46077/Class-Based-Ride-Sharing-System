//
// Created by Bilal on 2/13/26.
//

#ifndef C___PROJ_RIDECLASS_H
#define C___PROJ_RIDECLASS_H
#include <iostream>
#include <string>
#include <utility>

// Parent Class
class RideClass {
// Encapsulation // Accessible to child class
protected:
    int rideId;
    std::string pickupLocation;
    std::string dropoffLocation;
    std::string type;
    float distance;
    float fare;
    RideClass(
        int rideId,
        std::string  pickupLocation,
        std::string  dropoffLocation,
        std::string  type,
        float distance,
        float fare) : rideId(rideId), pickupLocation(std::move(pickupLocation)),
    dropoffLocation(std::move(dropoffLocation)),
    type(std::move(type)),
    distance(distance),
    fare(fare) {}

public:
    void calculateFare() const {
        std::cout << type << ": $" << distance * fare << std::endl;
    }
};


#endif //C___PROJ_RIDECLASS_H