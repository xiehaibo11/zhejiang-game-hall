
/* universe::is_class(lua_State*, int, char const*) */

undefined8 universe::is_class(lua_State *param_1,int param_2,char *param_3)

{
  int iVar1;
  undefined8 uVar2;
  char *__s2;
  
  uVar2 = lua_isuserdata();
  if ((int)uVar2 != 0) {
    lua_getmetatable(param_1,param_2);
    iVar1 = lua_type(param_1,0xffffffff);
    while (iVar1 == 5) {
      lua_getfield(param_1,0xffffffff,"__cppname");
      __s2 = (char *)lua_tolstring(param_1,0xffffffff,0);
      iVar1 = strcmp(param_3,__s2);
      if (iVar1 == 0) {
        lua_settop(param_1,0xfffffffd);
        return 1;
      }
      lua_settop(param_1,0xfffffffe);
      lua_getmetatable(param_1,0xffffffff);
      lua_remove(param_1,0xfffffffe);
      iVar1 = lua_type(param_1,0xffffffff);
    }
    uVar2 = 0;
  }
  return uVar2;
}

