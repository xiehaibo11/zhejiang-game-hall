
bool FUN_008df34c(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    lua_createtable(param_1,0,0,0);
    lua_pushstring(param_1,"left");
    lua_pushnumber((double)*(float *)(lVar2 + 0x238),param_1);
    lua_rawset(param_1,0xfffffffd);
    lua_pushstring(param_1,"top");
    lua_pushnumber((double)*(float *)(lVar2 + 0x23c),param_1);
    lua_rawset(param_1,0xfffffffd);
    lua_pushstring(param_1,&DAT_012d6ea7);
    lua_pushnumber((double)*(float *)(lVar2 + 0x240),param_1);
    lua_rawset(param_1,0xfffffffd);
    lua_pushstring(param_1,"bottom");
    lua_pushnumber((double)*(float *)(lVar2 + 0x244),param_1);
    lua_rawset(param_1,0xfffffffd);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GComponent:getMargin",iVar1,0);
  }
  return iVar1 == 0;
}

