
/* btDbvtBroadphase::performDeferredRemoval(btDispatcher*) */

void __thiscall
btDbvtBroadphase::performDeferredRemoval(btDbvtBroadphase *this,btDispatcher *param_1)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  btAlignedObjectArray<btBroadphasePair> *this_00;
  int iVar4;
  float *pfVar5;
  float *pfVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uVar3 = (**(code **)(**(long **)(this + 0xe0) + 0x70))();
  if ((uVar3 & 1) != 0) {
    this_00 = (btAlignedObjectArray<btBroadphasePair> *)
              (**(code **)(**(long **)(this + 0xe0) + 0x38))();
    iVar4 = *(int *)(this_00 + 4);
    if (iVar4 + -1 != 0 && 0 < iVar4) {
      btAlignedObjectArray<btBroadphasePair>::quickSortInternal<btBroadphasePairSortPredicate>
                (this_00,(btBroadphasePairSortPredicate *)&local_80,0,iVar4 + -1);
      iVar4 = *(int *)(this_00 + 4);
    }
    if (iVar4 < 1) {
      iVar7 = 0;
    }
    else {
      lVar8 = 0;
      lVar9 = 0;
      iVar7 = 0;
      lVar10 = 0;
      lVar11 = 0;
      do {
        plVar1 = (long *)(*(long *)(this_00 + 0x10) + lVar8);
        lVar2 = *plVar1;
        lVar12 = plVar1[1];
        if (lVar2 == lVar10 && lVar12 == lVar11) {
LAB_01215a14:
          lVar12 = lVar11;
          (**(code **)(**(long **)(this + 0xe0) + 0x40))(*(long **)(this + 0xe0),plVar1,param_1);
          *plVar1 = 0;
          plVar1[1] = 0;
          iVar4 = *(int *)(this_00 + 4);
          iVar7 = iVar7 + 1;
        }
        else {
          pfVar5 = *(float **)(lVar2 + 0x40);
          pfVar6 = *(float **)(plVar1[1] + 0x40);
          lVar11 = lVar12;
          if ((((pfVar6[4] < *pfVar5) || (pfVar5[4] < *pfVar6)) || (pfVar6[5] < pfVar5[1])) ||
             (((pfVar5[5] < pfVar6[1] || (pfVar6[6] < pfVar5[2])) || (pfVar5[6] < pfVar6[2]))))
          goto LAB_01215a14;
        }
        lVar9 = lVar9 + 1;
        lVar8 = lVar8 + 0x20;
        lVar10 = lVar2;
        lVar11 = lVar12;
      } while (lVar9 < iVar4);
      if (1 < iVar4) {
        btAlignedObjectArray<btBroadphasePair>::quickSortInternal<btBroadphasePairSortPredicate>
                  (this_00,(btBroadphasePairSortPredicate *)&local_80,0,iVar4 + -1);
        iVar4 = *(int *)(this_00 + 4);
      }
    }
    uStack_78 = 0;
    local_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    btAlignedObjectArray<btBroadphasePair>::resize
              (this_00,iVar4 - iVar7,(btBroadphasePair *)&local_80);
  }
  return;
}

