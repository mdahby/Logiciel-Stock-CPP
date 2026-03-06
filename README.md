# Logiciel-Stock-CPP
# Gestion de Logiciels en C++

## Description

Ce projet implémente un système simple de gestion de stock de logiciels en C++.
Il permet d'ajouter, modifier, supprimer et rechercher des logiciels dans un stock, ainsi que de sauvegarder et charger les données à partir d'un fichier.

Ce projet a été réalisé dans le cadre de l'apprentissage de la programmation orientée objet en C++.

---

## Fonctionnalités

* Ajouter un logiciel au stock
* Modifier les informations d’un logiciel
* Supprimer un logiciel
* Rechercher un logiciel par son identifiant
* Afficher la liste des logiciels
* Sauvegarder les données dans un fichier
* Charger les données depuis un fichier

---

## Structure du projet

Le projet est organisé autour de plusieurs classes :

* **Date** : représente la date d’un logiciel
* **Logiciel** : classe de base contenant les informations générales
* **LogicielPro** : classe dérivée ajoutant des informations spécifiques
* **Stock** : gère la collection des logiciels à l’aide d’un `vector`

---

## Concepts utilisés

* Programmation Orientée Objet (POO)
* Héritage
* Encapsulation
* Gestion dynamique de mémoire
* Utilisation de `vector`
* Lecture / écriture dans des fichiers (`ifstream`, `ofstream`)

---

## Compilation

Pour compiler le projet :

```
g++ main.cpp stock.cpp logiciel.cpp logiciel_pro.cpp date.cpp -o gestion_logiciels
```

---

## Exécution

```
./gestion_logiciels
```

---

## Auteur

Projet réalisé dans le cadre d’un apprentissage en C++.
