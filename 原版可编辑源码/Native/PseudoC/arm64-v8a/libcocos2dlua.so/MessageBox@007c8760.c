
/* cocos2d::MessageBox(char const*, char const*) */

void cocos2d::MessageBox(char *param_1,char *param_2)

{
  long lVar1;
  basic_string local_68;
  undefined7 uStack_67;
  undefined1 uStack_60;
  undefined2 local_5f;
  undefined1 local_5d;
  undefined4 uStack_5c;
  void *local_58;
  ulong local_50 [2];
  char *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_40 = operator_new(0x20);
  local_50[1] = 0x1f;
  local_50[0] = 0x21;
  uStack_5c = 0;
  local_68 = (basic_string)0x14;
  local_5f = 0x676f;
  builtin_strncpy(local_40,"org.cocos2dx.lib.Cocos2dxHelper",0x20);
  local_58 = (void *)0x0;
  uStack_67 = 0x616944776f6873;
  uStack_60 = 0x6c;
  local_5d = 0;
  JniHelper::callStaticVoidMethod<char_const*,char_const*>
            ((basic_string *)local_50,&local_68,param_2,param_1);
  if (((byte)local_68 & 1) != 0) {
    operator_delete(local_58);
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

