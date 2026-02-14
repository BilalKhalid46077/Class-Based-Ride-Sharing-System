#include <iostream>

#include "DriverClass.h"
#include "PremiumRide.h"
#include "RiderClass.h"
#include "RideClass.h"
#include "StandardRide.h"

int main() {

    std::cout << "****Rides Initiated in System****" << std::endl;

    StandardRide standard_ride = StandardRide(
        1,
        "Gainesville","Manassas",3.5, 2
        );

    // Polymorphism
    standard_ride.calculateFare();

    PremiumRide premium_ride = PremiumRide(
      1,
        "Gainesville","Manassas",3.5, 2
      );

    // Polymorphism
    premium_ride.calculateFare();

    RideClass ride = StandardRide(
      1,
        "Gainesville","Manassas",3.5, 2
      );

    // Polymorphism
    ride.calculateFare();





    std::cout << std::endl;
    DriverClass driver_class = DriverClass(
        1,"Bilal",3.5);
    driver_class.getDriverInfo();
    driver_class.addRide(standard_ride);
    driver_class.addRide(premium_ride);
    driver_class.addRide(ride);
    driver_class.totalRides();


    RiderClass rider_class = RiderClass(
       111,"David",4.5);
    rider_class.requestRide(standard_ride);
    rider_class.requestRide(premium_ride);
    rider_class.requestRide(ride);
    rider_class.getRiderInfo();

    std::cout<< std::endl << "*Ride History*" << std::endl;
    rider_class.viewRides();
    return 0;
}
