
undefined8 Java_org_cocos2dx_lib_Cocos2dxActivity_getGLContextAttrs(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined8 uStack_4c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uStack_4c = 0;
  uStack_50 = 0;
  uStack_58 = 8;
  local_54 = 8;
  uStack_60 = 0x800000008;
  uVar2 = (**(code **)(*param_1 + 0x598))(param_1,7);
  (**(code **)(*param_1 + 0x698))(param_1,uVar2,0,7,&uStack_60);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

