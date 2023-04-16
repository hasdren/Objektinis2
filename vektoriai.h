#ifndef VEKTORIAI_H
#define VEKTORIAI_H
#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
#include <iomanip>
#include <fstream>
#include <sstream>
#include <chrono>
#include <deque>
#include <list>
#include <string>
#include <cctype>
using namespace std;

struct studentas
{
    int n;         
    vector<int> nd; 
    string vardas;
    string pavarde;
    double final;
    int egzaminas;
};

void Container(int);
void GenerateFile(int);
template <typename Container>
void Generatefromfile(Container&, Container&, Container&, int);
template <typename Container>
void Random(Container&, int);Average
template <typename Container>
void IvestisSk(int , Container&);
template <typename Container>
void Average(Container&, int);
template <typename Container>
void Median(Container&, int);
template <typename Container>
void printmed(Container&, int);
template <typename Container>
void printave(Container&, int);
int studentEntry();
int ManualEntry();
int HomeworkKnown();
int SA();
int Choosefile();
int File();
void printheaderAverage();
void printheaderMedian();
template <typename Container>
void Manualnotknown(Container&, int);
template <typename Container>
void assignHomeworksize(Container&, int);
template <typename Container>
void IvestisSKsizenotknown(int, Container&);



#endif