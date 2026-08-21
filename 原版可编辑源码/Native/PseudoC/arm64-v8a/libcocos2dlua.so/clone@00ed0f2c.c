
/* covariant return thunk to cocos2d::EaseCircleActionInOut::clone() const */

long __thiscall cocos2d::EaseCircleActionInOut::clone(EaseCircleActionInOut *this)

{
  long lVar1;
  ActionInterval *pAVar2;
  long lVar3;
  
  lVar3 = 0;
  if (*(long **)(this + 0x30) != (long *)0x0) {
                    /* try { // try from 00ed0f44 to 00fd0f53 has its CatchHandler @ 00ed1124 */
    pAVar2 = (ActionInterval *)(**(code **)(**(long **)(this + 0x30) + 0x18))();
    lVar3 = create(pAVar2);
  }
                    /* try { // try from 00ed0f54 to 00fd0f8b has its CatchHandler @ 00ed09fc */
  lVar1 = 0;
  if (lVar3 != 0) {
    lVar1 = lVar3 + 0x28;
  }
  return lVar1;
}

