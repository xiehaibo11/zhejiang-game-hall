
/* affinetransform_to_luaval(lua_State*, cocos2d::AffineTransform const&) */

void affinetransform_to_luaval(lua_State *param_1,AffineTransform *param_2)

{
  if (param_1 != (lua_State *)0x0) {
    lua_createtable(param_1,0,0);
    lua_pushstring(param_1,&DAT_013ce02a);
    lua_pushnumber((double)*(float *)param_2,param_1);
    lua_rawset(param_1,0xfffffffd);
    lua_pushstring(param_1,&DAT_014a2468);
    lua_pushnumber((double)*(float *)(param_2 + 4),param_1);
    lua_rawset(param_1,0xfffffffd);
    lua_pushstring(param_1,"c");
    lua_pushnumber((double)*(float *)(param_2 + 8),param_1);
    lua_rawset(param_1,0xfffffffd);
    lua_pushstring(param_1,"d");
    lua_pushnumber((double)*(float *)(param_2 + 0xc),param_1);
    lua_rawset(param_1,0xfffffffd);
    lua_pushstring(param_1,"tx");
    lua_pushnumber((double)*(float *)(param_2 + 0x10),param_1);
    lua_rawset(param_1,0xfffffffd);
    lua_pushstring(param_1,"ty");
    lua_pushnumber((double)*(float *)(param_2 + 0x14),param_1);
    lua_rawset(param_1,0xfffffffd);
    return;
  }
  return;
}

