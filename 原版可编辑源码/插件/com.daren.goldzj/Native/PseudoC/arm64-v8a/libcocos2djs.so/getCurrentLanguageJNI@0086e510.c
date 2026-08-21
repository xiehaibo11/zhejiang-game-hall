
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* getCurrentLanguageJNI() */

void getCurrentLanguageJNI(void)

{
  long lVar1;
  basic_string *in_x2;
  basic_string local_58;
  undefined7 uStack_57;
  undefined1 uStack_50;
  undefined7 uStack_4f;
  undefined1 uStack_48;
  undefined2 uStack_47;
  undefined1 uStack_45;
  undefined4 uStack_44;
  ulong local_40 [2];
  char *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = operator_new(0x20);
  local_40[1] = 0x1f;
  local_40[0] = 0x21;
  local_58 = (basic_string)0x24;
  builtin_strncpy(local_30,"org/cocos2dx/lib/Cocos2dxHelper",0x20);
  uStack_44 = 0;
  uStack_47 = 0x6567;
  uStack_4f = 0x75676e614c746e;
  uStack_48 = 0x61;
  uStack_57 = 0x72727543746567;
  uStack_50 = 0x65;
  uStack_45 = 0;
  cocos2d::JniHelper::callStaticStringMethod<>((JniHelper *)local_40,&local_58,in_x2);
  if (((byte)local_58 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_44,CONCAT13(uStack_45,CONCAT21(uStack_47,uStack_48))));
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

