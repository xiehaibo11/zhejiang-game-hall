
/* cocos2d::EaseBounceOut::reverse() const */

void __thiscall cocos2d::EaseBounceOut::reverse(EaseBounceOut *this)

{
  ActionInterval *pAVar1;
  
  pAVar1 = (ActionInterval *)(**(code **)(**(long **)(this + 0x58) + 0x20))();
  EaseBounceIn::create(pAVar1);
  return;
}

