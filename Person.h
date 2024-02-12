#pragma once
#include "string"
#include "iostream"



class Person {
private:
	std::string name;
	std::string* status;
public:
	//std::string* status;
	Person(std::string name, std::string status);
	Person(std::string name);
	Person(const Person& otherPerson);
	Person(Person&& otherPerson) noexcept;
	~Person();

	void GetName();
	void GetStatus();
	void SetName(std::string name);
	void SetStatus(std::string status);



	// fa o functie care sa foloseasca un move constructor

};