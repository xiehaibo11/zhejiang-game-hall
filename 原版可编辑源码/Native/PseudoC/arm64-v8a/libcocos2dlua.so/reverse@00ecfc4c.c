
/* cocos2d::EaseBackIn::reverse() const */

void __thiscall cocos2d::EaseBackIn::reverse(EaseBackIn *this)

{
  ActionInterval *pAVar1;
  
  pAVar1 = (ActionInterval *)(**(code **)(**(long **)(this + 0x58) + 0x20))();
  EaseBackOut::create(pAVar1);
  return;
}

