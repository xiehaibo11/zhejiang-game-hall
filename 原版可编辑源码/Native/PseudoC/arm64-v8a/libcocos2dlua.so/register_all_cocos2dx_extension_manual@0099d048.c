
/* register_all_cocos2dx_extension_manual(lua_State*) */

undefined8 register_all_cocos2dx_extension_manual(lua_State *param_1)

{
  int iVar1;
  
  lua_pushstring(param_1,"cc.Control");
  lua_rawget(param_1,0xffffd8f0);
  iVar1 = lua_type(param_1,0xffffffff);
  if (iVar1 == 5) {
    lua_pushstring(param_1,"registerControlEventHandler");
    lua_pushcclosure(param_1,FUN_0099d458,0);
    lua_rawset(param_1,0xfffffffd);
    lua_pushstring(param_1,"unregisterControlEventHandler");
                    /* try { // try from 0099d0c8 to 00a9d14f has its CatchHandler @ 0099d0c8
                       catch() { ... } // from try @ 0099d0c8 with catch @ 0099d0c8
                       catch() { ... } // from try @ 0099d158 with catch @ 0099d0c8 */
    lua_pushcclosure(param_1,FUN_0099d5ec,0);
    lua_rawset(param_1,0xfffffffd);
  }
  lua_settop(param_1,0xfffffffe);
  lua_pushstring(param_1,"cc.AssetsManager");
  lua_rawget(param_1,0xffffd8f0);
  iVar1 = lua_type(param_1,0xffffffff);
  if (iVar1 == 5) {
    tolua_function(param_1,"setDelegate",FUN_0099d6e0);
  }
  lua_settop(param_1,0xfffffffe);
                    /* try { // try from 0099d150 to 00a9d157 has its CatchHandler @ 0099d1e4 */
  lua_pushstring(param_1,"cc.ScrollView");
                    /* try { // try from 0099d158 to 00a9d1ff has its CatchHandler @ 0099d0c8 */
  lua_rawget(param_1,0xffffd8f0);
  iVar1 = lua_type(param_1,0xffffffff);
  if (iVar1 == 5) {
    lua_pushstring(param_1,"setDelegate");
    lua_pushcclosure(param_1,FUN_0099dbb0,0);
    lua_rawset(param_1,0xfffffffd);
    lua_pushstring(param_1,"registerScriptHandler");
    lua_pushcclosure(param_1,FUN_0099dc94,0);
    lua_rawset(param_1,0xfffffffd);
    lua_pushstring(param_1,"unregisterScriptHandler");
                    /* catch() { ... } // from try @ 0099d150 with catch @ 0099d1e4 */
    lua_pushcclosure(param_1,FUN_0099dd44,0);
    lua_rawset(param_1,0xfffffffd);
  }
  lua_settop(param_1,0xfffffffe);
  lua_pushstring(param_1,"cc.TableView");
  lua_rawget(param_1,0xffffd8f0);
  iVar1 = lua_type(param_1,0xffffffff);
  if (iVar1 == 5) {
    tolua_function(param_1,"setDelegate",FUN_0099e10c);
    tolua_function(param_1,"setDataSource",FUN_0099e2b0);
    tolua_function(param_1,"create",FUN_0099e454);
    tolua_function(param_1,"registerScriptHandler",FUN_0099e698);
    tolua_function(param_1,"unregisterScriptHandler",FUN_0099e748);
  }
  lua_settop(param_1,0xfffffffe);
  lua_pushstring(param_1,"cc.Manifest");
  lua_rawget(param_1,0xffffd8f0);
  lua_settop(param_1,0xfffffffe);
  lua_pushstring(param_1,"cc.EventListenerAssetsManagerEx");
  lua_rawget(param_1,0xffffd8f0);
  iVar1 = lua_type(param_1,0xffffffff);
  if (iVar1 == 5) {
    tolua_function(param_1,"create",FUN_0099f51c);
  }
  lua_settop(param_1,0xfffffffe);
  lua_pushstring(param_1,"cc.ParticleSystem3D");
  lua_rawget(param_1,0xffffd8f0);
  iVar1 = lua_type(param_1,0xffffffff);
  if (iVar1 == 5) {
    tolua_function(param_1,&LAB_012e2c38,lua_cocos2dx_extension_ParticleSystem3D_getParticlePool);
  }
  lua_settop(param_1,0xfffffffe);
  lua_pushstring(param_1,"cc.ParticlePool");
  lua_rawget(param_1,0xffffd8f0);
  iVar1 = lua_type(param_1,0xffffffff);
  if (iVar1 == 5) {
    tolua_function(param_1,"getActiveDataList",lua_cocos2dx_extension_ParticlePool_getActiveDataList
                  );
  }
  lua_settop(param_1,0xfffffffe);
  return 0;
}

