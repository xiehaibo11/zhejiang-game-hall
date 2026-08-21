
/* InplaceSolverIslandCallback::processIsland(btCollisionObject**, int, btPersistentManifold**, int,
   int) */

void __thiscall
InplaceSolverIslandCallback::processIsland
          (InplaceSolverIslandCallback *this,btCollisionObject **param_1,int param_2,
          btPersistentManifold **param_3,int param_4,int param_5)

{
  btCollisionObject **ppbVar1;
  btPersistentManifold **ppbVar2;
  long *plVar3;
  long lVar4;
  uint uVar5;
  long *plVar6;
  uint uVar7;
  long lVar8;
  uint uVar9;
  undefined8 uVar10;
  int iVar11;
  long lVar12;
  undefined8 uVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  int iVar18;
  ulong uVar19;
  long *plVar20;
  uint uVar21;
  
  if (param_5 < 0) {
    lVar8 = *(long *)(this + 8);
    plVar6 = *(long **)(this + 0x10);
    plVar20 = *(long **)(this + 0x18);
    uVar21 = *(uint *)(this + 0x20);
    uVar10 = *(undefined8 *)(this + 0x28);
    uVar13 = *(undefined8 *)(this + 0x30);
    lVar12 = *plVar6;
    goto LAB_011cd9d0;
  }
  iVar18 = *(int *)(this + 0x20);
  lVar8 = (long)iVar18;
  if (iVar18 < 1) {
    plVar20 = (long *)0x0;
    iVar11 = 0;
    if (0 < iVar18) goto LAB_011cd8ac;
LAB_011cd968:
    uVar21 = 0;
  }
  else {
    plVar20 = *(long **)(this + 0x18);
    lVar12 = 0;
    do {
      lVar17 = *(long *)(*plVar20 + 0x28);
      if (*(int *)(lVar17 + 0xe4) < 0) {
        lVar17 = *(long *)(*plVar20 + 0x30);
      }
      if (*(int *)(lVar17 + 0xe4) == param_5) goto LAB_011cd8a4;
      lVar12 = lVar12 + 1;
      plVar20 = plVar20 + 1;
    } while (lVar12 < lVar8);
    plVar20 = (long *)0x0;
LAB_011cd8a4:
    iVar11 = (int)lVar12;
    if (iVar18 <= iVar11) goto LAB_011cd968;
LAB_011cd8ac:
    lVar12 = (long)iVar11;
    uVar14 = lVar8 - lVar12;
    if ((uVar14 < 2) || (uVar16 = uVar14 & 0xfffffffffffffffe, uVar16 == 0)) {
      uVar21 = 0;
LAB_011cd978:
      do {
        lVar15 = *(long *)(*(long *)(this + 0x18) + lVar12 * 8);
        lVar12 = lVar12 + 1;
        lVar17 = *(long *)(lVar15 + 0x28);
        if (*(int *)(lVar17 + 0xe4) < 0) {
          lVar17 = *(long *)(lVar15 + 0x30);
        }
        if (*(int *)(lVar17 + 0xe4) == param_5) {
          uVar21 = uVar21 + 1;
        }
      } while (lVar12 < lVar8);
    }
    else {
      iVar18 = 0;
      iVar11 = 0;
      plVar6 = (long *)(*(long *)(this + 0x18) + lVar12 * 8 + 8);
      uVar19 = uVar16;
      do {
        plVar3 = plVar6 + -1;
        lVar4 = *plVar6;
        uVar19 = uVar19 - 2;
        plVar6 = plVar6 + 2;
        lVar17 = *(long *)(*plVar3 + 0x28);
        lVar15 = *(long *)(lVar4 + 0x28);
        if (*(int *)(lVar17 + 0xe4) < 0) {
          lVar17 = *(long *)(*plVar3 + 0x30);
        }
        if (*(int *)(lVar15 + 0xe4) < 0) {
          lVar15 = *(long *)(lVar4 + 0x30);
        }
        if (*(int *)(lVar17 + 0xe4) == param_5) {
          iVar18 = iVar18 + 1;
        }
        if (*(int *)(lVar15 + 0xe4) == param_5) {
          iVar11 = iVar11 + 1;
        }
      } while (uVar19 != 0);
      uVar21 = iVar11 + iVar18;
      lVar12 = uVar16 + lVar12;
      if (uVar14 != uVar16) goto LAB_011cd978;
    }
  }
  lVar8 = *(long *)(this + 8);
  if (1 < *(int *)(lVar8 + 0x48)) {
    if (0 < param_2) {
      uVar9 = *(uint *)(this + 0x3c);
      uVar7 = *(uint *)(this + 0x40);
      uVar14 = 0;
      do {
        if (uVar9 == uVar7) {
          uVar5 = uVar7 << 1;
          if (uVar7 == 0) {
            uVar5 = 1;
          }
          uVar9 = uVar7;
          if ((int)uVar7 < (int)uVar5) {
            if (uVar5 == 0) {
              lVar8 = 0;
            }
            else {
              lVar8 = btAlignedAllocInternal
                                (-(ulong)(uVar5 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar5 << 3,
                                 0x10);
              uVar7 = *(uint *)(this + 0x3c);
            }
            if (0 < (int)uVar7) {
              lVar12 = 0;
              do {
                lVar17 = lVar12 * 8;
                lVar12 = lVar12 + 1;
                *(undefined8 *)(lVar8 + lVar17) = *(undefined8 *)(*(long *)(this + 0x48) + lVar17);
              } while ((int)uVar7 != lVar12);
            }
            if (*(void **)(this + 0x48) != (void *)0x0) {
              if (this[0x50] != (InplaceSolverIslandCallback)0x0) {
                btAlignedFreeInternal(*(void **)(this + 0x48));
                uVar7 = *(uint *)(this + 0x3c);
              }
              *(undefined8 *)(this + 0x48) = 0;
            }
            this[0x50] = (InplaceSolverIslandCallback)0x1;
            *(long *)(this + 0x48) = lVar8;
            *(uint *)(this + 0x40) = uVar5;
            uVar9 = uVar7;
            uVar7 = uVar5;
          }
        }
        ppbVar1 = param_1 + uVar14;
        uVar14 = uVar14 + 1;
        *(btCollisionObject **)(*(long *)(this + 0x48) + (long)(int)uVar9 * 8) = *ppbVar1;
        uVar9 = uVar9 + 1;
        *(uint *)(this + 0x3c) = uVar9;
      } while (uVar14 != (uint)param_2);
    }
    if (0 < param_4) {
      uVar9 = *(uint *)(this + 0x5c);
      uVar7 = *(uint *)(this + 0x60);
      uVar14 = 0;
      do {
        if (uVar9 == uVar7) {
          uVar5 = uVar7 << 1;
          if (uVar7 == 0) {
            uVar5 = 1;
          }
          uVar9 = uVar7;
          if ((int)uVar7 < (int)uVar5) {
            if (uVar5 == 0) {
              lVar8 = 0;
            }
            else {
              lVar8 = btAlignedAllocInternal
                                (-(ulong)(uVar5 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar5 << 3,
                                 0x10);
              uVar7 = *(uint *)(this + 0x5c);
            }
            if (0 < (int)uVar7) {
              lVar12 = 0;
              do {
                lVar17 = lVar12 * 8;
                lVar12 = lVar12 + 1;
                *(undefined8 *)(lVar8 + lVar17) = *(undefined8 *)(*(long *)(this + 0x68) + lVar17);
              } while ((int)uVar7 != lVar12);
            }
            if (*(void **)(this + 0x68) != (void *)0x0) {
              if (this[0x70] != (InplaceSolverIslandCallback)0x0) {
                btAlignedFreeInternal(*(void **)(this + 0x68));
                uVar7 = *(uint *)(this + 0x5c);
              }
              *(undefined8 *)(this + 0x68) = 0;
            }
            this[0x70] = (InplaceSolverIslandCallback)0x1;
            *(long *)(this + 0x68) = lVar8;
            *(uint *)(this + 0x60) = uVar5;
            uVar9 = uVar7;
            uVar7 = uVar5;
          }
        }
        ppbVar2 = param_3 + uVar14;
        uVar14 = uVar14 + 1;
        *(btPersistentManifold **)(*(long *)(this + 0x68) + (long)(int)uVar9 * 8) = *ppbVar2;
        uVar9 = uVar9 + 1;
        *(uint *)(this + 0x5c) = uVar9;
      } while (uVar14 != (uint)param_4);
    }
    if ((int)uVar21 < 1) {
      uVar9 = *(uint *)(this + 0x7c);
    }
    else {
      uVar9 = *(uint *)(this + 0x7c);
      uVar7 = *(uint *)(this + 0x80);
      uVar14 = 0;
      do {
        if (uVar9 == uVar7) {
          uVar5 = uVar7 << 1;
          if (uVar7 == 0) {
            uVar5 = 1;
          }
          uVar9 = uVar7;
          if ((int)uVar7 < (int)uVar5) {
            if (uVar5 == 0) {
              lVar8 = 0;
            }
            else {
              lVar8 = btAlignedAllocInternal
                                (-(ulong)(uVar5 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar5 << 3,
                                 0x10);
              uVar7 = *(uint *)(this + 0x7c);
            }
            if (0 < (int)uVar7) {
              lVar12 = 0;
              do {
                lVar17 = lVar12 * 8;
                lVar12 = lVar12 + 1;
                *(undefined8 *)(lVar8 + lVar17) = *(undefined8 *)(*(long *)(this + 0x88) + lVar17);
              } while ((int)uVar7 != lVar12);
            }
            if (*(void **)(this + 0x88) != (void *)0x0) {
              if (this[0x90] != (InplaceSolverIslandCallback)0x0) {
                btAlignedFreeInternal(*(void **)(this + 0x88));
                uVar7 = *(uint *)(this + 0x7c);
              }
              *(undefined8 *)(this + 0x88) = 0;
            }
            this[0x90] = (InplaceSolverIslandCallback)0x1;
            *(long *)(this + 0x88) = lVar8;
            *(uint *)(this + 0x80) = uVar5;
            uVar9 = uVar7;
            uVar7 = uVar5;
          }
        }
        plVar6 = plVar20 + uVar14;
        uVar14 = uVar14 + 1;
        *(long *)(*(long *)(this + 0x88) + (long)(int)uVar9 * 8) = *plVar6;
        uVar9 = uVar9 + 1;
        *(uint *)(this + 0x7c) = uVar9;
      } while (uVar14 != uVar21);
    }
    if ((int)(*(int *)(this + 0x5c) + uVar9) <= *(int *)(*(long *)(this + 8) + 0x48)) {
      return;
    }
    processConstraints(this);
    return;
  }
  plVar6 = *(long **)(this + 0x10);
  uVar10 = *(undefined8 *)(this + 0x28);
  uVar13 = *(undefined8 *)(this + 0x30);
  lVar12 = *plVar6;
LAB_011cd9d0:
  (**(code **)(lVar12 + 0x18))
            (plVar6,param_1,(ulong)(uint)param_2,param_3,param_4,plVar20,uVar21,lVar8,uVar10,uVar13)
  ;
  return;
}

