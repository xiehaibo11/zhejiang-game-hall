
/* cocos2d::network::WebSocket::WebSocket() */

void __thiscall cocos2d::network::WebSocket::WebSocket(WebSocket *this)

{
  WebSocketImpl *this_00;
  
                    /* try { // try from 009ecdcc to 00aeceaf has its CatchHandler @ 009ecd0c */
  Ref::Ref((Ref *)this);
  *(undefined ***)this = &PTR__WebSocket_01c6c110;
  this_00 = operator_new(0x150,(nothrow_t *)&std::nothrow);
  if (this_00 != (WebSocketImpl *)0x0) {
    WebSocketImpl::WebSocketImpl(this_00,this);
  }
  *(WebSocketImpl **)(this + 0x10) = this_00;
  return;
}

