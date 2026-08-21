
/* cocos2d::BatchMesh::~BatchMesh() */

void __thiscall cocos2d::BatchMesh::~BatchMesh(BatchMesh *this)

{
  bool bVar1;
  long lVar2;
  void *pvVar3;
  Mat4 *pMVar4;
  BatchMesh *pBVar5;
  Mat4 *pMVar6;
  BatchMesh *pBVar7;
  Mat4 *pMVar8;
  void *pvVar9;
  void *pvVar10;
  
  *(undefined ***)this = &PTR__BatchMesh_016d2680;
  pBVar7 = *(BatchMesh **)(this + 0x40);
  while (pBVar7 != this + 0x48) {
    if (*(Ref **)(pBVar7 + 0x28) != (Ref *)0x0) {
      Ref::release(*(Ref **)(pBVar7 + 0x28));
    }
    pBVar5 = *(BatchMesh **)(pBVar7 + 8);
    if (*(BatchMesh **)(pBVar7 + 8) == (BatchMesh *)0x0) {
      pBVar5 = pBVar7 + 0x10;
      bVar1 = *(BatchMesh **)*(BatchMesh **)pBVar5 != pBVar7;
      pBVar7 = *(BatchMesh **)pBVar5;
      if (bVar1) {
        do {
          lVar2 = *(long *)pBVar5;
          pBVar5 = (BatchMesh *)(lVar2 + 0x10);
          pBVar7 = *(BatchMesh **)pBVar5;
        } while (*(long *)pBVar7 != lVar2);
      }
    }
    else {
      do {
        pBVar7 = pBVar5;
        pBVar5 = *(BatchMesh **)pBVar7;
      } while (*(BatchMesh **)pBVar7 != (BatchMesh *)0x0);
    }
  }
  Ref::release(*(Ref **)(*(long *)(this + 0x2a0) + 0x30));
  lVar2 = Director::getInstance();
  EventDispatcher::removeEventListener
            (*(EventDispatcher **)(lVar2 + 0xb0),*(EventListener **)(this + 0x300));
  if (*(Ref **)(this + 0x300) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x300));
  }
  if (*(Ref **)(this + 0x2a8) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x2a8));
  }
  CustomCommand::~CustomCommand((CustomCommand *)(this + 0x2b0));
  pvVar3 = *(void **)(this + 0x268);
  if (pvVar3 != (void *)0x0) {
    *(void **)(this + 0x270) = pvVar3;
    operator_delete(pvVar3);
  }
  pvVar3 = *(void **)(this + 0x250);
  if (pvVar3 != (void *)0x0) {
    *(void **)(this + 600) = pvVar3;
    operator_delete(pvVar3);
  }
  pvVar3 = *(void **)(this + 0x238);
  if (pvVar3 != (void *)0x0) {
    *(void **)(this + 0x240) = pvVar3;
    operator_delete(pvVar3);
  }
  pvVar3 = *(void **)(this + 0x220);
  if (pvVar3 != (void *)0x0) {
    *(void **)(this + 0x228) = pvVar3;
    operator_delete(pvVar3);
  }
  pvVar3 = *(void **)(this + 0x208);
  if (pvVar3 != (void *)0x0) {
    *(void **)(this + 0x210) = pvVar3;
    operator_delete(pvVar3);
  }
  pvVar3 = *(void **)(this + 0x1f0);
  if (pvVar3 != (void *)0x0) {
    *(void **)(this + 0x1f8) = pvVar3;
    operator_delete(pvVar3);
  }
  pvVar3 = *(void **)(this + 0x1d8);
  if (pvVar3 != (void *)0x0) {
    *(void **)(this + 0x1e0) = pvVar3;
    operator_delete(pvVar3);
  }
  pvVar3 = *(void **)(this + 0x1c0);
  if (pvVar3 != (void *)0x0) {
    *(void **)(this + 0x1c8) = pvVar3;
    operator_delete(pvVar3);
  }
  pvVar3 = *(void **)(this + 0x1a8);
  if (pvVar3 != (void *)0x0) {
    *(void **)(this + 0x1b0) = pvVar3;
    operator_delete(pvVar3);
  }
  pvVar3 = *(void **)(this + 400);
  if (pvVar3 != (void *)0x0) {
    *(void **)(this + 0x198) = pvVar3;
    operator_delete(pvVar3);
  }
  pvVar3 = *(void **)(this + 0x178);
  if (pvVar3 != (void *)0x0) {
    *(void **)(this + 0x180) = pvVar3;
    operator_delete(pvVar3);
  }
  pvVar3 = *(void **)(this + 0x160);
  if (pvVar3 != (void *)0x0) {
    *(void **)(this + 0x168) = pvVar3;
    operator_delete(pvVar3);
  }
  pMVar8 = *(Mat4 **)(this + 0x148);
  if (pMVar8 != (Mat4 *)0x0) {
    pMVar6 = *(Mat4 **)(this + 0x150);
    pMVar4 = pMVar8;
    if (pMVar6 != pMVar8) {
      do {
        pMVar6 = pMVar6 + -0x40;
        Mat4::~Mat4(pMVar6);
      } while (pMVar8 != pMVar6);
      pMVar4 = *(Mat4 **)(this + 0x148);
    }
    *(Mat4 **)(this + 0x150) = pMVar8;
    operator_delete(pMVar4);
  }
  pMVar8 = *(Mat4 **)(this + 0x130);
  if (pMVar8 != (Mat4 *)0x0) {
    pMVar6 = *(Mat4 **)(this + 0x138);
    pMVar4 = pMVar8;
    if (pMVar6 != pMVar8) {
      do {
        pMVar6 = pMVar6 + -0x40;
        Mat4::~Mat4(pMVar6);
      } while (pMVar8 != pMVar6);
      pMVar4 = *(Mat4 **)(this + 0x130);
    }
    *(Mat4 **)(this + 0x138) = pMVar8;
    operator_delete(pMVar4);
  }
  pvVar3 = *(void **)(this + 0x118);
  if (pvVar3 != (void *)0x0) {
    *(void **)(this + 0x120) = pvVar3;
    operator_delete(pvVar3);
  }
  pvVar3 = *(void **)(this + 0x100);
  if (pvVar3 != (void *)0x0) {
    *(void **)(this + 0x108) = pvVar3;
    operator_delete(pvVar3);
  }
  pvVar3 = *(void **)(this + 0xe8);
  if (pvVar3 != (void *)0x0) {
    *(void **)(this + 0xf0) = pvVar3;
    operator_delete(pvVar3);
  }
  pvVar3 = *(void **)(this + 0xd0);
  if (pvVar3 != (void *)0x0) {
    pvVar10 = pvVar3;
    pvVar9 = *(void **)(this + 0xd8);
    if (*(void **)(this + 0xd8) != pvVar3) {
      do {
        pvVar10 = (void *)((long)pvVar9 + -0x70);
        Vec4::~Vec4((Vec4 *)((long)pvVar9 + -0x18));
        Mat4::~Mat4((Mat4 *)((long)pvVar9 + -0x60));
        pvVar9 = pvVar10;
      } while (pvVar3 != pvVar10);
      pvVar10 = *(void **)(this + 0xd0);
    }
    *(void **)(this + 0xd8) = pvVar3;
    operator_delete(pvVar10);
  }
  pvVar3 = *(void **)(this + 0xb8);
  if (pvVar3 != (void *)0x0) {
    *(void **)(this + 0xc0) = pvVar3;
    operator_delete(pvVar3);
  }
  pMVar8 = *(Mat4 **)(this + 0xa0);
  if (pMVar8 != (Mat4 *)0x0) {
    pMVar6 = *(Mat4 **)(this + 0xa8);
    pMVar4 = pMVar8;
    if (pMVar6 != pMVar8) {
      do {
        pMVar6 = pMVar6 + -0x40;
        Mat4::~Mat4(pMVar6);
      } while (pMVar8 != pMVar6);
      pMVar4 = *(Mat4 **)(this + 0xa0);
    }
    *(Mat4 **)(this + 0xa8) = pMVar8;
    operator_delete(pMVar4);
  }
  pvVar3 = *(void **)(this + 0x88);
  if (pvVar3 != (void *)0x0) {
    *(void **)(this + 0x90) = pvVar3;
    operator_delete(pvVar3);
  }
  pvVar3 = *(void **)(this + 0x70);
  if (pvVar3 != (void *)0x0) {
    *(void **)(this + 0x78) = pvVar3;
    operator_delete(pvVar3);
  }
  pvVar3 = *(void **)(this + 0x58);
  if (pvVar3 != (void *)0x0) {
    *(void **)(this + 0x60) = pvVar3;
    operator_delete(pvVar3);
  }
  std::__ndk1::
  __tree<std::__ndk1::__value_type<cocos2d::NTextureData::Usage,cocos2d::Texture2D*>,std::__ndk1::__map_value_compare<cocos2d::NTextureData::Usage,std::__ndk1::__value_type<cocos2d::NTextureData::Usage,cocos2d::Texture2D*>,std::__ndk1::less<cocos2d::NTextureData::Usage>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<cocos2d::NTextureData::Usage,cocos2d::Texture2D*>>>
  ::destroy((__tree<std::__ndk1::__value_type<cocos2d::NTextureData::Usage,cocos2d::Texture2D*>,std::__ndk1::__map_value_compare<cocos2d::NTextureData::Usage,std::__ndk1::__value_type<cocos2d::NTextureData::Usage,cocos2d::Texture2D*>,std::__ndk1::less<cocos2d::NTextureData::Usage>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<cocos2d::NTextureData::Usage,cocos2d::Texture2D*>>>
             *)(this + 0x40),*(__tree_node **)(this + 0x48));
  if (((byte)this[0x28] & 1) != 0) {
    operator_delete(*(void **)(this + 0x38));
  }
  Ref::~Ref((Ref *)this);
  return;
}

