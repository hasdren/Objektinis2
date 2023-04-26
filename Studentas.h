#ifndef STUDENTAS_H
#define STUDENTAS_H

#include <string>
#include <vector>
using std::string;
using std::vector;

class Studentas {
private:
    string vardas, pavarde;
    int n, egzaminas;
    vector <int> nd;
    double final;
public:
    Studentas(): vardas(""), pavarde(""), n(0), egzaminas(0) {}
    Studentas(string vardas, string pavarde, int egzaminas, vector<int> nd)
    : vardas(vardas), pavarde(pavarde), egzaminas(egzaminas), nd(nd) {}
    Studentas (const Studentas &obj){
        vardas=obj.vardas;
        pavarde=obj.pavarde;
        egzaminas=obj.egzaminas;
        nd=obj.nd;
    }
    inline void operator =(const Studentas &obj){
        vardas=obj.vardas;
        pavarde=obj.pavarde;
        egzaminas=obj.egzaminas;
        nd=obj.nd;
    }
    inline void setVardas(string SetVardas){vardas = SetVardas;}
    inline void setPavarde(string SetPavarde){pavarde = SetPavarde;}
    inline void setN(int SetN){n = SetN;}
    inline void setEgzaminas(int SetEgzaminas){ egzaminas= SetEgzaminas;}
    inline void setND(vector<int> setND){nd = setND;}
    inline void setFinal(double SetFinal) { final = SetFinal;}
    inline int& getn() { return n; }
    inline int getEgzaminas() const { return egzaminas; }
    inline string getVardas () const { return vardas; }
    inline string getPavarde() const { return pavarde;}
    inline double getFinal() const {return final;}
    inline vector <int>& getND() { return nd;}
    inline void addND(int grade){nd.push_back(grade);}
    
    ~Studentas() {
        nd.clear();
    }
};

#endif