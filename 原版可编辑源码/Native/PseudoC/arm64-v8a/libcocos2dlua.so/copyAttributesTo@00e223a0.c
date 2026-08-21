
/* cocos2d::PUAlignAffector::copyAttributesTo(cocos2d::PUAffector*) */

void __thiscall
cocos2d::PUAlignAffector::copyAttributesTo(PUAlignAffector *this,PUAffector *param_1)

{
  PUAffector::copyAttributesTo((PUAffector *)this,param_1);
  *(PUAlignAffector *)(param_1 + 0xac) = this[0xac];
  return;
}

