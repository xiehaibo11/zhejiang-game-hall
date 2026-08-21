
/* cocos2d::network::HttpRequest::~HttpRequest() */

void __thiscall cocos2d::network::HttpRequest::~HttpRequest(HttpRequest *this)

{
  HttpRequest *pHVar1;
  void *pvVar2;
  byte *pbVar3;
  code *pcVar4;
  byte *pbVar5;
  byte *pbVar6;
  
  pbVar5 = *(byte **)(this + 0x98);
  *(undefined ***)this = &PTR__HttpRequest_01c68340;
  if (pbVar5 != (byte *)0x0) {
    pbVar3 = *(byte **)(this + 0xa0);
    pbVar6 = pbVar5;
    if (pbVar3 != pbVar5) {
      do {
        pbVar6 = pbVar3 + -0x18;
        if ((*pbVar6 & 1) != 0) {
          operator_delete(*(void **)(pbVar3 + -8));
        }
        pbVar3 = pbVar6;
      } while (pbVar5 != pbVar6);
      pbVar6 = *(byte **)(this + 0x98);
    }
    *(byte **)(this + 0xa0) = pbVar5;
    operator_delete(pbVar6);
  }
  pHVar1 = *(HttpRequest **)(this + 0x80);
  if (this + 0x60 == pHVar1) {
    pcVar4 = *(code **)(*(long *)pHVar1 + 0x20);
  }
  else {
    if (pHVar1 == (HttpRequest *)0x0) goto LAB_008fe504;
    pcVar4 = *(code **)(*(long *)pHVar1 + 0x28);
  }
  (*pcVar4)();
LAB_008fe504:
  if (((byte)this[0x40] & 1) != 0) {
    operator_delete(*(void **)(this + 0x50));
  }
  pvVar2 = *(void **)(this + 0x28);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x30) = pvVar2;
    operator_delete(pvVar2);
  }
  if (((byte)this[0x10] & 1) != 0) {
    operator_delete(*(void **)(this + 0x20));
  }
  Ref::~Ref((Ref *)this);
  return;
}

