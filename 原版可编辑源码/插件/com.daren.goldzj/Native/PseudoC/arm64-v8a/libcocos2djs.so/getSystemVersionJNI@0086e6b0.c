
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* getSystemVersionJNI() */

void getSystemVersionJNI(void)

{
  long lVar1;
  basic_string *in_x2;
  basic_string local_68;
  undefined7 uStack_67;
  undefined1 uStack_60;
  undefined7 uStack_5f;
  undefined1 uStack_58;
  undefined1 uStack_57;
  undefined6 uStack_56;
  ulong local_50 [2];
  char *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_40 = operator_new(0x20);
  local_50[1] = 0x1f;
  local_50[0] = 0x21;
  builtin_strncpy(local_40,"org/cocos2dx/lib/Cocos2dxHelper",0x20);
  uStack_56 = 0;
  local_68 = (basic_string)0x20;
  uStack_5f = 0x6f69737265566d;
  uStack_58 = 0x6e;
  uStack_67 = 0x74737953746567;
  uStack_60 = 0x65;
  uStack_57 = 0;
  cocos2d::JniHelper::callStaticStringMethod<>((JniHelper *)local_50,&local_68,in_x2);
  if (((byte)local_68 & 1) != 0) {
    operator_delete((void *)CONCAT62(uStack_56,CONCAT11(uStack_57,uStack_58)));
  }
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

