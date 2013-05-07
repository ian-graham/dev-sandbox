cat(minky).
cat(tiger).
cat(boris).
dog(barkbark).
dog(sniper).
dog(trogdor).

notcat(X) :- \+cat(X).
