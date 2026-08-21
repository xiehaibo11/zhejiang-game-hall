
undefined8 FUN_00c31438(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = luaL_checklstring(param_1,1,0);
  lua_getfield(param_1,0xffffd8ef,"cpath");
  lVar3 = lua_tolstring(param_1,0xffffffff,0);
  if (lVar3 == 0) {
    luaL_error(param_1,"\'package.%s\' must be a string","cpath");
  }
  lVar3 = FUN_00c30a5c(param_1,uVar2,lVar3,&DAT_01412068,&DAT_014120f0);
  if ((lVar3 != 0) && (iVar1 = FUN_00c30c14(param_1,lVar3,uVar2,0), iVar1 != 0)) {
    FUN_00c30454(param_1,lVar3);
    return 1;
  }
  return 1;
}

