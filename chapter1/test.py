from itertools import permutations

A_cards = [1, 3, 5, 7]
B_cards = [2, 4, 6, 8]

comb = []
for A_perm in permutations(A_cards, len(A_cards)):
    for B_perm in permutations(B_cards, len(B_cards)):
        cards = list(zip(A_perm, B_perm))
        score = len([1 for card in cards if card[0] > card[1]])
        item = {
            'cards': cards,
            'score': score,
        }

        comb.append(item)

A_win = [c for c in comb if c['score'] >= 2]
print(A_win)
print(len(A_win))