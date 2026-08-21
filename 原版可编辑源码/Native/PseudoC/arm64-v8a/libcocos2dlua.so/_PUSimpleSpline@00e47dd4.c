
/* cocos2d::PUSimpleSpline::~PUSimpleSpline() */

void __thiscall cocos2d::PUSimpleSpline::~PUSimpleSpline(PUSimpleSpline *this)

{
  void *pvVar1;
  
  Mat4::~Mat4((Mat4 *)(this + 0x38));
  pvVar1 = *(void **)(this + 0x20);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x28) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 8);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x10) = pvVar1;
    operator_delete(pvVar1);
    return;
  }
  return;
}

