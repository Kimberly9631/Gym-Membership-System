#include "BasicMember.h"
#include "Member.h"
#include "PremiumMember.h"
#include <iostream>

using namespace std;

int main()
{
    string training_sessions[3] = {
        "Strength Training",
        "Cardio Workout",
        "Yoga Session"
    };
    string premium_sessions[3]= {
        "Reformer Pilates",
        "Weighted Cardio",
        "Lower Body Strength Training"
    };

    PremiumMember member1("Alex Rivera", training_sessions, 2045, "Maria Lopez", "maria@email.com",75);
    member1.displayInfo();

    BasicMember basicMember(9371,"Kimberly Volcy","KimberlyVolcy@gmail.com",35);
    PremiumMember premiumMember("Doom", premium_sessions, 8401,"Hannah Montana","Hannah@gmail.com",75);

    Member *members[2];
    members[0] = &basicMember;
    members[1] = &premiumMember;

    for(int i=0;i<2;i++){
      members[i]->displayInfo();
      cout << "\nMembership Type: " << members[i]->getMembershipType() << endl;
    }

    return 0;
}