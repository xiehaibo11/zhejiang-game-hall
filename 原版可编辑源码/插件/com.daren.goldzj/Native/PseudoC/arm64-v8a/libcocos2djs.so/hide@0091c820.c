
/* cocos2d::EditBox::hide() */

void cocos2d::EditBox::hide(void)

{
  long lVar1;
  basic_string local_58;
  undefined7 uStack_57;
  undefined1 uStack_50;
  undefined2 local_4f;
  undefined1 local_4d;
  undefined4 uStack_4c;
  void *local_48;
  ulong local_40 [2];
  char *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = operator_new(0x30);
  uStack_4c = 0;
  local_40[1] = 0x20;
  local_40[0] = 0x31;
  local_58 = (basic_string)0x14;
  local_4f = 0x6576;
  local_48 = (void *)0x0;
  builtin_strncpy(local_30,"org/cocos2dx/lib/Cocos2dxEditBox",0x21);
  uStack_57 = 0x74614e65646968;
  uStack_50 = 0x69;
  local_4d = 0;
  JniHelper::callStaticVoidMethod<>((basic_string *)local_40,&local_58);
  if (((byte)local_58 & 1) != 0) {
    operator_delete(local_48);
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

