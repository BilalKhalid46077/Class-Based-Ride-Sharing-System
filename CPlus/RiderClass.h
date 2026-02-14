//
// Created by Mac Pro on 2/13/26.
//

#ifndef C___PROJ_RIDERCLASS_H
#define C___PROJ_RIDERCLASS_H
#include <iostream>
#include <string>
#include <utility>
#include "RideClass.h"


class RiderClass {
// Encapsulation //Accessible to none
private:
    int riderId;
    std::string name;
    float rating;
    std::vector<RideClass> requestedRides;

public:
    RiderClass(
    int riderId,
    std::string name,
    float rating
    ) : riderId(riderId), name(std::move(name)), rating(rating) {}

    void requestRide(const RideClass& ride) {
        requestedRides.push_back(ride);
    }

    void getRiderInfo() const{
        std::cout << std::endl << "*******Rider Information*********"<< std::endl;
        std::cout << "Rider Id:"<< riderId <<std::endl;
        std::cout << "Name:"<< name <<std::endl;
        std::cout << "Rating:"<< rating <<std::endl;
    }

    void viewRides() const {
        for (const auto& ride : requestedRides) {
            // Polymorphism
            ride.calculateFare();
        }
    }
};


#endif //C___PROJ_RIDERCLASS_H