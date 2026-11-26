#include "BasicMember.h"
#include "Member.h"
#include "PremiumMember.h"
#include <iostream>

using namespace std;

//             MEMBER CLASS CONSTRUCTORS & FUNCTIONS             //
Member::Member(){
  member_id =0;
  name = "";
  email = "";
}

Member::Member(int member_id,
               const string &name,
               const string &email)
      :member_id(member_id), name(name), email(email){

}


int Member::get_memberid() const{
  return member_id;
}

string Member::get_name() const{
  return name;
}

string Member::get_email() const{
  return email;
}

void Member::set_memberid(int member_id){
  this->member_id = member_id;
}

void Member::set_name(const string &name){
  this->name = name;
}

void Member::set_email(const string &email){
  this->email = email;
}



//       BASICMEMBER DERIVED CLASS CONSTRUCTORS & FUNCTIONS       //
BasicMember::BasicMember(){
  monthly_fee = 0.0;
}

BasicMember::BasicMember(int member_id,
                         const string &name,
                         const string &email,
                         double monthly_fee)
    :Member(member_id, name, email), monthly_fee(monthly_fee){
}

BasicMember::~BasicMember(){
}

double BasicMember::get_monthlyfee() const{
  return monthly_fee;
}
string BasicMember::getMembershipType() const{
  return "Basic";
}
void BasicMember::set_monthlyfee(double monthly_fee){
  this->monthly_fee = monthly_fee;
}

void BasicMember::displayInfo() const{

  cout << "\n--------Membership Information:-------\n"
          "\nMembership Type: " << getMembershipType() << "\n"
          "Name: " << get_name() << "\n"
          "Member ID: " << get_memberid() << "\n"
          "Email: " << get_email() << "\n"
          "Monthly Fee: $" << get_monthlyfee() << "\n";

}




//       PREMIUMMEMBER DERIVED CLASS CONSTRUCTORS & FUNCTIONS         //
PremiumMember::PremiumMember(){
  for(int i=0;i<3;i++){
    sessions[i] = "";
  }
  trainer_name = "";
  monthly_fee = 0.0;
}

PremiumMember::PremiumMember(const string &trainer_name,
                             const string sessions[],
                             int member_id,
                             const string &name,
                             const string &email,
                             double monthly_fee)
    :Member(member_id, name, email), trainer_name(trainer_name), monthly_fee(monthly_fee){
      for(int i=0;i<3;i++){
        this->sessions[i] = sessions[i];
      }
}

PremiumMember::~PremiumMember(){
}

string PremiumMember::get_trainername() const{
  return trainer_name;
}
string PremiumMember::get_sessions(int index) const{
  if(index<0 || index>2){
    exit(1);
  }
  return sessions[index];
}
double PremiumMember::get_monthlyfee() const{
  return monthly_fee;
}
string PremiumMember::getMembershipType() const{ 
  return "Premium";
}

void PremiumMember::set_trainername(const string &trainer_name){
  this->trainer_name = trainer_name;
}
void PremiumMember::set_sessions(int index, const string &sessions){
  if(index > 2 || index <0){
  return;
 }

  this->sessions[index] = sessions;

}
void PremiumMember::set_monthlyfee(double monthly_fee){
  this->monthly_fee = monthly_fee;
}

void PremiumMember::displayInfo() const{
   
  cout << "\n--------Membership Information---------\n"
          "\nMembership Type: " << getMembershipType() << "\n"
          "Name: " << get_name() << "\n"
          "Member ID: " << get_memberid() << "\n"
          "Email: " << get_email() << "\n"
          "Monthly Fee: $" << get_monthlyfee() << "\n"
          "\n-------Premium Membership Details-------\n"
          "\nTrainer Name: " << get_trainername() << "\n"
          "Session 1: " << get_sessions(0) << "\n"
          "Session 2: " << get_sessions(1) << "\n"
          "Session 3: " << get_sessions(2) << "\n";
         
}
