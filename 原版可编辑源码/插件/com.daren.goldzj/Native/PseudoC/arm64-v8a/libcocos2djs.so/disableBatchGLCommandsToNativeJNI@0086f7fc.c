
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* disableBatchGLCommandsToNativeJNI() */

void disableBatchGLCommandsToNativeJNI(void)

{
  long lVar1;
  ulong local_60 [2];
  char *local_50;
  ulong local_40 [2];
  char *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  DAT_01d35b71 = 1;
  if (DAT_01d35b70 == '\x01') {
    local_30 = operator_new(0x20);
    builtin_strncpy(local_30,"org/cocos2dx/lib/Cocos2dxHelper",0x20);
    local_40[1] = 0x1f;
    local_40[0] = 0x21;
    local_50 = operator_new(0x20);
    builtin_strncpy(local_50,"disableBatchGLCommandsToNative",0x1f);
    local_60[1] = 0x1e;
    local_60[0] = 0x21;
    cocos2d::JniHelper::callStaticVoidMethod<>((basic_string *)local_40,(basic_string *)local_60);
    if ((local_60[0] & 1) != 0) {
      operator_delete(local_50);
    }
    if ((local_40[0] & 1) != 0) {
      operator_delete(local_30);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

