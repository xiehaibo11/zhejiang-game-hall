
/* covariant return thunk to cocos2d::Waves::clone() const */

long __thiscall cocos2d::Waves::clone(Waves *this)

{
  long lVar1;
  long lVar2;
  
                    /* try { // try from 00ed7ca0 to 00fd7cc3 has its CatchHandler @ 00ed8680 */
  lVar2 = clone(this + -0x28);
  lVar1 = 0;
  if (lVar2 != 0) {
    lVar1 = lVar2 + 0x28;
  }
  return lVar1;
}

