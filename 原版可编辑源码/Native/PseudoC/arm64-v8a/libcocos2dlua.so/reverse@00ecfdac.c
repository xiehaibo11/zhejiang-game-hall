
/* cocos2d::EaseBackOut::reverse() const */

void __thiscall cocos2d::EaseBackOut::reverse(EaseBackOut *this)

{
  ActionInterval *pAVar1;
  
  pAVar1 = (ActionInterval *)(**(code **)(**(long **)(this + 0x58) + 0x20))();
  EaseBackIn::create(pAVar1);
  return;
}

