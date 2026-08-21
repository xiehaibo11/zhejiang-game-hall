
undefined8 FUN_00c31284(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  uVar1 = luaL_checklstring(param_1,1,0);
  uVar2 = luaL_checklstring(param_1,2,0);
  uVar3 = luaL_optlstring(param_1,3,&DAT_01412068,0);
  uVar4 = luaL_optlstring(param_1,4,&DAT_014120f0,0);
  lVar5 = FUN_00c30a5c(param_1,uVar1,uVar2,uVar3,uVar4);
  if (lVar5 != 0) {
    return 1;
  }
  lua_pushnil(param_1);
  lua_insert(param_1,0xfffffffe);
  return 2;
}

