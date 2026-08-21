
void FUN_0089c92c(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  Size aSStack_40 [8];
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  iVar2 = tolua_isusertable(param_1,1,"CCSize",0,auStack_38);
  if ((iVar2 == 0) || (iVar2 = tolua_isnoobj(param_1,2,auStack_38), iVar2 == 0)) {
    tolua_error(param_1,"#ferror in function \'new\'.",auStack_38);
    uVar3 = 0;
  }
  else {
    cocos2d::Size::Size(aSStack_40);
    size_to_luaval(param_1,aSStack_40);
    uVar3 = 1;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}

