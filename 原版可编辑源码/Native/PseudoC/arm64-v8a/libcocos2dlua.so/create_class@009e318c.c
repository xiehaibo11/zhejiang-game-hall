
/* universe::create_class(lua_State*, char const*, char const*, char const*, int (*)(lua_State*),
   luaL_Reg const*) */

void universe::create_class
               (lua_State *param_1,char *param_2,char *param_3,char *param_4,
               _func_int_lua_State_ptr *param_5,luaL_Reg *param_6)

{
  int iVar1;
  long lVar2;
  
  luaL_newmetatable(param_1,param_3);
  lua_pushvalue(param_1,0xffffffff);
  lua_setfield(param_1,0xfffffffe,"__index");
  lua_pushstring(param_1,param_3);
  lua_setfield(param_1,0xfffffffe,"__cppname");
  lVar2 = *(long *)param_6;
  while (lVar2 != 0) {
    lua_pushcclosure(param_1,*(undefined8 *)(param_6 + 8),0);
    lua_setfield(param_1,0xfffffffe,*(undefined8 *)param_6);
    lVar2 = *(long *)(param_6 + 0x10);
    param_6 = param_6 + 0x10;
  }
  if (param_4 != (char *)0x0) {
    lua_getfield(param_1,0xffffd8f0,param_4);
    iVar1 = lua_type(param_1,0xffffffff);
    if (iVar1 == 0) {
      lua_settop(param_1,0xfffffffe);
    }
    else {
      lua_setmetatable(param_1);
    }
  }
  lua_settop(param_1,0xfffffffe);
  lua_createtable(param_1,0,0);
  if (param_5 != (_func_int_lua_State_ptr *)0x0) {
    lua_pushcclosure(param_1,param_5,0);
    lua_setfield(param_1,0xfffffffe,"new");
  }
  lua_setfield(param_1,0xfffffffe,param_2);
  return;
}

