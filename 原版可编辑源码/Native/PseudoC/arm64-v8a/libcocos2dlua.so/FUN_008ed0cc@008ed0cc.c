
undefined8 FUN_008ed0cc(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 0) {
    uVar3 = 0x3ff0000000000000;
    if (*(int *)(lVar2 + 0x1c) != 2) {
      uVar3 = 0;
    }
    tolua_pushnumber(uVar3,param_1);
    uVar3 = 1;
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.InputEvent:isDoubleClick",iVar1 + -1,0);
    uVar3 = 0;
  }
  return uVar3;
}

