#include <iostream>
#include <stdlib.h>

int main() {
  
  double weight;
  std::string planet;

  std::cout << "Bienvenu sur votre interface, Little Mac.\n";
  std::cout << "D'après nos informations, un tournoi de boxe a lieu sur les planètes suivantes:\n";
  std::cout << "Mercure, Venus, Mars, Jupiter, Saturne, Uranus, Neptune\n";
  std::cout << "Pour commencer, tapez votre poids sur Terre: \n";
  std::cin >> weight;

  std::cout << "Tapez maintenant la planète sur laquelle vous souhaitez vous battre.\n";
  std::cin >> planet;
  
  // Calcule le poids de Little Mac sur chaque planète

  if (planet == "Mercure") {

      weight = weight * 0.38;
      std::cout << "Votre poids sur cette planète est: " << weight << ".\n";

  } else if (planet == "Venus") {

      weight = weight * 0.91;
      std::cout << "Votre poids sur cette planète est: " << weight << ".\n";

  } else if (planet == "Mars") {

      weight = weight * 0.38;
      std::cout << "Votre poids sur cette planète est: " << weight << ".\n";

  } else if (planet == "Jupiter") {

      weight = weight * 2.34;
      std::cout << "Votre poids sur cette planète est: " << weight << ".\n";

  } else if (planet == "Saturne") {

      weight = weight * 1.06;
      std::cout << "Votre poids sur cette planète est: " << weight << ".\n";

  } else if (planet == "Uranus") {

      weight = weight * 0.92;
      std::cout << "Votre poids sur cette planète est: " << weight << ".\n";

  } else if (planet == "Neptune") {

      weight = weight * 1.19;
      std::cout << "Votre poids sur cette planète est: " << weight << ".\n";

  } else if (planet == "Terre") {

      std::cout << "Allons. Vous n'allez pas vous cantonner à cet astre primitif?\n";
      abort();

  } else {

      std::cout << "Veuillez entrer une planète parmis celles de la liste.";
      abort();

  }

  
  // Détermine la catégorie dans laquelle combattra Little Mac


  if (weight <= 52) {

    std::cout << "Vous combattrez dans la catégorie Poids Mouches.\n";

  } else if (weight <= 57) {

    std::cout << "Vous combattrez dans la catégorie Poids Plumes.\n";

  } else if (weight <= 63) {

    std::cout << "Vous combattrez dans la catégorie Poids Légers.\n";

  } else if (weight <= 69) {

    std::cout << "Vous combattrez dans la catégorie Poids Welters.\n";

  } else if (weight <= 75) {

    std::cout << "Vous combattrez dans la catégorie Poids Moyens.\n";

  } else if (weight <= 81) {

    std::cout << "Vous combattrez dans la catégorie Poids Mi-Lourds.\n";
    
  } else if (weight <= 91) {

    std::cout << "Vous combattrez dans la catégorie Poids Lourds.\n";

  } else {

    std::cout << "Vous combattrez dans la catégorie Poids Super-Lourds.\n";

  }

  std::cout << "Bonne chance Little Mac!\n";

  }

}
