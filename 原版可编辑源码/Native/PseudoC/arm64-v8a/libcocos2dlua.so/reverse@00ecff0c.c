
/* cocos2d::EaseBackInOut::reverse() const */

void __thiscall cocos2d::EaseBackInOut::reverse(EaseBackInOut *this)

{
  ActionInterval *pAVar1;
  
  pAVar1 = (ActionInterval *)(**(code **)(**(long **)(this + 0x58) + 0x20))();
  create(pAVar1);
  return;
}

