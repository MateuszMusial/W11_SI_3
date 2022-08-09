#include "User.h"

User::User(int id, std::string Firstname, std::string Lastname)
{
	Id = id;
	firstName = Firstname;
	lastName = Lastname;
}

int User::getId()
{
	return Id;
}

std::string User::getfirstName()
{
	return firstName;
}

std::string User::getlastName()
{
	return lastName;
}

void User::setFriends(std::string name)
{
	friends.push_back(name);
}

std::vector <std::string> User::getFriends()
{
	return friends;
}

