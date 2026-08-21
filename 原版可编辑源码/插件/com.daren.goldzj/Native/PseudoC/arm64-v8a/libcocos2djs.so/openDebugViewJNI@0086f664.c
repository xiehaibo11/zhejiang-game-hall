
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* openDebugViewJNI() */

void openDebugViewJNI(void)

{
  long lVar1;
  basic_string local_60;
  undefined5 uStack_5f;
  undefined2 uStack_5a;
  undefined1 uStack_58;
  undefined5 uStack_57;
  undefined1 uStack_52;
  undefined1 uStack_51;
  char *local_50;
  ulong local_40 [2];
  char *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if ((DAT_01d35b70 & 1) == 0) {
    __android_log_print(3,"JniImp","openDebugViewJNI ...");
    DAT_01d35b70 = 1;
    local_30 = operator_new(0x20);
    uStack_51 = 0;
    local_60 = (basic_string)0x1a;
    builtin_strncpy(local_30,"org/cocos2dx/lib/Cocos2dxHelper",0x20);
    local_50 = (char *)0x0;
    local_40[1] = 0x1f;
    local_40[0] = 0x21;
    uStack_57 = 0x7765695667;
    uStack_5f = 0x446e65706f;
    uStack_5a = 0x6265;
    uStack_58 = 0x75;
    uStack_52 = 0;
    cocos2d::JniHelper::callStaticVoidMethod<>((basic_string *)local_40,&local_60);
    if (((byte)local_60 & 1) != 0) {
      operator_delete(local_50);
    }
    if ((local_40[0] & 1) != 0) {
      operator_delete(local_30);
    }
    if (DAT_01d35b71 == '\x01') {
      local_30 = operator_new(0x20);
      builtin_strncpy(local_30,"org/cocos2dx/lib/Cocos2dxHelper",0x20);
      local_40[1] = 0x1f;
      local_40[0] = 0x21;
      local_50 = operator_new(0x20);
      builtin_strncpy(local_50,"disableBatchGLCommandsToNative",0x1f);
      uStack_58 = 0x1e;
      uStack_57 = 0;
      uStack_52 = 0;
      uStack_51 = 0;
      local_60 = (basic_string)0x21;
      uStack_5f = 0;
      uStack_5a = 0;
      cocos2d::JniHelper::callStaticVoidMethod<>((basic_string *)local_40,&local_60);
      if (((byte)local_60 & 1) != 0) {
        operator_delete(local_50);
      }
      if ((local_40[0] & 1) != 0) {
        operator_delete(local_30);
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

