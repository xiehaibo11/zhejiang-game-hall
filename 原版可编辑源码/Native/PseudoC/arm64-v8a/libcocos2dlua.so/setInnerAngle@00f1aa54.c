
/* cocos2d::SpotLight::setInnerAngle(float) */

void __thiscall cocos2d::SpotLight::setInnerAngle(SpotLight *this,float param_1)

{
  float fVar1;
  
  *(float *)(this + 0x308) = param_1;
  fVar1 = cosf(param_1);
  *(float *)(this + 0x30c) = fVar1;
  return;
}

