
/* cocos2d::renderer::DeviceGraphics::setUniformf(unsigned long, float, float, float) */

void __thiscall
cocos2d::renderer::DeviceGraphics::setUniformf
          (DeviceGraphics *this,ulong param_1,float param_2,float param_3,float param_4)

{
  long lVar1;
  float local_34;
  float fStack_30;
  float local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_34 = param_2;
  fStack_30 = param_3;
  local_2c = param_4;
                    /* try { // try from 009b50cc to 00ab511f has its CatchHandler @ 009b50cc
                       catch() { ... } // from try @ 009b50cc with catch @ 009b50cc
                       catch() { ... } // from try @ 009b52e0 with catch @ 009b50cc */
  setUniform(this,param_1,&local_34,0xc,0,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

