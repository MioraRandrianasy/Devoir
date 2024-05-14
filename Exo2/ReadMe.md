# Projet de Création de Bibliothèque 
Ce projet contient 2 types de programme permettant de développer deux librairies: dynamique et statique. Ces dossiers contiennent à peu près le même contenu.

## Pour le dossier Librairie_dynamique

Ce projet consiste à développer une bibliothèque simple en C++ qui gère l'activation d'un produit ou service via une clé d'activation. La bibliothèque vérifie si la clé d'activation est valide et permet une certaine quantité d'essais avant de bloquer l'accès.

### Contenu du Projet

Le projet comprend les fichiers suivants :

- `CodeActivation.hpp` : En-tête de la classe `CodeActivation`.
- `CodeActivation.cpp` : Implémentation de la classe `CodeActivation`.
- `main.cpp` : Programme principal pour tester la bibliothèque.
- `run_dynamique.sh`: script contenant les commandes à executer avant le test du main.
- `code.txt`: contenant le code d'activation
- `essai.txt`: contenant le nombre d'essai
 En surplus, j'ai déja compilé à l'avance et il y a les fichiers compilé à l'avance suivant
 - `CodeActivation.o`: sortie après le script run
 - `libactivation.so`: la librairie dynamique


### Compilation

Pour compiler le projet, vous devez d'abord générer un fichier objet à partir de `CodeActivation.cpp`, puis créer une bibliothèque partagée (`libactivation.so`) à partir de ce fichier objet. Voici les commandes à utiliser :


### Utilisation

Pour utiliser la bibliothèque dans un autre programme, vous devez inclure `CodeActivation.hpp` et lier contre `libactivation.so`. Voici un exemple de programme qui utilise la bibliothèque :


### Compilez et exécutez ce programme avec les commandes suivantes :
sh run_dynamique.sh
g++ main.cpp -L/home/chemin -lactivation -o testdynamique.exe
./testdynamique.exe

## Pour le dossier Librairie_statique

Ce projet consiste à développer une bibliothèque simple en C++ qui gère l'activation d'un produit ou service via une clé d'activation. La bibliothèque vérifie si la clé d'activation est valide et permet une certaine quantité d'essais avant de bloquer l'accès.

### Contenu du Projet

Le projet comprend les fichiers suivants :

- `CodeActivation.hpp` : En-tête de la classe `CodeActivation`.
- `CodeActivation.cpp` : Implémentation de la classe `CodeActivation`.
- `main.cpp` : Programme principal pour tester la bibliothèque.
- `run_statique.sh`: script contenant les commandes à executer avant le test du main.
- `code.txt`: contenant le code d'activation
- `essai.txt`: contenant le nombre d'essai
 En surplus, j'ai déja compilé à l'avance et il y a les fichiers compilé à l'avance suivant
 - `CodeActivation.o`: sortie après le script run
 - `libactivation.a`: la librairie statique


### Compilation

Pour compiler le projet, vous devez d'abord générer un fichier objet à partir de `CodeActivation.cpp`, puis créer une bibliothèque partagée (`libactivation.a`) à partir de ce fichier objet. Voici les commandes à utiliser :


### Utilisation

Pour utiliser la bibliothèque dans un autre programme, vous devez inclure `CodeActivation.hpp` et lier contre `libactivation.a`. Voici un exemple de programme qui utilise la bibliothèque :


### Compilez et exécutez ce programme avec les commandes suivantes :
sh run_statique.sh
g++ main.cpp -L/home/chemin -lactivation -o teststatique.exe
./teststatique.exe


