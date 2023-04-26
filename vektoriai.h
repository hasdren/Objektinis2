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
#include "Studentas.h"
using namespace std;
void Container(int);
void GenerateFile(int);
template <typename Container>
void Generatefromfile(Container&, Container&, Container&, int);
bool correctstring(string name);
string correctName();
bool comparePagalPavarde(const Studentas&x, const Studentas&y);
void Random(int n, vector<int>&nd, int i);
void Random(int i, vector<int>&nd);
double Average(vector <int> &nd, int egz);
double Median(vector <int> &nd, int egz);
int studentEntry();
int ManualEntry();
int HomeworkKnown();
int SA();
int Choosefile();
int File();
void printheaderAverage();
void printheaderMedian();
void Manualnotknown(int , vector<int> &);
void assignHomeworksize(int &, int);
void IvestisSK(int c, vector<int> &nd);
void IvestisSk(int n, vector<int> &nd, int i);
void printheaderAverage();
void printheaderMedian();
void Galutinisheader(int showaverage, std::ofstream& out);
void Randomnotknown(int i, vector<int>&nd);



#endif