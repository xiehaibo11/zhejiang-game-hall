
/* cocos2d::middleware::TypedArrayPool::dump() */

void __thiscall cocos2d::middleware::TypedArrayPool::dump(TypedArrayPool *this)

{
  bool bVar1;
  TypedArrayPool *pTVar2;
  TypedArrayPool *pTVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  
  pTVar2 = *(TypedArrayPool **)this;
  while (this + 8 != pTVar2) {
    plVar4 = (long *)**(undefined8 **)(pTVar2 + 0x28);
    while (*(undefined8 **)(pTVar2 + 0x28) + 1 != plVar4) {
      plVar5 = (long *)plVar4[1];
      if ((long *)plVar4[1] == (long *)0x0) {
        plVar5 = plVar4 + 2;
        bVar1 = *(long **)*plVar5 != plVar4;
        plVar4 = (long *)*plVar5;
        if (bVar1) {
          do {
            lVar6 = *plVar5;
            plVar5 = (long *)(lVar6 + 0x10);
            plVar4 = (long *)*plVar5;
          } while (*plVar4 != lVar6);
        }
      }
      else {
        do {
          plVar4 = plVar5;
          plVar5 = (long *)*plVar4;
        } while ((long *)*plVar4 != (long *)0x0);
      }
    }
    pTVar3 = *(TypedArrayPool **)(pTVar2 + 8);
    if (*(TypedArrayPool **)(pTVar2 + 8) == (TypedArrayPool *)0x0) {
      pTVar3 = pTVar2 + 0x10;
      bVar1 = *(TypedArrayPool **)*(TypedArrayPool **)pTVar3 != pTVar2;
      pTVar2 = *(TypedArrayPool **)pTVar3;
      if (bVar1) {
        do {
          lVar6 = *(long *)pTVar3;
          pTVar3 = (TypedArrayPool *)(lVar6 + 0x10);
          pTVar2 = *(TypedArrayPool **)pTVar3;
        } while (*(long *)pTVar2 != lVar6);
      }
    }
    else {
      do {
        pTVar2 = pTVar3;
        pTVar3 = *(TypedArrayPool **)pTVar2;
      } while (*(TypedArrayPool **)pTVar2 != (TypedArrayPool *)0x0);
    }
  }
  return;
}

