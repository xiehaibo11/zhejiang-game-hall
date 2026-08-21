
/* cocos2d::Device::getNetworkType() */

int cocos2d::Device::getNetworkType(void)

{
  long lVar1;
  int iVar2;
  basic_string local_58;
  undefined6 uStack_57;
  undefined2 local_51;
  undefined6 uStack_4f;
  undefined1 local_49;
  void *local_48;
  ulong local_40 [2];
  char *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = operator_new(0x20);
  builtin_strncpy(local_30,"org/cocos2dx/lib/Cocos2dxHelper",0x20);
  local_58 = (basic_string)0x1c;
  local_48 = (void *)0x0;
  local_40[1] = 0x1f;
  local_40[0] = 0x21;
  uStack_4f = 0x657079546b72;
  uStack_57 = 0x74654e746567;
  local_51 = 0x6f77;
  local_49 = 0;
  iVar2 = JniHelper::callStaticIntMethod<>((basic_string *)local_40,&local_58);
  if (((byte)local_58 & 1) != 0) {
    operator_delete(local_48);
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

