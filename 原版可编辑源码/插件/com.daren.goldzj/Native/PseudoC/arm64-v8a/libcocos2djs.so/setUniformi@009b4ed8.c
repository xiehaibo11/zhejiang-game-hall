
/* cocos2d::renderer::DeviceGraphics::setUniformi(unsigned long, int, int) */

void __thiscall
cocos2d::renderer::DeviceGraphics::setUniformi
          (DeviceGraphics *this,ulong param_1,int param_2,int param_3)

{
  long lVar1;
  int local_30;
  int iStack_2c;
  long local_28;
  
                    /* try { // try from 009b4ed8 to 00ab4ee3 has its CatchHandler @ 009b505c */
                    /* try { // try from 009b4ee4 to 00ab4fe7 has its CatchHandler @ 009b5074 */
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = param_2;
  iStack_2c = param_3;
  setUniform(this,param_1,&local_30,8,1,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

