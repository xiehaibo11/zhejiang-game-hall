
/* texParams_to_luaval(lua_State*, cocos2d::Texture2D::_TexParams const&) */

void texParams_to_luaval(lua_State *param_1,_TexParams *param_2)

{
  undefined8 uVar1;
  
  if (param_1 != (lua_State *)0x0) {
    lua_createtable(param_1,0,0);
    lua_pushstring(param_1,"minFilter");
    uVar1 = NEON_ucvtf((ulong)*(uint *)param_2);
    lua_pushnumber(uVar1,param_1);
    lua_rawset(param_1,0xfffffffd);
    lua_pushstring(param_1,"magFilter");
    uVar1 = NEON_ucvtf((ulong)*(uint *)(param_2 + 4));
    lua_pushnumber(uVar1,param_1);
    lua_rawset(param_1,0xfffffffd);
    lua_pushstring(param_1,"wrapS");
    uVar1 = NEON_ucvtf((ulong)*(uint *)(param_2 + 8));
    lua_pushnumber(uVar1,param_1);
    lua_rawset(param_1,0xfffffffd);
    lua_pushstring(param_1,"wrapT");
    uVar1 = NEON_ucvtf((ulong)*(uint *)(param_2 + 0xc));
    lua_pushnumber(uVar1,param_1);
    lua_rawset(param_1,0xfffffffd);
    return;
  }
  return;
}

