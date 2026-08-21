
/* cocos2d::middleware::MiddlewareManager::removeTimer(cocos2d::middleware::IMiddleware*) */

void __thiscall
cocos2d::middleware::MiddlewareManager::removeTimer(MiddlewareManager *this,IMiddleware *param_1)

{
  long *plVar1;
  size_t __n;
  long lVar2;
  IMiddleware *pIVar3;
  long *__dest;
  IMiddleware *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_40 = param_1;
  if ((this[1] == (MiddlewareManager)0x0) && (*this == (MiddlewareManager)0x0)) {
    __dest = *(long **)(this + 8);
    plVar1 = *(long **)(this + 0x10);
    if (__dest != plVar1) {
      pIVar3 = (IMiddleware *)*__dest;
      while (pIVar3 != param_1) {
        __dest = __dest + 1;
        if (plVar1 == __dest) goto LAB_00bff8f4;
        pIVar3 = (IMiddleware *)*__dest;
      }
    }
    if (__dest != plVar1) {
      __n = (long)plVar1 - (long)(__dest + 1);
      if (__n != 0) {
        memmove(__dest,__dest + 1,__n);
      }
      *(long **)(this + 0x10) = __dest + ((long)__n >> 3);
    }
  }
  else if (*(undefined8 **)(this + 0x28) == *(undefined8 **)(this + 0x30)) {
    std::__ndk1::
    vector<cocos2d::middleware::IMiddleware*,std::__ndk1::allocator<cocos2d::middleware::IMiddleware*>>
    ::__push_back_slow_path<cocos2d::middleware::IMiddleware*const&>
              ((vector<cocos2d::middleware::IMiddleware*,std::__ndk1::allocator<cocos2d::middleware::IMiddleware*>>
                *)(this + 0x20),&local_40);
  }
  else {
    **(undefined8 **)(this + 0x28) = param_1;
    *(long *)(this + 0x28) = *(long *)(this + 0x28) + 8;
  }
LAB_00bff8f4:
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

