
/* cocos2d::Mesh::~Mesh() */

void __thiscall cocos2d::Mesh::~Mesh(Mesh *this)

{
  bool bVar1;
  void *pvVar2;
  Mesh *pMVar3;
  code *pcVar4;
  Mesh *pMVar5;
  long lVar6;
  
  *(undefined ***)this = &PTR__Mesh_016d3530;
  pMVar3 = *(Mesh **)(this + 0x28);
  while (pMVar3 != this + 0x30) {
    if (*(Ref **)(pMVar3 + 0x28) != (Ref *)0x0) {
      Ref::release(*(Ref **)(pMVar3 + 0x28));
    }
    pMVar5 = *(Mesh **)(pMVar3 + 8);
    if (*(Mesh **)(pMVar3 + 8) == (Mesh *)0x0) {
      pMVar5 = pMVar3 + 0x10;
      bVar1 = *(Mesh **)*(Mesh **)pMVar5 != pMVar3;
      pMVar3 = *(Mesh **)pMVar5;
      if (bVar1) {
        do {
          lVar6 = *(long *)pMVar5;
          pMVar5 = (Mesh *)(lVar6 + 0x10);
          pMVar3 = *(Mesh **)pMVar5;
        } while (*(long *)pMVar3 != lVar6);
      }
    }
    else {
      do {
        pMVar3 = pMVar5;
        pMVar5 = *(Mesh **)pMVar3;
      } while (*(Mesh **)pMVar3 != (Mesh *)0x0);
    }
  }
  if (*(Ref **)(this + 0x40) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x40));
  }
  if (*(Ref **)(this + 0x128) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x128));
  }
  if (*(Ref **)(this + 0x148) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x148));
  }
  if (*(Ref **)(this + 0x130) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x130));
  }
  if (((byte)this[0x2a8] & 1) != 0) {
    operator_delete(*(void **)(this + 0x2b8));
  }
  pvVar2 = *(void **)(this + 0x290);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x298) = pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = *(void **)(this + 0x278);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x280) = pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = *(void **)(this + 0x260);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x268) = pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = *(void **)(this + 0x248);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x250) = pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = *(void **)(this + 0x230);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x238) = pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = *(void **)(this + 0x218);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x220) = pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = *(void **)(this + 0x200);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x208) = pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = *(void **)(this + 0x1e8);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x1f0) = pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = *(void **)(this + 0x1d0);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x1d8) = pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = *(void **)(this + 0x1b8);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x1c0) = pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = *(void **)(this + 0x1a0);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x1a8) = pvVar2;
    operator_delete(pvVar2);
  }
  pMVar3 = *(Mesh **)(this + 400);
  if (this + 0x170 == pMVar3) {
    pcVar4 = *(code **)(*(long *)pMVar3 + 0x20);
  }
  else {
    if (pMVar3 == (Mesh *)0x0) goto LAB_00d2e370;
    pcVar4 = *(code **)(*(long *)pMVar3 + 0x28);
  }
  (*pcVar4)();
LAB_00d2e370:
  MeshCommand::~MeshCommand((MeshCommand *)(this + 0x68));
  if (((byte)this[0x50] & 1) != 0) {
    operator_delete(*(void **)(this + 0x60));
  }
  std::__ndk1::
  __tree<std::__ndk1::__value_type<cocos2d::NTextureData::Usage,cocos2d::Texture2D*>,std::__ndk1::__map_value_compare<cocos2d::NTextureData::Usage,std::__ndk1::__value_type<cocos2d::NTextureData::Usage,cocos2d::Texture2D*>,std::__ndk1::less<cocos2d::NTextureData::Usage>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<cocos2d::NTextureData::Usage,cocos2d::Texture2D*>>>
  ::destroy((__tree<std::__ndk1::__value_type<cocos2d::NTextureData::Usage,cocos2d::Texture2D*>,std::__ndk1::__map_value_compare<cocos2d::NTextureData::Usage,std::__ndk1::__value_type<cocos2d::NTextureData::Usage,cocos2d::Texture2D*>,std::__ndk1::less<cocos2d::NTextureData::Usage>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<cocos2d::NTextureData::Usage,cocos2d::Texture2D*>>>
             *)(this + 0x28),*(__tree_node **)(this + 0x30));
  Ref::~Ref((Ref *)this);
  return;
}

