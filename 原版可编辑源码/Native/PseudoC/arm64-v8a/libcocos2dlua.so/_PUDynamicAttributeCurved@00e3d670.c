
/* cocos2d::PUDynamicAttributeCurved::~PUDynamicAttributeCurved() */

void __thiscall
cocos2d::PUDynamicAttributeCurved::~PUDynamicAttributeCurved(PUDynamicAttributeCurved *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(this + 0xb0);
  *(undefined ***)this = &PTR__PUDynamicAttributeCurved_016f1c48;
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0xb8) = pvVar1;
    operator_delete(pvVar1);
  }
  PUSimpleSpline::~PUSimpleSpline((PUSimpleSpline *)(this + 0x30));
  Ref::~Ref((Ref *)this);
  operator_delete(this);
  return;
}

