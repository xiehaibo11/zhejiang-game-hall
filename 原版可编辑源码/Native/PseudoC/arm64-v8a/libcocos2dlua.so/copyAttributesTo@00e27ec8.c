
/* cocos2d::PUGravityAffector::copyAttributesTo(cocos2d::PUAffector*) */

void __thiscall
cocos2d::PUGravityAffector::copyAttributesTo(PUGravityAffector *this,PUAffector *param_1)

{
  PUAffector::copyAttributesTo((PUAffector *)this,param_1);
  *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(this + 0xac);
  return;
}

