
/* cocos2d::Properties::getVec4(char const*, cocos2d::Vec4*) const */

void __thiscall cocos2d::Properties::getVec4(Properties *this,char *param_1,Vec4 *param_2)

{
  long lVar1;
  int iVar2;
  char *__s;
  undefined8 uVar3;
  float local_38;
  float fStack_34;
  float local_30;
  float fStack_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  __s = (char *)getString(this,param_1,(char *)0x0);
  if ((__s == (char *)0x0) ||
     (iVar2 = sscanf(__s,"%f,%f,%f,%f",&fStack_2c,&local_30,&fStack_34,&local_38), iVar2 != 4)) {
    if (param_2 != (Vec4 *)0x0) {
      Vec4::set(param_2,0.0,0.0,0.0,0.0);
    }
    uVar3 = 0;
  }
  else {
    if (param_2 != (Vec4 *)0x0) {
      Vec4::set(param_2,fStack_2c,local_30,fStack_34,local_38);
    }
    uVar3 = 1;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}

