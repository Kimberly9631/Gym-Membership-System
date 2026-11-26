#ifndef BASICMEMBER_H
#define BASICMEMBER_H

#include <iostream>
#include <string>
#include "Member.h"

using namespace std;

class BasicMember : public Member{
  private:
  double monthly_fee;

  public:

  BasicMember();
  BasicMember(int member_id,
              const string &name,
              const string &email,
              double monthly_fee);
  ~BasicMember();

  double get_monthlyfee() const;
  void set_monthlyfee(double monthly_fee); 

  string getMembershipType() const override;
  void displayInfo() const override;



};

#endif