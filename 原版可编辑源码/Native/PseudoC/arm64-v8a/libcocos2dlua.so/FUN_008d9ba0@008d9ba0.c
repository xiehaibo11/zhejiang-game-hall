
bool FUN_008d9ba0(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    tolua_pushnumber((double)*(float *)(lVar2 + 0xc4),param_1);
  }
  else {
                    /* try { // try from 008d9bdc to 009d9c4f has its CatchHandler @ 008d9bdc
                       catch() { ... } // from try @ 008d9bdc with catch @ 008d9bdc
                       catch() { ... } // from try @ 008d9fbc with catch @ 008d9bdc */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GObject:getY",iVar1,0);
  }
  return iVar1 == 0;
}

