
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* getCurrentLanguageCodeJNI() */

void getCurrentLanguageCodeJNI(void)

{
  long lVar1;
  basic_string *in_x2;
  basic_string local_58;
  char local_57 [16];
  undefined6 uStack_47;
  undefined1 uStack_41;
  ulong local_40 [2];
  char *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = operator_new(0x20);
  local_40[1] = 0x1f;
  local_40[0] = 0x21;
  local_58 = (basic_string)0x2c;
  builtin_strncpy(local_30,"org/cocos2dx/lib/Cocos2dxHelper",0x20);
  uStack_47 = 0x65646f436567;
  builtin_strncpy(local_57,"getCurrentLangua",0x10);
  uStack_41 = 0;
  cocos2d::JniHelper::callStaticStringMethod<>((JniHelper *)local_40,&local_58,in_x2);
  if (((byte)local_58 & 1) != 0) {
    operator_delete((void *)CONCAT17(uStack_41,CONCAT61(uStack_47,local_57[0xf])));
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

