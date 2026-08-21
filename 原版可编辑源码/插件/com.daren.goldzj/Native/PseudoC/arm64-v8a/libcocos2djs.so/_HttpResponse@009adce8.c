
/* cocos2d::network::HttpResponse::~HttpResponse() */

void __thiscall cocos2d::network::HttpResponse::~HttpResponse(HttpResponse *this)

{
  HttpResponse HVar1;
  void *pvVar2;
  
                    /* try { // try from 009adcf0 to 00aadcfb has its CatchHandler @ 009adef4 */
                    /* try { // try from 009adcfc to 00aadd03 has its CatchHandler @ 009adf34 */
  *(undefined ***)this = &PTR__HttpResponse_01c6a9e0;
  if (*(Ref **)(this + 0x10) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x10));
  }
  if (((byte)this[0x70] & 1) == 0) {
    HVar1 = this[0x58];
  }
  else {
    operator_delete(*(void **)(this + 0x80));
    HVar1 = this[0x58];
  }
  if (((byte)HVar1 & 1) == 0) {
    pvVar2 = *(void **)(this + 0x38);
  }
  else {
    operator_delete(*(void **)(this + 0x68));
    pvVar2 = *(void **)(this + 0x38);
                    /* try { // try from 009add70 to 00aadd93 has its CatchHandler @ 009adef0 */
  }
  if (pvVar2 != (void *)0x0) {
                    /* try { // try from 009add2c to 00aadd47 has its CatchHandler @ 009adefc */
    *(void **)(this + 0x40) = pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = *(void **)(this + 0x20);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x28) = pvVar2;
    operator_delete(pvVar2);
  }
                    /* try { // try from 009add50 to 00aadd63 has its CatchHandler @ 009adeec */
  Ref::~Ref((Ref *)this);
  return;
}

