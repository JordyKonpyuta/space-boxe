# Variables représentant la masse, l'accélération et la distance parcourue par le train, et la masse de la bombe
train_mass = 22680
train_acceleration = 10
train_distance = 100
bomb_mass = 1


# Permet de convertir des degrés F en degrés C
def f_to_c(f_temp):
  c_temp = (f_temp - 32) * 5/9
  return c_temp

f100_in_celsius = f_to_c(100)
print(f100_in_celsius)

# Permet de convertir des degrés C en degrés F
def c_to_f(c_temp):
  f_temp = c_temp * 9/5 + 32
  return f_temp

c0_in_fahrenheit = c_to_f(0)
print(c0_in_fahrenheit)

# Permet d'obtenir la force en Newtons d'un train
def get_force(mass, acceleration):
  return mass * acceleration

train_force = get_force(train_mass, train_acceleration)
print("The GE train suuplies " + str(train_force) + " Newtons of force.")

# Permet d'obtenir l'énergie en Joules d'une bombe
def get_energy(mass, c = 3*10**8):
  return mass * c

bomb_energy = get_energy(bomb_mass)
print("A 1kg bomb supplies " + str(bomb_energy) + " Joules.")

# Permet d'obtenir la force en Joules d'un train
def get_work(mass, acceleration, distance):
  force = get_force(mass, acceleration) * distance
  return force

train_work = get_work(train_mass, train_acceleration, train_distance)
print("The GE train does " + str(train_work) + " Joules of work over " + str(train_distance) + " meters.")