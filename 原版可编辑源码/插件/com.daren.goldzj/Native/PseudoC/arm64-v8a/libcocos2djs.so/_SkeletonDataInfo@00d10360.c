
/* spine::SkeletonDataInfo::~SkeletonDataInfo() */

void __thiscall spine::SkeletonDataInfo::~SkeletonDataInfo(SkeletonDataInfo *this)

{
  void *pvVar1;
  
  *(undefined ***)this = &PTR__SkeletonDataInfo_01c8fbc0;
  if (*(long **)(this + 0x10) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x10) + 8))();
    *(undefined8 *)(this + 0x10) = 0;
  }
  if (*(long **)(this + 0x18) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x18) + 8))();
    *(undefined8 *)(this + 0x18) = 0;
  }
  if (*(long **)(this + 0x20) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x20) + 8))();
    *(undefined8 *)(this + 0x20) = 0;
  }
  pvVar1 = *(void **)(this + 0x28);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x30) = pvVar1;
    operator_delete(pvVar1);
  }
  cocos2d::Ref::~Ref((Ref *)this);
  return;
}

