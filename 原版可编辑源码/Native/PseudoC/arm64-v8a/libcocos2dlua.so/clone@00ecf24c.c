
/* covariant return thunk to cocos2d::EaseExponentialInOut::clone() const */

long __thiscall cocos2d::EaseExponentialInOut::clone(EaseExponentialInOut *this)

{
  long lVar1;
  ActionInterval *pAVar2;
  long lVar3;
  
                    /* try { // try from 00ecf254 to 00fcf26b has its CatchHandler @ 00ecf2d0 */
  lVar3 = 0;
  if (*(long **)(this + 0x30) != (long *)0x0) {
    pAVar2 = (ActionInterval *)(**(code **)(**(long **)(this + 0x30) + 0x18))();
    lVar3 = create(pAVar2);
  }
                    /* try { // try from 00ecf26c to 00fcf2e3 has its CatchHandler @ 00ecf1b8 */
  lVar1 = 0;
  if (lVar3 != 0) {
    lVar1 = lVar3 + 0x28;
  }
  return lVar1;
}

