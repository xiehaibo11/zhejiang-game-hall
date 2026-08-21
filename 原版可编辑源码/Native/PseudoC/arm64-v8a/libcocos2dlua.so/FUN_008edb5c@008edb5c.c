
undefined8 FUN_008edb5c(lua_State *param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  lVar2 = tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 1) {
    if (((param_1 == (lua_State *)0x0) || (iVar1 = lua_gettop(param_1), iVar1 < 2)) ||
       (uVar3 = luaval_is_usertype(param_1,2,"fairygui.GComponent",0), (uVar3 & 1) == 0)) {
      tolua_error(param_1,"invalid arguments in function \'lua_fairygui_GController_setParent\'",0);
    }
    else {
      uVar4 = tolua_tousertype(param_1,2,0);
      *(undefined8 *)(lVar2 + 0x68) = uVar4;
    }
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GController:setParent",iVar1 + -1,1);
  }
  return 0;
}

