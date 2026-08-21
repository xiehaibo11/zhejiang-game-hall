
void Java_org_cocos2dx_lib_Cocos2dxEditBox_onKeyboardCompleteNative
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  byte local_48 [16];
  void *local_38;
  undefined8 uStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_38 = (void *)0x0;
  local_48[10] = 0;
  local_48[0xb] = 0;
  local_48[0xc] = 0;
  local_48[0xd] = 0;
  local_48[0xe] = 0;
  local_48[0xf] = 0;
  local_48[0] = 0x10;
  local_48[1] = 99;
  local_48[2] = 0x6f;
  local_48[3] = 0x6d;
  local_48[4] = 0x70;
  local_48[5] = 0x6c;
  local_48[6] = 0x65;
  local_48[7] = 0x74;
  local_48[8] = 0x65;
  local_48[9] = 0;
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

