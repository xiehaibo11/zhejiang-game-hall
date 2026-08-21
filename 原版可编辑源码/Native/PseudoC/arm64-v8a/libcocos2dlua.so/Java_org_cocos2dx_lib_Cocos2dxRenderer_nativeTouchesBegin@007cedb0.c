
void Java_org_cocos2dx_lib_Cocos2dxRenderer_nativeTouchesBegin
               (undefined4 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
               int param_5)

{
  long lVar1;
  long lVar2;
  long local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_38 = (long)param_5;
  local_30 = param_2;
  uStack_2c = param_1;
  lVar2 = cocos2d::Director::getInstance();
  (**(code **)(**(long **)(lVar2 + 0x108) + 0xf8))
            (*(long **)(lVar2 + 0x108),1,&local_38,&uStack_2c,&local_30);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

