
/* cocos2d::EaseCircleActionIn::clone() const */

void __thiscall cocos2d::EaseCircleActionIn::clone(EaseCircleActionIn *this)

{
  ActionInterval *pAVar1;
  
  if (*(long **)(this + 0x58) != (long *)0x0) {
                    /* try { // try from 00ed0c50 to 00fd0c5f has its CatchHandler @ 00ed1178 */
    pAVar1 = (ActionInterval *)(**(code **)(**(long **)(this + 0x58) + 0x18))();
                    /* try { // try from 00ed0c60 to 00fd0c97 has its CatchHandler @ 00ed09fc */
    create(pAVar1);
    return;
  }
  return;
}

