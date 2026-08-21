
/* non-virtual thunk to cocos2d::PointArray::~PointArray() */

void __thiscall cocos2d::PointArray::~PointArray(PointArray *this)

{
  void *pvVar1;
  Ref *this_00;
  
  this_00 = (Ref *)(this + -0x28);
  *(undefined ***)this_00 = &PTR__PointArray_016f5788;
  pvVar1 = *(void **)(this + 8);
  *(undefined ***)this = &PTR_clone_016f57b0;
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x10) = pvVar1;
    operator_delete(pvVar1);
  }
  Ref::~Ref(this_00);
  operator_delete(this_00);
  return;
}

