#include <iostream>
#include "User.h"
#include <unordered_map>

int main()
{
    std::unordered_map <std::string, std::vector<std::string>> friendsMap;    /// graph of friends implementation

    User u1(1, "Arden", "Lucian");

    u1.setFriends("Gareth Prescott");
    u1.setFriends("Tanya Cedric");
    u1.setFriends("Karleigh Winifred");
    u1.setFriends("Aladdin Kibo");
    u1.setFriends("Virginia Bryar");

    friendsMap.insert({ u1.getfirstName() + " " + u1.getlastName() , u1.getFriends()});

    User u2(2, "Gareth", "Prescott");

    u2.setFriends("Arden Lucian");
    u2.setFriends("Karleigh Prescott");
    u2.setFriends("Alec Hillary");
    u2.setFriends("Maggie Cedric");
    
    friendsMap.insert({ u2.getfirstName() + " " + u2.getlastName() , u2.getFriends() });

    User u3(3, "Karleigh", "Prescott");

    u3.setFriends("Gareth Prescott");
    u3.setFriends("Belle Bryar");
    u3.setFriends("Arden Dolan");

    friendsMap.insert({ u3.getfirstName() + " " + u3.getlastName() , u3.getFriends() });

    User u4(4, "Belle", "Bryar");

    u4.setFriends("Karleigh Prescott");
    u4.setFriends("Maggie Nicholas");

    friendsMap.insert({ u4.getfirstName() + " " + u4.getlastName() , u4.getFriends() });


   /* for (auto it = friendsMap.cbegin(); it != friendsMap.cend(); ++it)
    {
        std::cout << it->first << " " <<  it->second << " " << "\n";
    }*/


}
