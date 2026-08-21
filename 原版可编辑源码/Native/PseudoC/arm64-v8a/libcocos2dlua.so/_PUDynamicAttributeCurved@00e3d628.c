
/* cocos2d::PUDynamicAttributeCurved::~PUDynamicAttributeCurved() */

void __thiscall
cocos2d::PUDynamicAttributeCurved::~PUDynamicAttributeCurved(PUDynamicAttributeCurved *this)

{
  void *pvVar1;
  
                    /* try { // try from 00e3d63c to 00f3d64f has its CatchHandler @ 00e3d6d8 */
  pvVar1 = *(void **)(this + 0xb0);
  *(undefined ***)this = &PTR__PUDynamicAttributeCurved_016f1c48;
  if (pvVar1 != (void *)0x0) {
                    /* try { // try from 00e3d650 to 00f3d757 has its CatchHandler @ 00e3d3c4 */
    *(void **)(this + 0xb8) = pvVar1;
    operator_delete(pvVar1);
  }
  PUSimpleSpline::~PUSimpleSpline((PUSimpleSpline *)(this + 0x30));
  Ref::~Ref((Ref *)this);
  return;
}

