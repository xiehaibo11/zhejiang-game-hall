
/* cocos2d::Device::getDPI() */

void cocos2d::Device::getDPI(void)

{
  long lVar1;
  basic_string local_58;
  undefined4 local_57;
  undefined2 local_53;
  undefined1 local_51;
  undefined8 local_50;
  void *local_48;
  ulong local_40 [2];
  char *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (DAT_01d1b010 == -1) {
    local_30 = operator_new(0x20);
    local_40[1] = 0x1f;
    local_40[0] = 0x21;
    local_58 = (basic_string)0xc;
    local_53 = 0x4950;
    builtin_strncpy(local_30,"org/cocos2dx/lib/Cocos2dxHelper",0x20);
    local_50 = 0;
    local_48 = (void *)0x0;
    local_57 = 0x44746567;
    local_51 = 0;
    DAT_01d1b010 = JniHelper::callStaticIntMethod<>((basic_string *)local_40,&local_58);
    if (((byte)local_58 & 1) != 0) {
      operator_delete(local_48);
    }
    if ((local_40[0] & 1) != 0) {
      operator_delete(local_30);
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(DAT_01d1b010);
  }
  return;
}

