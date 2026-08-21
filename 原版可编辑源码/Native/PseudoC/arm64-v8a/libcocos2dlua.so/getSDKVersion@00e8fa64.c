
/* cocos2d::experimental::getSDKVersion() */

int cocos2d::experimental::getSDKVersion(void)

{
  long lVar1;
  int iVar2;
  basic_string local_58;
  undefined5 uStack_57;
  undefined2 uStack_52;
  undefined1 uStack_50;
  undefined5 uStack_4f;
  undefined1 local_4a;
  undefined1 uStack_49;
  void *local_48;
  ulong local_40 [2];
  char *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = operator_new(0x20);
  uStack_49 = 0;
  builtin_strncpy(local_30,"org.cocos2dx.lib.Cocos2dxHelper",0x20);
  local_58 = (basic_string)0x1a;
  local_48 = (void *)0x0;
  local_40[1] = 0x1f;
  local_40[0] = 0x21;
  uStack_57 = 0x4453746567;
  uStack_52 = 0x564b;
  uStack_50 = 0x65;
  uStack_4f = 0x6e6f697372;
  local_4a = 0;
  iVar2 = JniHelper::callStaticIntMethod<>((basic_string *)local_40,&local_58);
  if (((byte)local_58 & 1) != 0) {
    operator_delete(local_48);
  }
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

