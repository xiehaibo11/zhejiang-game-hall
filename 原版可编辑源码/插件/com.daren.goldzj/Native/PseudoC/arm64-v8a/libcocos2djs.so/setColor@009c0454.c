
/* cocos2d::renderer::Light::setColor(float, float, float) */

void __thiscall
cocos2d::renderer::Light::setColor(Light *this,float param_1,float param_2,float param_3)

{
  float fVar1;
  
  fVar1 = *(float *)(this + 0x1c);
  *(float *)(this + 0x10) = param_1;
  *(float *)(this + 0x14) = param_2;
  *(float *)(this + 0x18) = param_3;
  *(float *)(this + 0x44) = fVar1 * param_1;
  *(float *)(this + 0x48) = fVar1 * param_2;
  *(float *)(this + 0x4c) = fVar1 * param_3;
  return;
}

