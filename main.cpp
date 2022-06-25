/*
	1.  Create an abstract base class Employer with
		pure virtual Print() function. Create three derivatives
		class : President, Manager, Worker. Redefine the function
		Print() to print information corresponding to each type
		employee.
*/

/*
#include <iostream>
#include <string>
using namespace std;

class Employee
{
public:
	string name;
	string surname;
	int age;
	virtual void Print() = 0;
};

class President : public Employee
{
private:
	int experience;
	int how_many_people_voted_for;
	int how_many_people_voted_against;
	string city;
public:
	President(string name, string surname, int age)
	{
		this->name = name;
		this->surname = surname;
		this->age = age;
	}

	void set_experience(int experience)
	{
		this->experience = experience;
	}

	void set_how_many_people_voted_for(int how_many_people_voted_for)
	{
		this->how_many_people_voted_for = how_many_people_voted_for;
	}

	void set_how_many_people_voted_against(int how_many_people_voted_against)
	{
		this->how_many_people_voted_against = how_many_people_voted_against;
	}

	void set_capital(string city)
	{
		this->city = city;
	}

	void Print()
	{
		cout << "PRESIDENT INFO:" << endl;
		cout << "Name: " << name << endl;
		cout << "Surname: " << surname << endl;
		cout << "Age: " << age << endl;
		cout << "Eperience: " << experience << endl;
		cout << "How many people voted for: " << how_many_people_voted_for << endl;
		cout << "How many people voted against: " << how_many_people_voted_against << endl;
		cout << "Capital: " << city << endl;
	}
};

class Manager : public Employee
{
private:
	int experience;
	int how_many_people_are_on_the_team;
public:
	Manager(string name, string surname, int age)
	{
		this->name = name;
		this->surname = surname;
		this->age = age;
	}

	void set_experience(int experience)
	{
		this->experience = experience;
	}

	void set_how_many_people_are_on_the_team(int how_many_people_are_on_the_team)
	{
		this->how_many_people_are_on_the_team = how_many_people_are_on_the_team;
	}

	void Print()
	{
		cout << "MANAGER INFO:" << endl;
		cout << "Name: " << name << endl;
		cout << "Surname: " << surname << endl;
		cout << "Age: " << age << endl;
		cout << "Eperience: " << experience << endl;
		cout << "How many people are on the team: " << how_many_people_are_on_the_team << endl;
	}
};

class Worker : public Employee
{
private:
	int experience;
	string company;
public:
	Worker(string name, string surname, int age)
	{
		this->name = name;
		this->surname = surname;
		this->age = age;
	}

	void set_experience(int experience)
	{
		this->experience = experience;
	}

	void set_company_name(string company)
	{
		this->company = company;
	}

	void Print()
	{
		cout << "WORKER INFO:" << endl;
		cout << "Name: " << name << endl;
		cout << "Surname: " << surname << endl;
		cout << "Age: " << age << endl;
		cout << "Eperience: " << experience << endl;
		cout << "Company: " << company << endl;
	}
};

int main()
{
	President president("Orxan", "Ahmadov", 32);
	Manager manager("Magamed", "Mahmadov", 31);
	Worker worker("Ahmed", "Magamahdov", 20);

	president.set_experience(5);
	president.set_capital("Baku");
	president.set_how_many_people_voted_for(88);
	president.set_how_many_people_voted_against(12);

	manager.set_experience(12);
	manager.set_how_many_people_are_on_the_team(7);
	
	worker.set_experience(21);
	worker.set_company_name("TEI");

	president.Print();
	manager.Print();
	worker.Print();
}
*/

/*
	2.  Create an abstract base class with a virtual function - area. Create derived classes: rectangle, circle,
		right triangle, trapezium with its own functions
		area. To check, define an array of references to the abstract class, which are assigned the addresses of various objects.
*/

/*
#include <iostream>
#include <string>
#include "banner_class.h"
using namespace std;

class Area
{
public:
	virtual void area() = 0;
};

class trapezoid : public Area
{
private:
	int a; // a - first value.
	int b; // b - second value.
	int h; // h - hight.
	float result;
public:
	trapezoid(int a, int b, int h)
	{
		this->a = a;
		this->b = b;
		this->h = h;
	}

	virtual void area()
	{
		result = ((a + b) / 2) * h;
		trapezoid_banner();
		cout << "Result: " << result << endl;
	}
};

class circle : public Area
{
private:
	int r; // r - radius.
	float result;
public:
	circle(int r)
	{
		this->r = r;
	}

	virtual void area()
	{
		result = ((3.1428) * r * r);
		circle_banner();
		cout << "Result: " << result << endl;
	}
};

class rectangle : public Area
{
private:
	int a; // a - first value.
	int b; // b - second value.
	float result;
public:
	rectangle(int a, int b)
	{
		this->a = a;
		this->b = b;
	}

	virtual void area()
	{
		result = a * b;
		rectangle_banner();
		cout << "Result: " << result << endl;
	}
};

class right_triangle : public Area
{
private:
	int a; // a - first value.
	int b; // b - second value.
	float result;
public:
	right_triangle(int a, int b)
	{
		this->a = a;
		this->b = b;
	}

	virtual void area()
	{
		result = (a * b) / 2;
		right_triangle_banner();
		cout << "Result: " << result << endl;
	}
};

class calculation
{
public:
	void area(Area* obj)
	{
		obj->area();
	}
};

int main()
{
	trapezoid t(5, 6, 7);
	circle c(4);
	rectangle rec(4, 6);
	right_triangle rig(5, 8);

	calculation calc;

	calc.area(&t);

	return 0;
}
*/