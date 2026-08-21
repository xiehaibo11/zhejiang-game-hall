
/* non-virtual thunk to JSB_WebSocketDelegate::~JSB_WebSocketDelegate() */

void __thiscall JSB_WebSocketDelegate::~JSB_WebSocketDelegate(JSB_WebSocketDelegate *this)

{
  Ref *this_00;
  
                    /* catch() { ... } // from try @ 0099310c with catch @ 00993320 */
                    /* catch() { ... } // from try @ 0099311c with catch @ 00993324
                       catch() { ... } // from try @ 00993204 with catch @ 00993324 */
  this_00 = (Ref *)(this + -0x10);
  *(undefined ***)this_00 = &PTR__JSB_WebSocketDelegate_01c6a570;
  *(undefined ***)this = &PTR__JSB_WebSocketDelegate_01c6a5b0;
  se::Value::~Value((Value *)(this + 8));
                    /* catch() { ... } // from try @ 009930f8 with catch @ 00993344
                       catch() { ... } // from try @ 009931b0 with catch @ 00993344 */
  cocos2d::Ref::~Ref(this_00);
  operator_delete(this_00);
  return;
}

