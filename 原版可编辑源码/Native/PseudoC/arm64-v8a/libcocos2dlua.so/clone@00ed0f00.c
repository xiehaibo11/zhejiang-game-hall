
/* cocos2d::EaseCircleActionInOut::clone() const */

void __thiscall cocos2d::EaseCircleActionInOut::clone(EaseCircleActionInOut *this)

{
  ActionInterval *pAVar1;
  
  if (*(long **)(this + 0x58) != (long *)0x0) {
    pAVar1 = (ActionInterval *)(**(code **)(**(long **)(this + 0x58) + 0x18))();
                    /* try { // try from 00ed0f20 to 00fd0f2f has its CatchHandler @ 00ed112c */
    create(pAVar1);
    return;
  }
  return;
}

