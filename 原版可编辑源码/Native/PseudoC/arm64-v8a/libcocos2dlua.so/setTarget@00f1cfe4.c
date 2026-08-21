
/* cocos2d::MenuItem::setTarget(cocos2d::Ref*, void (cocos2d::Ref::*)(cocos2d::Ref*)) */

void cocos2d::MenuItem::setTarget(Ref *param_1,_func_void_Ref_ptr *param_2)

{
  long lVar1;
  code *pcVar2;
  undefined **local_90 [3];
  _func_void_Ref_ptr *local_78;
  long *local_70;
  undefined **local_60 [3];
  _func_void_Ref_ptr *local_48;
  undefined ***local_40;
  long local_28;
  
  local_70 = (long *)local_90;
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_90[0] = &PTR_FUN_016d1d18;
  local_78 = param_2;
  local_60[0] = local_90[0];
  local_48 = param_2;
  local_40 = local_60;
  FUN_00dad434(local_60,param_1 + 0x300);
  if (local_60 == local_40) {
    pcVar2 = (code *)(*local_40)[4];
LAB_00f1d060:
    (*pcVar2)();
  }
  else if (local_40 != (undefined ***)0x0) {
    pcVar2 = (code *)(*local_40)[5];
    goto LAB_00f1d060;
  }
  if (local_90 == (undefined ***)local_70) {
    pcVar2 = *(code **)(*local_70 + 0x20);
  }
  else {
    if (local_70 == (long *)0x0) goto LAB_00f1d090;
    pcVar2 = *(code **)(*local_70 + 0x28);
  }
  (*pcVar2)();
LAB_00f1d090:
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

