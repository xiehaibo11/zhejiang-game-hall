
/* spine::AttachUtilBase::~AttachUtilBase() */

void __thiscall spine::AttachUtilBase::~AttachUtilBase(AttachUtilBase *this)

{
  void *pvVar1;
  
  *(undefined ***)this = &PTR__AttachUtilBase_01c8ff08;
  releaseAttachedNode(this);
  pvVar1 = *(void **)(this + 0x10);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x18) = pvVar1;
    operator_delete(pvVar1);
  }
  cocos2d::Ref::~Ref((Ref *)this);
  return;
}

