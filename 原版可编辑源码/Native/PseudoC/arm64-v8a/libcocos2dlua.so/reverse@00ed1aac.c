
/* cocos2d::EaseElasticIn::reverse() const */

void __thiscall cocos2d::EaseElasticIn::reverse(EaseElasticIn *this)

{
  ActionInterval *pAVar1;
  
  pAVar1 = (ActionInterval *)(**(code **)(**(long **)(this + 0x58) + 0x20))();
  EaseElasticOut::create(pAVar1,*(float *)(this + 0x60));
  return;
}

