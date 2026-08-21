
/* covariant return thunk to cocos2d::PageTurn3D::clone() const */

long __thiscall cocos2d::PageTurn3D::clone(PageTurn3D *this)

{
  long lVar1;
  long lVar2;
  
                    /* catch() { ... } // from try @ 00ee7c70 with catch @ 00ee7cbc */
  lVar2 = create(*(float *)(this + 0x24),(Size *)(this + 0x30));
  lVar1 = 0;
  if (lVar2 != 0) {
    lVar1 = lVar2 + 0x28;
  }
                    /* try { // try from 00ee7cd8 to 00fe7d13 has its CatchHandler @ 00ee7cd8
                       catch() { ... } // from try @ 00ee7cd8 with catch @ 00ee7cd8
                       catch() { ... } // from try @ 00ee7d28 with catch @ 00ee7cd8 */
  return lVar1;
}

