
/* cocos2d::PUSineForceAffector::copyAttributesTo(cocos2d::PUAffector*) */

void __thiscall
cocos2d::PUSineForceAffector::copyAttributesTo(PUSineForceAffector *this,PUAffector *param_1)

{
  undefined8 uVar1;
  
  PUAffector::copyAttributesTo((PUAffector *)this,param_1);
  uVar1 = *(undefined8 *)(this + 200);
  *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(this + 0xd0);
  *(undefined8 *)(param_1 + 200) = uVar1;
  return;
}

