
/* virtual thunk to ClipperLib::Clipper::~Clipper() */

void __thiscall ClipperLib::Clipper::~Clipper(Clipper *this)

{
  long lVar1;
  
                    /* catch() { ... } // from try @ 010330fc with catch @ 010331c0 */
                    /* catch() { ... } // from try @ 01032f80 with catch @ 010331c4
                       catch() { ... } // from try @ 0103317c with catch @ 010331c4 */
                    /* catch() { ... } // from try @ 01032dc8 with catch @ 010331c8 */
                    /* catch() { ... } // from try @ 01032e00 with catch @ 010331cc
                       catch() { ... } // from try @ 01032e64 with catch @ 010331cc */
                    /* catch() { ... } // from try @ 01032db0 with catch @ 010331d0 */
  lVar1 = *(long *)(*(long *)this + -0x18);
                    /* catch() { ... } // from try @ 01032d48 with catch @ 010331d4 */
                    /* catch() { ... } // from try @ 01032d04 with catch @ 010331d8 */
                    /* catch() { ... } // from try @ 01032c40 with catch @ 010331dc */
  ~Clipper(this + lVar1);
                    /* catch() { ... } // from try @ 01032eb4 with catch @ 010331e0 */
                    /* catch() { ... } // from try @ 01032d24 with catch @ 010331e4 */
  operator_delete(this + lVar1);
  return;
}

