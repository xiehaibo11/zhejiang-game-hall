
/* register_all_cocos2dx_cocosbuilder_manual(lua_State*) */

undefined8 register_all_cocos2dx_cocosbuilder_manual(lua_State *param_1)

{
  int iVar1;
  
  register_cocos2dx_extension_CCBProxy(param_1);
  lua_pushstring(param_1,"cc.CCBReader");
  lua_rawget(param_1,0xffffd8f0);
  iVar1 = lua_type(param_1,0xffffffff);
  if (iVar1 == 5) {
    lua_pushstring(param_1,"load");
    lua_pushcclosure(param_1,FUN_0091bb9c,0);
    lua_rawset(param_1,0xfffffffd);
  }
                    /* try { // try from 0091ba74 to 00a1babf has its CatchHandler @ 0091ba74
                       catch() { ... } // from try @ 0091ba74 with catch @ 0091ba74
                       catch() { ... } // from try @ 0091bac4 with catch @ 0091ba74 */
  lua_settop(param_1,0xfffffffe);
  lua_pushstring(param_1,"cc.CCBAnimationManager");
  lua_rawget(param_1,0xffffd8f0);
  iVar1 = lua_type(param_1,0xffffffff);
  if (iVar1 == 5) {
    lua_pushstring(param_1,"setCallFuncForLuaCallbackNamed");
                    /* try { // try from 0091bac0 to 00a1bac3 has its CatchHandler @ 0091baf8 */
                    /* try { // try from 0091bac4 to 00a1bb0b has its CatchHandler @ 0091ba74 */
    lua_pushcclosure(param_1,FUN_0091be04,0);
    lua_rawset(param_1,0xfffffffd);
  }
  lua_settop(param_1,0xfffffffe);
  return 0;
}

