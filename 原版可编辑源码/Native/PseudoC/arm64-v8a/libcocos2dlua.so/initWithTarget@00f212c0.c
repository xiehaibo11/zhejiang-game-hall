
/* cocos2d::MenuItemToggle::initWithTarget(cocos2d::Ref*, void (cocos2d::Ref::*)(cocos2d::Ref*),
   cocos2d::MenuItem*, std::__va_list) */

undefined8
cocos2d::MenuItemToggle::initWithTarget
          (MenuItemToggle *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 *param_6)

{
  long lVar1;
  code *pcVar2;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined **local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined ***local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_60 = &PTR_FUN_016d1d18;
  uStack_78 = param_6[1];
  local_80 = *param_6;
  uStack_68 = param_6[3];
  uStack_70 = param_6[2];
  uStack_58 = param_3;
  local_50 = param_4;
  uStack_48 = param_2;
  local_40 = &local_60;
  initWithCallback(param_1,&local_60,param_5,&local_80);
  if (&local_60 == local_40) {
    pcVar2 = (code *)(*local_40)[4];
  }
  else {
    if (local_40 == (undefined ***)0x0) goto LAB_00f21338;
    pcVar2 = (code *)(*local_40)[5];
  }
  (*pcVar2)();
LAB_00f21338:
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

