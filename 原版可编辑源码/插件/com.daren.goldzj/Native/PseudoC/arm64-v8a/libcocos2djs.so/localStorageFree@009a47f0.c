
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* localStorageFree() */

void localStorageFree(void)

{
  long lVar1;
  basic_string local_58;
  undefined7 uStack_57;
  undefined1 uStack_50;
  undefined7 uStack_4f;
  void *local_48;
  ulong local_40 [2];
  char *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (DAT_01d37fac == '\x01') {
    local_30 = operator_new(0x30);
    uStack_4f = 0;
    local_58 = (basic_string)0xe;
    local_40[1] = 0x25;
    local_40[0] = 0x31;
    builtin_strncpy(local_30,"org/cocos2dx/lib/Cocos2dxLocalStorage",0x26);
    local_48 = (void *)0x0;
    uStack_57 = 0x796f7274736564;
    uStack_50 = 0;
    cocos2d::JniHelper::callStaticVoidMethod<>((basic_string *)local_40,&local_58);
    if (((byte)local_58 & 1) != 0) {
      operator_delete(local_48);
    }
    if ((local_40[0] & 1) != 0) {
      operator_delete(local_30);
    }
    DAT_01d37fac = '\0';
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

