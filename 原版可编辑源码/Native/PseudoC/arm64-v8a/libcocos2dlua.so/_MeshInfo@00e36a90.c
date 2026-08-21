
/* cocos2d::MeshInfo::~MeshInfo() */

void __thiscall cocos2d::MeshInfo::~MeshInfo(MeshInfo *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)this;
  *(void **)(this + 8) = pvVar1;
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 8) = pvVar1;
    operator_delete(pvVar1);
    return;
  }
  return;
}

