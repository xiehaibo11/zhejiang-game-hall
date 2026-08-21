
/* cocos2d::Application::getVersion() */

void cocos2d::Application::getVersion(void)

{
  long lVar1;
  basic_string *in_x2;
  basic_string local_40;
  undefined7 uStack_3f;
  undefined1 uStack_38;
  undefined2 local_37;
  undefined1 local_35;
  undefined4 uStack_34;
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uStack_34 = 0;
  local_40 = (basic_string)0x14;
  local_30 = (void *)0x0;
  local_37 = 0x6e6f;
  uStack_3f = 0x73726556746567;
  uStack_38 = 0x69;
  local_35 = 0;
  JniHelper::callStaticStringMethod<>((JniHelper *)&DAT_01781a50,&local_40,in_x2);
  if (((byte)local_40 & 1) != 0) {
    operator_delete(local_30);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

