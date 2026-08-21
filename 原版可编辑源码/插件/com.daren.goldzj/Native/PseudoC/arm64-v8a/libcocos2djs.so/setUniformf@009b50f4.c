
/* cocos2d::renderer::DeviceGraphics::setUniformf(unsigned long, float, float, float, float) */

void __thiscall
cocos2d::renderer::DeviceGraphics::setUniformf
          (DeviceGraphics *this,ulong param_1,float param_2,float param_3,float param_4,
          float param_5)

{
  long lVar1;
  float local_38;
  float fStack_34;
  float local_30;
  float fStack_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_38 = param_2;
  fStack_34 = param_3;
  local_30 = param_4;
  fStack_2c = param_5;
                    /* try { // try from 009b5120 to 00ab5137 has its CatchHandler @ 009b535c */
  setUniform(this,param_1,&local_38,0x10,0,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* try { // try from 009b5140 to 00ab514b has its CatchHandler @ 009b5358 */
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 009b514c to 00ab5157 has its CatchHandler @ 009b5354 */
  __stack_chk_fail();
}

