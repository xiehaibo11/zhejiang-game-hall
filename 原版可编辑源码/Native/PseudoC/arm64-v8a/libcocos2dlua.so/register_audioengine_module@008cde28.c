
/* register_audioengine_module(lua_State*) */

undefined8 register_audioengine_module(lua_State *param_1)

{
  int iVar1;
  
  lua_getfield(param_1,0xffffd8ee,&DAT_01276ae5);
  iVar1 = lua_type(param_1,0xffffffff);
  if ((iVar1 == 5) && (register_all_cocos2dx_audioengine(param_1), param_1 != (lua_State *)0x0)) {
    lua_pushstring(param_1,"ccexp.AudioProfile");
    lua_rawget(param_1,0xffffd8f0);
    iVar1 = lua_type(param_1,0xffffffff);
    if (iVar1 == 5) {
      tolua_variable(param_1,"name",FUN_008cdf74,FUN_008cdfbc);
      tolua_variable(param_1,"maxInstances",FUN_008ce024,FUN_008ce060);
      tolua_variable(param_1,"minDelay",FUN_008ce0b8,FUN_008ce0f0);
    }
    lua_settop(param_1,0xfffffffe);
    lua_pushstring(param_1,"ccexp.AudioEngine");
    lua_rawget(param_1,0xffffd8f0);
    iVar1 = lua_type(param_1,0xffffffff);
    if (iVar1 == 5) {
      tolua_function(param_1,"setFinishCallback",
                     lua_cocos2dx_audioengine_AudioEngine_setFinishCallback);
    }
    lua_settop(param_1,0xfffffffe);
  }
  lua_settop(param_1,0xfffffffe);
  return 1;
}

