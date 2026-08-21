
/* quaternion_to_luaval(lua_State*, cocos2d::Quaternion const&) */

void quaternion_to_luaval(lua_State *param_1,Quaternion *param_2)

{
  if (param_1 != (lua_State *)0x0) {
    lua_createtable(param_1,0,0);
    lua_pushstring(param_1,"x");
    lua_pushnumber((double)*(float *)param_2,param_1);
    lua_rawset(param_1,0xfffffffd);
    lua_pushstring(param_1,&DAT_014a23fd);
    lua_pushnumber((double)*(float *)(param_2 + 4),param_1);
    lua_rawset(param_1,0xfffffffd);
    lua_pushstring(param_1,&DAT_014017d5);
    lua_pushnumber((double)*(float *)(param_2 + 8),param_1);
    lua_rawset(param_1,0xfffffffd);
    lua_pushstring(param_1,&DAT_014a8546);
    lua_pushnumber((double)*(float *)(param_2 + 0xc),param_1);
    lua_rawset(param_1,0xfffffffd);
    return;
  }
  return;
}

