
/* covariant return thunk to cocos2d::RotateTo::clone() const */

long __thiscall cocos2d::RotateTo::clone(RotateTo *this)

{
  long lVar1;
  long lVar2;
  
  lVar2 = clone(this + -0x28);
  lVar1 = 0;
  if (lVar2 != 0) {
    lVar1 = lVar2 + 0x28;
  }
                    /* try { // try from 00edeb8c to 00fdec0b has its CatchHandler @ 00edea9c */
  return lVar1;
}

