
/* cocos2d::EaseCircleActionIn::reverse() const */

void __thiscall cocos2d::EaseCircleActionIn::reverse(EaseCircleActionIn *this)

{
  ActionInterval *pAVar1;
  
                    /* try { // try from 00ed0ccc to 00fd0d03 has its CatchHandler @ 00ed09fc */
  pAVar1 = (ActionInterval *)(**(code **)(**(long **)(this + 0x58) + 0x20))();
  create(pAVar1);
  return;
}

