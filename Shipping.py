weight = 41.5

# Ground Shipping
if weight <= 2:
  ground_cost = weight * 1.5 + 20
elif weight > 2 and weight <= 6:
  ground_cost = weight * 3 + 20
elif weight > 6 and weight <= 10:
  ground_cost = weight * 4 + 20
else:
  ground_cost = weight * 4.75 + 20

print("Cost of ground shipping: " + str(ground_cost))

# Premium Shipping
premium_cost = 125
print("Cost of premium shipping: " + str(premium_cost))

# Drone Shipping
if weight <= 2:
  drone_cost = weight * 4.5
elif weight > 2 and weight <= 6:
  drone_cost = weight * 9
elif weight > 6 and weight <= 10:
  drone_cost = weight * 12
else:
  drone_cost = weight * 14.25

print("Cost of drone shipping: " + str(drone_cost))

if ground_cost < premium_cost and ground_cost < drone_cost:
  print("Le mode de livraison le moins cher est la livraison au sol.")
elif  premium_cost < ground_cost and premium_cost < drone_cost:
  print("Le mode de livraison le moins cher est la livraison premium.")
elif drone_cost < ground_cost and drone_cost < premium_cost:
  print("Le mode de livraison le moins cher est la livraisob par drone.")