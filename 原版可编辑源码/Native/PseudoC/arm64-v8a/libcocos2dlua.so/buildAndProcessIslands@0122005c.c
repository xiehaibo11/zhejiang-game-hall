
/* btSimulationIslandManager::buildAndProcessIslands(btDispatcher*, btCollisionWorld*,
   btSimulationIslandManager::IslandCallback*) */

void __thiscall
btSimulationIslandManager::buildAndProcessIslands
          (btSimulationIslandManager *this,btDispatcher *param_1,btCollisionWorld *param_2,
          IslandCallback *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  ulong uVar6;
  undefined4 uVar7;
  CProfileManager *this_00;
  CProfileManager *extraout_x0;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  int iVar15;
  ulong uVar16;
  int iVar17;
  ulong uVar18;
  btPersistentManifoldSortPredicate abStack_68 [8];
  
  buildIslands(this,param_1,param_2);
  iVar2 = *(int *)(this + 0xc);
  this_00 = (CProfileManager *)CProfileManager::Start_Profile("processIslands");
  if (this[0x68] == (btSimulationIslandManager)0x0) {
    uVar9 = (**(code **)(*(long *)param_1 + 0x58))(param_1);
    uVar7 = (**(code **)(*(long *)param_1 + 0x48))(param_1);
    this_00 = (CProfileManager *)
              (**(code **)(*(long *)param_3 + 0x10))
                        (param_3,*(undefined8 *)(param_2 + 0x18),*(undefined4 *)(param_2 + 0xc),
                         uVar9,uVar7,0xffffffff);
  }
  else {
    iVar3 = *(int *)(this + 0x2c);
    if (1 < iVar3) {
      btAlignedObjectArray<btPersistentManifold*>::
      quickSortInternal<btPersistentManifoldSortPredicate>
                ((btAlignedObjectArray<btPersistentManifold*> *)(this + 0x28),abStack_68,0,
                 iVar3 + -1);
      this_00 = extraout_x0;
    }
    if (0 < iVar2) {
      uVar16 = 0;
      iVar15 = 0;
      iVar17 = 1;
      do {
        lVar12 = *(long *)(this + 0x18);
        iVar1 = *(int *)(lVar12 + (-(uVar16 >> 0x1f) & 0xfffffff800000000 | uVar16 << 3));
        if ((int)uVar16 < iVar2) {
          uVar18 = (ulong)(int)uVar16;
          bVar5 = true;
          do {
            iVar11 = *(int *)(this + 0x4c);
            lVar12 = *(long *)(*(long *)(param_2 + 0x18) +
                              (long)*(int *)(lVar12 + uVar18 * 8 + 4) * 8);
            if (iVar11 == *(int *)(this + 0x50)) {
              uVar4 = iVar11 << 1;
              if (iVar11 == 0) {
                uVar4 = 1;
              }
              if (iVar11 < (int)uVar4) {
                if (uVar4 == 0) {
                  lVar8 = 0;
                }
                else {
                  lVar8 = btAlignedAllocInternal
                                    (-(ulong)(uVar4 >> 0x1f) & 0xfffffff800000000 |
                                     (ulong)uVar4 << 3,0x10);
                  iVar11 = *(int *)(this + 0x4c);
                }
                if (0 < iVar11) {
                  lVar13 = 0;
                  do {
                    lVar14 = lVar13 * 8;
                    lVar13 = lVar13 + 1;
                    *(undefined8 *)(lVar8 + lVar14) =
                         *(undefined8 *)(*(long *)(this + 0x58) + lVar14);
                  } while (iVar11 != lVar13);
                }
                this_00 = *(CProfileManager **)(this + 0x58);
                if (this_00 != (CProfileManager *)0x0) {
                  if (this[0x60] != (btSimulationIslandManager)0x0) {
                    this_00 = (CProfileManager *)btAlignedFreeInternal(this_00);
                    iVar11 = *(int *)(this + 0x4c);
                  }
                  *(undefined8 *)(this + 0x58) = 0;
                }
                this[0x60] = (btSimulationIslandManager)0x1;
                *(long *)(this + 0x58) = lVar8;
                *(uint *)(this + 0x50) = uVar4;
              }
            }
            uVar18 = uVar18 + 1;
            uVar16 = (ulong)((int)uVar16 + 1);
            *(long *)(*(long *)(this + 0x58) + (long)iVar11 * 8) = lVar12;
            *(int *)(this + 0x4c) = iVar11 + 1;
            iVar11 = *(int *)(lVar12 + 0xec);
            bVar5 = (bool)(bVar5 & (iVar11 == 2 || iVar11 == 5));
            if ((long)iVar2 <= (long)uVar18) goto LAB_01220208;
            lVar12 = *(long *)(this + 0x18);
          } while (*(int *)(lVar12 + uVar18 * 8) == iVar1);
          uVar16 = uVar18 & 0xffffffff;
LAB_01220208:
          if (iVar3 <= iVar15) goto LAB_012202a8;
LAB_0122022c:
          plVar10 = (long *)(*(long *)(this + 0x38) + (long)iVar15 * 8);
          lVar12 = *(long *)(*plVar10 + 0x308);
          if (*(int *)(lVar12 + 0xe4) < 0) {
            lVar12 = *(long *)(*plVar10 + 0x310);
          }
          if (*(int *)(lVar12 + 0xe4) != iVar1) goto LAB_012202a8;
          uVar6 = 1;
          do {
            uVar18 = uVar6;
            if ((long)iVar3 <= (long)((long)iVar15 + uVar18)) break;
            lVar8 = *(long *)(*(long *)(this + 0x38) + (long)iVar15 * 8 + uVar18 * 8);
            lVar12 = *(long *)(lVar8 + 0x308);
            if (*(int *)(lVar12 + 0xe4) < 0) {
              lVar12 = *(long *)(lVar8 + 0x310);
            }
            uVar6 = uVar18 + 1;
          } while (iVar1 == *(int *)(lVar12 + 0xe4));
          iVar17 = iVar15 + (int)uVar18;
        }
        else {
          bVar5 = true;
          if (iVar15 < iVar3) goto LAB_0122022c;
LAB_012202a8:
          uVar18 = 0;
          plVar10 = (long *)0x0;
        }
        if (!bVar5) {
          this_00 = (CProfileManager *)
                    (**(code **)(*(long *)param_3 + 0x10))
                              (param_3,*(undefined8 *)(this + 0x58),*(undefined4 *)(this + 0x4c),
                               plVar10,uVar18 & 0xffffffff,iVar1);
        }
        lVar12 = (long)*(int *)(this + 0x4c);
        if ((int)uVar18 != 0) {
          iVar15 = iVar17;
        }
        if (*(int *)(this + 0x4c) < 0) {
          if (*(int *)(this + 0x50) < 0) {
            this_00 = *(CProfileManager **)(this + 0x58);
            if (this_00 != (CProfileManager *)0x0) {
              if (this[0x60] != (btSimulationIslandManager)0x0) {
                this_00 = (CProfileManager *)btAlignedFreeInternal(this_00);
              }
              *(undefined8 *)(this + 0x58) = 0;
            }
            this[0x60] = (btSimulationIslandManager)0x1;
            *(undefined8 *)(this + 0x58) = 0;
            *(undefined4 *)(this + 0x50) = 0;
          }
          do {
            *(undefined8 *)(*(long *)(this + 0x58) + lVar12 * 8) = 0;
            lVar12 = lVar12 + 1;
          } while (lVar12 != 0);
        }
        *(undefined4 *)(this + 0x4c) = 0;
      } while ((int)uVar16 < iVar2);
    }
  }
  CProfileManager::Stop_Profile(this_00);
  return;
}

