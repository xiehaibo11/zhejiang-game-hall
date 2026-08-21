
/* btSimulationIslandManager::buildIslands(btDispatcher*, btCollisionWorld*) */

void __thiscall
btSimulationIslandManager::buildIslands
          (btSimulationIslandManager *this,btDispatcher *param_1,btCollisionWorld *param_2)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  btCollisionObject *pbVar4;
  CProfileManager *pCVar5;
  CProfileManager *pCVar6;
  int iVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  int *piVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  int iVar16;
  btCollisionObject *this_00;
  long lVar17;
  
  CProfileManager::Start_Profile("islandUnionFindAndQuickSort");
  lVar14 = (long)*(int *)(this + 0x2c);
  if (*(int *)(this + 0x2c) < 0) {
    if (*(int *)(this + 0x30) < 0) {
      if (*(void **)(this + 0x38) != (void *)0x0) {
        if (this[0x40] != (btSimulationIslandManager)0x0) {
          btAlignedFreeInternal(*(void **)(this + 0x38));
        }
        *(undefined8 *)(this + 0x38) = 0;
      }
      *(undefined8 *)(this + 0x38) = 0;
      this[0x40] = (btSimulationIslandManager)0x1;
      *(undefined4 *)(this + 0x30) = 0;
    }
    do {
      *(undefined8 *)(*(long *)(this + 0x38) + lVar14 * 8) = 0;
      lVar14 = lVar14 + 1;
    } while (lVar14 != 0);
  }
  *(undefined4 *)(this + 0x2c) = 0;
  btUnionFind::sortIslands((btUnionFind *)(this + 8));
  iVar1 = *(int *)(this + 0xc);
  if (0 < iVar1) {
    uVar9 = 0;
    do {
      lVar8 = *(long *)(this + 0x18);
      lVar14 = (long)(int)uVar9;
      piVar11 = (int *)(lVar8 + (long)(int)uVar9 * 8);
      iVar16 = *piVar11;
      lVar13 = (ulong)uVar9 << 0x20;
      lVar10 = lVar14;
      uVar3 = uVar9;
      do {
        uVar12 = uVar3;
        lVar17 = lVar13;
        lVar10 = lVar10 + 1;
        piVar11 = piVar11 + 2;
        if (iVar1 <= lVar10) break;
        lVar13 = lVar17 + 0x100000000;
        uVar3 = uVar12 + 1;
      } while (*piVar11 == iVar16);
      if ((int)uVar9 <= (int)uVar12) {
        lVar17 = lVar17 >> 0x20;
        lVar10 = lVar14 + -1;
        piVar11 = (int *)(lVar8 + lVar14 * 8 + 4);
        bVar2 = true;
        do {
          lVar13 = *(long *)(*(long *)(param_2 + 0x18) + (long)*piVar11 * 8);
          if (*(int *)(lVar13 + 0xe4) == iVar16) {
            iVar7 = *(int *)(lVar13 + 0xec);
            bVar2 = (bool)(iVar7 != 4 & bVar2 & iVar7 != 1);
          }
          lVar10 = lVar10 + 1;
          piVar11 = piVar11 + 2;
        } while (lVar10 < lVar17);
        if (bVar2) {
          if ((int)uVar9 <= (int)uVar12) {
            uVar15 = lVar14 << 3 | 4;
            while( true ) {
              pbVar4 = *(btCollisionObject **)
                        (*(long *)(param_2 + 0x18) + (long)*(int *)(lVar8 + uVar15) * 8);
              if (*(int *)(pbVar4 + 0xe4) == iVar16) {
                btCollisionObject::setActivationState(pbVar4,2);
              }
              if (lVar17 <= lVar14) break;
              lVar8 = *(long *)(this + 0x18);
              lVar14 = lVar14 + 1;
              uVar15 = uVar15 + 8;
            }
          }
        }
        else if ((int)uVar9 <= (int)uVar12) {
          uVar15 = lVar14 << 3 | 4;
          while( true ) {
            pbVar4 = *(btCollisionObject **)
                      (*(long *)(param_2 + 0x18) + (long)*(int *)(lVar8 + uVar15) * 8);
            if ((*(int *)(pbVar4 + 0xe4) == iVar16) && (*(int *)(pbVar4 + 0xec) == 2)) {
              btCollisionObject::setActivationState(pbVar4,3);
              *(undefined4 *)(pbVar4 + 0xf0) = 0;
            }
            if (lVar17 <= lVar14) break;
            lVar8 = *(long *)(this + 0x18);
            lVar14 = lVar14 + 1;
            uVar15 = uVar15 + 8;
          }
        }
      }
      uVar9 = uVar12 + 1;
    } while ((int)uVar9 < iVar1);
  }
  pCVar5 = (CProfileManager *)(**(code **)(*(long *)param_1 + 0x48))(param_1);
  iVar1 = (int)pCVar5;
  if (0 < iVar1) {
    iVar16 = 0;
    do {
      pCVar6 = (CProfileManager *)(**(code **)(*(long *)param_1 + 0x50))(param_1,iVar16);
      pbVar4 = *(btCollisionObject **)(pCVar6 + 0x308);
      this_00 = *(btCollisionObject **)(pCVar6 + 0x310);
      pCVar5 = pCVar6;
      if (((pbVar4 != (btCollisionObject *)0x0) && (*(int *)(pbVar4 + 0xec) != 2)) ||
         ((this_00 != (btCollisionObject *)0x0 && (*(int *)(this_00 + 0xec) != 2)))) {
        if ((((*(uint *)(pbVar4 + 0xe0) >> 1 & 1) != 0) &&
            ((*(uint *)(pbVar4 + 0xe0) >> 2 & 1) == 0)) && (*(int *)(pbVar4 + 0xec) != 2)) {
          pCVar5 = (CProfileManager *)btCollisionObject::activate(this_00,false);
        }
        if ((((*(uint *)(this_00 + 0xe0) >> 1 & 1) != 0) &&
            ((*(uint *)(this_00 + 0xe0) >> 2 & 1) == 0)) && (*(int *)(this_00 + 0xec) != 2)) {
          pCVar5 = (CProfileManager *)btCollisionObject::activate(pbVar4,false);
        }
        if ((this[0x68] != (btSimulationIslandManager)0x0) &&
           (pCVar5 = (CProfileManager *)
                     (**(code **)(*(long *)param_1 + 0x38))(param_1,pbVar4,this_00),
           ((ulong)pCVar5 & 1) != 0)) {
          iVar7 = *(int *)(this + 0x2c);
          if (iVar7 == *(int *)(this + 0x30)) {
            uVar9 = iVar7 << 1;
            if (iVar7 == 0) {
              uVar9 = 1;
            }
            if (iVar7 < (int)uVar9) {
              if (uVar9 == 0) {
                lVar14 = 0;
              }
              else {
                lVar14 = btAlignedAllocInternal
                                   (-(ulong)(uVar9 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar9 << 3
                                    ,0x10);
                iVar7 = *(int *)(this + 0x2c);
              }
              if (0 < iVar7) {
                lVar10 = 0;
                do {
                  lVar13 = lVar10 * 8;
                  lVar10 = lVar10 + 1;
                  *(undefined8 *)(lVar14 + lVar13) =
                       *(undefined8 *)(*(long *)(this + 0x38) + lVar13);
                } while (iVar7 != lVar10);
              }
              pCVar5 = *(CProfileManager **)(this + 0x38);
              if (pCVar5 != (CProfileManager *)0x0) {
                if (this[0x40] != (btSimulationIslandManager)0x0) {
                  pCVar5 = (CProfileManager *)btAlignedFreeInternal(pCVar5);
                  iVar7 = *(int *)(this + 0x2c);
                }
                *(undefined8 *)(this + 0x38) = 0;
              }
              this[0x40] = (btSimulationIslandManager)0x1;
              *(long *)(this + 0x38) = lVar14;
              *(uint *)(this + 0x30) = uVar9;
            }
          }
          *(CProfileManager **)(*(long *)(this + 0x38) + (long)iVar7 * 8) = pCVar6;
          *(int *)(this + 0x2c) = iVar7 + 1;
        }
      }
      iVar16 = iVar16 + 1;
    } while (iVar16 < iVar1);
  }
  CProfileManager::Stop_Profile(pCVar5);
  return;
}

