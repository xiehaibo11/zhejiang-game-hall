
/* cocos2d::PUBaseForceAffector::copyAttributesTo(cocos2d::PUAffector*) */

void __thiscall
cocos2d::PUBaseForceAffector::copyAttributesTo(PUBaseForceAffector *this,PUAffector *param_1)

{
  undefined8 uVar1;
  
  PUAffector::copyAttributesTo((PUAffector *)this,param_1);
  uVar1 = *(undefined8 *)(this + 0xac);
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(this + 0xb4);
  *(undefined8 *)(param_1 + 0xac) = uVar1;
  *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(this + 0xc4);
  return;
}

