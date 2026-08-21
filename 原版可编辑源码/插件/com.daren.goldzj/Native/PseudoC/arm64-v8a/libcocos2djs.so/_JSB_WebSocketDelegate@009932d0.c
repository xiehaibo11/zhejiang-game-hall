
/* JSB_WebSocketDelegate::~JSB_WebSocketDelegate() */

void __thiscall JSB_WebSocketDelegate::~JSB_WebSocketDelegate(JSB_WebSocketDelegate *this)

{
  *(undefined ***)this = &PTR__JSB_WebSocketDelegate_01c6a570;
  *(undefined ***)(this + 0x10) = &PTR__JSB_WebSocketDelegate_01c6a5b0;
  se::Value::~Value((Value *)(this + 0x18));
  cocos2d::Ref::~Ref((Ref *)this);
  operator_delete(this);
  return;
}

