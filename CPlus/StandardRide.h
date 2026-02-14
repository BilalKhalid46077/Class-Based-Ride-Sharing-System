//
// Created by Bilal on 2/13/26.
//

#ifndef C_PROJ_STANDARDRIDE_H
#define C_PROJ_STANDARDRIDE_H
#include <iostream>
#include <utility>

#include "RideClass.h"

// Inheritance // Child Class
class StandardRide : public RideClass{
    public:
    StandardRide(
    int rideId,
    std::string pickupLocation,
    std::string dropoffLocation,
    float distance,
    float fare
    ) : RideClass(
        rideId, std::move(pickupLocation),std::move(dropoffLocation),"Standard Ride",distance,fare
    ){}
    void calculateFare() const{
        std::cout << "Standard Ride: $" << distance * fare << std::endl;
    }
};


#endif //C_PROJ_STANDARDRIDE_H