#ifndef PREMIUMMEMBER_H
#define PREMIUMMEMBER_H

#include <iostream>
#include <string>
#include "Member.h"

using namespace std;

class PremiumMember : public Member{
  private:
  string trainer_name;
  string sessions[3];
  double monthly_fee;

  public:

  PremiumMember();
  PremiumMember(const string &trainer_name,
                const string sessions[],
                int member_id,
                const string &name,
                const string &email,
                double monthly_fee);
  ~PremiumMember();

  string get_trainername() const;
  string get_sessions(int index) const;
  double get_monthlyfee() const;

  void set_trainername(const string &trainer_name);
  void set_sessions(int index, const string &sessions);
  void set_monthlyfee(double monthly_fee);

  void displayInfo() const override;
  string getMembershipType() const override;


};


#endif