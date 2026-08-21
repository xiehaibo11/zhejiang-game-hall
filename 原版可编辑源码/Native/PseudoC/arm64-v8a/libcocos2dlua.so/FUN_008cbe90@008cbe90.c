
undefined8 FUN_008cbe90(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar4 = luaL_checklstring(param_1,2,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 < 2) {
    lua_pushstring(param_1,"Miss arguments to iskindof.");
    lua_error(param_1);
  }
  iVar2 = lua_getmetatable(param_1,1);
  if (iVar2 == 0) {
    lua_pushstring(param_1,"Invalid argument #1 to iskindof: class or object expected.");
    lua_error(param_1);
  }
  if (lVar4 == 0) {
    lua_pushstring(param_1,"Invalid argument #2 to iskindof: string expected.");
    lua_error(param_1);
  }
  uVar3 = tolua_isusertype(param_1,1,lVar4,0,auStack_48);
  lua_pushboolean(param_1,uVar3);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

