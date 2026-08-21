
/* cocos2d::EaseElasticOut::reverse() const */

void __thiscall cocos2d::EaseElasticOut::reverse(EaseElasticOut *this)

{
  ActionInterval *pAVar1;
  
  pAVar1 = (ActionInterval *)(**(code **)(**(long **)(this + 0x58) + 0x20))();
  EaseElasticIn::create(pAVar1,*(float *)(this + 0x60));
  return;
}

