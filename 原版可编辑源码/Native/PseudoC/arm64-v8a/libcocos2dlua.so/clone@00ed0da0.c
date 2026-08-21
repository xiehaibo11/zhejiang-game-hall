
/* cocos2d::EaseCircleActionOut::clone() const */

void __thiscall cocos2d::EaseCircleActionOut::clone(EaseCircleActionOut *this)

{
  ActionInterval *pAVar1;
  
                    /* try { // try from 00ed0da4 to 00fd0ddb has its CatchHandler @ 00ed09fc */
  if (*(long **)(this + 0x58) != (long *)0x0) {
    pAVar1 = (ActionInterval *)(**(code **)(**(long **)(this + 0x58) + 0x18))();
    create(pAVar1);
    return;
  }
  return;
}

