
/* cocos2d::PointArray::~PointArray() */

void __thiscall cocos2d::PointArray::~PointArray(PointArray *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(this + 0x30);
  *(undefined ***)this = &PTR__PointArray_016f5788;
  *(undefined ***)(this + 0x28) = &PTR_clone_016f57b0;
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x38) = pvVar1;
    operator_delete(pvVar1);
  }
  Ref::~Ref((Ref *)this);
  return;
}

