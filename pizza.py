# Les pizzas et leurs prix
toppings =  ["peperoni", "pineapple", "cheese", "sausage", "olives", "anchovies", "mushrooms"]
prices = [2, 6, 1, 3, 2, 7, 2]

# Permet de savoir combien de pizzas sont à 2$
num_two_dollar_slices = prices.count(2)
print(num_two_dollar_slices)

# Permet de savoir combien de pizzas sont disponibles
num_pizzas = len(toppings)
print("We sell " + str(num_pizzas) + " different kinds of pizza!")

# Combine la liste des pizzas et la liste des prix en une seule liste
pizza_and_prices = [[prices[0], toppings[0]], [prices[1], toppings[1]], [prices[2], toppings[2]], [prices[3], toppings[3]], [prices[4], toppings[4]], [prices[5], toppings[5]], [prices[6], toppings[6]]]
print(pizza_and_prices)

# Trie la nouvelle liste par ordre croissant de prix
pizza_and_prices.sort()
print(pizza_and_prices)

# Permet d'obtenir la pizza la moins chère et la pizza la plus chère
cheapest_pizza = pizza_and_prices[:1]
priciest_pizza = pizza_and_prices[-1:]
print(cheapest_pizza)
print(priciest_pizza)

# Enlève la pizza la plus chère de la carte (la pizzeria a vendu la dernière)
pizza_and_prices.pop()

# Remplace la pizza précédente, placée de sorte à ce que le tri soit toujours correct
pizza_and_prices.insert(4, [2.5, "peppers"])
print(pizza_and_prices)

# Permet d'obtenir les 3 pizzas les moins chers (pour des clients démunis qui veulent des pizzas différentes)
tree_cheapest = pizza_and_prices[:3]
print(tree_cheapest)