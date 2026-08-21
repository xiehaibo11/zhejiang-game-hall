
/* btDbvt::extractLeaves(btDbvtNode const*, btAlignedObjectArray<btDbvtNode const*>&) */

void btDbvt::extractLeaves(btDbvtNode *param_1,btAlignedObjectArray *param_2)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  btDbvtNode *pbVar6;
  
  pbVar6 = param_1 + 0x30;
  lVar3 = *(long *)pbVar6;
  while (lVar3 != 0) {
    extractLeaves(*(btDbvtNode **)(param_1 + 0x28),param_2);
    param_1 = *(btDbvtNode **)pbVar6;
    pbVar6 = param_1 + 0x30;
    lVar3 = *(long *)pbVar6;
  }
  iVar2 = *(int *)(param_2 + 4);
  if (iVar2 == *(int *)(param_2 + 8)) {
    uVar1 = iVar2 << 1;
    if (iVar2 == 0) {
      uVar1 = 1;
    }
    if (iVar2 < (int)uVar1) {
      if (uVar1 == 0) {
        lVar3 = 0;
      }
      else {
        lVar3 = btAlignedAllocInternal
                          (-(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3,0x10);
        iVar2 = *(int *)(param_2 + 4);
      }
      if (0 < iVar2) {
        lVar4 = 0;
        do {
          lVar5 = lVar4 * 8;
          lVar4 = lVar4 + 1;
          *(undefined8 *)(lVar3 + lVar5) = *(undefined8 *)(*(long *)(param_2 + 0x10) + lVar5);
        } while (iVar2 != lVar4);
      }
      if (*(void **)(param_2 + 0x10) != (void *)0x0) {
        if (param_2[0x18] != (btAlignedObjectArray)0x0) {
          btAlignedFreeInternal(*(void **)(param_2 + 0x10));
          iVar2 = *(int *)(param_2 + 4);
        }
        *(undefined8 *)(param_2 + 0x10) = 0;
      }
      *(long *)(param_2 + 0x10) = lVar3;
      param_2[0x18] = (btAlignedObjectArray)0x1;
      *(uint *)(param_2 + 8) = uVar1;
    }
  }
  *(btDbvtNode **)(*(long *)(param_2 + 0x10) + (long)iVar2 * 8) = param_1;
  *(int *)(param_2 + 4) = iVar2 + 1;
  return;
}

