
/* cocos2d::EaseExponentialIn::reverse() const */

void __thiscall cocos2d::EaseExponentialIn::reverse(EaseExponentialIn *this)

{
  ActionInterval *pAVar1;
  
  pAVar1 = (ActionInterval *)(**(code **)(**(long **)(this + 0x58) + 0x20))();
  EaseExponentialOut::create(pAVar1);
  return;
}

