
/* btSimulationIslandManager::updateActivationState(btCollisionWorld*, btDispatcher*) */

void btSimulationIslandManager::updateActivationState
               (btCollisionWorld *param_1,btDispatcher *param_2)

{
  int iVar1;
  uint uVar2;
  long *plVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  
  iVar1 = *(int *)(param_2 + 0xc);
  if (iVar1 < 1) {
    iVar4 = 0;
  }
  else {
    lVar6 = *(long *)(param_2 + 0x18);
    lVar5 = 0;
    iVar4 = 0;
    do {
      lVar7 = *(long *)(lVar6 + lVar5 * 8);
      if ((*(byte *)(lVar7 + 0xe0) & 3) == 0) {
        *(int *)(lVar7 + 0xe4) = iVar4;
        iVar4 = iVar4 + 1;
      }
      lVar5 = lVar5 + 1;
      *(undefined4 *)(lVar7 + 0xe8) = 0xffffffff;
      *(undefined4 *)(lVar7 + 0x110) = 0x3f800000;
    } while (lVar5 < iVar1);
  }
  btUnionFind::reset((btUnionFind *)(param_1 + 8),iVar4);
  plVar3 = (long *)(**(code **)(**(long **)(param_2 + 0x60) + 0x48))();
  uVar2 = (**(code **)(*plVar3 + 0x48))();
  if ((uVar2 != 0) && (lVar5 = (**(code **)(*plVar3 + 0x28))(plVar3), 0 < (int)uVar2)) {
    uVar8 = (ulong)uVar2;
    puVar9 = (undefined8 *)(lVar5 + 8);
    do {
      lVar5 = *(long *)puVar9[-1];
      if ((((lVar5 != 0) && (lVar6 = *(long *)*puVar9, lVar6 != 0)) &&
          ((*(uint *)(lVar5 + 0xe0) & 7) == 0)) && ((*(byte *)(lVar6 + 0xe0) & 7) == 0)) {
        btUnionFind::unite((btUnionFind *)(param_1 + 8),*(int *)(lVar5 + 0xe4),
                           *(int *)(lVar6 + 0xe4));
      }
      uVar8 = uVar8 - 1;
      puVar9 = puVar9 + 4;
    } while (uVar8 != 0);
  }
  return;
}

