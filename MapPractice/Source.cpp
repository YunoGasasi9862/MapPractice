#include <iostream>
#include <map>
#include <unordered_map>
#include <string>
#include<list>


int main()
{

	/*std::map<std::string, std::string> myDictionary;
	myDictionary.insert(std::pair<std::string, std::string>("apple", "der Apfel"));
	myDictionary.insert(std::pair<std::string, std::string>("strawberry", "die Erdbeere"));
	myDictionary.insert(std::pair<std::string, std::string>("banana", "die Banane"));
	myDictionary.insert(std::pair<std::string, std::string>("orange", "die Orange, die Apfelsine"));
	myDictionary["strawberry"] = "Die Erdbeere";

	for (auto itr = myDictionary.begin(); itr != myDictionary.end(); itr++)
	{
		std::cout << itr->first << "<->" << itr->second << std::endl;
	}
	myDictionary.clear();
	std::cout << myDictionary.size() << std::endl;*/

	std::map<std::string, std::list<std::string>> pokedwx; //list is just like an array

	std::list<std::string> pikachuattacks {"thunder shock", "tail whip", "quick attack"};
	std::list<std::string> CharmaderAttacks{ "flame thrower","scary face" };
	std::list<std::string> chikoritaAttacks{ "razor leaf", "poison powder" };


	pokedwx.insert(std::pair<std::string, std::list<std::string>>("Pikachu", pikachuattacks));
	pokedwx.insert(std::pair<std::string, std::list<std::string>>("Charmander", CharmaderAttacks));
	pokedwx.insert(std::pair<std::string, std::list<std::string>>("Chikorita", chikoritaAttacks));

	for (auto itr = pokedwx.begin(); itr != pokedwx.end(); itr++)
	{

		std::cout << itr->first << "-";
		for (auto attack : itr->second) //this will be all the attacks in the second pair
		{
			std::cout << attack << ",";
		}
		std::cout << std::endl;
	}

	//for inserting pairs are always needed!
}