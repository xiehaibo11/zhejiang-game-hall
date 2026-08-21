
/* cocos2d::EaseCircleActionOut::reverse() const */

void __thiscall cocos2d::EaseCircleActionOut::reverse(EaseCircleActionOut *this)

{
  ActionInterval *pAVar1;
  
  pAVar1 = (ActionInterval *)(**(code **)(**(long **)(this + 0x58) + 0x20))();
                    /* try { // try from 00ed0e48 to 00fd0e57 has its CatchHandler @ 00ed1144 */
  create(pAVar1);
  return;
}

