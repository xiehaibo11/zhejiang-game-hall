
/* cocos2d::EaseBounceIn::reverse() const */

void __thiscall cocos2d::EaseBounceIn::reverse(EaseBounceIn *this)

{
  ActionInterval *pAVar1;
  
  pAVar1 = (ActionInterval *)(**(code **)(**(long **)(this + 0x58) + 0x20))();
  EaseBounceOut::create(pAVar1);
  return;
}

