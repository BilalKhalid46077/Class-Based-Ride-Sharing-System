//
// Created by Mac Pro on 2/13/26.
//

#ifndef C_PROJ_PREMIUMRIDE_H
#define C___PROJ_PREMIUMRIDE_H
#include <iostream>
#include <utility>

#include "RideClass.h"

// Inheritance // Child Class
class PremiumRide : public RideClass{
    public:
    PremiumRide(
    int rideId,
    std::string pickupLocation,
    std::string dropoffLocation,
    float distance,
    float fare
    ) : RideClass(
        rideId, std::move(pickupLocation),std::move(dropoffLocation),"Premium Ride",distance,(fare * 1.5)
    ){}
    void calculateFare() const{
        std::cout << "Premium Ride: $" << distance * (fare * 1.5) << std::endl;
    }
};


#endif //C___PROJ_PREMIUMRIDE_H