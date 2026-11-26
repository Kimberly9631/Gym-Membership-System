#ifndef MEMBER_H
#define MEMBER_H

#include <iostream>
#include <string>

using namespace std;

class Member{
  private:
  int member_id;
  string name;
  string email;

  public:
  virtual void displayInfo() const = 0;
  virtual string getMembershipType() const = 0;


 Member();
 Member(int member_id,
        const string &name,
        const string &email);
 virtual ~Member() = default;

  int get_memberid() const;
  string get_name() const;
  string get_email() const;
  void set_memberid(int member_id);
  void set_name(const string &name);
  void set_email(const string &email);
};


#endif