
/* cocos2d::network::WebSocket::~WebSocket() */

void __thiscall cocos2d::network::WebSocket::~WebSocket(WebSocket *this)

{
  WebSocketImpl *this_00;
  
  this_00 = *(WebSocketImpl **)(this + 0x10);
                    /* try { // try from 009eceb0 to 00aecf03 has its CatchHandler @ 009eceb0
                       catch() { ... } // from try @ 009eceb0 with catch @ 009eceb0
                       catch() { ... } // from try @ 009ecf4c with catch @ 009eceb0 */
  *(undefined ***)this = &PTR__WebSocket_01c6c110;
  if (this_00 != (WebSocketImpl *)0x0) {
    WebSocketImpl::~WebSocketImpl(this_00);
    operator_delete(this_00);
  }
  Ref::~Ref((Ref *)this);
  operator_delete(this);
  return;
}

