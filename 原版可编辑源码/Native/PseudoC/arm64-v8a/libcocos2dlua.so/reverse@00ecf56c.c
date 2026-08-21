
/* cocos2d::EaseSineOut::reverse() const */

void __thiscall cocos2d::EaseSineOut::reverse(EaseSineOut *this)

{
  ActionInterval *pAVar1;
  
  pAVar1 = (ActionInterval *)(**(code **)(**(long **)(this + 0x58) + 0x20))();
  EaseSineIn::create(pAVar1);
  return;
}

