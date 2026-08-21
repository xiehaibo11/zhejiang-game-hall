
/* cocos2d::network::HttpResponse::HttpResponse(cocos2d::network::HttpRequest*) */

void __thiscall
cocos2d::network::HttpResponse::HttpResponse(HttpResponse *this,HttpRequest *param_1)

{
  Ref::Ref((Ref *)this);
  *(HttpRequest **)(this + 0x10) = param_1;
  this[0x18] = (HttpResponse)0x0;
  *(undefined ***)this = &PTR__HttpResponse_01c6a9e0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  this[0x71] = (HttpResponse)0x0;
  if (param_1 != (HttpRequest *)0x0) {
                    /* catch() { ... } // from try @ 009aa774 with catch @ 009aa920 */
    Ref::retain((Ref *)param_1);
  }
                    /* catch() { ... } // from try @ 009aa768 with catch @ 009aa924 */
                    /* catch() { ... } // from try @ 009aa748 with catch @ 009aa928 */
  return;
}

