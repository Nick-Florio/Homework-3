//
//  main.cpp
//  Homework 3
//
//  Created by Nicholas Florio on 10/24/23.
// This program calcuates the soloar power percentage needed for land
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <algorithm>
#include "State.hpp"

int main() {
    double totalLandArea = 169000000; // Total land area of Earth in square miles
    double panelEfficiency = 0.15;   // Efficiency of solar panels
    
    std::vector<State> states = {
        State("Texas", 13480.8, 7487580672000),
        State("California", 6922.8, 4563554688000),
        State("Louisiana", 4200.4, 1445216256000),
        State("Florida", 4003.1, 1805265792000),
        State("Illinois", 3612.9, 1614549657600),
        State("Pennsylvania", 3413.0, 1283967590400),
        State("Ohio", 3404.5, 1249649280000),
        State("New York", 3354.2, 1520933990400),
        State("Georgia", 2727.6, 1656673920000),
        State("Michigan", 2610.6, 2696287334400),
    };
    
    // Calculate the panel percentage for each state
    for (State& state : states) {
        state.calculatePanelPercentage(panelEfficiency, totalLandArea);
    }
    
    
    // Sort the states based on the panel percentage
    std::sort(states.begin(), states.end());
    
    // Display the ordered listing
    for (const State& state : states) {
        std::cout << state.getName() << ": " << std::fixed << std::setprecision(2) << state.getPanelPercentage() << "% land needed for solar panels" << std::endl;
    }
    
    return 0;
}
