
/* cocos2d::PUScaleAffector::calculateScale(cocos2d::PUDynamicAttribute*, cocos2d::PUParticle3D*) */

undefined1  [16] __thiscall
cocos2d::PUScaleAffector::calculateScale
          (PUScaleAffector *this,PUDynamicAttribute *param_1,PUParticle3D *param_2)

{
  PUParticle3D *pPVar1;
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar2 [16];
  
  if (param_2 != (PUParticle3D *)0x0) {
    if (this[0xd5] == (PUScaleAffector)0x0) {
      pPVar1 = param_2 + 0x134;
    }
    else {
      pPVar1 = (PUParticle3D *)(*(long *)(this + 0x28) + 0x440);
    }
    PUDynamicAttributeHelper::calculate
              ((PUDynamicAttributeHelper *)(this + 0xd4),param_1,*(float *)pPVar1,0.0);
    auVar2._4_4_ = extraout_var;
    auVar2._0_4_ = extraout_s0;
    auVar2._8_8_ = extraout_var_00;
    return auVar2;
  }
  return ZEXT816(0);
}

