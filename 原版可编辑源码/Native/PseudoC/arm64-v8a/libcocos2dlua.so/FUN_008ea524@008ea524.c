
undefined8 FUN_008ea524(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 0) {
    *(undefined4 *)(lVar2 + 0x2c) = 1;
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.EventContext:captureTouch",iVar1 + -1,0);
  }
  return 0;
}

