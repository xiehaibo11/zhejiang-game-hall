
/* cocos2d::network::HttpRequest::~HttpRequest() */

void __thiscall cocos2d::network::HttpRequest::~HttpRequest(HttpRequest *this)

{
  byte bVar1;
  byte *pbVar2;
  HttpRequest *pHVar3;
  void *pvVar4;
  byte *pbVar5;
  code *pcVar6;
  byte *pbVar7;
  
  *(undefined ***)this = &PTR__HttpRequest_0169c310;
  if (*(Ref **)(this + 0x70) != (Ref *)0x0) {
                    /* try { // try from 009141ec to 00a14203 has its CatchHandler @ 00914314 */
    Ref::release(*(Ref **)(this + 0x70));
  }
  pbVar7 = *(byte **)(this + 200);
  if (pbVar7 != (byte *)0x0) {
    pbVar5 = *(byte **)(this + 0xd0);
    pbVar2 = pbVar7;
    if (pbVar5 != pbVar7) {
      bVar1 = pbVar5[-0x18];
      pbVar2 = pbVar5 + -0x18;
      while( true ) {
        if ((bVar1 & 1) != 0) {
          operator_delete(*(void **)(pbVar5 + -8));
        }
                    /* try { // try from 00914210 to 00a14223 has its CatchHandler @ 00914310 */
        if (pbVar7 == pbVar2) break;
        bVar1 = pbVar2[-0x18];
        pbVar5 = pbVar2;
        pbVar2 = pbVar2 + -0x18;
      }
      pbVar2 = *(byte **)(this + 200);
    }
    *(byte **)(this + 0xd0) = pbVar7;
                    /* try { // try from 00914240 to 00a14247 has its CatchHandler @ 009142e0 */
    operator_delete(pbVar2);
  }
  pHVar3 = *(HttpRequest **)(this + 0xb0);
                    /* try { // try from 00914248 to 00a1428b has its CatchHandler @ 0091419c */
  if (this + 0x90 == pHVar3) {
    pcVar6 = *(code **)(*(long *)pHVar3 + 0x20);
  }
  else {
    if (pHVar3 == (HttpRequest *)0x0) goto LAB_00914270;
    pcVar6 = *(code **)(*(long *)pHVar3 + 0x28);
  }
  (*pcVar6)();
LAB_00914270:
  if (((byte)this[0x58] & 1) != 0) {
    operator_delete(*(void **)(this + 0x68));
  }
  pvVar4 = *(void **)(this + 0x40);
  if (pvVar4 != (void *)0x0) {
    *(void **)(this + 0x48) = pvVar4;
                    /* try { // try from 0091428c to 00a1429f has its CatchHandler @ 00914314 */
    operator_delete(pvVar4);
  }
  if (((byte)this[0x28] & 1) != 0) {
    operator_delete(*(void **)(this + 0x38));
  }
                    /* try { // try from 009142a0 to 00a1432f has its CatchHandler @ 0091419c */
  Ref::~Ref((Ref *)this);
  return;
}

