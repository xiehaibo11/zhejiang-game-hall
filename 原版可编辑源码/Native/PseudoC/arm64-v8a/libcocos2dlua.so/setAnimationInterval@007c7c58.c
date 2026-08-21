
/* cocos2d::Application::setAnimationInterval(float) */

void cocos2d::Application::setAnimationInterval(float param_1)

{
  long lVar1;
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
  local_30 = operator_new(0x30);
  local_40[1] = 0x21;
  local_40[0] = 0x31;
  builtin_strncpy(local_30,"org/cocos2dx/lib/Cocos2dxRenderer",0x22);
  local_58 = (basic_string)0x28;
  uStack_42 = 0;
  uStack_47 = 0x6c617672;
  uStack_4f = 0x746e496e6f6974;
  uStack_48 = 0x65;
  uStack_57 = 0x6d696e41746573;
  uStack_50 = 0x61;
  uStack_43 = 0;
  JniHelper::callStaticVoidMethod<float>((basic_string *)local_40,&local_58,param_1);
  if (((byte)local_58 & 1) != 0) {
    operator_delete((void *)CONCAT26(uStack_42,CONCAT15(uStack_43,CONCAT41(uStack_47,uStack_48))));
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

