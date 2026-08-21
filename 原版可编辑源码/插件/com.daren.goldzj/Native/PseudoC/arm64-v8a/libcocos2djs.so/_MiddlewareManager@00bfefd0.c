
/* cocos2d::middleware::MiddlewareManager::~MiddlewareManager() */

void __thiscall cocos2d::middleware::MiddlewareManager::~MiddlewareManager(MiddlewareManager *this)

{
  bool bVar1;
  void *pvVar2;
  MiddlewareManager *pMVar3;
  long lVar4;
  __tree<std::__ndk1::__value_type<int,cocos2d::middleware::MeshBuffer*>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,cocos2d::middleware::MeshBuffer*>,std::__ndk1::less<int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<int,cocos2d::middleware::MeshBuffer*>>>
  *this_00;
  MiddlewareManager *pMVar5;
  
  this_00 = (__tree<std::__ndk1::__value_type<int,cocos2d::middleware::MeshBuffer*>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,cocos2d::middleware::MeshBuffer*>,std::__ndk1::less<int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<int,cocos2d::middleware::MeshBuffer*>>>
             *)(this + 0x38);
  pMVar5 = *(MiddlewareManager **)this_00;
  while (pMVar5 != this + 0x40) {
    if (*(long **)(pMVar5 + 0x28) != (long *)0x0) {
      (**(code **)(**(long **)(pMVar5 + 0x28) + 8))();
    }
    pMVar3 = *(MiddlewareManager **)(pMVar5 + 8);
    if (*(MiddlewareManager **)(pMVar5 + 8) == (MiddlewareManager *)0x0) {
      pMVar3 = pMVar5 + 0x10;
      bVar1 = *(MiddlewareManager **)*(MiddlewareManager **)pMVar3 != pMVar5;
      pMVar5 = *(MiddlewareManager **)pMVar3;
      if (bVar1) {
        do {
          lVar4 = *(long *)pMVar3;
          pMVar3 = (MiddlewareManager *)(lVar4 + 0x10);
          pMVar5 = *(MiddlewareManager **)pMVar3;
        } while (*(long *)pMVar5 != lVar4);
      }
    }
    else {
      do {
        pMVar5 = pMVar3;
        pMVar3 = *(MiddlewareManager **)pMVar5;
      } while (*(MiddlewareManager **)pMVar5 != (MiddlewareManager *)0x0);
    }
  }
  std::__ndk1::
  __tree<std::__ndk1::__value_type<int,cocos2d::middleware::MeshBuffer*>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,cocos2d::middleware::MeshBuffer*>,std::__ndk1::less<int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<int,cocos2d::middleware::MeshBuffer*>>>
  ::destroy(this_00,*(__tree_node **)(this + 0x40));
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(MiddlewareManager **)(this + 0x38) = this + 0x40;
  std::__ndk1::
  __tree<std::__ndk1::__value_type<int,cocos2d::middleware::MeshBuffer*>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,cocos2d::middleware::MeshBuffer*>,std::__ndk1::less<int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<int,cocos2d::middleware::MeshBuffer*>>>
  ::destroy(this_00,(__tree_node *)0x0);
  pvVar2 = *(void **)(this + 0x20);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x28) = pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = *(void **)(this + 8);
  if (pvVar2 == (void *)0x0) {
    return;
  }
  *(void **)(this + 0x10) = pvVar2;
  operator_delete(pvVar2);
  return;
}

