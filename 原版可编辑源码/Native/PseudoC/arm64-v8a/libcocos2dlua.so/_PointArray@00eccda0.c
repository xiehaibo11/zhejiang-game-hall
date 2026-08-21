
/* non-virtual thunk to cocos2d::PointArray::~PointArray() */

void __thiscall cocos2d::PointArray::~PointArray(PointArray *this)

{
  void *pvVar1;
  
  *(undefined ***)(this + -0x28) = &PTR__PointArray_016f5788;
  pvVar1 = *(void **)(this + 8);
  *(undefined ***)this = &PTR_clone_016f57b0;
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x10) = pvVar1;
    operator_delete(pvVar1);
  }
  Ref::~Ref((Ref *)(this + -0x28));
  return;
}

