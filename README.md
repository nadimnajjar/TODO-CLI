# ✅ TODO CLI – Application de gestion de tâches en C++

Mon premier projet en C++ qui est une petite application en ligne de commande écrite en C++ pour gérer une liste de tâches à faire. Elle permet d’ajouter, marquer comme faite, supprimer et afficher les tâches facilement via des commandes simples.

---

## 🚀 Fonctionnalités

- Ajouter une nouvelle tâche
- Supprimer une tâche existante
- Marquer une tâche comme faite ou non faite
- Afficher toutes les tâches avec leur statut
- Interface interactive en boucle infinie jusqu’à l’utilisateur quitte

---

## 🛠️ Compilation

### Prérequis :
- Un compilateur C++ (`g++`)
- `make`

### Étapes :

1. Clone ou place les fichiers dans un dossier :
    ```
    main.cpp
    TODO.cpp
    TODO.hpp
    Makefile
    ```

2. Compile avec :
    ```bash
    make
    ```

3. Lance l'application :
    ```bash
    ./todoApp
    ```

---

## 💻 Commandes disponibles

| Commande           | Description                                |
|--------------------|--------------------------------------------|
| `add <tache>`       | Ajoute une nouvelle tâche                  |
| `remove <tache>`    | Supprime une tâche                         |
| `done <tache>`      | Marque la tâche comme faite                |
| `show`              | Affiche toutes les tâches avec leur statut |
| `help`              | Affiche la liste des commandes             |
| `exit`              | Quitte l'application                       |

---

## ✨ Exemple

```bash
>>> add Acheter du pain
>>> add Finir le projet
>>> done Acheter du pain
>>> show
1. Acheter du pain [Fini!]
2. Finir le projet [Pas encore Fini...]
>>> remove Finir le projet
>>> La tache: Finir le projet vient d'être effacée!
>>> show
1. Acheter du pain [Fini!]
