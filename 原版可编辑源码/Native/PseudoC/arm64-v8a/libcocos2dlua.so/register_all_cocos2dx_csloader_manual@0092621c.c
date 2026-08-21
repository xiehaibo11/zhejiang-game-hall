
/* register_all_cocos2dx_csloader_manual(lua_State*) */

undefined8 register_all_cocos2dx_csloader_manual(lua_State *param_1)

{
  int iVar1;
  
  lua_pushstring(param_1,"cc.CSLoader");
  lua_rawget(param_1,0xffffd8f0);
  iVar1 = lua_type(param_1,0xffffffff);
                    /* try { // try from 00926250 to 00a26283 has its CatchHandler @ 00926350 */
  if (iVar1 == 5) {
    tolua_function(param_1,"createTimeline",lua_cocos2dx_csloader_CSLoader_createTimeline);
                    /* try { // try from 00926284 to 00a26297 has its CatchHandler @ 0092631c */
    tolua_function(param_1,"createNode",lua_cocos2dx_csloader_CSLoader_createNode);
  }
  lua_settop(param_1,0xfffffffe);
                    /* try { // try from 0092629c to 00a262cf has its CatchHandler @ 00926320 */
  return 0;
}

