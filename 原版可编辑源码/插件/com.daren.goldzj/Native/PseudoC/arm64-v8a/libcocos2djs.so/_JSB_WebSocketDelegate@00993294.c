
/* non-virtual thunk to JSB_WebSocketDelegate::~JSB_WebSocketDelegate() */

void __thiscall JSB_WebSocketDelegate::~JSB_WebSocketDelegate(JSB_WebSocketDelegate *this)

{
                    /* try { // try from 009932ac to 00a933cb has its CatchHandler @ 00993038 */
  *(undefined ***)(this + -0x10) = &PTR__JSB_WebSocketDelegate_01c6a570;
  *(undefined ***)this = &PTR__JSB_WebSocketDelegate_01c6a5b0;
  se::Value::~Value((Value *)(this + 8));
  cocos2d::Ref::~Ref((Ref *)(this + -0x10));
  return;
}

