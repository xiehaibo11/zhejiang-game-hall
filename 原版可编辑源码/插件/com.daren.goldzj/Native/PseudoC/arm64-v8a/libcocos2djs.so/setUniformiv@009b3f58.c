
/* cocos2d::renderer::DeviceGraphics::setUniformiv(unsigned long, unsigned long, int const*,
   unsigned long) */

void __thiscall
cocos2d::renderer::DeviceGraphics::setUniformiv
          (DeviceGraphics *this,ulong param_1,ulong param_2,int *param_3,ulong param_4)

{
  setUniform(this,param_1,param_3,param_2 << 2,1,param_4);
  return;
}

