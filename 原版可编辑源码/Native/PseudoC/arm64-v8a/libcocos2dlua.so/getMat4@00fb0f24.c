
/* cocos2d::Properties::getMat4(char const*, cocos2d::Mat4*) const */

void __thiscall cocos2d::Properties::getMat4(Properties *this,char *param_1,Mat4 *param_2)

{
  long lVar1;
  int iVar2;
  char *__s;
  undefined8 uVar3;
  float fStack_68;
  undefined1 auStack_64 [4];
  undefined1 auStack_60 [4];
  undefined1 auStack_5c [4];
  undefined1 auStack_58 [4];
  undefined1 auStack_54 [4];
  undefined1 auStack_50 [4];
  undefined1 auStack_4c [4];
  undefined1 auStack_48 [4];
  undefined1 auStack_44 [4];
  undefined1 auStack_40 [4];
  undefined1 auStack_3c [4];
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [4];
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [4];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  __s = (char *)getString(this,param_1,(char *)0x0);
  if (__s != (char *)0x0) {
    iVar2 = sscanf(__s,"%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f",&fStack_68,auStack_64,
                   auStack_60,auStack_5c,auStack_58,auStack_54,auStack_50,auStack_4c,auStack_48,
                   auStack_44,auStack_40,auStack_3c,auStack_38,auStack_34,auStack_30,auStack_2c);
    if (iVar2 == 0x10) {
      Mat4::set(param_2,&fStack_68);
      uVar3 = 1;
      goto LAB_00fb0fdc;
    }
  }
  Mat4::setIdentity(param_2);
  uVar3 = 0;
LAB_00fb0fdc:
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}

