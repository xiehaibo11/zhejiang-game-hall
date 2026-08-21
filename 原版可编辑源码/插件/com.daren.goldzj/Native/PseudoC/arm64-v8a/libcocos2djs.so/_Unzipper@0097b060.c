
/* universe::Unzipper::~Unzipper() */

void __thiscall universe::Unzipper::~Unzipper(Unzipper *this)

{
  Unzipper *pUVar1;
  code *pcVar2;
  
  *(undefined ***)this = &PTR__Unzipper_01c69a50;
  if (((byte)this[0x60] & 1) != 0) {
                    /* catch() { ... } // from try @ 0097ae00 with catch @ 0097b08c */
    operator_delete(*(void **)(this + 0x70));
  }
  pUVar1 = *(Unzipper **)(this + 0x50);
                    /* catch() { ... } // from try @ 0097adf0 with catch @ 0097b09c */
  if (this + 0x30 == pUVar1) {
    pcVar2 = *(code **)(*(long *)pUVar1 + 0x20);
  }
  else {
                    /* catch() { ... } // from try @ 0097ae20 with catch @ 0097b0a0 */
    if (pUVar1 == (Unzipper *)0x0) goto LAB_0097b0bc;
    pcVar2 = *(code **)(*(long *)pUVar1 + 0x28);
  }
  (*pcVar2)();
LAB_0097b0bc:
  Example::~Example((Example *)this);
  return;
}

