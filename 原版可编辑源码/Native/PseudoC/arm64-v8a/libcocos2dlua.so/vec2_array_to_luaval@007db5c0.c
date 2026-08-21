
/* vec2_array_to_luaval(lua_State*, cocos2d::Vec2 const*, int) */

void vec2_array_to_luaval(lua_State *param_1,Vec2 *param_2,int param_3)

{
  float *pfVar1;
  ulong uVar2;
  
  if ((param_1 != (lua_State *)0x0) && (lua_createtable(param_1,0,0), 0 < param_3)) {
    uVar2 = 1;
    pfVar1 = (float *)(param_2 + 4);
    do {
      lua_pushnumber((double)(int)uVar2,param_1);
      lua_createtable(param_1,0,0);
      lua_pushstring(param_1,"x");
      lua_pushnumber((double)pfVar1[-1],param_1);
      lua_rawset(param_1,0xfffffffd);
      lua_pushstring(param_1,&DAT_014a23fd);
      lua_pushnumber((double)*pfVar1,param_1);
      lua_rawset(param_1,0xfffffffd);
      lua_rawset(param_1,0xfffffffd);
      uVar2 = uVar2 + 1;
      pfVar1 = pfVar1 + 2;
    } while (param_3 + 1 != uVar2);
  }
  return;
}

