
/* covariant return thunk to cocos2d::ProgressTo::clone() const */

long __thiscall cocos2d::ProgressTo::clone(ProgressTo *this)

{
  long lVar1;
  long lVar2;
  
  lVar2 = clone(this + -0x28);
  lVar1 = 0;
  if (lVar2 != 0) {
    lVar1 = lVar2 + 0x28;
  }
                    /* try { // try from 00ee81b0 to 00fe81d7 has its CatchHandler @ 00ee82b8 */
  return lVar1;
}

