#ifndef STUDENTAS_H
#define STUDENTAS_H
#include "zmogus.h"
/**
 * @class Studentas
 * @brief Represents a class Student, derived from the base class Zmogus.
 */
class Studentas: public Zmogus{
private:
    int n;/**< The amount of homework grades the student has */
    int egzaminas; /**< The exam grades the student has*/
    vector <int> nd; /**< Vector to store the grades of the student */
    double final; /**< The final grade */
public:
    /**
     * @brief Default constructor for the Studentas class.
     */
    Studentas(): Zmogus("",""), egzaminas(0), n(0) {}
    /**
     * @brief Constructor for the Studentas class.
     * @param vardas The student's name.
     * @param pavarde The student's surname.
     * @param egzaminas The exam grade.
     * @param nd The vector of assignment grades.
     */
    Studentas(string vardas, string pavarde, int egzaminas, vector<int> nd)
    : Zmogus(vardas, pavarde), egzaminas(egzaminas), nd(nd) {}
    /**
     * @brief Copy constructor for the Studentas class.
     * @param obj The object to be copied.
     */
    Studentas (const Studentas &obj){
        vardas=obj.getVardas();
        pavarde=obj.getPavarde();
        egzaminas=obj.egzaminas;
        nd=obj.nd;
        final=obj.final;
    }
    /**
     * @brief Assignment operator overload for the Studentas class.
     * @param obj The object to be assigned.
     * @return Reference to the assigned object.
     */
    Studentas& operator =(const Studentas &obj){
        vardas=obj.getVardas();
        pavarde=obj.getPavarde();
        egzaminas=obj.egzaminas;
        nd=obj.nd;
        final=obj.final;
        return *this;
    }
     /**
     * @brief Assigns the passed parameter to the member variable n of the class object
     * @param SetN Amount of grades to be set
     */
    inline void setN(int SetN){n = SetN;}
    /**
     * @brief Assigns the passed parameter to the member variable egzaminas of the class object
     * @param SetEgzaminas Grade of exam to be set
     */
    inline void setEgzaminas(int SetEgzaminas){ egzaminas= SetEgzaminas;}
    /**
     * @brief Assigns passed vector to the member vector variable nd of the class object
     * @param setND Vector to be assigned
     */
    inline void setND(vector<int> setND){nd = setND;}
   /**
     * @brief Assigns the passed parameter to the member variable final of the class object
     * @param SetFinal Final grade to be set
     */
    inline void setFinal(double SetFinal) {final = SetFinal;}
    
    /**
     * @brief The member function getn() returns the amount of grades the class object has
     * @return The value of the n member variable of the class object
     */
    inline int& getn() { return n; }
    /**
     * @brief The member function getEgzaminas() returns the grade of the exam the class object has
     * @return The value of the egzaminas member variable of the class object
     */
    inline int getEgzaminas() const { return egzaminas; }
     /**
     * @brief The member function getFinal() returns the final grade the class object has
     * @return The value of the member variable of the class object
     */
    inline double getFinal() const {return final;}
    /**
     * @brief The member function getND() returns a reference to the member variable nd
     * @return A reference to the nd vector member variable of the class object
     */
    inline vector <int>& getND() { return nd;}
     /**
     * @param grade grade to be pushed back to the nd member variable vector
     * @brief Adds the value of the grade parameter to the nd member variable vector
     */
    inline void addND(int grade){nd.push_back(grade);}
     /**
     * @brief The destructor of the class object clears the nd member variable vector
     */
    ~Studentas() {
        nd.clear();
    }
};
#endif