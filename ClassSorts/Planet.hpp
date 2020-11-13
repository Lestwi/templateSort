#pragma once
#define NAME_LENGTH 16

#include <string>
#include <iostream>
#include <iomanip>

class Planet{
    
public:
    
    Planet (const char* planetName, double distance, double density) : _distance_to_Sun(distance), _density(density)
    {
        strcpy(_planetName, planetName);
    }
    
    virtual void fromAEtoKM () {
        
    }
    
    double getDistance_to_Sun () const {
        return _distance_to_Sun;
    }
    
    double getDensity () const {
        return _density;
    }
    
    const char* getPlanetName () const {
        return _planetName;
    }
    
    bool operator < (const Planet& planet) const {
        return _distance_to_Sun < planet._distance_to_Sun;
    }
    
    bool operator > (const Planet& planet) const {
        return _distance_to_Sun > planet._distance_to_Sun;
    }
    
    friend std::ostream& operator << (std::ostream &out, const Planet &data){
        out << "Name: " << data._planetName << std::setw(20) << "\tDistance to Sun: " << data._distance_to_Sun << " a.e." << std::setw(10) << "\tDensity: " << data._density << " g/cm^3";
        return out;
    }
    
private:
    
    double _distance_to_Sun;
    //double _speed_rotation;
    double _density;
    char _planetName[NAME_LENGTH];

};
