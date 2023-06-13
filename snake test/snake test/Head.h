#pragma once
#include "Part.h"

class Head : public Part
{
public:
	// constrcuter destructer
	Head();
	~Head();

	// delete Function
	Head(const Head& _Other) = delete;
	Head(Head&& _Other) noexcept = delete;
	Head& operator=(const Head& _Other) = delete;
	Head& operator=(Head&& _Other) noexcept = delete;

	// std::list<Body*> AllBody;

protected:
	void Tick(float _Time);

private:
	int4 lastMovePos;
};




