#pragma once

class Player
{
protected:

public:
	virtual void attack() = 0;
};

class Warrior : public Player
{
protected:

public:
	void attack() override;
};

class Magician : public Player
{
	void attack() override;
};