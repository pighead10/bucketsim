#pragma once

#include <memory>

#include "WaterMolecule.h"

class WaterPacket{
public:
	WaterPacket(float amount,float timeStep);
	void step(float time);
private:
	std::pair<WaterMolecule,WaterMolecule> moleculePair;
	float volume_;
};