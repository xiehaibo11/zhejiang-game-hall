
undefined8 FUN_008daaac(undefined8 param_1)

{
  int iVar1;
  long *plVar2;
  
  plVar2 = (long *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 0) {
    (**(code **)(*plVar2 + 0x40))(plVar2);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GObject:constructFromResource",iVar1 + -1,0);
  }
  return 0;
}

