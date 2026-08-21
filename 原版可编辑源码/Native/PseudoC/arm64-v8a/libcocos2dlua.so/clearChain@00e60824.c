
/* cocos2d::PURibbonTrail::clearChain(unsigned long) */

void __thiscall cocos2d::PURibbonTrail::clearChain(PURibbonTrail *this,ulong param_1)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  
  PUBillboardChain::clearChain((PUBillboardChain *)this,param_1);
  puVar3 = *(ulong **)(this + 0x100);
  puVar2 = *(ulong **)(this + 0x108);
  if ((puVar2 != puVar3) && (*puVar3 != param_1)) {
    do {
                    /* try { // try from 00e6088c to 00f6088f has its CatchHandler @ 00e608a4 */
      if (puVar2 + -1 == puVar3) {
        return;
      }
      puVar1 = puVar3 + 1;
                    /* try { // try from 00e60890 to 00f608b7 has its CatchHandler @ 00e60868 */
      puVar3 = puVar3 + 1;
    } while (*puVar1 != param_1);
  }
  if (puVar3 == puVar2) {
    return;
  }
                    /* try { // try from 00e60868 to 00f6088b has its CatchHandler @ 00e60868
                       catch() { ... } // from try @ 00e60868 with catch @ 00e60868
                       catch() { ... } // from try @ 00e60890 with catch @ 00e60868 */
  resetTrail((ulong)this,(Node *)*puVar3);
  return;
}

