
/* covariant return thunk to cocos2d::Twirl::clone() const */

long __thiscall cocos2d::Twirl::clone(Twirl *this)

{
  long lVar1;
  long lVar2;
  
                    /* try { // try from 00ed80c8 to 00fd80cf has its CatchHandler @ 00ed8600 */
  lVar2 = clone(this + -0x28);
  lVar1 = 0;
  if (lVar2 != 0) {
    lVar1 = lVar2 + 0x28;
  }
  return lVar1;
}

