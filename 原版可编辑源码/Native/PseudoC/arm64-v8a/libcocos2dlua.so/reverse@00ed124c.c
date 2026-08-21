
/* cocos2d::EaseCubicActionOut::reverse() const */

void __thiscall cocos2d::EaseCubicActionOut::reverse(EaseCubicActionOut *this)

{
  ActionInterval *pAVar1;
  
  pAVar1 = (ActionInterval *)(**(code **)(**(long **)(this + 0x58) + 0x20))();
  create(pAVar1);
  return;
}

