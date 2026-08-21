
undefined8 FUN_008ebb34(undefined8 param_1)

{
  int iVar1;
  Transition *this;
  
  this = (Transition *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 0) {
    fairygui::Transition::clearHooks(this);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.Transition:clearHooks",iVar1 + -1,0);
  }
  return 0;
}

