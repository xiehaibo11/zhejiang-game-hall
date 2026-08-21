
/* luaval_to_ttfconfig(lua_State*, int, cocos2d::_ttfConfig*, char const*) */

void luaval_to_ttfconfig(lua_State *param_1,int param_2,_ttfConfig *param_3,char *param_4)

{
  long lVar1;
  _ttfConfig _Var2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  char *__s;
  size_t sVar6;
  undefined1 *puVar7;
  float fVar8;
  undefined1 auStack_58 [16];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar5 = 0;
  if (((param_1 != (lua_State *)0x0) && (param_3 != (_ttfConfig *)0x0)) &&
     (uVar5 = tolua_istable(param_1,param_2,0,auStack_58), (int)uVar5 != 0)) {
    lua_pushstring(param_1,"fontFilePath");
    lua_gettable(param_1,param_2);
    iVar3 = lua_isstring(param_1,0xffffffff);
    if (iVar3 == 0) {
      __s = "";
    }
    else {
      __s = (char *)lua_tolstring(param_1,0xffffffff,0);
    }
    sVar6 = strlen(__s);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_3
           ,__s,sVar6);
    lua_settop(param_1,0xfffffffe);
    lua_pushstring(param_1,"fontSize");
    lua_gettable(param_1,param_2);
    iVar3 = lua_isnumber(param_1,0xffffffff);
    if (iVar3 == 0) {
      fVar8 = 0.0;
    }
    else {
      iVar3 = lua_tointeger(param_1,0xffffffff);
      fVar8 = (float)iVar3;
    }
    *(float *)(param_3 + 0x18) = fVar8;
    lua_settop(param_1,0xfffffffe);
    lua_pushstring(param_1,"glyphs");
    lua_gettable(param_1,param_2);
    iVar3 = lua_isnumber(param_1,0xffffffff);
    if (iVar3 == 0) {
      uVar4 = 1;
    }
    else {
      uVar4 = lua_tointeger(param_1,0xffffffff);
    }
    *(undefined4 *)(param_3 + 0x1c) = uVar4;
    lua_settop(param_1,0xfffffffe);
    lua_pushstring(param_1,"customGlyphs");
    lua_gettable(param_1,param_2);
    iVar3 = lua_isstring(param_1,0xffffffff);
    if (iVar3 == 0) {
      puVar7 = &DAT_013c996e;
    }
    else {
      puVar7 = (undefined1 *)lua_tolstring(param_1,0xffffffff,0);
    }
    *(undefined1 **)(param_3 + 0x20) = puVar7;
    lua_settop(param_1,0xfffffffe);
    lua_pushstring(param_1,"distanceFieldEnabled");
    lua_gettable(param_1,param_2);
    iVar3 = lua_type(param_1,0xffffffff);
    if (iVar3 == 1) {
      iVar3 = lua_toboolean(param_1,0xffffffff);
      _Var2 = (_ttfConfig)(iVar3 != 0);
    }
    else {
      _Var2 = (_ttfConfig)0x0;
    }
    param_3[0x28] = _Var2;
    lua_settop(param_1,0xfffffffe);
    lua_pushstring(param_1,"outlineSize");
    lua_gettable(param_1,param_2);
    iVar3 = lua_isnumber(param_1,0xffffffff);
    uVar4 = 0;
    if (iVar3 != 0) {
      uVar4 = lua_tointeger(param_1,0xffffffff);
    }
    *(undefined4 *)(param_3 + 0x2c) = uVar4;
    lua_settop(param_1,0xfffffffe);
    uVar5 = 1;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}

