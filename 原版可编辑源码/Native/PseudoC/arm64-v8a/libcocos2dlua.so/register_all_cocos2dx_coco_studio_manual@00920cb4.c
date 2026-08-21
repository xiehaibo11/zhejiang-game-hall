
/* register_all_cocos2dx_coco_studio_manual(lua_State*) */

undefined8 register_all_cocos2dx_coco_studio_manual(lua_State *param_1)

{
  int iVar1;
  
  if (param_1 != (lua_State *)0x0) {
    lua_pushstring(param_1,"ccs.ArmatureAnimation");
    lua_rawget(param_1,0xffffd8f0);
    iVar1 = lua_type(param_1,0xffffffff);
    if (iVar1 == 5) {
      tolua_function(param_1,"setMovementEventCallFunc",FUN_00921108);
      tolua_function(param_1,"setFrameEventCallFunc",FUN_0092146c);
    }
    lua_settop(param_1,0xfffffffe);
                    /* try { // try from 00920d3c to 00a20d87 has its CatchHandler @ 00920d3c
                       catch() { ... } // from try @ 00920d3c with catch @ 00920d3c
                       catch() { ... } // from try @ 00920d8c with catch @ 00920d3c */
    lua_pushstring(param_1,"ccs.ArmatureDataManager");
    lua_rawget(param_1,0xffffd8f0);
    iVar1 = lua_type(param_1,0xffffffff);
    if (iVar1 == 5) {
      tolua_function(param_1,"addArmatureFileInfoAsync",FUN_00922424);
    }
    lua_settop(param_1,0xfffffffe);
                    /* try { // try from 00920d88 to 00a20d8b has its CatchHandler @ 00920de0 */
                    /* try { // try from 00920d8c to 00a20df3 has its CatchHandler @ 00920d3c */
    lua_pushstring(param_1,"ccs.Bone");
    lua_rawget(param_1,0xffffd8f0);
    iVar1 = lua_type(param_1,0xffffffff);
    if (iVar1 == 5) {
      tolua_function(param_1,"setIgnoreMovementBoneData",FUN_00922734);
                    /* catch() { ... } // from try @ 00920d88 with catch @ 00920de0 */
      tolua_function(param_1,"getIgnoreMovementBoneData",FUN_009227bc);
    }
    lua_settop(param_1,0xfffffffe);
                    /* try { // try from 00920df4 to 00a20eab has its CatchHandler @ 00920df4
                       catch() { ... } // from try @ 00920df4 with catch @ 00920df4
                       catch() { ... } // from try @ 00920f2c with catch @ 00920df4 */
    lua_pushstring(param_1,"ccs.ActionTimelineCache");
    lua_rawget(param_1,0xffffd8f0);
    iVar1 = lua_type(param_1,0xffffffff);
    if (iVar1 == 5) {
      tolua_function(param_1,"getInstance",lua_cocos2dx_studio_ActionTimelineCache_getInstance);
    }
    lua_settop(param_1,0xfffffffe);
    lua_pushstring(param_1,"ccs.ActionTimeline");
    lua_rawget(param_1,0xffffd8f0);
    iVar1 = lua_type(param_1,0xffffffff);
    if (iVar1 == 5) {
      tolua_function(param_1,"setFrameEventCallFunc",FUN_00922838);
    }
    lua_settop(param_1,0xfffffffe);
  }
  return 0;
}

