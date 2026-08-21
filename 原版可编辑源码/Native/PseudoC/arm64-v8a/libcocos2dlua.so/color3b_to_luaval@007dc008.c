
/* color3b_to_luaval(lua_State*, cocos2d::Color3B const&) */

void color3b_to_luaval(lua_State *param_1,Color3B *param_2)

{
  undefined8 uVar1;
  
  if (param_1 != (lua_State *)0x0) {
    lua_createtable(param_1,0,0);
    lua_pushstring(param_1,"r");
    uVar1 = NEON_ucvtf((ulong)(byte)*param_2);
    lua_pushnumber(uVar1,param_1);
    lua_rawset(param_1,0xfffffffd);
    lua_pushstring(param_1,&DAT_012f093b);
    uVar1 = NEON_ucvtf((ulong)(byte)param_2[1]);
    lua_pushnumber(uVar1,param_1);
    lua_rawset(param_1,0xfffffffd);
    lua_pushstring(param_1,&DAT_014a2468);
    uVar1 = NEON_ucvtf((ulong)(byte)param_2[2]);
    lua_pushnumber(uVar1,param_1);
    lua_rawset(param_1,0xfffffffd);
    return;
  }
  return;
}

