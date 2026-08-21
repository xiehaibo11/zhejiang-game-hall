
/* register_all_cocos2dx_experimental_video_manual(lua_State*) */

undefined8 register_all_cocos2dx_experimental_video_manual(lua_State *param_1)

{
  int iVar1;
  
  if (param_1 != (lua_State *)0x0) {
    lua_pushstring(param_1,"ccexp.VideoPlayer");
    lua_rawget(param_1,0xffffd8f0);
    iVar1 = lua_type(param_1,0xffffffff);
    if (iVar1 == 5) {
      tolua_function(param_1,"addEventListener",FUN_009d4c50);
    }
    lua_settop(param_1,0xfffffffe);
  }
  return 0;
}

