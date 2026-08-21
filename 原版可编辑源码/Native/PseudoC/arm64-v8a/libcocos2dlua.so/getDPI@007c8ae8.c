
/* cocos2d::Device::getDPI() */

void cocos2d::Device::getDPI(void)

{
  long lVar1;
  basic_string local_40;
  undefined4 local_3f;
  undefined2 local_3b;
  undefined1 local_39;
  undefined8 local_38;
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (DAT_01769008 == -1) {
    local_38 = 0;
    local_30 = (void *)0x0;
    local_40 = (basic_string)0xc;
    local_3f = 0x44746567;
    local_3b = 0x4950;
    local_39 = 0;
    DAT_01769008 = JniHelper::callStaticIntMethod<>((basic_string *)&DAT_01781a98,&local_40);
    if (((byte)local_40 & 1) != 0) {
      operator_delete(local_30);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(DAT_01769008);
}

