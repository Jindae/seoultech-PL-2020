gcd(A,B,G) :- A = B;B = 0, G = A.
gcd(A,B,G) :- A = 0, G = B.
gcd(A,B,G) :- A > B, C is A mod B, gcd(C,B,G).
gcd(A,B,G) :- A < B, C is B mod A, gcd(C,A,G).
