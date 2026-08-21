
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* getPackageNameJNI() */

void getPackageNameJNI(void)

{
  long lVar1;
  basic_string *in_x2;
  basic_string local_40;
  char local_3f [16];
  undefined6 uStack_2f;
  undefined1 uStack_29;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_40 = (basic_string)0x2c;
  builtin_strncpy(local_3f,"getCocos2dxPacka",0x10);
  uStack_2f = 0x656d614e6567;
  uStack_29 = 0;
  cocos2d::JniHelper::callStaticStringMethod<>((JniHelper *)&DAT_01781c20,&local_40,in_x2);
  if (((byte)local_40 & 1) != 0) {
    operator_delete((void *)CONCAT17(uStack_29,CONCAT61(uStack_2f,local_3f[0xf])));
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

