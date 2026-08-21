
void FUN_0089ee84(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  __String *this;
  undefined8 uVar3;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = tolua_isusertype(param_1,1,"const CCString",0,auStack_48);
  if ((iVar2 == 0) || (iVar2 = tolua_isnoobj(param_1,2,auStack_48), iVar2 == 0)) {
    tolua_error(param_1,"#ferror in function \'getCString\'.",auStack_48);
    uVar3 = 0;
  }
  else {
    this = (__String *)tolua_tousertype(param_1,1,0);
    if (this == (__String *)0x0) {
      tolua_error(param_1,"invalid \'self\' in function \'getCString\'",0);
    }
    uVar3 = cocos2d::__String::getCString(this);
    tolua_pushstring(param_1,uVar3);
    uVar3 = 1;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}

