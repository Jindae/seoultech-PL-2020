(define (gcd a b) 
    (if (equal? b 0)
        a
        (gcd b (modulo a b))))
(display (gcd 12 4))
