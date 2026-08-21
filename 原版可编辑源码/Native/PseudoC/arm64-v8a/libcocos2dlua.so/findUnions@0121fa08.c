
/* btSimulationIslandManager::findUnions(btDispatcher*, btCollisionWorld*) */

void __thiscall
btSimulationIslandManager::findUnions
          (btSimulationIslandManager *this,btDispatcher *param_1,btCollisionWorld *param_2)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  
  plVar2 = (long *)(**(code **)(**(long **)(param_2 + 0x60) + 0x48))(*(long **)(param_2 + 0x60));
  uVar1 = (**(code **)(*plVar2 + 0x48))();
  if ((uVar1 != 0) && (lVar3 = (**(code **)(*plVar2 + 0x28))(plVar2), 0 < (int)uVar1)) {
    uVar5 = (ulong)uVar1;
    puVar6 = (undefined8 *)(lVar3 + 8);
    do {
      lVar3 = *(long *)puVar6[-1];
      if ((((lVar3 != 0) && (lVar4 = *(long *)*puVar6, lVar4 != 0)) &&
          ((*(uint *)(lVar3 + 0xe0) & 7) == 0)) && ((*(byte *)(lVar4 + 0xe0) & 7) == 0)) {
        btUnionFind::unite((btUnionFind *)(this + 8),*(int *)(lVar3 + 0xe4),*(int *)(lVar4 + 0xe4));
      }
      uVar5 = uVar5 - 1;
      puVar6 = puVar6 + 4;
    } while (uVar5 != 0);
  }
  return;
}

