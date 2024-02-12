#include "Person.h"
#include "string"
#include "iostream"


Person::Person(std::string name, std::string status) {
	this->name = name;
	this->status = new std::string;
	*(this->status) = status;
	std::cout << "Constructor called" << std::endl;
};

Person::Person(std::string name) {
	this->name = name;
	this->status = NULL;
}

Person::Person(const Person& otherPerson) {
	this->name = otherPerson.name;
	this->status = new std::string;
	*(this->status) = *(otherPerson.status);
	std::cout << "Copy Constructor called" << std::endl;
};

Person::Person(Person&& otherPerson) noexcept :
	name{ otherPerson.name },
	status{ otherPerson.status } {
	otherPerson.status = nullptr;
	std::cout << "Move Constructor called" << std::endl;
};

Person::~Person() {
	delete this;
}

void Person::GetName()
{
	std::cout << this->name<<std::endl;
}

void Person::GetStatus() {
	std::cout << this->status << std::endl;
}

void Person::SetName(std::string name)
{
	this->name = name;
}

void Person::SetStatus(std::string status)
{
	*(this->status) = status;
}


