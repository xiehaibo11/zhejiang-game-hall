
/* cocos2d::renderer::Light::setIntensity(float) */

void __thiscall cocos2d::renderer::Light::setIntensity(Light *this,float param_1)

{
  *(float *)(this + 0x1c) = param_1;
  *(ulong *)(this + 0x44) =
       CONCAT44((float)((ulong)*(undefined8 *)(this + 0x10) >> 0x20) * param_1,
                (float)*(undefined8 *)(this + 0x10) * param_1);
  *(float *)(this + 0x4c) = *(float *)(this + 0x18) * param_1;
  return;
}

