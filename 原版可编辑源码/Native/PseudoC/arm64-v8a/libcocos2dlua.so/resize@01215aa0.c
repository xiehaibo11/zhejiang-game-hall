
/* btAlignedObjectArray<btBroadphasePair>::resize(int, btBroadphasePair const&) */

void __thiscall
btAlignedObjectArray<btBroadphasePair>::resize
          (btAlignedObjectArray<btBroadphasePair> *this,int param_1,btBroadphasePair *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  
  iVar3 = *(int *)(this + 4);
  if ((iVar3 <= param_1) && (iVar3 < param_1)) {
    if (*(int *)(this + 8) < param_1) {
      if (param_1 == 0) {
        lVar5 = 0;
        iVar4 = iVar3;
      }
      else {
        lVar5 = btAlignedAllocInternal
                          (-(ulong)((uint)param_1 >> 0x1f) & 0xffffffe000000000 |
                           (ulong)(uint)param_1 << 5,0x10);
        iVar4 = *(int *)(this + 4);
      }
      if (0 < iVar4) {
        lVar7 = 0;
        lVar6 = (long)iVar4;
        do {
          puVar2 = (undefined8 *)(lVar5 + lVar7);
          lVar6 = lVar6 + -1;
          puVar1 = (undefined8 *)(*(long *)(this + 0x10) + lVar7);
          uVar8 = *puVar1;
          lVar7 = lVar7 + 0x20;
          puVar2[1] = puVar1[1];
          *puVar2 = uVar8;
          puVar2[2] = puVar1[2];
          puVar2[3] = puVar1[3];
        } while (lVar6 != 0);
      }
      if (*(void **)(this + 0x10) != (void *)0x0) {
        if (this[0x18] != (btAlignedObjectArray<btBroadphasePair>)0x0) {
          btAlignedFreeInternal(*(void **)(this + 0x10));
        }
        *(undefined8 *)(this + 0x10) = 0;
      }
      *(long *)(this + 0x10) = lVar5;
      this[0x18] = (btAlignedObjectArray<btBroadphasePair>)0x1;
      *(int *)(this + 8) = param_1;
      if (param_1 <= iVar3) goto LAB_01215bb4;
    }
    lVar5 = (long)iVar3 << 5;
    lVar7 = (long)param_1 - (long)iVar3;
    do {
      uVar8 = *(undefined8 *)param_2;
      lVar7 = lVar7 + -1;
      puVar2 = (undefined8 *)(*(long *)(this + 0x10) + lVar5);
      puVar2[1] = *(undefined8 *)(param_2 + 8);
      *puVar2 = uVar8;
      lVar5 = lVar5 + 0x20;
      puVar2[2] = *(undefined8 *)(param_2 + 0x10);
      puVar2[3] = *(undefined8 *)(param_2 + 0x18);
    } while (lVar7 != 0);
  }
LAB_01215bb4:
  *(int *)(this + 4) = param_1;
  return;
}

