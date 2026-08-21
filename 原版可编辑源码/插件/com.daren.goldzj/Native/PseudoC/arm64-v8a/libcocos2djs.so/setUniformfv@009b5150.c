
/* cocos2d::renderer::DeviceGraphics::setUniformfv(unsigned long, unsigned long, float const*,
   unsigned long) */

void __thiscall
cocos2d::renderer::DeviceGraphics::setUniformfv
          (DeviceGraphics *this,ulong param_1,ulong param_2,float *param_3,ulong param_4)

{
                    /* try { // try from 009b5158 to 00ab52df has its CatchHandler @ 009b536c */
  setUniform(this,param_1,param_3,param_2 << 2,0,param_4);
  return;
}

