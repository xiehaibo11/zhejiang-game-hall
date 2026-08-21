
bool FUN_008e727c(undefined8 param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    lVar3 = (**(code **)(*plVar2 + 0xd0))(plVar2);
    tolua_pushnumber((double)*(float *)(lVar3 + 0x18),param_1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GTextField:getFontSize",iVar1,0);
  }
  return iVar1 == 0;
}

