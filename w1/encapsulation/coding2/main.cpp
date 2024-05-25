#include <iostream>
using namespace std;

// add class definitions below this line
class Watch
{
public:


  Watch(string manufacturer, string model, int diameter, int water_resistance, string material)
  {
    this->manufacturer = manufacturer;
    this->model = model;
    this->diameter = diameter;
    this->water_resistance = water_resistance;
    this->material = material;
  }

  string GetManufacturer()
  {
    return manufacturer;
  }

  string GetModel()
  {
    return model;
  }

  int GetWaterResistance()
  {
    return water_resistance;
  }

  string GetMaterial()
  {
    return material;
  }

  int GetDiameter()
  {
    return diameter;
  }

  void SetManufacturer(string manufacturer)
  {
    this->manufacturer = manufacturer;
  }
  void SetModel(string model)
  {
    this->model = model;
  }
  void SetDiameter(int diameter)
  {
    this->diameter = diameter;
  }
  void SetWaterResistance(int water_resistance)
  {
    this->water_resistance = water_resistance;
  }
  void SetMaterial(string material)
  {
    this->material = material;
  }

  void Summary()
  {
    cout << "Manufacturer: " << manufacturer << endl;
    cout << "Model: " << model << endl;
    cout << "Diameter: " << diameter << " mm" << endl;
    cout << "Water Resistance: " << water_resistance << " m" << endl;
    cout << "Material: " << material << endl;
  }

private:
  string manufacturer;
  string model;
  int diameter;
  int water_resistance;
  string material;
};

// add class definitions above this line

int main()
{

  // DO NOT EDIT CODE BELOW THIS LINE

  Watch my_watch("Omega", "Speedmaster", 42, 50, "steel");
  cout << my_watch.GetManufacturer() << endl;
  cout << my_watch.GetModel() << endl;
  cout << my_watch.GetDiameter() << endl;
  cout << my_watch.GetWaterResistance() << endl;
  cout << my_watch.GetMaterial() << endl;
  my_watch.SetManufacturer("Rolex");
  my_watch.SetModel("Explorer");
  my_watch.SetDiameter(36);
  my_watch.SetWaterResistance(60);
  my_watch.SetMaterial("gold");
  my_watch.Summary();

  // DO NOT EDIT CODE ABOVE THIS LINE

  return 0;
}
