using System;

namespace ArchitectArithmetic
{
  class Program
  {
    public static void Main(string[] args)
    {
       double rectangle (double length, double width) {
        return length * width;
      }
       double cercle (double radius) {
        return Math.PI * Math.Pow(radius, 2);
      }
       double triangle (double bottom, double height) {
        return 0.5 * bottom * height;
      }

      double aire1 = rectangle(2500, 1500);
      double aire2 = cercle(375);
      double aire3 = triangle(750, 500);

      double aireTotale = aire1 + aire2 + aire3;
      double coutTotal = Math.Round(aireTotale * 180, 2);

      Console.WriteLine($"Le bâtiment a une aire totale de {aireTotale}, ce qui représente un coût de {coutTotal} pesos.");
    }
  }
}
