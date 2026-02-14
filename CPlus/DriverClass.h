//
// Created by Mac Pro on 2/13/26.
//

#ifndef C_PROJ_DRIVERCLASS_H
#define C___PROJ_DRIVERCLASS_H
#include <iostream>
#include <string>
#include <utility>
#include "RideClass.h"


class DriverClass {
protected:
    int driverId;
    std::string name;
    float rating;
    std::vector<RideClass> assignedRides;

public:
    DriverClass(
    int driverId,
    std::string name,
    float rating
    ) : driverId(driverId), name(std::move(name)), rating(rating) {}

    void addRide(const RideClass& ride) {
        assignedRides.push_back(ride);
    }
    void getDriverInfo() const{
        std::cout << "*******Driver Information*********"<< std::endl;
        std::cout << "Driver Id:"<< driverId <<std::endl;
        std::cout << "Name:"<< name <<std::endl;
        std::cout << "Rating:"<< rating <<std::endl;
    }

    void totalRides() const{
        std::cout << "Total Rides:"<< assignedRides.size() <<std::endl;

    }

};


#endif //C___PROJ_DRIVERCLASS_H