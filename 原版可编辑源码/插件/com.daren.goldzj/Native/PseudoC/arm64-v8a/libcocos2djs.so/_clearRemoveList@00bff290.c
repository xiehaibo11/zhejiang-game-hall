
/* cocos2d::middleware::MiddlewareManager::_clearRemoveList() */

void __thiscall cocos2d::middleware::MiddlewareManager::_clearRemoveList(MiddlewareManager *this)

{
  size_t __n;
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long *__dest;
  ulong uVar5;
  
  lVar1 = *(long *)(this + 0x28);
  if (lVar1 != *(long *)(this + 0x20)) {
    plVar3 = *(long **)(this + 0x10);
    uVar5 = 0;
    lVar4 = *(long *)(this + 0x20);
    lVar2 = lVar1;
    do {
      lVar1 = lVar4;
      __dest = *(long **)(this + 8);
      if (__dest != plVar3) {
        lVar4 = *__dest;
        while (lVar4 != *(long *)(lVar1 + uVar5 * 8)) {
          __dest = __dest + 1;
          if (plVar3 == __dest) goto LAB_00bff324;
          lVar4 = *__dest;
        }
      }
      if (__dest != plVar3) {
        __n = (long)plVar3 - (long)(__dest + 1);
        if (__n != 0) {
          memmove(__dest,__dest + 1,__n);
          lVar1 = *(long *)(this + 0x20);
          lVar2 = *(long *)(this + 0x28);
        }
        plVar3 = __dest + ((long)__n >> 3);
        *(long **)(this + 0x10) = plVar3;
      }
LAB_00bff324:
      uVar5 = uVar5 + 1;
      lVar4 = lVar1;
    } while (uVar5 < (ulong)(lVar2 - lVar1 >> 3));
  }
  *(long *)(this + 0x28) = lVar1;
  return;
}

