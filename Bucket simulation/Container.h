#pragma once

#include <map>

class Container{
public:
	virtual void step(float time){}
	virtual void addVolume(float amount, float timeStep){}
protected:
	Container* child_;
	float currentTime_;
	std::map<float, float> volumeAtTime_;
};