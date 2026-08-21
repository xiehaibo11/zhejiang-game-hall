
/* getStringWithEllipsisJni(char const*, float, float) */

void getStringWithEllipsisJni(char *param_1,float param_2,float param_3)

{
  long lVar1;
  char *in_x3;
  basic_string local_40;
  undefined7 uStack_3f;
  undefined1 uStack_38;
  undefined5 uStack_37;
  undefined2 uStack_32;
  undefined1 uStack_30;
  undefined5 uStack_2f;
  undefined1 uStack_2a;
  undefined1 uStack_29;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uStack_29 = 0;
  local_40 = (basic_string)0x2a;
  uStack_2f = 0x7369737069;
  uStack_37 = 0x6874695767;
  uStack_32 = 0x6c45;
  uStack_30 = 0x6c;
  uStack_3f = 0x69727453746567;
  uStack_38 = 0x6e;
  uStack_2a = 0;
  cocos2d::JniHelper::callStaticStringMethod<char_const*,float,float>
            ((JniHelper *)&DAT_01781be8,&local_40,(basic_string *)param_1,in_x3,param_2,param_3);
  if (((byte)local_40 & 1) != 0) {
    operator_delete((void *)CONCAT17(uStack_29,CONCAT16(uStack_2a,CONCAT51(uStack_2f,uStack_30))));
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

