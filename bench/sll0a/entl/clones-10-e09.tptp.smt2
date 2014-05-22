(set-logic QF_S)
(set-info :source |
A. Rybalchenko and J. A. Navarro Pérez.
[Separation Logic + Superposition Calculus = Heap Theorem Prover]
[PLDI 2011]
http://navarroj.com/research/papers.html#pldi11
|)
(set-info :smt-lib-version 2.0)
(set-info :category "random") 
(set-info :status unknown)
(set-info :version 2014-05-22)

(set-logic QF_NOLL)

(declare-sort Sll_t 0)

(declare-fun f () (Field Sll_t Sll_t))

(define-fun ls ((?in Sll_t) (?out Sll_t)) Space
(tospace (or (= ?in ?out)
(exists ((?u Sll_t))
(and (distinct ?in ?out) (tobool
(ssep (pto ?in (ref f ?u)) (ls ?u ?out)
)))))))

(declare-fun nil () Sll_t)

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
(declare-fun x24 () Sll_t)
(declare-fun x25 () Sll_t)
(declare-fun x26 () Sll_t)
(declare-fun x27 () Sll_t)
(declare-fun x28 () Sll_t)
(declare-fun x29 () Sll_t)
(declare-fun x30 () Sll_t)
(declare-fun x31 () Sll_t)
(declare-fun x32 () Sll_t)
(declare-fun x33 () Sll_t)
(declare-fun x34 () Sll_t)
(declare-fun x35 () Sll_t)
(declare-fun x36 () Sll_t)
(declare-fun x37 () Sll_t)
(declare-fun x38 () Sll_t)
(declare-fun x39 () Sll_t)
(declare-fun x40 () Sll_t)
(declare-fun x41 () Sll_t)
(declare-fun x42 () Sll_t)
(declare-fun x43 () Sll_t)
(declare-fun x44 () Sll_t)
(assert
  (and 
    (= nil nil)
(distinct nil x1 )
(distinct nil x2 )
(distinct nil x3 )
(distinct x1 x2 )
(distinct x2 x3 )
(distinct nil x5 )
(distinct nil x6 )
(distinct nil x7 )
(distinct x5 x6 )
(distinct x6 x7 )
(distinct nil x9 )
(distinct nil x10 )
(distinct nil x11 )
(distinct x9 x10 )
(distinct x10 x11 )
(distinct nil x13 )
(distinct nil x14 )
(distinct nil x15 )
(distinct x13 x14 )
(distinct x14 x15 )
(distinct nil x17 )
(distinct nil x18 )
(distinct nil x19 )
(distinct x17 x18 )
(distinct x18 x19 )
(distinct nil x21 )
(distinct nil x22 )
(distinct nil x23 )
(distinct x21 x22 )
(distinct x22 x23 )
(distinct nil x25 )
(distinct nil x26 )
(distinct nil x27 )
(distinct x25 x26 )
(distinct x26 x27 )
(distinct nil x29 )
(distinct nil x30 )
(distinct nil x31 )
(distinct x29 x30 )
(distinct x30 x31 )
(distinct nil x33 )
(distinct nil x34 )
(distinct nil x35 )
(distinct x33 x34 )
(distinct x34 x35 )
(distinct nil x37 )
(distinct nil x38 )
(distinct nil x39 )
(distinct x37 x38 )
(distinct x38 x39 )
    (tobool  (ssep  (ls x39 x37 ) (ssep  (pto x37  (ref f x39 ) ) (ssep  (ls x35 x33 ) (ssep  (pto x33  (ref f x35 ) ) (ssep  (ls x31 x29 ) (ssep  (pto x29  (ref f x31 ) ) (ssep  (ls x27 x25 ) (ssep  (pto x25  (ref f x27 ) ) (ssep  (ls x23 x21 ) (ssep  (pto x21  (ref f x23 ) ) (ssep  (ls x19 x17 ) (ssep  (pto x17  (ref f x19 ) ) (ssep  (ls x15 x13 ) (ssep  (pto x13  (ref f x15 ) ) (ssep  (ls x11 x9 ) (ssep  (pto x9  (ref f x11 ) ) (ssep  (ls x7 x5 ) (ssep  (pto x5  (ref f x7 ) ) (ssep  (ls x3 x1 ) (ssep  (pto x1  (ref f x3 ) )(ssep (pto x_emp (ref f y_emp)) (pto z_emp (ref f t_emp))))))))))))))))))))))))
  )
)
(assert
  (not
        (tobool  (ssep  (ls x40 x37 ) (ssep  (pto x37  (ref f x40 ) ) (ssep  (ls x36 x33 ) (ssep  (pto x33  (ref f x36 ) ) (ssep  (ls x32 x29 ) (ssep  (pto x29  (ref f x32 ) ) (ssep  (ls x28 x25 ) (ssep  (pto x25  (ref f x28 ) ) (ssep  (ls x24 x21 ) (ssep  (pto x21  (ref f x24 ) ) (ssep  (ls x20 x17 ) (ssep  (pto x17  (ref f x20 ) ) (ssep  (ls x16 x13 ) (ssep  (pto x13  (ref f x16 ) ) (ssep  (ls x12 x9 ) (ssep  (pto x9  (ref f x12 ) ) (ssep  (ls x8 x5 ) (ssep  (pto x5  (ref f x8 ) ) (ssep  (ls x4 x1 ) (ssep  (pto x1  (ref f x4 ) )(ssep (pto x_emp (ref f y_emp)) (pto z_emp (ref f t_emp))))))))))))))))))))))))
  ))

(check-sat)