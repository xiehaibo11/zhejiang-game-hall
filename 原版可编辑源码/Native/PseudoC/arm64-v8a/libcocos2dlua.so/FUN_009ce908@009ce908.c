
undefined8 FUN_009ce908(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined1 auStack_78 [64];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar3 = FUN_009d01dc(param_1,1);
  iVar2 = lua_type(param_1,1);
  if (iVar2 == 0) {
    iVar2 = *(int *)(lVar3 + 0x52c);
  }
  else {
    iVar2 = luaL_checkinteger(param_1,1);
    FUN_009d0310(auStack_78);
    if (iVar2 < 1) {
      luaL_argerror(param_1,1,auStack_78);
    }
    *(int *)(lVar3 + 0x52c) = iVar2;
  }
  lua_pushinteger(param_1,(long)iVar2);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

