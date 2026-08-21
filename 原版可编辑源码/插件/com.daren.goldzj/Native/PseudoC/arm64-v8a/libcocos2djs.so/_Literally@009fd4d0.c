
/* universe::Literally::~Literally() */

void __thiscall universe::Literally::~Literally(Literally *this)

{
  long *plVar1;
  
                    /* catch() { ... } // from try @ 009fd474 with catch @ 009fd4d0 */
                    /* catch() { ... } // from try @ 009fd468 with catch @ 009fd4d4 */
                    /* catch() { ... } // from try @ 009fd47c with catch @ 009fd4dc */
  plVar1 = *(long **)(this + 8);
  *(undefined ***)this = &PTR__Literally_01c6c668;
  *(undefined8 *)(this + 8) = 0;
  if (plVar1 != (long *)0x0) {
                    /* try { // try from 009fd4f8 to 00afd54b has its CatchHandler @ 009fd4f8
                       catch() { ... } // from try @ 009fd4f8 with catch @ 009fd4f8
                       catch() { ... } // from try @ 009fd6e0 with catch @ 009fd4f8 */
    (**(code **)(*plVar1 + 8))();
  }
  operator_delete(this);
  return;
}

