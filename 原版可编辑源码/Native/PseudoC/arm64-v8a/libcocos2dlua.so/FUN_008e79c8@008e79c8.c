
bool FUN_008e79c8(undefined8 param_1)

{
  int iVar1;
  uint uVar2;
  long *plVar3;
  
  plVar3 = (long *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    uVar2 = (**(code **)(*plVar3 + 0xc0))(plVar3);
    tolua_pushboolean(param_1,uVar2 & 1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GTextField:isSingleLine",iVar1,0);
  }
  return iVar1 == 0;
}

