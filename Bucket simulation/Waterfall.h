#pragma once

#include "Container.h"
#include <SFML/Graphics.hpp>
#include <memory>

#include "WaterPacket.h"

class WaterMolecule;

class Waterfall : public Container{
public:
	void step(float time);
	void addVolume(float amount,float timeStep);
private:
	std::vector<WaterPacket> packets_;
};