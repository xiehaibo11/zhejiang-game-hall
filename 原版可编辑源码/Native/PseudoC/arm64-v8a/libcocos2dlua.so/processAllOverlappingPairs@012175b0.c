
/* btSortedOverlappingPairCache::processAllOverlappingPairs(btOverlapCallback*, btDispatcher*) */

void __thiscall
btSortedOverlappingPairCache::processAllOverlappingPairs
          (btSortedOverlappingPairCache *this,btOverlapCallback *param_1,btDispatcher *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  if (0 < *(int *)(this + 0xc)) {
    lVar8 = 0;
    do {
      while( true ) {
        puVar1 = (undefined8 *)(*(long *)(this + 0x18) + lVar8 * 0x20);
        uVar6 = (**(code **)(*(long *)param_1 + 0x10))(param_1,puVar1);
        if ((uVar6 & 1) == 0) break;
        (**(code **)(*(long *)this + 0x40))(this,puVar1,param_2);
        *puVar1 = 0;
        puVar1[1] = 0;
        lVar7 = (long)*(int *)(this + 0xc) * 0x20 + -0x20;
        puVar1 = (undefined8 *)(*(long *)(this + 0x18) + lVar7);
        uVar9 = puVar1[2];
        puVar2 = (undefined8 *)(*(long *)(this + 0x18) + lVar8 * 0x20);
        uVar3 = puVar2[2];
        uVar4 = puVar2[3];
        uVar11 = puVar2[1];
        uVar10 = *puVar2;
        puVar2[3] = puVar1[3];
        puVar2[2] = uVar9;
        uVar9 = *puVar1;
        puVar2[1] = puVar1[1];
        *puVar2 = uVar9;
        puVar1 = (undefined8 *)(*(long *)(this + 0x18) + lVar7);
        puVar1[1] = uVar11;
        *puVar1 = uVar10;
        puVar1[2] = uVar3;
        puVar1[3] = uVar4;
        iVar5 = *(int *)(this + 0xc);
        *(int *)(this + 0xc) = (int)((long)iVar5 + -1);
        gOverlappingPairs = gOverlappingPairs + -1;
        if ((long)iVar5 + -1 <= lVar8) {
          return;
        }
      }
      lVar8 = lVar8 + 1;
    } while (lVar8 < *(int *)(this + 0xc));
  }
  return;
}

