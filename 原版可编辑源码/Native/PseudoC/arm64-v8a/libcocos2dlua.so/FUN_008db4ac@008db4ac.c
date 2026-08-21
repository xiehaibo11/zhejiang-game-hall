
bool FUN_008db4ac(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  float fVar3;
  
  lVar2 = tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    fVar3 = (float)(**(code **)(**(long **)(lVar2 + 0xa8) + 0x130))();
    tolua_pushnumber((double)fVar3,param_1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GObject:getSkewX",iVar1,0);
  }
  return iVar1 == 0;
}

