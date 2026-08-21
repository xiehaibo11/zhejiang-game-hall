
undefined8 FUN_008e780c(undefined8 param_1)

{
  int iVar1;
  long *plVar2;
  
  plVar2 = (long *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 0) {
    (**(code **)(*plVar2 + 0xd8))(plVar2);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GTextField:applyTextFormat",iVar1 + -1,0);
  }
  return 0;
}

