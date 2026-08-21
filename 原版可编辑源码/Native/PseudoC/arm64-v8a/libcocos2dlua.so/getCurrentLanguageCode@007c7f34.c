
/* cocos2d::Application::getCurrentLanguageCode() */

undefined * cocos2d::Application::getCurrentLanguageCode(void)

{
  long lVar1;
  char *pcVar2;
  basic_string *in_x2;
  basic_string local_58;
  undefined7 uStack_57;
  undefined1 uStack_50;
  undefined7 uStack_4f;
  undefined1 uStack_48;
  undefined2 uStack_47;
  undefined1 uStack_45;
  undefined4 uStack_44;
  byte local_40 [16];
  char *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_58 = (basic_string)0x24;
  uStack_44 = 0;
  uStack_47 = 0x6567;
  uStack_4f = 0x75676e614c746e;
  uStack_48 = 0x61;
  uStack_57 = 0x72727543746567;
  uStack_50 = 0x65;
  uStack_45 = 0;
  JniHelper::callStaticStringMethod<>((JniHelper *)&DAT_01781a50,&local_58,in_x2);
  if (((byte)local_58 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_44,CONCAT13(uStack_45,CONCAT21(uStack_47,uStack_48))));
  }
  pcVar2 = (char *)((ulong)local_40 | 1);
  if ((local_40[0] & 1) != 0) {
    pcVar2 = local_30;
  }
  pcVar2 = strncpy(&DAT_01781a70,pcVar2,2);
  pcVar2[2] = '\0';
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return &DAT_01781a70;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

