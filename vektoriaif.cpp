#include "vektoriai.h"
random_device rd;
mt19937 mt(rd());
uniform_int_distribution<int> dist(0, 10);
bool correctstring(string name){
    bool correct = true;
    for (int i=0; i<name.length(); i++){
        if(isalpha(name[i]) == false){
            correct = false;
            cout<<"Klaidingas vardas, veskite varda is naujo";
            break;
        }
        
        else correct = true;
    }
    return correct;

}
string correctName(){
    string word;
    bool correct = false;
    do{
        cin>>word;
         word[0] = toupper(word[0]);
    }
    while(!correctstring(word));
    return word;
    
}

bool comparePagalPavarde(const Studentas&x, const Studentas&y) {
 return x.getVardas() > y.getPavarde();
}

void Random(int n, vector<int>&nd, int i)
{   
                for (int j = 0; j < n; j++)
                {
                    nd.push_back(dist(mt));
                    cout << i + 1 << "-am studentui"<< "Pridetas :" << nd.back() << endl;
         
                }
    
}

void Random(int i, vector<int>&nd){
    nd.push_back(dist(mt));
    cout << i + 1 << "-am studentui"<< "Pridetas :" << nd.back() << endl;
}



void IvestisSk(int n, vector<int> &nd, int i)
{   
        int grade;   
                for (int j = 0; j < n; j++)
                {
                    cout << i+1 << " studento " << nd.size() + 1 << " namu darbo ivertinimas [0-10]: ";
                    while (!(std::cin>>grade)|| grade<1|| grade>10)
                    {
                        cout << "Neteisinga ivestis!" << endl
                                << i+1 << " studento " << nd.size() + 1 << " namu darbo ivertinimas [0-10]: ";
                        cin.clear();
                        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    }
                    nd.push_back(grade);
                }
            

}

void IvestisSK(int i, vector <int> &nd){
                    int grade;
                    
                    cout << i + 1 << " studento " << nd.size() + 1 << " namu darbo ivertinimas [0-10]: ";
                    while (!(std::cin>>grade)|| grade<1|| grade>10)
                    {
                        cout << "Neteisinga ivestis!" << endl
                                << i + 1 << " studento " << nd.size() + 1 << " namu darbo ivertinimas [0-10]: ";
                        cin.clear();
                        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    }
                    nd.push_back(grade);
}

double Average(vector <int> &nd, int egz)  
{   
    double sum = 0;
    for (int j = 0; j < nd.size(); j++)
    {
        sum = sum + nd[j];
    }
    sum = sum / nd.size();
    return sum * 0.4 + egz * 0.6;
}

double Median(vector <int> &nd, int egz)
{
    double sum;
    
        sort(nd.begin(), nd.end());
        if (nd.size() % 2 != 0)
    {
        sum = nd[nd.size() / 2.0];
    }
    else
    {
        sum = (nd[nd.size() / 2.0] + nd[(nd.size() / 2.0) - 1]) / 2.0;
    }
    return sum * 0.4 + egz * 0.6;
}

template <typename Container>
void printfinal(Container&s, int student_size){
    for(int i=0; i<student_size;i++){
        cout << left << setw(10) << s.back().getVardas() << setw(16) << s.back().getPavarde() << setw(12)<<fixed<<setprecision(2) << s.back().getFinal() << endl;
        s.pop_back(); 
    }
}

int studentEntry() {
    int students;
    cout << "iveskite studentu skaiciu?(>0)";

    while (true) {
        cin >> students;

        if (students <= 0) {
            cout << "Error, veskite iš naujo: ";
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // ignore invalid input
        }
        else {
            break;
        }
    }
    
    return students;
}

int ManualEntry() {
    char choice;
    cout << "Ar norite, kad namu darbai butu ivedami?(y/n)";
    
    while (true) {
        cin >> choice;
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // ignore any extra input
        
        if (choice == 'Y' || choice == 'y') {
            return 1;
        }
        else if (choice == 'N' || choice == 'n') {
            return 0;
        }
        else {
            cout << "Neteisinga ivestis. Prašome pasirinkti tarp 'y' arba 'n': ";
        }
    }
}
int HomeworkKnown() {
    char choice;
    cout << "Ar zinote namu darbu kieki?(y/n)";
    
    while (true) {
        cin >> choice;
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // ignore any extra input
        
        if (choice == 'Y' || choice == 'y') {
            return 1;
        }
        else if (choice == 'N' || choice == 'n') {
            return 0;
        }
        else {
            cout << "Neteisinga ivestis. Prašome pasirinkti tarp 'y' arba 'n': ";
        }
    }
}
int SA() {
    char choice;
    while (true) {
        cout << "Ar norite matyti vidurki? (y/n): ";
        cin >> choice;
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        if (choice == 'y' || choice == 'Y') {
            return 1;
        }
        else if (choice == 'n' || choice == 'N') {
            return 0;
        }
        else {
            cout << "Neteisinga ivestis. Bandykite dar karta." << endl;
            cin.clear();
        }
    }
}
int Choosefile()
{
    int sk;
    cout << "pasirinkite faila";
    while (!(cin >> sk) || (sk < 0 || sk > 5))
    {
        cout << "Neteisinga ivestis!" << endl;
        cin.clear();
        cin.ignore(128, '\n');
    }
    return sk;
}
int File(){
    char choise;
    while (true)
    {   cout<<"Ar norite nuskaityti is failo?";
        cin >> choise;
        if (choise == 'Y' || choise == 'y')
        {
            return 1;
        }
        else if (choise == 'N' || choise == 'n')
        {
            return 0;
        }
        else
        {
            cout << "Neteisinga ivestis";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    }

}
void GenerateFile(int s){
    auto start = std::chrono::high_resolution_clock::now();
    string failas = "Studentai"+to_string(s)+".txt";
    ofstream out(failas);
    out << fixed << left << setw(20) << "Vardas";
    out << fixed << left << setw(20) << "Pavarde";
    for (int i=0;i<15;i++){
    string nd="ND"+to_string(i+1);
    out << fixed << left << setw(20) << nd;
    }
    out << fixed << left << setw(20) << "Egz."<<endl;
    for (int j=0;j<s;j++){
        string Vardas="Vardas"+to_string(j+1);
        string Pavarde="Pavarde"+to_string(j+1);
        out << fixed << left << setw(20) << Vardas;
        out << fixed << left << setw(20) << Pavarde;
        for (int i=0;i<15;i++){
            out << fixed << left << setw(20) << dist(mt);

        }
        if (j!=s-1)
            out << fixed << left << setw(20) << dist(mt)<<endl;
            else
        out << fixed << left << setw(20) << dist(mt);
        
        
    }
    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<float> duration = end - start;
    cout<<"Failo"<<s<<"Studentu generavimo laikas: "<<duration.count()<<"s"<<endl;
}

void printheaderAverage() {
    cout << left << setw(10) << "Vardas" << setw(16) << "Pavarde" << setw(12) << "Galutinis(vid)" << endl;
    cout << "-----------------------------------------------------------" << endl;
}

void printheaderMedian(){
    cout << left << setw(10) << "Vardas" << setw(16) << "Pavarde" << setw(12) << "Galutinis(med)" << endl;
    cout << "-----------------------------------------------------------" << endl;
}

void Manualnotknown(int i, vector<int> &nd){
        char choise;

            {
                while (true)
                {
                    cout << "Ar norite testi" << i + 1 << "-ojo studento vedima?(y/n)";
                    cin >> choise;
                    if (choise == 'Y' || choise == 'y')
                    {
                        IvestisSK(i, nd);
                        cin.clear();
                    }
                    else if (choise == 'N' || choise == 'n')
                    {
                        cin.clear();
                        break;
                    }
                    else
                    {
                        cout << "Bloga ivestis";
                        cin.clear();
                    }
                }
            }
}

void Randomnotknown(int i, vector<int>&nd){
        char choise;

            {
                while (true)
                {
                    cout << "Ar norite testi" << i + 1 << "-ojo studento vedima?(y/n)";
                    cin >> choise;
                    if (choise == 'Y' || choise == 'y')
                    {
                        Random(i, nd);
                        cin.clear();
                    }
                    else if (choise == 'N' || choise == 'n')
                    {
                        cin.clear();
                        break;
                    }
                    else
                    {
                        cout << "Bloga ivestis";
                        cin.clear();
                    }
                }
            }
}

void assignHomeworksize(int &n, int i){
            cout << i+1<< "-ojo studento pazymiu kiekis: ";
                while (!(std::cin>>n)|| n<1|| n>15)
                    {
                        cout << "Neteisinga ivestis!" << endl
                                << i + 1 << " -ojo studento pazymiu kiekis:" << endl;
                        cin.clear();
                        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    }
                cout << i+1<< "-ojo studento pazymiu kiekis: ";

}

void Galutinisheader(int showaverage, std::ofstream& out){
    if (showaverage == 1) {
    out << std::fixed << std::left << std::setw(20) << "Galutinis(vid.)" << std::endl;
  } else {
    out << std::fixed << std::left << std::setw(20) << "Galutinis(med.)" << std::endl;
  }
}

int Egzaminas(){
    int choise;
    cout<<"Ar norite Egzamina ivesti ar, kad jis butu sugeneruotas(1 - noreciau, kad butu sugeneruotas, 2 - noreciau, ivesti)?";
     while(!(cin>>choise)||choise<1||choise>2){
        cout<<"Neteisinga ivestis";
        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    }
    if (choise == 1) {
        return dist(mt);
    }
    else if (choise == 2){
        int egzaminas;
        cout<<"Iveskite studento egzamino ivertinima: ";
        while (!(std::cin>>egzaminas)|| egzaminas<1|| egzaminas>10)
                    {
                        cout << "Neteisinga ivestis!" << endl;
                             " Egzamino ivertinimas [0-10]: ";
                        cin.clear();
                        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    }
        return egzaminas;
        
    }

}

int Getstrategy(int &strategy){
    cout<< "Pasirinkite strategija(1 arba 2):" <<endl;
    while (!(std::cin>>strategy)|| strategy<1|| strategy>2)
                    {
                        cout << "Neteisinga ivestis!" << endl;
                        cin.clear();
                        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    }
}

template <typename Container>
void Generatefromfile(Container&s, Container&w, Container&l, int choise) {
    string failas, test, line, vardas, pavarde;
    int findouthomework = 0, studentfile = 0, grade, showaverage, studentcontainer_size, bukaprociaicontainer_size, gudrociaicontainer_size, strategy, Egzaminas;
    double Final;

    Getstrategy(strategy);
    showaverage = SA();
    if (choise == 1)
        {
            failas = "Studentai10000.txt";
        }
        else if (choise == 2)
        {
            failas = "Studentai100000.txt";
        }
        else if (choise == 3)
        {
            failas = "Studentai1000000.txt";
        }

        else if (choise == 4){
            failas = "Studentai10000000.txt";
        }

        else {
            failas = "Studentai1000.txt";
        }
        try{
        ifstream in(failas);
        if(!in){
            throw 1;
        }
        auto start = std::chrono::high_resolution_clock::now();
        in >> test;
        in >> test;
        while (true)
        {
            in >> test;
            if (test=="Egz."){
                break;
            }
            else {
                findouthomework++;
            }
        }
        while (!(in.eof()))
        {   
            Studentas stud;
            in >> vardas;
            stud.setVardas(vardas);
            in >> pavarde;
            stud.setPavarde(pavarde);
            for (int m = 0; m < findouthomework; m++)
            {
                in >> grade;
                if (grade>10||grade<0){
                    throw 2;
                }
                else{
                    stud.addND(grade);
                    }
            }
            in >> Egzaminas;
            stud.setEgzaminas(Egzaminas);
            studentfile++;
            if (showaverage == 1){
                Final = Average(stud.getND(), Egzaminas);
            }
            else {
                Final = Median(stud.getND(), Egzaminas);
            }
            stud.setFinal(Final);
            s.push_back(stud);
        }
        auto end = std::chrono::high_resolution_clock::now();
        std::chrono::duration<float> duration = end - start;
        cout<<"Is failo nuskaitymo laikas :"<<duration.count()<<"s"<<endl;
        }
        catch(int e){
            cout<<"Error!";
            switch(e){
                case 1:
                cout<<"Unable to open file"<<endl;
                exit(0);
                break;
                case 2:
                cout<<"Grade is out of the [1;10] range"<<endl;
                exit(0);
                break;
            }
        } 
            s.resize(studentfile-1);
            if (strategy == 1) {
            auto start = std::chrono::high_resolution_clock::now();
            copy_if(s.begin(), s.end(), back_inserter(w), [](Studentas const& s) {return s.getFinal() >= 5;});
            copy_if(s.begin(), s.end(), back_inserter(l), [](Studentas const& s) {return s.getFinal() < 5;});
            auto end = std::chrono::high_resolution_clock::now();
            std::chrono::duration<float> duration = end - start;
            cout<<"Strategijos 1 laikas :"<<duration.count()<<"s"<<endl;

            }
            else if (strategy == 2){
                auto start = std::chrono::high_resolution_clock::now();
                copy_if(s.begin(), s.end(), back_inserter(l), [](Studentas const& s) {return s.getFinal() < 5; });
                s.erase(remove_if(s.begin(), s.end(),  [](Studentas const& s) {return s.getFinal() < 5; }), s.end());
                auto end = std::chrono::high_resolution_clock::now();
                std::chrono::duration<float> duration = end - start;
                cout<<"Strategijos 2 laikas :"<<duration.count()<<"s"<<endl;
            }
            
            
            studentcontainer_size = s.size();
            gudrociaicontainer_size = w.size();
            bukaprociaicontainer_size = l.size();
            //Iki cia palikti
            ofstream outk("Gudrociai.txt");
            outk << fixed << left << setw(20) << "Vardas";
            outk << fixed << left << setw(20) << "Pavarde";
            Galutinisheader(showaverage, outk);
            outk << "-----------------------------------------------------------" << endl;
            for (int b = 0; b < gudrociaicontainer_size; b++)
            {
                outk << fixed << left << setw(20) << w.back().getVardas();
                outk << fixed << left << setw(20) << w.back().getPavarde();
                outk << fixed << setprecision(2)<< setw(10) << w.back().getFinal() << " " << endl;
                w.pop_back();
            }
            ofstream outp("Bukraprociai.txt");
            outp << fixed << left << setw(20) << "Vardas";
            outp<< fixed << left << setw(20) << "Pavarde";
            Galutinisheader(showaverage, outp);
            outp << "-----------------------------------------------------------" << endl;
            for (int b = 0; b < bukaprociaicontainer_size; b++)
            {
                outp << fixed << left << setw(20) << l.back().getVardas();
                outp<< fixed << left << setw(20) << l.back().getPavarde();
                outp << fixed << setprecision(2)<< setw(10) << l.back().getFinal()<< " " << endl;
                l.pop_back();
            }
            

            ofstream out("Stundentai.txt");
            out << fixed << left << setw(20) << "Vardas";
            out << fixed << left << setw(20) << "Pavarde";
            Galutinisheader(showaverage, out);
            out << "-----------------------------------------------------------" << endl;


            for (int b = 0; b < studentcontainer_size; b++)
            {
                out << fixed << left << setw(20) << s.back().getVardas();
                out << fixed << left << setw(20) << s.back().getPavarde();
                out << fixed << setprecision(2)<< setw(10) << s.back().getFinal() << " " << endl;
                s.pop_back();
            }
    }
    template <typename Container>
    void MainFunction(Container&s, int Entergrades, int knowhomework, int showaverage, int i){
    string vardas,pavarde;
    Studentas stud;
    int egzaminas;
    double final;
    cout<<"Iveskite "<<i+1<<"-ojo Studento varda: ";
    vardas = correctName();
    stud.setVardas(vardas);
    cout<<"Iveskite "<<i+1<<"-ojo Studento pavarde: ";
    pavarde = correctName();
    stud.setPavarde(pavarde);
    if (knowhomework == 0 && Entergrades == 0)
        {
            Randomnotknown(i,stud.getND());
        }

        else if (knowhomework == 1 && Entergrades == 1)
        {
            assignHomeworksize(stud.getn(), i);
            IvestisSk(stud.getn(), stud.getND(), i);
        }
        else if (Entergrades == 0 && knowhomework == 1)  
        {
            assignHomeworksize(stud.getn(), i);
            Random(stud.getn(), stud.getND(), i);
        }
        else if (Entergrades == 1 && knowhomework == 0)
        {
            Manualnotknown(i, stud.getND());
        }

        egzaminas = Egzaminas();
        stud.setEgzaminas(egzaminas);

        if (showaverage == 1)
        {

            final = Average(stud.getND(), stud.getEgzaminas());
        }
        else
        {  
            final = Median(stud.getND(), stud.getEgzaminas());
        }
        
        stud.setFinal(final);
        s.push_back(stud);
}


 

template <typename Container>
void Manualterminal(Container &s, int Entergrades, int knowhomework, int showaverage, int student_size){
    for (int i=0; i < student_size; i++) {
        MainFunction(s, Entergrades, knowhomework, showaverage, i);
}
}


void Container(int conchoise) {
    int students, showaverage, Entergrades, knowhomework, readfile, choise;
    auto start = std::chrono::high_resolution_clock::now();
    readfile = File();
    if (conchoise == 1){
    deque<Studentas> s;
    deque<Studentas> w;
    deque<Studentas> l;
    if (readfile == 1)
    {
        choise = Choosefile();
        Generatefromfile(s,w,l,choise);
    }
    
    else
    {
        students = studentEntry();
        s.resize(students); 
        Entergrades = ManualEntry();
        knowhomework = HomeworkKnown();
        showaverage = SA();
        Manualterminal(s, Entergrades, knowhomework, showaverage, students);
        sort(s.begin(), s.end(), comparePagalPavarde);
        if (showaverage==1) {
            printheaderAverage();
            printfinal(s, students);
        }
        else {
            printheaderMedian();
            printfinal(s, students);
 
        }
    }
    }
    
    else if(conchoise == 2){
    list<Studentas> s;
    list<Studentas> w;
    list<Studentas> l;
    if (readfile == 1)
    {
        choise = Choosefile();
        Generatefromfile(s,w,l,choise);
    }
    else
    {
        students = studentEntry();
        s.resize(students); 
        Entergrades = ManualEntry();
        knowhomework = HomeworkKnown();
        showaverage = SA();
        Manualterminal(s, Entergrades, knowhomework, showaverage, students);
        s.sort(comparePagalPavarde);
        if (showaverage==1) {
            printheaderAverage();
            printfinal(s, students);
        }
        else {
            printheaderMedian();
            printfinal(s, students);
 
        }
    }
    }

    else if (conchoise == 3) {
    vector<Studentas> s;
    vector<Studentas> w;
    vector<Studentas> l;
    if (readfile == 1)
    {
        choise = Choosefile();
        Generatefromfile(s,w,l,choise);
    }
    else
    {
        students = studentEntry();
        s.resize(students);
        Entergrades = ManualEntry();
        knowhomework = HomeworkKnown();
        showaverage = SA();
        Manualterminal(s, Entergrades, knowhomework, showaverage, students);
        sort(s.begin(), s.end(), comparePagalPavarde);
        if (showaverage==1) {
            printheaderAverage();
            printfinal(s, students);
        }
        else {
            printheaderMedian();
            printfinal(s, students);
 
        }
    } 
    }
    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<float> duration = end - start;
    cout<<"Viso kodo laikas: "<<duration.count()<<"s"<<endl;
    
    
}