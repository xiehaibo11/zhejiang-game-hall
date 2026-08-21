
undefined4 FUN_009cc0fc(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = lua_type(param_1,1);
  if ((iVar1 == 5) && (iVar1 = lua_getmetatable(param_1,1), iVar1 != 0)) {
    lua_replace(param_1,1);
    lua_pushstring(param_1,".call");
    lua_rawget(param_1,1);
    iVar1 = lua_type(param_1,0xffffffff);
    if (iVar1 == 6) {
      lua_insert(param_1,1);
      iVar1 = lua_gettop(param_1);
      lua_call(param_1,iVar1 + -1,1);
      return 1;
    }
  }
  tolua_error(param_1,"Attempt to call a non-callable object.",0);
  return 0;
}

