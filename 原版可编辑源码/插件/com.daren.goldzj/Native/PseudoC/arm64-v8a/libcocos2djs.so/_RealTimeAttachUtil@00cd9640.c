
/* dragonBones::RealTimeAttachUtil::~RealTimeAttachUtil() */

void __thiscall dragonBones::RealTimeAttachUtil::~RealTimeAttachUtil(RealTimeAttachUtil *this)

{
  void *pvVar1;
  
  *(undefined ***)this = &PTR__AttachUtilBase_01c91bf0;
  AttachUtilBase::releaseAttachedNode((AttachUtilBase *)this);
  pvVar1 = *(void **)(this + 0x40);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x48) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x28);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x30) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x10);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x18) = pvVar1;
    operator_delete(pvVar1);
  }
  cocos2d::Ref::~Ref((Ref *)this);
  operator_delete(this);
  return;
}

