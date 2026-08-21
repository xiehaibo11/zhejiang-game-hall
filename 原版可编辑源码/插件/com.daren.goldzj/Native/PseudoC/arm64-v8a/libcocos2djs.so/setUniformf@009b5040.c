
/* cocos2d::renderer::DeviceGraphics::setUniformf(unsigned long, float, float) */

void __thiscall
cocos2d::renderer::DeviceGraphics::setUniformf
          (DeviceGraphics *this,ulong param_1,float param_2,float param_3)

{
  long lVar1;
  float local_30;
  float fStack_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = param_2;
  fStack_2c = param_3;
                    /* catch() { ... } // from try @ 009b4ed8 with catch @ 009b505c */
                    /* catch() { ... } // from try @ 009b4ecc with catch @ 009b5060 */
                    /* catch() { ... } // from try @ 009b4eac with catch @ 009b5064 */
  setUniform(this,param_1,&local_30,8,0,1);
                    /* catch() { ... } // from try @ 009b4ee4 with catch @ 009b5074 */
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

