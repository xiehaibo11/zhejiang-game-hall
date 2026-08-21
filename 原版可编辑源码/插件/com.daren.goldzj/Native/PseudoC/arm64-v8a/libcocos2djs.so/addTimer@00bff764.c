
/* cocos2d::middleware::MiddlewareManager::addTimer(cocos2d::middleware::IMiddleware*) */

void __thiscall
cocos2d::middleware::MiddlewareManager::addTimer(MiddlewareManager *this,IMiddleware *param_1)

{
  long *plVar1;
  size_t __n;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  IMiddleware *pIVar5;
  long *__dest;
  IMiddleware *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  puVar4 = *(undefined8 **)(this + 8);
  puVar3 = *(undefined8 **)(this + 0x10);
  local_50 = param_1;
  if (puVar4 != puVar3) {
    pIVar5 = (IMiddleware *)*puVar4;
    while (pIVar5 != param_1) {
      puVar4 = puVar4 + 1;
      if (puVar3 == puVar4) goto LAB_00bff7d8;
      pIVar5 = (IMiddleware *)*puVar4;
    }
  }
  if (puVar4 == puVar3) {
LAB_00bff7d8:
    __dest = *(long **)(this + 0x20);
    plVar1 = *(long **)(this + 0x28);
    if (__dest != plVar1) {
      pIVar5 = (IMiddleware *)*__dest;
      while (pIVar5 != param_1) {
        __dest = __dest + 1;
        if (plVar1 == __dest) goto LAB_00bff838;
        pIVar5 = (IMiddleware *)*__dest;
      }
    }
    if (__dest != plVar1) {
      __n = (long)plVar1 - (long)(__dest + 1);
      if (__n != 0) {
        memmove(__dest,__dest + 1,__n);
        puVar3 = *(undefined8 **)(this + 0x10);
      }
      *(long **)(this + 0x28) = __dest + ((long)__n >> 3);
    }
LAB_00bff838:
    if (puVar3 == *(undefined8 **)(this + 0x18)) {
      std::__ndk1::
      vector<cocos2d::middleware::IMiddleware*,std::__ndk1::allocator<cocos2d::middleware::IMiddleware*>>
      ::__push_back_slow_path<cocos2d::middleware::IMiddleware*const&>
                ((vector<cocos2d::middleware::IMiddleware*,std::__ndk1::allocator<cocos2d::middleware::IMiddleware*>>
                  *)(this + 8),&local_50);
    }
    else {
      *puVar3 = param_1;
      *(long *)(this + 0x10) = *(long *)(this + 0x10) + 8;
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

