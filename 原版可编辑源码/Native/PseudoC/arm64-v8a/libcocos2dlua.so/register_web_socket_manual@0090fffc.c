
/* register_web_socket_manual(lua_State*) */

undefined8 register_web_socket_manual(lua_State *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  if (param_1 != (lua_State *)0x0) {
    lua_pushstring(param_1,"cc.WebSocket");
    lua_rawget(param_1,0xffffd8f0);
    iVar1 = lua_type(param_1,0xffffffff);
    if (iVar1 == 5) {
      lua_pushstring(param_1,"registerScriptHandler");
      lua_pushcclosure(param_1,tolua_Cocos2d_WebSocket_registerScriptHandler00,0);
      lua_rawset(param_1,0xfffffffd);
      lua_pushstring(param_1,"unregisterScriptHandler");
      lua_pushcclosure(param_1,tolua_Cocos2d_WebSocket_unregisterScriptHandler00,0);
      lua_rawset(param_1,0xfffffffd);
    }
    lua_settop(param_1,0xfffffffe);
    uVar2 = 1;
  }
  return uVar2;
}

