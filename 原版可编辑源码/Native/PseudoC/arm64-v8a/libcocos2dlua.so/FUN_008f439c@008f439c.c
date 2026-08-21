
undefined8 FUN_008f439c(lua_State *param_1)

{
  int iVar1;
  GObjectPool *this;
  ulong uVar2;
  GObject *pGVar3;
  
  this = (GObjectPool *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 1) {
    if (((param_1 == (lua_State *)0x0) || (iVar1 = lua_gettop(param_1), iVar1 < 2)) ||
       (uVar2 = luaval_is_usertype(param_1,2,"fairygui.GObject",0), (uVar2 & 1) == 0)) {
      tolua_error(param_1,"invalid arguments in function \'lua_fairygui_GObjectPool_returnObject\'",
                  0);
    }
    else {
      pGVar3 = (GObject *)tolua_tousertype(param_1,2,0);
      fairygui::GObjectPool::returnObject(this,pGVar3);
    }
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GObjectPool:returnObject",iVar1 + -1,1);
  }
  return 0;
}

