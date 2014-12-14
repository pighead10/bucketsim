#include "Simulation.h"
#include "Container.h"

Simulation::Simulation(){
	init_buckets();
	simulate();
}

void Simulation::simulate(){
	float endTime = 10000.0f;
	float timeStep = 0.1f;
	for (float time = 0; time <= endTime; time += timeStep){
		for (auto& it1 : containers_){
			for (auto& it2 : it1){
				it2->step(timeStep);
			}
		}
	}
}