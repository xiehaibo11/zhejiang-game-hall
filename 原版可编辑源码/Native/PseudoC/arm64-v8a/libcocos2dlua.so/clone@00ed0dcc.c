
/* covariant return thunk to cocos2d::EaseCircleActionOut::clone() const */

long __thiscall cocos2d::EaseCircleActionOut::clone(EaseCircleActionOut *this)

{
  long lVar1;
  ActionInterval *pAVar2;
  long lVar3;
  
  lVar3 = 0;
  if (*(long **)(this + 0x30) != (long *)0x0) {
                    /* try { // try from 00ed0ddc to 00fd0deb has its CatchHandler @ 00ed1150 */
    pAVar2 = (ActionInterval *)(**(code **)(**(long **)(this + 0x30) + 0x18))();
    lVar3 = create(pAVar2);
  }
  lVar1 = 0;
  if (lVar3 != 0) {
    lVar1 = lVar3 + 0x28;
  }
  return lVar1;
}

