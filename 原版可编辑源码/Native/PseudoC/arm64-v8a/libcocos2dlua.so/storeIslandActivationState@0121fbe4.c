
/* btSimulationIslandManager::storeIslandActivationState(btCollisionWorld*) */

void __thiscall
btSimulationIslandManager::storeIslandActivationState
          (btSimulationIslandManager *this,btCollisionWorld *param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  uint *puVar8;
  uint uVar9;
  ulong uVar10;
  
  iVar2 = *(int *)(param_1 + 0xc);
  if (0 < iVar2) {
    lVar5 = *(long *)(param_1 + 0x18);
    lVar3 = 0;
    uVar4 = 0;
    do {
      lVar6 = *(long *)(lVar5 + lVar3 * 8);
      if ((*(byte *)(lVar6 + 0xe0) & 3) == 0) {
        lVar7 = *(long *)(this + 0x18);
        puVar8 = (uint *)(lVar7 + (long)(int)uVar4 * 8);
        uVar9 = uVar4;
        if (*puVar8 != uVar4) {
          uVar10 = (long)(int)*puVar8 << 3;
          while( true ) {
            *puVar8 = *(uint *)(lVar7 + uVar10);
            uVar9 = *(uint *)(lVar7 + uVar10);
            puVar8 = (uint *)(lVar7 + (long)(int)uVar9 * 8);
            uVar1 = *puVar8;
            if (uVar9 == uVar1) break;
            uVar10 = -(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3;
          }
        }
        *(uint *)(lVar6 + 0xe4) = uVar9;
        *(int *)(lVar7 + (long)(int)uVar4 * 8 + 4) = (int)lVar3;
        *(undefined4 *)(lVar6 + 0xe8) = 0xffffffff;
        uVar4 = uVar4 + 1;
      }
      else {
        *(undefined8 *)(lVar6 + 0xe4) = 0xfffffffeffffffff;
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < iVar2);
  }
  return;
}

