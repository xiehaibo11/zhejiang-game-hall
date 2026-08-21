
/* btHashMap<btInternalVertexPair, btInternalEdge>::insert(btInternalVertexPair const&,
   btInternalEdge const&) */

void __thiscall
btHashMap<btInternalVertexPair,btInternalEdge>::insert
          (btHashMap<btInternalVertexPair,btInternalEdge> *this,btInternalVertexPair *param_1,
          btInternalEdge *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  
  iVar2 = *(int *)(this + 0x48);
  uVar1 = (int)*(short *)param_1 + (uint)*(ushort *)(param_1 + 2) * 0x10000 & iVar2 - 1U;
  if ((uVar1 < *(uint *)(this + 4)) &&
     (uVar4 = *(uint *)(*(long *)(this + 0x10) + (long)(int)uVar1 * 4), uVar4 != 0xffffffff)) {
    do {
      lVar8 = (long)(int)uVar4;
      if ((*(short *)param_1 ==
           *(short *)(*(long *)(this + 0x70) +
                     (-(ulong)(uVar4 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar4 << 2))) &&
         ((uint)*(ushort *)(param_1 + 2) ==
          (uint)*(ushort *)(*(long *)(this + 0x70) + lVar8 * 4 + 2))) {
        *(undefined4 *)(*(long *)(this + 0x50) + lVar8 * 4) = *(undefined4 *)param_2;
        return;
      }
      uVar4 = *(uint *)(*(long *)(this + 0x30) + lVar8 * 4);
    } while (uVar4 != 0xffffffff);
  }
  iVar3 = *(int *)(this + 0x44);
  iVar5 = iVar3;
  if (iVar3 == iVar2) {
    uVar4 = iVar2 << 1;
    if (iVar2 == 0) {
      uVar4 = 1;
    }
    iVar5 = iVar2;
    if (iVar2 < (int)uVar4) {
      if (uVar4 == 0) {
        lVar8 = 0;
      }
      else {
        lVar8 = btAlignedAllocInternal
                          (-(ulong)(uVar4 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar4 << 2,0x10);
        iVar5 = *(int *)(this + 0x44);
      }
      if (0 < iVar5) {
        lVar6 = 0;
        do {
          lVar9 = lVar6 * 4;
          lVar6 = lVar6 + 1;
          *(undefined4 *)(lVar8 + lVar9) = *(undefined4 *)(*(long *)(this + 0x50) + lVar9);
        } while (iVar5 != lVar6);
      }
      if (*(void **)(this + 0x50) != (void *)0x0) {
        if (this[0x58] != (btHashMap<btInternalVertexPair,btInternalEdge>)0x0) {
          btAlignedFreeInternal(*(void **)(this + 0x50));
        }
        *(undefined8 *)(this + 0x50) = 0;
      }
      this[0x58] = (btHashMap<btInternalVertexPair,btInternalEdge>)0x1;
      *(long *)(this + 0x50) = lVar8;
      *(uint *)(this + 0x48) = uVar4;
      iVar5 = *(int *)(this + 0x44);
    }
  }
  *(undefined4 *)(*(long *)(this + 0x50) + (long)iVar5 * 4) = *(undefined4 *)param_2;
  iVar5 = *(int *)(this + 100);
  *(int *)(this + 0x44) = *(int *)(this + 0x44) + 1;
  if (iVar5 == *(int *)(this + 0x68)) {
    uVar4 = iVar5 << 1;
    if (iVar5 == 0) {
      uVar4 = 1;
    }
    if (iVar5 < (int)uVar4) {
      if (uVar4 == 0) {
        lVar8 = 0;
      }
      else {
        lVar8 = btAlignedAllocInternal
                          (-(ulong)(uVar4 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar4 << 2,0x10);
        iVar5 = *(int *)(this + 100);
      }
      if (0 < iVar5) {
        lVar6 = 0;
        do {
          lVar9 = lVar6 * 4;
          lVar6 = lVar6 + 1;
          *(undefined4 *)(lVar8 + lVar9) = *(undefined4 *)(*(long *)(this + 0x70) + lVar9);
        } while (iVar5 != lVar6);
      }
      if (*(void **)(this + 0x70) != (void *)0x0) {
        if (this[0x78] != (btHashMap<btInternalVertexPair,btInternalEdge>)0x0) {
          btAlignedFreeInternal(*(void **)(this + 0x70));
        }
        *(undefined8 *)(this + 0x70) = 0;
      }
      iVar5 = *(int *)(this + 100);
      this[0x78] = (btHashMap<btInternalVertexPair,btInternalEdge>)0x1;
      *(long *)(this + 0x70) = lVar8;
      *(uint *)(this + 0x68) = uVar4;
    }
  }
  *(undefined4 *)(*(long *)(this + 0x70) + (long)iVar5 * 4) = *(undefined4 *)param_1;
  *(int *)(this + 100) = *(int *)(this + 100) + 1;
  if (iVar2 < *(int *)(this + 0x48)) {
    growTables((btInternalVertexPair *)this);
    uVar1 = (int)*(short *)param_1 + (uint)*(ushort *)(param_1 + 2) * 0x10000 &
            *(int *)(this + 0x48) - 1U;
  }
  lVar8 = *(long *)(this + 0x10);
  uVar7 = -(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2;
  *(undefined4 *)(*(long *)(this + 0x30) + (long)iVar3 * 4) = *(undefined4 *)(lVar8 + uVar7);
  *(int *)(lVar8 + uVar7) = iVar3;
  return;
}

