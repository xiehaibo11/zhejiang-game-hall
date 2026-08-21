
/* cocos2d::SpotLight::setOuterAngle(float) */

void __thiscall cocos2d::SpotLight::setOuterAngle(SpotLight *this,float param_1)

{
  float fVar1;
  
  *(float *)(this + 0x310) = param_1;
  fVar1 = cosf(param_1);
  *(float *)(this + 0x314) = fVar1;
  return;
}

