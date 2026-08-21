
/* setPreferredFramesPerSecondJNI(int) */

void setPreferredFramesPerSecondJNI(int param_1)

{
  long lVar1;
  ulong local_60 [2];
  char *local_50;
  ulong local_40 [2];
  char *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = operator_new(0x30);
  builtin_strncpy(local_30,"org/cocos2dx/lib/Cocos2dxRenderer",0x22);
  local_40[1] = 0x21;
  local_40[0] = 0x31;
  local_50 = operator_new(0x20);
  builtin_strncpy(local_50,"setPreferredFramesPerSecond",0x1c);
  local_60[1] = 0x1b;
  local_60[0] = 0x21;
  cocos2d::JniHelper::callStaticVoidMethod<int>
            ((basic_string *)local_40,(basic_string *)local_60,param_1);
  if ((local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

