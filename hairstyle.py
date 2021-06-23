# Les coupes de cheveux, leur prix et le nombre de fois qu'elles ont été faites cette semaine
hairstyles = ["bouffant", "pixie", "dreadlocks", "crew", "bowl", "bob", "mohawk", "flattop"]
prices = [30, 25, 40, 20, 20, 35, 50, 35]
last_week = [2, 3, 5, 8, 4, 4, 6, 2]

# Permet de calculer le prix moyen des coupes
total_price = 0

for price in prices:
  total_price += price

average_price = total_price / len(prices)
print("Average Haircut Price: " + str(average_price))

# Permet de réduire de 5€ le prix de toutes les coupes
new_prices = [price - 5 for price in prices]
print(new_prices)

# Permet de connaître les recettes de cette semaine
total_revenue = 0
for i in range(len(hairstyles)):
  total_revenue += prices[i] * last_week[i]

print("Total Revenue: " + str(total_revenue))

# Permet de connaître les recettes journalières moyennes
average_daily_revenue = total_revenue / 7
print(average_daily_revenue)

# Créé une nouvelle liste ne contenant que les coupes de moins de 30€
cuts_under_30 = [hairstyles[i] for i in range(len(hairstyles)) if new_prices[i] < 30]
print(cuts_under_30)
