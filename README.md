# Objektinis-programavimas-1užd
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

|Konteineris| 1000 | 10000 | 100000 | 1000000 | 10000000 |
|-----------|------|-------|--------|---------|----------|
|  Deque    |0.0169s|0.168s| 1.6867s| 16.794s | 26.432s  |
|   List    |0.0179s|0.168s| 1.6871s| 16.844s | 26.0647s |
|  Vector   |0.0179s|0.173s| 1.7122s| 16.836s | 26.4494s |

### 1-os Grupavimo strategijos spartos analizė

Šitoje grupavimo strategija nukopijuoja iš `s` konteinerio  duomenys jeigu studento vidurkis >= 5 į `w` konteinerį, kitu atveju to studento duomenys kopijuojami į `l` konteinerį.

|Konteineris| 1000 | 10000 | 100000 | 1000000 | 10000000 |
|-----------|------|-------|--------|---------|----------|
|  Deque    |0.0009s|0.0039s| 0.0408s| 0.3955s | 0.6017s  |
|   List    |0.0009s|0.0049s| 0.4955s| 0.4915s | 0.7654s |
|  Vector   |0.0009s|0.0059s|0.0668s| 0.7277s | 1.0450s |

### 2-os Grupavimos strategijos spartos analizė

Šitoje grupavimo strategijoje iš `s` konteinerio duomenys kopijuojami, jeigu studento vidurkis < 5 į `l` konteinerį tuomet tie duomenys `s` konteineryje yra ištrinami taip paliekant studentus su vidurkiu >= 5

|Konteineris| 1000 | 10000 | 100000 | 1000000 | 10000000 |
|-----------|------|-------|--------|---------|----------|
|  Deque    |0.0009s|0.0039s| 0.0398s| 0.4134s | 0.6411s  |
|   List    |0.0009s|0.0049s| 0.0475s| 0.4807s | 0.7394s |
|  Vector   |0.0009s|0.0049s|0.0528s| 0.4939s | 0.8131s |

## Programos veikimo principas
