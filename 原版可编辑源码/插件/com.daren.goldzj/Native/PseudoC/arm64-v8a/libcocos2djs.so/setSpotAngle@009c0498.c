
/* cocos2d::renderer::Light::setSpotAngle(float) */

void __thiscall cocos2d::renderer::Light::setSpotAngle(Light *this,float param_1)

{
  float fVar1;
  
  *(float *)(this + 0x24) = param_1;
  fVar1 = cosf(param_1 * 0.5);
  *(float *)(this + 0x50) = fVar1;
  return;
}

