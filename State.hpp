//
//  State.hpp
//  Homework 3
//
//  Created by Nicholas Florio on 10/24/23.
//
#ifndef STATE_H
#define STATE_H

#include <string>

class State {
public:
    State(const std::string& name, double energyConsumption, double stateSize, double panelPercentage = 0);
    
    void calculatePanelPercentage(double panelEfficiency, double totalLandArea);
    
    const std::string& getName() const;
    double getPanelPercentage() const;
    
    bool operator<(const State& other) const;
    
private:
    std::string name;
    double energyConsumption;
    double stateSize;
    double panelPercentage;
};

#endif
