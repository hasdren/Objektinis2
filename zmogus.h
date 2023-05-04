#ifndef ZMOGUS_H
#define ZMOGUS_H

#include <string>
#include <vector>
using std::string;
using std::vector;

class Zmogus{
protected:
string vardas, pavarde;
public:
Zmogus(): vardas(""), pavarde(""){}
Zmogus(string vardas, string pavarde): vardas(vardas), pavarde(pavarde){}
inline void setVardas(string SetVardas){vardas = SetVardas;}
inline void setPavarde(string SetPavarde){pavarde = SetPavarde;}
inline string getVardas () const { return vardas; }
inline string getPavarde() const { return pavarde;}
virtual ~Zmogus () = 0;
};

inline Zmogus::~Zmogus() {}
#endif