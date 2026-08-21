
/* register_all_cocos2dx_manual_deprecated(lua_State*) */

undefined8 register_all_cocos2dx_manual_deprecated(lua_State *param_1)

{
  int iVar1;
  
  if (param_1 != (lua_State *)0x0) {
    lua_pushstring(param_1,"Animation");
    lua_rawget(param_1,0xffffd8f0);
    iVar1 = lua_type(param_1,0xffffffff);
    if (iVar1 == 5) {
      lua_pushstring(param_1,"createWithSpriteFrames");
      lua_pushcclosure(param_1,FUN_008a2bac,0);
      lua_rawset(param_1,0xfffffffd);
      lua_pushstring(param_1,"createWithSpriteFrames");
      lua_pushcclosure(param_1,FUN_008a2d80,0);
      lua_rawset(param_1,0xfffffffd);
    }
    lua_settop(param_1,0xfffffffe);
    lua_pushstring(param_1,"Sequence");
    lua_rawget(param_1,0xffffd8f0);
    iVar1 = lua_type(param_1,0xffffffff);
    if (iVar1 == 5) {
      tolua_function(param_1,"createWithTwoActions",FUN_008a3050);
      tolua_function(param_1,"create",FUN_008a318c);
    }
    lua_settop(param_1,0xfffffffe);
    lua_getfield(param_1,0xffffd8ee,&DAT_01276ae5);
    iVar1 = lua_type(param_1,0xffffffff);
    if (iVar1 == 5) {
      lua_pushstring(param_1,"tolua");
      lua_gettable(param_1,0xfffffffe);
      iVar1 = lua_type(param_1,0xffffffff);
      if (iVar1 == 5) {
        tolua_function(param_1,"cast",FUN_008a3454);
      }
      lua_settop(param_1,0xfffffffe);
    }
    lua_settop(param_1,0xfffffffe);
    lua_pushstring(param_1,&DAT_0128a454);
    lua_rawget(param_1,0xffffd8f0);
    iVar1 = lua_type(param_1,0xffffffff);
    if (iVar1 == 5) {
      tolua_function(param_1,"createWithArray",FUN_008a3a0c);
      tolua_function(param_1,"alignItemsInColumnsWithArray",FUN_008a3bbc);
      tolua_function(param_1,"alignItemsInRowsWithArray",FUN_008a3d58);
    }
    lua_settop(param_1,0xfffffffe);
    lua_pushstring(param_1,"LayerMultiplex");
    lua_rawget(param_1,0xffffd8f0);
    iVar1 = lua_type(param_1,0xffffffff);
    if (iVar1 == 5) {
      tolua_function(param_1,"createWithArray",FUN_008a401c);
    }
    lua_settop(param_1,0xfffffffe);
  }
  return 0;
}

