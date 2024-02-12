#include "iostream";
#include "string"
#include "Person.h"
#include "vector"

int main() {
	Person person1{ "Tuca", "Radu e iara destept" };
	Person person2{ person1 };
	std::vector<Person> vector1;
	vector1.push_back(Person{"Cipi", "Se duce la miruniki"});
}