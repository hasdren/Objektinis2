#ifndef ZMOGUS_H
#define ZMOGUS_H

#include <string>
#include <vector>
using std::string;
using std::vector;
/**
 * @class Zmogus
 * @brief Represents the base class Zmogus
 */
class Zmogus {
protected:
    string vardas; /**< The person's name */
    string pavarde; /**< The person's surname */

public:
    /**
     * @brief Default constructor for the Zmogus class.
     */
    Zmogus(): vardas(""), pavarde("") {}

    /**
     * @brief Constructor for the Zmogus class.
     * @param vardas The person's name.
     * @param pavarde The person's surname.
     */
    Zmogus(string vardas, string pavarde): vardas(vardas), pavarde(pavarde) {}

    /**
     * @brief Setter member function for the name.
     * @param SetVardas The name to set.
     */
    inline void setVardas(string SetVardas) { vardas = SetVardas; }

    /**
     * @brief Setter member function for the surname.
     * @param SetPavarde The surname to set.
     */
    inline void setPavarde(string SetPavarde) { pavarde = SetPavarde; }

    /**
     * @brief Getter member function for the name.
     * @return The person's name.
     */
    inline string getVardas() const { return vardas; }

    /**
     * @brief Getter member function for the surname.
     * @return The person's surname.
     */
    inline string getPavarde() const { return pavarde; }

    /**
     * @brief Pure virtual destructor for the Zmogus class.
     * @details This is a pure virtual destructor to make Zmogus an abstract base class.
     *          It ensures that Zmogus cannot be instantiated directly.
     */
    virtual ~Zmogus() = 0;
};

inline Zmogus::~Zmogus() {}
#endif