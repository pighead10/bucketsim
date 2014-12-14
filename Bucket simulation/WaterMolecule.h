#pragma once

class WaterMolecule{
public:
	WaterMolecule(float s, float t);
	void step(float time);
private:
	float v_;
	float s_;
	float t_;
};