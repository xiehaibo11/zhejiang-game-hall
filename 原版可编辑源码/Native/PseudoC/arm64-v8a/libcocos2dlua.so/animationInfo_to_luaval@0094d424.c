
/* animationInfo_to_luaval(lua_State*, cocostudio::timeline::AnimationInfo const&) */

void animationInfo_to_luaval(lua_State *param_1,AnimationInfo *param_2)

{
  AnimationInfo *pAVar1;
  
  if (param_1 != (lua_State *)0x0) {
    lua_createtable(param_1,0,0);
    lua_pushstring(param_1,"name");
    pAVar1 = *(AnimationInfo **)(param_2 + 0x10);
    if (((byte)*param_2 & 1) == 0) {
      pAVar1 = param_2 + 1;
    }
    lua_pushstring(param_1,pAVar1);
    lua_rawset(param_1,0xfffffffd);
    lua_pushstring(param_1,"startIndex");
    lua_pushnumber((double)(long)*(int *)(param_2 + 0x18),param_1);
    lua_rawset(param_1,0xfffffffd);
    lua_pushstring(param_1,"endIndex");
    lua_pushnumber((double)(long)*(int *)(param_2 + 0x1c),param_1);
    lua_rawset(param_1,0xfffffffd);
    return;
  }
  return;
}

