
/* cocos2d::DeccelAmplitude::reverse() const */

void __thiscall cocos2d::DeccelAmplitude::reverse(DeccelAmplitude *this)

{
  Action *pAVar1;
  
  pAVar1 = (Action *)(**(code **)(**(long **)(this + 0x60) + 0x20))();
  create(pAVar1,*(float *)(this + 0x4c));
  return;
}

