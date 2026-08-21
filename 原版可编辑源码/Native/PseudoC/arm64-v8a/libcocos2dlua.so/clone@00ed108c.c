
/* covariant return thunk to cocos2d::EaseCubicActionIn::clone() const */

long __thiscall cocos2d::EaseCubicActionIn::clone(EaseCubicActionIn *this)

{
  long lVar1;
  ActionInterval *pAVar2;
  long lVar3;
  
                    /* try { // try from 00ed1098 to 00fd12a7 has its CatchHandler @ 00ed09fc */
  lVar3 = 0;
  if (*(long **)(this + 0x30) != (long *)0x0) {
    pAVar2 = (ActionInterval *)(**(code **)(**(long **)(this + 0x30) + 0x18))();
    lVar3 = create(pAVar2);
  }
  lVar1 = 0;
  if (lVar3 != 0) {
    lVar1 = lVar3 + 0x28;
  }
  return lVar1;
}

