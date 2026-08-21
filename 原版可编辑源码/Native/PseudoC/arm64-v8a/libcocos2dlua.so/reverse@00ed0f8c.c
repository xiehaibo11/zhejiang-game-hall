
/* cocos2d::EaseCircleActionInOut::reverse() const */

void __thiscall cocos2d::EaseCircleActionInOut::reverse(EaseCircleActionInOut *this)

{
  ActionInterval *pAVar1;
  
                    /* try { // try from 00ed0f8c to 00fd0f9b has its CatchHandler @ 00ed1120 */
  pAVar1 = (ActionInterval *)(**(code **)(**(long **)(this + 0x58) + 0x20))();
  create(pAVar1);
  return;
}

