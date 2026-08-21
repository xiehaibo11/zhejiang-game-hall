
/* fontdefinition_to_luaval(lua_State*, cocos2d::FontDefinition const&) */

void fontdefinition_to_luaval(lua_State *param_1,FontDefinition *param_2)

{
  FontDefinition *pFVar1;
  
  if (param_1 != (lua_State *)0x0) {
    lua_createtable(param_1,0,0);
    lua_pushstring(param_1,"fontName");
    if (((byte)*param_2 & 1) == 0) {
      pFVar1 = param_2 + 1;
    }
    else {
      pFVar1 = *(FontDefinition **)(param_2 + 0x10);
    }
    tolua_pushstring(param_1,pFVar1);
    lua_rawset(param_1,0xfffffffd);
    lua_pushstring(param_1,"fontSize");
    lua_pushnumber((double)(long)*(int *)(param_2 + 0x18),param_1);
    lua_rawset(param_1,0xfffffffd);
    lua_pushstring(param_1,"fontAlignmentH");
    lua_pushnumber((double)(long)*(int *)(param_2 + 0x1c),param_1);
    lua_rawset(param_1,0xfffffffd);
    lua_pushstring(param_1,"fontAlignmentV");
    lua_pushnumber((double)(long)*(int *)(param_2 + 0x20),param_1);
    lua_rawset(param_1,0xfffffffd);
    lua_pushstring(param_1,"fontFillColor");
    color3b_to_luaval(param_1,(Color3B *)(param_2 + 0x30));
    lua_rawset(param_1,0xfffffffd);
    lua_pushstring(param_1,"fontDimensions");
    lua_createtable(param_1,0,0);
    lua_pushstring(param_1,"width");
    lua_pushnumber((double)*(float *)(param_2 + 0x28),param_1);
    lua_rawset(param_1,0xfffffffd);
    lua_pushstring(param_1,"height");
    lua_pushnumber((double)*(float *)(param_2 + 0x2c),param_1);
    lua_rawset(param_1,0xfffffffd);
    lua_rawset(param_1,0xfffffffd);
    lua_pushstring(param_1,"shadowEnabled");
    lua_pushboolean(param_1,param_2[0x34]);
    lua_rawset(param_1,0xfffffffd);
    lua_pushstring(param_1,"shadowOffset");
    lua_createtable(param_1,0,0);
    lua_pushstring(param_1,"width");
    lua_pushnumber((double)*(float *)(param_2 + 0x38),param_1);
    lua_rawset(param_1,0xfffffffd);
    lua_pushstring(param_1,"height");
    lua_pushnumber((double)*(float *)(param_2 + 0x3c),param_1);
    lua_rawset(param_1,0xfffffffd);
    lua_rawset(param_1,0xfffffffd);
    lua_pushstring(param_1,"shadowBlur");
    lua_pushnumber((double)*(float *)(param_2 + 0x40),param_1);
    lua_rawset(param_1,0xfffffffd);
    lua_pushstring(param_1,"shadowOpacity");
    lua_pushnumber((double)*(float *)(param_2 + 0x44),param_1);
    lua_rawset(param_1,0xfffffffd);
    lua_pushstring(param_1,"shadowEnabled");
    lua_pushboolean(param_1,param_2[0x48]);
    lua_rawset(param_1,0xfffffffd);
    lua_pushstring(param_1,"strokeColor");
    color3b_to_luaval(param_1,(Color3B *)(param_2 + 0x49));
    lua_rawset(param_1,0xfffffffd);
    lua_pushstring(param_1,"strokeSize");
    lua_pushnumber((double)*(float *)(param_2 + 0x50),param_1);
    lua_rawset(param_1,0xfffffffd);
    return;
  }
  return;
}

