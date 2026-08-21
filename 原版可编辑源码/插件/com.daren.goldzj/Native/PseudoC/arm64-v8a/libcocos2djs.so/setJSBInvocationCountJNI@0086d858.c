
/* setJSBInvocationCountJNI(int) */

void setJSBInvocationCountJNI(int param_1)

{
  long lVar1;
  basic_string local_58;
  undefined7 uStack_57;
  undefined1 uStack_50;
  undefined5 uStack_4f;
  undefined2 uStack_4a;
  undefined1 uStack_48;
  undefined5 uStack_47;
  undefined1 uStack_42;
  undefined1 uStack_41;
  ulong local_40 [2];
  char *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (DAT_01d35b70 == '\x01') {
    local_30 = operator_new(0x20);
    local_40[1] = 0x1f;
    local_40[0] = 0x21;
    local_58 = (basic_string)0x2a;
    builtin_strncpy(local_30,"org/cocos2dx/lib/Cocos2dxHelper",0x20);
    uStack_41 = 0;
    uStack_47 = 0x746e756f43;
    uStack_4f = 0x7461636f76;
    uStack_4a = 0x6f69;
    uStack_48 = 0x6e;
    uStack_57 = 0x4942534a746573;
    uStack_50 = 0x6e;
    uStack_42 = 0;
    cocos2d::JniHelper::callStaticVoidMethod<int>((basic_string *)local_40,&local_58,param_1);
    if (((byte)local_58 & 1) != 0) {
      operator_delete((void *)CONCAT17(uStack_41,CONCAT16(uStack_42,CONCAT51(uStack_47,uStack_48))))
      ;
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

