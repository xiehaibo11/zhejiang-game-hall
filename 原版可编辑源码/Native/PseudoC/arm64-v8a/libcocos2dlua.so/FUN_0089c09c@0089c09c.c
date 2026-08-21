
void FUN_0089c09c(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_40;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  iVar2 = tolua_isusertable(param_1,1,0x129ccb1,0,auStack_38);
  if ((iVar2 == 0) || (iVar2 = tolua_isnoobj(param_1,2,auStack_38), iVar2 == 0)) {
    tolua_error(param_1,"#ferror in function \'new\'.",auStack_38);
    uVar3 = 0;
  }
  else {
    local_40 = 0;
    vec2_to_luaval(param_1,(Vec2 *)&local_40);
    uVar3 = 1;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}

