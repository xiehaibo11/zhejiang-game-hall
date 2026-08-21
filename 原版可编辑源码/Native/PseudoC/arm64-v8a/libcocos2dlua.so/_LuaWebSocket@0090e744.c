
/* LuaWebSocket::~LuaWebSocket() */

void __thiscall LuaWebSocket::~LuaWebSocket(LuaWebSocket *this)

{
  ScriptHandlerMgr *this_00;
  
  *(undefined ***)this = &PTR__LuaWebSocket_0169c210;
  *(undefined ***)(this + 0x158) = &PTR__LuaWebSocket_0169c250;
  this_00 = (ScriptHandlerMgr *)cocos2d::ScriptHandlerMgr::getInstance();
  cocos2d::ScriptHandlerMgr::removeObjectAllHandlers(this_00,this);
  cocos2d::network::WebSocket::~WebSocket((WebSocket *)this);
  operator_delete(this);
  return;
}

