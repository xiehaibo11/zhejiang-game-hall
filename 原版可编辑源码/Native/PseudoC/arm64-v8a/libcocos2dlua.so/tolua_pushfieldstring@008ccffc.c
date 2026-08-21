
void tolua_pushfieldstring(undefined8 param_1,undefined4 param_2,int param_3,long param_4)

{
  lua_pushnumber((double)param_3);
  if (param_4 == 0) {
    lua_pushnil(param_1);
  }
  else {
    lua_pushstring(param_1,param_4);
  }
  lua_settable(param_1,param_2);
  return;
}

