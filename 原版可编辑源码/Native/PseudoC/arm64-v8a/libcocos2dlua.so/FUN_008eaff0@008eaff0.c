
undefined8 FUN_008eaff0(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = lua_gettop();
  if (iVar1 + -1 == 0) {
    fairygui::UIPackage::removeAllPackages();
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",
               "fairygui.UIPackage:removeAllPackages",iVar1 + -1,0);
  }
  return 0;
}

