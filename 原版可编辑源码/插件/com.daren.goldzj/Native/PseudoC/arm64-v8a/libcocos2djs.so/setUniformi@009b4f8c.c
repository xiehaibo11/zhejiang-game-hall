
/* cocos2d::renderer::DeviceGraphics::setUniformi(unsigned long, int, int, int, int) */

void __thiscall
cocos2d::renderer::DeviceGraphics::setUniformi
          (DeviceGraphics *this,ulong param_1,int param_2,int param_3,int param_4,int param_5)

{
  long lVar1;
  int local_38;
  int iStack_34;
  int local_30;
  int iStack_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_38 = param_2;
  iStack_34 = param_3;
  local_30 = param_4;
  iStack_2c = param_5;
  setUniform(this,param_1,&local_38,0x10,1,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

