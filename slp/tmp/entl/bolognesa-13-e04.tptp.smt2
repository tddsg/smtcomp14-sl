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
(assert
  (and 
    (= nil nil)
    (tobool 
	(ssep
		(pto x7 (ref f x11)) 
		
		(ls  x5 x11) 
		
		(ls  x1 x4) 
		
		(ls  x3 x11) 
		
		(pto x2 (ref f x5)) 
		
		(pto x10 (ref f x13)) 
		
		(pto x8 (ref f x11)) 
		
		(pto x9 (ref f x8)) 
		
		(pto x6 (ref f x12)) 
		
		(ls  x12 x4) 
		
		(pto x11 (ref f x4)) 
		
		(pto x4 (ref f x3)) 
		
		(pto x13 (ref f x12)) 
		(ssep (pto x_emp (ref f y_emp)) (pto z_emp (ref f t_emp)))
	) )
  )
)
(assert
  (not
        (tobool 
	(ssep
		(ls  x1 x4) 
		
		(ls  x3 x11) 
		
		(ls  x6 x12) 
		
		(ls  x7 x11) 
		
		(ls  x2 x11) 
		
		(ls  x10 x12) 
		
		(ls  x12 x4) 
		
		(ls  x9 x3) 
		(ssep (pto x_emp (ref f y_emp)) (pto z_emp (ref f t_emp)))
	) )
  ))

(check-sat)
