
/* cocos2d::MenuItem::initWithTarget(cocos2d::Ref*, void (cocos2d::Ref::*)(cocos2d::Ref*)) */

undefined8 cocos2d::MenuItem::initWithTarget(Ref *param_1,_func_void_Ref_ptr *param_2)

{
  long lVar1;
  code *pcVar2;
  undefined **local_a0 [3];
  _func_void_Ref_ptr *p_Stack_88;
  long *local_80;
  long local_70 [4];
  long *local_50;
  long local_38;
  
  local_80 = (long *)local_a0;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_70[0] = 0x3f0000003f000000;
  local_a0[0] = &PTR_FUN_016d1d18;
  p_Stack_88 = param_2;
  (**(code **)(*(long *)param_1 + 0x148))(param_1,local_70);
  if (local_80 == (long *)0x0) {
    local_50 = (long *)0x0;
  }
  else if (local_a0 == (undefined ***)local_80) {
    local_50 = local_70;
    (**(code **)(*local_80 + 0x18))(local_80,local_70);
  }
  else {
    local_50 = (long *)(**(code **)(*local_80 + 0x10))();
  }
  FUN_00dad434(local_70,param_1 + 0x300);
  if (local_70 == local_50) {
    pcVar2 = *(code **)(*local_50 + 0x20);
LAB_00f1cdf4:
    (*pcVar2)();
  }
  else if (local_50 != (long *)0x0) {
    pcVar2 = *(code **)(*local_50 + 0x28);
    goto LAB_00f1cdf4;
  }
  *(undefined2 *)(param_1 + 0x2f8) = 0x100;
  if (local_a0 == (undefined ***)local_80) {
    pcVar2 = *(code **)(*local_80 + 0x20);
  }
  else {
    if (local_80 == (long *)0x0) goto LAB_00f1ce2c;
    pcVar2 = *(code **)(*local_80 + 0x28);
  }
  (*pcVar2)();
LAB_00f1ce2c:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

