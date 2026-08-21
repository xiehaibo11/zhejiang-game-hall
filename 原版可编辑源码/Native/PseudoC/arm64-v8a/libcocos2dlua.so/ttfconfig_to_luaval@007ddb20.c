
/* ttfconfig_to_luaval(lua_State*, cocos2d::_ttfConfig const&) */

void ttfconfig_to_luaval(lua_State *param_1,_ttfConfig *param_2)

{
  size_t sVar1;
  _ttfConfig *p_Var2;
  undefined1 *puVar3;
  
  if (param_1 != (lua_State *)0x0) {
    lua_createtable(param_1,0,0);
    lua_pushstring(param_1,"fontFilePath");
    if (((byte)*param_2 & 1) == 0) {
      p_Var2 = param_2 + 1;
    }
    else {
      p_Var2 = *(_ttfConfig **)(param_2 + 0x10);
    }
    lua_pushstring(param_1,p_Var2);
    lua_rawset(param_1,0xfffffffd);
    lua_pushstring(param_1,"fontSize");
    lua_pushnumber((double)*(float *)(param_2 + 0x18),param_1);
    lua_rawset(param_1,0xfffffffd);
    lua_pushstring(param_1,"glyphs");
    lua_pushnumber((double)(long)*(int *)(param_2 + 0x1c),param_1);
    lua_rawset(param_1,0xfffffffd);
    lua_pushstring(param_1,"customGlyphs");
    if ((*(char **)(param_2 + 0x20) == (char *)0x0) ||
       (sVar1 = strlen(*(char **)(param_2 + 0x20)), sVar1 == 0)) {
      puVar3 = &DAT_013c996e;
    }
    else {
      puVar3 = *(undefined1 **)(param_2 + 0x20);
    }
    lua_pushstring(param_1,puVar3);
    lua_rawset(param_1,0xfffffffd);
    lua_pushstring(param_1,"distanceFieldEnabled");
    lua_pushboolean(param_1,param_2[0x28]);
    lua_rawset(param_1,0xfffffffd);
    lua_pushstring(param_1,"outlineSize");
    lua_pushnumber((double)(long)*(int *)(param_2 + 0x2c),param_1);
    lua_rawset(param_1,0xfffffffd);
    return;
  }
  return;
}

