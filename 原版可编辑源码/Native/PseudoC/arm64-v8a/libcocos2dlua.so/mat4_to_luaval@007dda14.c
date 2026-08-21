
/* mat4_to_luaval(lua_State*, cocos2d::Mat4 const&) */

void mat4_to_luaval(lua_State *param_1,Mat4 *param_2)

{
  long lVar1;
  double dVar2;
  
  if (param_1 != (lua_State *)0x0) {
    lua_createtable(param_1,0,0);
    lVar1 = 0;
    dVar2 = 1.0;
    do {
      lua_pushnumber(dVar2,param_1);
      lua_pushnumber((double)*(float *)(param_2 + lVar1),param_1);
      lua_rawset(param_1,0xfffffffd);
      lVar1 = lVar1 + 4;
      dVar2 = dVar2 + 1.0;
    } while (lVar1 != 0x40);
  }
  return;
}

