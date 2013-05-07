likes(wallace, cheese).
likes(grommit, cheese).
likes(wendolene, sheep).
likes(zuko, sheep).

friend(X, Y) :- likes(X, Z), likes(Y, Z), \+(X = Y).
