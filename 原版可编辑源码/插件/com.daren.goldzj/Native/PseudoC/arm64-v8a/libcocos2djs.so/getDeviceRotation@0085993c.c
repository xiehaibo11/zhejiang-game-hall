
/* cocos2d::Device::getDeviceRotation() */

int cocos2d::Device::getDeviceRotation(void)

{
  long lVar1;
  int iVar2;
  basic_string local_58;
  undefined7 uStack_57;
  undefined1 uStack_50;
  undefined7 uStack_4f;
  undefined1 uStack_48;
  undefined2 uStack_47;
  undefined5 uStack_45;
  ulong local_40 [2];
  char *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = operator_new(0x20);
  local_40[1] = 0x1f;
  local_40[0] = 0x21;
  builtin_strncpy(local_30,"org/cocos2dx/lib/Cocos2dxHelper",0x20);
  local_58 = (basic_string)0x22;
  uStack_45 = 0;
  uStack_4f = 0x697461746f5265;
  uStack_48 = 0x6f;
  uStack_57 = 0x69766544746567;
  uStack_50 = 99;
  uStack_47 = 0x6e;
  iVar2 = JniHelper::callStaticIntMethod<>((basic_string *)local_40,&local_58);
  if (((byte)local_58 & 1) != 0) {
    operator_delete((void *)CONCAT53(uStack_45,CONCAT21(uStack_47,uStack_48)));
  }
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

