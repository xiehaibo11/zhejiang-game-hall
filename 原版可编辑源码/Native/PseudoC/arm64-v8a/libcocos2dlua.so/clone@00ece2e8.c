
/* covariant return thunk to cocos2d::CatmullRomTo::clone() const */

long __thiscall cocos2d::CatmullRomTo::clone(CatmullRomTo *this)

{
  long lVar1;
  long lVar2;
  
  lVar2 = clone(this + -0x28);
  lVar1 = 0;
  if (lVar2 != 0) {
    lVar1 = lVar2 + 0x28;
  }
                    /* try { // try from 00ece304 to 00fce363 has its CatchHandler @ 00ece304
                       catch() { ... } // from try @ 00ece304 with catch @ 00ece304
                       catch() { ... } // from try @ 00ece474 with catch @ 00ece304 */
  return lVar1;
}

