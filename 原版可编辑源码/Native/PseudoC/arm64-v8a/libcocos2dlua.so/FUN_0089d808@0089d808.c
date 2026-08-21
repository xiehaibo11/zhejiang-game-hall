
void FUN_0089d808(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  __Array *this;
  __Array *p_Var4;
  undefined8 uVar5;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = tolua_isusertype(param_1,1,"CCArray",0,auStack_48);
  if (((iVar2 == 0) || (iVar2 = tolua_isusertype(param_1,2,"CCArray",0,auStack_48), iVar2 == 0)) ||
     (iVar2 = tolua_isnoobj(param_1,3,auStack_48), iVar2 == 0)) {
    tolua_error(param_1,"#ferror in function \'isEqualToArray\'.",auStack_48);
    uVar5 = 0;
  }
  else {
    this = (__Array *)tolua_tousertype(param_1,1,0);
    p_Var4 = (__Array *)tolua_tousertype(param_1,2,0);
    if (this == (__Array *)0x0) {
      tolua_error(param_1,"invalid \'self\' in function \'isEqualToArray\'",0);
    }
    uVar3 = cocos2d::__Array::isEqualToArray(this,p_Var4);
    tolua_pushboolean(param_1,uVar3 & 1);
    uVar5 = 1;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}

