
void FUN_0089ef60(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  __String *this;
  undefined8 uVar4;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = tolua_isusertype(param_1,1,"const CCString",0,auStack_48);
  if ((iVar2 == 0) || (iVar2 = tolua_isnoobj(param_1,2,auStack_48), iVar2 == 0)) {
    tolua_error(param_1,"#ferror in function \'length\'.",auStack_48);
    uVar4 = 0;
  }
  else {
    this = (__String *)tolua_tousertype(param_1,1,0);
    if (this == (__String *)0x0) {
      tolua_error(param_1,"invalid \'self\' in function \'length\'",0);
    }
    uVar3 = cocos2d::__String::length(this);
    tolua_pushnumber((double)uVar3,param_1);
    uVar4 = 1;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}

