
/* fairygui::GearDisplay::~GearDisplay() */

void __thiscall fairygui::GearDisplay::~GearDisplay(GearDisplay *this)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  
                    /* catch() { ... } // from try @ 00ab1bac with catch @ 00ab1c60 */
                    /* catch() { ... } // from try @ 00ab1b6c with catch @ 00ab1c64
                       catch() { ... } // from try @ 00ab1bf0 with catch @ 00ab1c64 */
  pbVar4 = *(byte **)(this + 0x20);
  *(undefined ***)this = &PTR__GearDisplay_016aa158;
  if (pbVar4 != (byte *)0x0) {
    pbVar3 = *(byte **)(this + 0x28);
    pbVar2 = pbVar4;
    if (pbVar3 != pbVar4) {
      bVar1 = pbVar3[-0x18];
      pbVar2 = pbVar3 + -0x18;
      while( true ) {
        if ((bVar1 & 1) != 0) {
          operator_delete(*(void **)(pbVar3 + -8));
        }
                    /* try { // try from 00ab1c9c to 00bb1ce7 has its CatchHandler @ 00ab1c9c
                       catch() { ... } // from try @ 00ab1c9c with catch @ 00ab1c9c
                       catch() { ... } // from try @ 00ab1cec with catch @ 00ab1c9c */
        if (pbVar4 == pbVar2) break;
        bVar1 = pbVar2[-0x18];
        pbVar3 = pbVar2;
        pbVar2 = pbVar2 + -0x18;
      }
      pbVar2 = *(byte **)(this + 0x20);
    }
    *(byte **)(this + 0x28) = pbVar4;
    operator_delete(pbVar2);
  }
  GearBase::~GearBase((GearBase *)this);
  return;
}

