
void Java_org_cocos2dx_lib_Cocos2dxEditBox_onKeyboardInputNative
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong local_48 [2];
  void *local_38;
  undefined8 uStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_38 = (void *)0x0;
  local_48[1] = 0;
  local_48[0] = 0x7475706e690a;
  uStack_30 = param_3;
  FUN_0091c9c0(local_48,&uStack_30);
  if ((local_48[0] & 1) != 0) {
    operator_delete(local_38);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

