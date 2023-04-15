# Objektinis-programavimas-1uzd
## Studentų pažymių skaičiuoklė
Ši programa skirta apskaičiuoti studentų medianą/vidurkį, pasirinkus norimus parametrus. Programa taip pat gali sugeneruoti studentų, nuskaityti bei išvesti studentų failą.
## Įdiegimas
* Atsisiųsti programą
* Išarchyvuoti parsisiųstą aplankalą
* Suvesti komandą `g++ -o main pasitestuoti.cpp vektoriaif.cpp` kad sukurti executable failą ir tada paleisti jį su komanda `./main`
## Spartos analizė
### Naudoto kompiuterio specifikacijos :
* CPU: i7 - 10700k
* RAM: DDR4 3466mhz 16gb
* Disk: 512gb SSD
### Skaitymo iš failo analizės rezultatai

|Konteineris|  1000  | 10000 | 100000 | 1000000| 10000000 |
|-----------|--------|-------|--------|--------|----------|
|  Deque    | 0.0169s|0.1685s| 1.6867s|16.7942s| 26.432s  |
|   List    | 0.0179s 0.1686s| 1.6871s| 16.844s| 26.0647s |
|  Vector   | 0.0179s|0.1735s| 1.7122s| 16.836s| 26.4494s |
