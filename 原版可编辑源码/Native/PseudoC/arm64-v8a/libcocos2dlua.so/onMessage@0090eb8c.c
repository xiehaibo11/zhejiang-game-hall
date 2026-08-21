
/* non-virtual thunk to LuaWebSocket::onMessage(cocos2d::network::WebSocket*,
   cocos2d::network::WebSocket::Data const&) */

void __thiscall LuaWebSocket::onMessage(LuaWebSocket *this,WebSocket *param_1,Data *param_2)

{
                    /* try { // try from 0090eb90 to 00a0eba3 has its CatchHandler @ 0090ebe8 */
  onMessage(this + -0x158,param_1,param_2);
  return;
}

