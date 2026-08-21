
undefined8 FUN_008ddbc4(undefined8 param_1)

{
  int iVar1;
  GComponent *this;
  
  this = (GComponent *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 0) {
    fairygui::GComponent::ensureBoundsCorrect(this);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GComponent:ensureBoundsCorrect",iVar1 + -1,0);
  }
  return 0;
}

