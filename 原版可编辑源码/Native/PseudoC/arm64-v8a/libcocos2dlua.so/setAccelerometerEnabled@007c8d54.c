
/* cocos2d::Device::setAccelerometerEnabled(bool) */

void cocos2d::Device::setAccelerometerEnabled(bool param_1)

{
  long lVar1;
  basic_string local_40;
  undefined7 uStack_3f;
  undefined1 uStack_38;
  undefined7 uStack_37;
  undefined4 uStack_30;
  undefined1 uStack_2c;
  undefined1 uStack_2b;
  undefined2 uStack_2a;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (param_1) {
    local_40 = (basic_string)0x26;
    uStack_37 = 0x6d6f72656c6563;
    uStack_30 = 0x72657465;
    uStack_3f = 0x41656c62616e65;
    uStack_38 = 99;
    uStack_2c = 0;
  }
  else {
    local_40 = (basic_string)0x28;
    uStack_2c = 0x72;
    uStack_37 = 0x6f72656c656363;
    uStack_30 = 0x6574656d;
    uStack_3f = 0x656c6261736964;
    uStack_38 = 0x41;
  }
  uStack_2b = 0;
  uStack_2a = 0;
  JniHelper::callStaticVoidMethod<>((basic_string *)&DAT_01781a98,&local_40);
  if (((byte)local_40 & 1) != 0) {
    operator_delete((void *)CONCAT26(uStack_2a,CONCAT15(uStack_2b,CONCAT14(uStack_2c,uStack_30))));
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

