
/* cocos2d::VolatileTexture::~VolatileTexture() */

void __thiscall cocos2d::VolatileTexture::~VolatileTexture(VolatileTexture *this)

{
  VolatileTexture VVar1;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ff1468 with catch @ 00ff14ec
                        */
  if (*(Ref **)(this + 8) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 8));
  }
  if (((byte)this[0x78] & 1) == 0) {
    VVar1 = this[0x60];
  }
  else {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ff1444 with catch @ 00ff1530
                        */
    operator_delete(*(void **)(this + 0x88));
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ff14b0 with catch @ 00ff1534
                        */
    VVar1 = this[0x60];
  }
  if (((byte)VVar1 & 1) == 0) {
    VVar1 = this[0x30];
  }
  else {
    operator_delete(*(void **)(this + 0x70));
    VVar1 = this[0x30];
  }
  if (((byte)VVar1 & 1) == 0) {
    return;
  }
                    /* try { // try from 00ff1550 to 010f1553 has its CatchHandler @ 00ff1564 */
                    /* try { // try from 00ff1554 to 010f1577 has its CatchHandler @ 00ff13f4 */
  operator_delete(*(void **)(this + 0x40));
  return;
}

