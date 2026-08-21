
/* cocos2d::network::HttpResponse::~HttpResponse() */

void __thiscall cocos2d::network::HttpResponse::~HttpResponse(HttpResponse *this)

{
  HttpResponse HVar1;
  void *pvVar2;
  
  *(undefined ***)this = &PTR__HttpResponse_016f4628;
  if (*(Ref **)(this + 0x28) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x28));
  }
  if (((byte)this[0x88] & 1) == 0) {
    HVar1 = this[0x70];
  }
  else {
    operator_delete(*(void **)(this + 0x98));
    HVar1 = this[0x70];
  }
  if (((byte)HVar1 & 1) == 0) {
    pvVar2 = *(void **)(this + 0x50);
  }
  else {
    operator_delete(*(void **)(this + 0x80));
    pvVar2 = *(void **)(this + 0x50);
  }
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x58) = pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = *(void **)(this + 0x38);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x40) = pvVar2;
    operator_delete(pvVar2);
  }
  Ref::~Ref((Ref *)this);
  return;
}

