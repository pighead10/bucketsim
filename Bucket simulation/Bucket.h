#pragma once

#include "Container.h"

class Bucket : public Container{
public:
	Bucket(float hole_r, float bucket_r, float bucket_h, float water_v, float bottom_hole, float alpha);
	void step(float time);
private:
	float getCsArea();
	float geth();
	float getWaterHeight();
	float getTotalVolume();

	float hole_r_;
	float bucket_r_;
	float bucket_h_;
	float water_v_;
	float bottom_hole_;

	float rof_; //TODO ASK
	float alpha_;
};