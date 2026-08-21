
/* fairygui::GearDisplay::init() */

void __thiscall fairygui::GearDisplay::init(GearDisplay *this)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  byte *pbVar4;
  
  pbVar1 = *(byte **)(this + 0x20);
  pbVar2 = *(byte **)(this + 0x28);
  if (pbVar2 != pbVar1) {
    bVar3 = pbVar2[-0x18];
    pbVar4 = pbVar2 + -0x18;
    while( true ) {
                    /* catch() { ... } // from try @ 00ab1e20 with catch @ 00ab1eb8 */
      if ((bVar3 & 1) != 0) {
        operator_delete(*(void **)(pbVar2 + -8));
      }
                    /* catch() { ... } // from try @ 00ab1e38 with catch @ 00ab1ebc */
      if (pbVar1 == pbVar4) break;
      bVar3 = pbVar4[-0x18];
      pbVar2 = pbVar4;
      pbVar4 = pbVar4 + -0x18;
    }
  }
  *(byte **)(this + 0x28) = pbVar1;
                    /* catch() { ... } // from try @ 00ab1dec with catch @ 00ab1eec */
  return;
}

