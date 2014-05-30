(set-logic QF_S)
(set-info :source |
A. Rybalchenko and J. A. Navarro Perez.
[Separation Logic + Superposition Calculus = Heap Theorem Prover]
[PLDI 2011]
http://navarroj.com/research/papers.html#pldi11
|)
(set-info :smt-lib-version 2.0)
(set-info :category "random") 
(set-info :status unknown)
(set-info :version "2014-05-28")

(set-logic QF_NOLL)

(declare-sort Sll_t 0)

(declare-fun f () (Field Sll_t Sll_t))

(define-fun ls ((?in Sll_t) (?out Sll_t)) Space
(tospace (or (= ?in ?out)
(exists ((?u Sll_t))
(and (distinct ?in ?out) (tobool
(ssep (pto ?in (ref f ?u)) (ls ?u ?out)
)))))))

(declare-fun x_emp () Sll_t)
(declare-fun y_emp () Sll_t)
(declare-fun z_emp () Sll_t)
(declare-fun t_emp () Sll_t)
(declare-fun x0 () Sll_t)
(declare-fun x1 () Sll_t)
(declare-fun x2 () Sll_t)
(declare-fun x3 () Sll_t)
(declare-fun x4 () Sll_t)
(declare-fun x5 () Sll_t)
(declare-fun x6 () Sll_t)
(declare-fun x7 () Sll_t)
(declare-fun x8 () Sll_t)
(declare-fun x9 () Sll_t)
(declare-fun x10 () Sll_t)
(declare-fun x11 () Sll_t)
(declare-fun x12 () Sll_t)
(declare-fun x13 () Sll_t)
(declare-fun x14 () Sll_t)
(declare-fun x15 () Sll_t)
(declare-fun x16 () Sll_t)
(declare-fun x17 () Sll_t)
(declare-fun x18 () Sll_t)
(declare-fun x19 () Sll_t)
(declare-fun x20 () Sll_t)
(declare-fun x21 () Sll_t)
(declare-fun x22 () Sll_t)
(declare-fun x23 () Sll_t)
(assert
  (and 
    (= nil nil)
    (tobool 
	(ssep
		(ls  x14 x18) 
		
		(pto x3 (ref f x7)) 
		
		(pto x9 (ref f x4)) 
		
		(ls  x6 x1) 
		
		(ls  x19 x3) 
		
		(pto x5 (ref f x11)) 
		
		(pto x4 (ref f x13)) 
		
		(pto x18 (ref f x19)) 
		
		(ls  x17 x3) 
		
		(pto x1 (ref f x18)) 
		
		(ls  x7 x10) 
		
		(pto x11 (ref f x2)) 
		
		(pto x15 (ref f x3)) 
		
		(pto x16 (ref f x4)) 
		
		(ls  x12 x6) 
		
		(ls  x10 x3) 
		
		(pto x13 (ref f x19)) 
		
		(ls  x2 x3) 
		
		(ls  x8 x14) 
		(ssep (pto x_emp (ref f y_emp)) (pto z_emp (ref f t_emp)))
	) )
  )
)
(assert
  (not
        (tobool 
	(ssep
		(ls  x15 x3) 
		
		(ls  x17 x3) 
		
		(ls  x12 x18) 
		
		(ls  x9 x4) 
		
		(ls  x16 x4) 
		
		(ls  x4 x13) 
		
		(ls  x5 x2) 
		
		(ls  x8 x18) 
		
		(ls  x13 x19) 
		
		(ls  x10 x3) 
		
		(ls  x18 x3) 
		
		(ls  x2 x10) 
		(ssep (pto x_emp (ref f y_emp)) (pto z_emp (ref f t_emp)))
	) )
  ))

(check-sat)