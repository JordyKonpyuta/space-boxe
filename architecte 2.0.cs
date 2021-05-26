using System;

namespace ArchitectArithmetic
{
  class Program
  {
    public static void Main(string[] args)
    {
      double aire1;
      double aire2;
      double aire3;

       double rectangle (double length, double width) {
        return length * width;
      }
       double cercle (double radius) {
        return Math.PI * Math.Pow(radius, 2);
      }
       double triangle (double bottom, double height) {
        return 0.5 * bottom * height;
      }

      Console.WriteLine("Avec quel monument avez-vous envie de travailler?\n_Le Teotihuacan (Mexique)\n_Le Taj Mahal (Inde)\n_La Mecque (Arabie Saoudite)\n");
      string batiment = Console.ReadLine();

      if (batiment == "Teotihuacan") {
      aire1 = rectangle(2500, 1500);
      aire2 = cercle(375);
      aire3 = triangle(750, 500);
      double aireTotale = aire1 + aire2 + aire3;
      double coutTotal = Math.Round(aireTotale * 180, 2);

      Console.WriteLine($"Le bâtiment a une aire totale de {aireTotale}, ce qui représente un coût de {coutTotal} pesos.");

      } else if (batiment == "Taj Mahal") {
      aire1 = rectangle(90.5, 90.5);
      aire2 = triangle(-24, -24);
      aire3 = 0;

      double aireTotale = aire1 + aire2 + aire3;
      double coutTotal = Math.Round(aireTotale * 180, 2);

      Console.WriteLine($"Le bâtiment a une aire totale de {aireTotale}, ce qui représente un coût de {coutTotal} pesos.");

      } else if (batiment == "La Mecque") {
      aire1 = rectangle(180, 106);
      aire2 = rectangle(284, 284);
      aire3 = triangle(-264, -84);

      double aireTotale = aire1 + aire2 + aire3;
      double coutTotal = Math.Round(aireTotale * 180, 2);

      Console.WriteLine($"Le bâtiment a une aire totale de {aireTotale}m2, ce qui représente un coût de {coutTotal} pesos.");

      } else {
        Console.WriteLine("Veuillez entrer un nom de bâtiment valide.");
      }
    }
  }
}