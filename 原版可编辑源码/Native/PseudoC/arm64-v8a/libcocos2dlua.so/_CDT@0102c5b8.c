
/* p2t::CDT::~CDT() */

void __thiscall p2t::CDT::~CDT(CDT *this)

{
  Sweep *this_00;
  SweepContext *this_01;
  
  this_01 = *(SweepContext **)this;
  if (this_01 != (SweepContext *)0x0) {
                    /* try { // try from 0102c5d0 to 0112c5fb has its CatchHandler @ 0102c5d0
                       catch() { ... } // from try @ 0102c5d0 with catch @ 0102c5d0
                       catch() { ... } // from try @ 0102c604 with catch @ 0102c5d0 */
    SweepContext::~SweepContext(this_01);
    operator_delete(this_01);
  }
  this_00 = *(Sweep **)(this + 8);
  if (this_00 != (Sweep *)0x0) {
    Sweep::~Sweep(this_00);
                    /* try { // try from 0102c5fc to 0112c603 has its CatchHandler @ 0102c620 */
    operator_delete(this_00);
    return;
  }
                    /* try { // try from 0102c604 to 0112c633 has its CatchHandler @ 0102c5d0 */
  return;
}

