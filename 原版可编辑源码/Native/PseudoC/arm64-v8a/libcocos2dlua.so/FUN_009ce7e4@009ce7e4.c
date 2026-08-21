
undefined8 FUN_009ce7e4(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined1 auStack_78 [64];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar3 = FUN_009d01dc(param_1,3);
  FUN_009d0260(param_1,lVar3 + 0x520,0);
  iVar2 = lua_type(param_1,2);
  if (iVar2 == 0) {
    iVar2 = *(int *)(lVar3 + 0x524);
  }
  else {
    iVar2 = luaL_checkinteger(param_1,2);
    FUN_009d0310(auStack_78);
    if (iVar2 < 0) {
      luaL_argerror(param_1,1,auStack_78);
    }
    *(int *)(lVar3 + 0x524) = iVar2;
  }
  lua_pushinteger(param_1,(long)iVar2);
  iVar2 = lua_type(param_1,3);
  if (iVar2 == 0) {
    iVar2 = *(int *)(lVar3 + 0x528);
  }
  else {
    iVar2 = luaL_checkinteger(param_1,3);
    FUN_009d0310(auStack_78);
    if (iVar2 < 0) {
      luaL_argerror(param_1,1,auStack_78);
    }
    *(int *)(lVar3 + 0x528) = iVar2;
  }
  lua_pushinteger(param_1,(long)iVar2);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

