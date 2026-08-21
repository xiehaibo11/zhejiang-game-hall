
/* register_all_cocos2dx_experimental_webview_manual(lua_State*) */

undefined8 register_all_cocos2dx_experimental_webview_manual(lua_State *param_1)

{
  int iVar1;
  
  if (param_1 != (lua_State *)0x0) {
    lua_pushstring(param_1,"ccexp.WebView");
    lua_rawget(param_1,0xffffd8f0);
    iVar1 = lua_type(param_1,0xffffffff);
    if (iVar1 == 5) {
      tolua_function(param_1,"setOnShouldStartLoading",FUN_009d4514);
      tolua_function(param_1,"setOnDidFinishLoading",FUN_009d4660);
      tolua_function(param_1,"setOnDidFailLoading",FUN_009d47ac);
    }
    lua_settop(param_1,0xfffffffe);
  }
  return 0;
}

