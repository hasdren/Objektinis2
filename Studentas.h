#ifndef STUDENTAS_H
#define STUDENTAS_H
#include "zmogus.h"
class Studentas: public Zmogus{
private:
    int n, egzaminas;
    vector <int> nd;
    double final;
public:
    Studentas(): Zmogus("",""), egzaminas(0), n(0) {}
    Studentas(string vardas, string pavarde, int egzaminas, vector<int> nd)
    : Zmogus(vardas, pavarde), egzaminas(egzaminas), nd(nd) {}
    Studentas (const Studentas &obj){
        vardas=obj.getVardas();
        pavarde=obj.getPavarde();
        egzaminas=obj.egzaminas;
        nd=obj.nd;
        final=obj.final;
    }
    inline void operator =(const Studentas &obj){
        vardas=obj.getVardas();
        pavarde=obj.getPavarde();
        egzaminas=obj.egzaminas;
        nd=obj.nd;
        final=obj.final;
    }
    inline void setN(int SetN){n = SetN;}
    inline void setEgzaminas(int SetEgzaminas){ egzaminas= SetEgzaminas;}
    inline void setND(vector<int> setND){nd = setND;}
    inline void setFinal(double SetFinal) {final = SetFinal;}
    inline int& getn() { return n; }
    inline int getEgzaminas() const { return egzaminas; }
    inline double getFinal() const {return final;}
    inline vector <int>& getND() { return nd;}
    inline void addND(int grade){nd.push_back(grade);}
    
    ~Studentas() {
        nd.clear();
    }
};
#endif