
/* cocos2d::network::WebSocket::~WebSocket() */

void __thiscall cocos2d::network::WebSocket::~WebSocket(WebSocket *this)

{
  WebSocketImpl *this_00;
  
                    /* catch() { ... } // from try @ 009ecda4 with catch @ 009ece58 */
  this_00 = *(WebSocketImpl **)(this + 0x10);
  *(undefined ***)this = &PTR__WebSocket_01c6c110;
  if (this_00 != (WebSocketImpl *)0x0) {
    WebSocketImpl::~WebSocketImpl(this_00);
    operator_delete(this_00);
  }
  Ref::~Ref((Ref *)this);
  return;
}

