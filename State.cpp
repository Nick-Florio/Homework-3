//
//  State.cpp
//  Homework 3 
//
// Created by Nicholas Florio on 10/24/23.
// State.cpp

#include "State.hpp"

State::State(const std::string& name, double energyConsumption, double stateSize, double panelPercentage)
: name(name), energyConsumption(energyConsumption), stateSize(stateSize), panelPercentage(panelPercentage) {
}

void State::calculatePanelPercentage(double panelEfficiency, double totalLandArea) {
    double m_energy = energyConsumption * 1e12; // Energy in trillions of BTUs
    double panelPower = m_energy / panelEfficiency; // Calculate the required panel power
    double panelArea = panelPower / (15.0 * 5280 * 5280); // Assuming 15 watts per square foot
    panelPercentage = (panelArea / totalLandArea) * 100;
}

const std::string& State::getName() const {
    return name;
}

double State::getPanelPercentage() const {
    return panelPercentage;
}

bool State::operator<(const State& other) const {
    return panelPercentage < other.panelPercentage;
}
