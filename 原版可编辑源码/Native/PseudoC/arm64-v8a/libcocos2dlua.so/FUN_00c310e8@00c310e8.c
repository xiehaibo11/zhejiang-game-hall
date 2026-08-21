
undefined8 FUN_00c310e8(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  uVar2 = luaL_checklstring(param_1,1,0);
  uVar3 = luaL_checklstring(param_1,2,0);
  iVar1 = FUN_00c30c14(param_1,uVar2,uVar3,1);
  if (iVar1 == 0) {
    return 1;
  }
  lua_pushnil(param_1);
  lua_insert(param_1,0xfffffffe);
  if (iVar1 == 1) {
    puVar4 = &DAT_01412178;
  }
  else {
    puVar4 = &DAT_01412180;
  }
  lua_pushstring(param_1,puVar4);
  return 3;
}

