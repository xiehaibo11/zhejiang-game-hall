
/* cocos2d::renderer::DeviceGraphics::setUniformi(unsigned long, int, int, int) */

void __thiscall
cocos2d::renderer::DeviceGraphics::setUniformi
          (DeviceGraphics *this,ulong param_1,int param_2,int param_3,int param_4)

{
  long lVar1;
  int local_34;
  int iStack_30;
  int local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_34 = param_2;
  iStack_30 = param_3;
  local_2c = param_4;
  setUniform(this,param_1,&local_34,0xc,1,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

