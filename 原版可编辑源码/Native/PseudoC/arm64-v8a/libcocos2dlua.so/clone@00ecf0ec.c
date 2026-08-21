
/* covariant return thunk to cocos2d::EaseExponentialOut::clone() const */

long __thiscall cocos2d::EaseExponentialOut::clone(EaseExponentialOut *this)

{
  long lVar1;
  ActionInterval *pAVar2;
  long lVar3;
  
  lVar3 = 0;
  if (*(long **)(this + 0x30) != (long *)0x0) {
    pAVar2 = (ActionInterval *)(**(code **)(**(long **)(this + 0x30) + 0x18))();
                    /* try { // try from 00ecf108 to 00fcf10f has its CatchHandler @ 00ecf184 */
    lVar3 = create(pAVar2);
  }
                    /* try { // try from 00ecf110 to 00fcf19f has its CatchHandler @ 00ecf0e0 */
  lVar1 = 0;
  if (lVar3 != 0) {
    lVar1 = lVar3 + 0x28;
  }
  return lVar1;
}

