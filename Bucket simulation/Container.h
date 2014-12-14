#pragma once

class Container{
public:
	virtual void step(float time);
private:
	Container* child_;
};