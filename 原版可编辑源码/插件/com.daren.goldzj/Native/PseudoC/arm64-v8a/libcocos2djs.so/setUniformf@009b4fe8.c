
/* cocos2d::renderer::DeviceGraphics::setUniformf(unsigned long, float) */

void __thiscall
cocos2d::renderer::DeviceGraphics::setUniformf(DeviceGraphics *this,ulong param_1,float param_2)

{
  long lVar1;
  float local_2c;
  long local_28;
  
                    /* try { // try from 009b4fe8 to 00ab50cb has its CatchHandler @ 009b4e58 */
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_2c = param_2;
  setUniform(this,param_1,&local_2c,4,0,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

