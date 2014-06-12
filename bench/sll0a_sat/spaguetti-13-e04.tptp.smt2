(set-logic QF_S)
(set-info :source |
A. Rybalchenko and J. A. Navarro Perez.
[Separation Logic + Superposition Calculus = Heap Theorem Prover]
[PLDI 2011]
http://navarroj.com/research/papers.html#pldi11
|)
(set-info :smt-lib-version 2.0)
(set-info :category "random") 
(set-info :status unsat)
(set-info :version "2014-05-28")

(declare-sort Sll_t 0)

(declare-fun next () (Field Sll_t Sll_t))

(define-fun ls ((?in Sll_t) (?out Sll_t)) Space
(tospace (or (= ?in ?out)
(exists ((?u Sll_t))
(and (distinct ?in ?out) (tobool
(ssep (pto ?in (ref next ?u)) (ls ?u ?out)
)))))))

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
(distinct  x6 x7)
(distinct  x3 x13)
(distinct  x3 x10)
(distinct  x9 x13)
(distinct  x8 x10)
(distinct  x4 x10)
(distinct  x1 x12)
(distinct  x10 x12)
(distinct  x5 x12)
    (tobool 
	(ssep
		(ls  x5 x13) 
		
		(ls  x13 x8) 
		
		(ls  x4 x3) 
		
		(ls  x1 x13) 
		
		(ls  x1 x11) 
		
		(ls  x8 x4) 
		
		(ls  x12 x4) 
		
		(ls  x9 x13) 
		
		(ls  x9 x8) 
		
		(ls  x7 x12) 
		
		(ls  x7 x6) 
		
		(ls  x3 x9) 
		
		(ls  x3 x4) 
		
		(ls  x11 x5) 
		emp
	) )
  )
)

(check-sat)

