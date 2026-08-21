
/* non-virtual thunk to LuaWebSocket::~LuaWebSocket() */

void __thiscall LuaWebSocket::~LuaWebSocket(LuaWebSocket *this)

{
  ScriptHandlerMgr *this_00;
  WebSocket *this_01;
  
  this_01 = (WebSocket *)(this + -0x158);
  *(undefined ***)this_01 = &PTR__LuaWebSocket_0169c210;
  *(undefined ***)this = &PTR__LuaWebSocket_0169c250;
  this_00 = (ScriptHandlerMgr *)cocos2d::ScriptHandlerMgr::getInstance();
  cocos2d::ScriptHandlerMgr::removeObjectAllHandlers(this_00,this_01);
  cocos2d::network::WebSocket::~WebSocket(this_01);
  operator_delete(this_01);
  return;
}

