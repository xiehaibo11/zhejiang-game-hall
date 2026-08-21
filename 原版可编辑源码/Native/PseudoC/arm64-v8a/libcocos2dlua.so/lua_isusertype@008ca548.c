
undefined8 lua_isusertype(undefined8 param_1,undefined4 param_2,char *param_3)

{
  int iVar1;
  char *__s1;
  
  iVar1 = lua_isuserdata();
  if (iVar1 == 0) {
    iVar1 = lua_type(param_1,param_2);
    if (iVar1 != 5) {
      return 0;
    }
    lua_pushstring(param_1,".c_instance");
    lua_gettable(param_1,param_2);
    iVar1 = lua_isuserdata(param_1,0xffffffff);
    if (iVar1 == 0) {
      lua_settop(param_1,0xfffffffe);
      return 0;
    }
    lua_replace(param_1,param_2);
  }
  iVar1 = lua_getmetatable(param_1,param_2);
  if (iVar1 != 0) {
    lua_rawget(param_1,0xffffd8f0);
    __s1 = (char *)lua_tolstring(param_1,0xffffffff,0);
    if (__s1 == (char *)0x0) {
      lua_settop(param_1,0xfffffffe);
    }
    else {
      iVar1 = strcmp(__s1,param_3);
      lua_settop(param_1,0xfffffffe);
      if (iVar1 == 0) {
        return 1;
      }
    }
    lua_pushstring(param_1,"tolua_super");
    lua_rawget(param_1,0xffffd8f0);
    lua_getmetatable(param_1,param_2);
    lua_rawget(param_1,0xfffffffe);
    iVar1 = lua_type(param_1,0xffffffff);
    if (iVar1 == 5) {
      lua_pushstring(param_1,param_3);
      lua_rawget(param_1,0xfffffffe);
      iVar1 = lua_toboolean(param_1,0xffffffff);
      lua_settop(param_1,0xfffffffc);
      if (iVar1 != 0) {
        return 1;
      }
    }
  }
  return 0;
}

