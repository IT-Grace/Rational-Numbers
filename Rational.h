#pragma once
#include <string>
using std::string;

class Rational
{
public:
	Rational(int n = 0, int d = 0);
	void SetRational(int n, int d);

	void setNom(int nom);
	void setDenom(int denom);
	int getNom() const;
	int getDenom() const;

	Rational Add(Rational R);
	Rational Sub(Rational R);
	Rational Mul(Rational R);
	Rational Div(Rational R);
	bool IsGreater(Rational R);
	bool IsLower(Rational R);
	Rational InBetween(Rational R);
	void Show() const;


private:
	int nom, denom;
	void simplify();
	int GCD();
	int LCD(int D);

};

class Car
{
public:
	void start();
	void stopcar();
	void accelerate();
	void steerleft();
	void steerright();
	void reverse();
	void park();
	void opentrunk();
	void closetrunk();
	void horn();

private:
	string brandname;
	string manufacturer;
	string model;
	float maxspeed;

};

class Bird
{
public:
	void chirp();
	void fly();
	void buildnest();
	void forage();
	void mate();
	void feedbabies();


private:
	string commonname;
	string zoologicalname;
	string genusname;
	string fanilyname;
	string habitat;
	void colors();
	bool prey();

};

class MobilePhone
{
public:
	void unlock();
	void dial();
	void playmusic();
	void socialmedia();
	void camera();
	void playgame();
	void torch();
	void text();

private:
	string brandname;
	string manufacturer;
	string model;
	string color;
	char platenumber;
	int carnumber;
	bool android();
};

class TV
{
public:
	void turnon();
	void turnoff();
	void choosechannel();
	void changechannel();

private:
	string brandname;
	string manufacturer;
	string color;
	float size;
};

class Chair
{
public:
	void fold();
	void spread();


private:
	string type;
	string colour;

};

class Train
{
public:
	void startengine();
	void warmupengine();
	void movetrain();
	void stoptrain();
	void slowdown();
	void horn();


private:
	string manufacturer;
	string trainservice;
	string station;

};

class Boat
{
public:
	void startboat();
	void reverseboat();
	void warnengine();
	void accellerate();
	void slowdown();


private:
	string manufacturername;
	string maxspeed;
	string shipmodel;
	float wateronboard;
};



class Bear
{
public:
	void eat();
	void run();
	void sleep();
	void sit();
	void roar();


private:
	string commonname;
	string zoologicalname;
	string colour;
	string size;
	string habitat;
};

class Pen
{
public:
	void removelid();
	void closelid();
	void inklevel();

private:
	string manufacturer;
	string inkcolor;
	float size;
};

class ClassRoom
{
public: 
	void study();
	void lectures();
	void numberofstudents();

private:
	string classname;
	string classrep;
	char roomnumber;
	string locaiton;

};


class ComputerRoom
{
public:



private:
	string location;

};
