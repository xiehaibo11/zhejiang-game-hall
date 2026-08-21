
/* register_ui_module(lua_State*) */

undefined8 register_ui_module(lua_State *param_1)

{
  int iVar1;
  
  lua_getfield(param_1,0xffffd8ee,&DAT_01276ae5);
  iVar1 = lua_type(param_1,0xffffffff);
  if (iVar1 == 5) {
    register_all_cocos2dx_ui(param_1);
    register_all_cocos2dx_ui_manual(param_1);
    register_all_cocos2dx_experimental_video(param_1);
    register_all_cocos2dx_experimental_video_manual(param_1);
    register_all_cocos2dx_experimental_webview(param_1);
    register_all_cocos2dx_experimental_webview_manual(param_1);
    lua_pushstring(param_1,"cc.EventListenerFocus");
    lua_rawget(param_1,0xffffd8f0);
    iVar1 = lua_type(param_1,0xffffffff);
    if (iVar1 == 5) {
                    /* try { // try from 0096184c to 00a61897 has its CatchHandler @ 0096184c
                       catch() { ... } // from try @ 0096184c with catch @ 0096184c
                       catch() { ... } // from try @ 0096189c with catch @ 0096184c */
      tolua_function(param_1,"create",FUN_00963620);
      tolua_function(param_1,"registerScriptHandler",FUN_00963698);
      tolua_function(param_1,"clone",FUN_009637a8);
    }
                    /* try { // try from 00961898 to 00a6189b has its CatchHandler @ 009618d0 */
    lua_settop(param_1,0xfffffffe);
  }
                    /* try { // try from 0096189c to 00a618e3 has its CatchHandler @ 0096184c */
  lua_settop(param_1,0xfffffffe);
  return 1;
}

