
/* cocos2d::middleware::MiddlewareManager::render(float) */

void __thiscall
cocos2d::middleware::MiddlewareManager::render(MiddlewareManager *this,float param_1)

{
  size_t __n;
  bool bVar1;
  bool bVar2;
  uint uVar3;
  MiddlewareManager *pMVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  MeshBuffer *this_00;
  long *plVar11;
  uint uVar12;
  MiddlewareManager *pMVar13;
  ulong uVar14;
  undefined4 in_register_00005004;
  
  pMVar13 = *(MiddlewareManager **)(this + 0x38);
  while (pMVar13 != this + 0x40) {
    if (*(MeshBuffer **)(pMVar13 + 0x28) != (MeshBuffer *)0x0) {
      MeshBuffer::reset(*(MeshBuffer **)(pMVar13 + 0x28));
    }
    pMVar4 = *(MiddlewareManager **)(pMVar13 + 8);
    if (*(MiddlewareManager **)(pMVar13 + 8) == (MiddlewareManager *)0x0) {
      pMVar4 = pMVar13 + 0x10;
      bVar1 = *(MiddlewareManager **)*(MiddlewareManager **)pMVar4 != pMVar13;
      pMVar13 = *(MiddlewareManager **)pMVar4;
      if (bVar1) {
        do {
          lVar6 = *(long *)pMVar4;
          pMVar4 = (MiddlewareManager *)(lVar6 + 0x10);
          pMVar13 = *(MiddlewareManager **)pMVar4;
        } while (*(long *)pMVar13 != lVar6);
      }
    }
    else {
      do {
        pMVar13 = pMVar4;
        pMVar4 = *(MiddlewareManager **)pMVar13;
      } while (*(MiddlewareManager **)pMVar13 != (MiddlewareManager *)0x0);
    }
  }
  lVar6 = *(long *)(this + 8);
  bVar1 = false;
  *this = (MiddlewareManager)0x1;
  lVar7 = *(long *)(this + 0x10) - lVar6;
  if (lVar7 != 0) {
    uVar14 = 0;
    uVar12 = 0;
LAB_00bff584:
    plVar8 = *(long **)(this + 0x20);
    plVar11 = *(long **)(this + 0x28);
    plVar10 = *(long **)(lVar6 + uVar14 * 8);
    if (plVar11 == plVar8) {
LAB_00bff5d0:
      (**(code **)(*plVar10 + 0x18))(CONCAT44(in_register_00005004,param_1),plVar10);
      uVar3 = (**(code **)(*plVar10 + 0x20))(plVar10);
    }
    else {
      if (plVar8 != plVar11) {
        plVar5 = (long *)*plVar8;
        while (plVar5 != plVar10) {
          plVar8 = plVar8 + 1;
          if (plVar11 == plVar8) goto LAB_00bff5d0;
          plVar5 = (long *)*plVar8;
        }
      }
      uVar3 = uVar12;
      if (plVar8 == plVar11) goto LAB_00bff5d0;
    }
    uVar14 = uVar14 + 1;
    bVar1 = (bool)(bVar1 | uVar3 < uVar12);
    if (uVar14 < (ulong)(lVar7 >> 3)) {
      lVar6 = *(long *)(this + 8);
      if (uVar12 <= uVar3) {
        uVar12 = uVar3;
      }
      goto LAB_00bff584;
    }
  }
  *this = (MiddlewareManager)0x0;
  pMVar13 = *(MiddlewareManager **)(this + 0x38);
  while (pMVar13 != this + 0x40) {
    this_00 = *(MeshBuffer **)(pMVar13 + 0x28);
    if (this_00 != (MeshBuffer *)0x0) {
      MeshBuffer::uploadIB(this_00);
      MeshBuffer::uploadVB(this_00);
    }
    pMVar4 = *(MiddlewareManager **)(pMVar13 + 8);
    if (*(MiddlewareManager **)(pMVar13 + 8) == (MiddlewareManager *)0x0) {
      pMVar4 = pMVar13 + 0x10;
      bVar2 = *(MiddlewareManager **)*(MiddlewareManager **)pMVar4 != pMVar13;
      pMVar13 = *(MiddlewareManager **)pMVar4;
      if (bVar2) {
        do {
          lVar6 = *(long *)pMVar4;
          pMVar4 = (MiddlewareManager *)(lVar6 + 0x10);
          pMVar13 = *(MiddlewareManager **)pMVar4;
        } while (*(long *)pMVar13 != lVar6);
      }
    }
    else {
      do {
        pMVar13 = pMVar4;
        pMVar4 = *(MiddlewareManager **)pMVar13;
      } while (*(MiddlewareManager **)pMVar13 != (MiddlewareManager *)0x0);
    }
  }
  lVar6 = *(long *)(this + 0x20);
  lVar7 = *(long *)(this + 0x28);
  if (lVar7 == lVar6) {
    *(long *)(this + 0x28) = lVar7;
  }
  else {
    plVar8 = *(long **)(this + 0x10);
    uVar14 = 0;
    do {
      plVar11 = *(long **)(this + 8);
      if (plVar11 != plVar8) {
        lVar9 = *plVar11;
        while (lVar9 != *(long *)(lVar6 + uVar14 * 8)) {
          plVar11 = plVar11 + 1;
          if (plVar8 == plVar11) goto LAB_00bff710;
          lVar9 = *plVar11;
        }
        if (plVar11 != plVar8) {
          __n = (long)plVar8 - (long)(plVar11 + 1);
          if (__n != 0) {
            memmove(plVar11,plVar11 + 1,__n);
            lVar6 = *(long *)(this + 0x20);
            lVar7 = *(long *)(this + 0x28);
          }
          plVar8 = plVar11 + ((long)__n >> 3);
          *(long **)(this + 0x10) = plVar8;
        }
      }
LAB_00bff710:
      uVar14 = uVar14 + 1;
    } while (uVar14 < (ulong)(lVar7 - lVar6 >> 3));
    *(long *)(this + 0x28) = lVar6;
  }
  if (!bVar1) {
    return;
  }
  FUN_00bff9bc(*(undefined8 *)(this + 8),*(undefined8 *)(this + 0x10));
  return;
}

