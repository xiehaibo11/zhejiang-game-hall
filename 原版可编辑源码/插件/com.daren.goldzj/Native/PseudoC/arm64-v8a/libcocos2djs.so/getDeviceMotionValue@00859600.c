
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* cocos2d::Device::getDeviceMotionValue() */

undefined * cocos2d::Device::getDeviceMotionValue(void)

{
  long lVar1;
  float *pfVar2;
  basic_string local_58;
  undefined7 uStack_57;
  undefined1 uStack_50;
  undefined7 uStack_4f;
  undefined1 uStack_48;
  undefined4 uStack_47;
  undefined1 uStack_43;
  undefined2 uStack_42;
  ulong local_40 [2];
  char *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = operator_new(0x20);
  local_40[1] = 0x1f;
  local_40[0] = 0x21;
  local_58 = (basic_string)0x28;
  builtin_strncpy(local_30,"org/cocos2dx/lib/Cocos2dxHelper",0x20);
  uStack_42 = 0;
  uStack_47 = 0x65756c61;
  uStack_4f = 0x6e6f69746f4d65;
  uStack_48 = 0x56;
  uStack_57 = 0x69766544746567;
  uStack_50 = 99;
  uStack_43 = 0;
  pfVar2 = JniHelper::callStaticFloatArrayMethod<>((basic_string *)local_40,&local_58);
  if (((byte)local_58 & 1) != 0) {
    operator_delete((void *)CONCAT26(uStack_42,CONCAT15(uStack_43,CONCAT41(uStack_47,uStack_48))));
  }
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  uRam0000000001d35a38 = *(undefined8 *)(pfVar2 + 2);
  _DAT_01d35a30 = *(undefined8 *)pfVar2;
  uRam0000000001d35a48 = *(undefined8 *)(pfVar2 + 6);
  _DAT_01d35a40 = *(undefined8 *)(pfVar2 + 4);
  DAT_01d35a50 = pfVar2[8];
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return &DAT_01d35a30;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

