#pragma once
#include <vector>
#include <string>

class User
{
	int Id{ 0 };
	std::string firstName;
	std::string lastName;
	std::vector<std::string> friends;
	

public:
	User(int id, std::string Firstname, std::string Lastname);
	int getId();
	std::string getfirstName();
	std::string getlastName();
	void setFriends(std::string name);
	std::vector<std::string> getFriends();
};

