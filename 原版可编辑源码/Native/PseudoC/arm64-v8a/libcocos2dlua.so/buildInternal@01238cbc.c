
/* btQuantizedBvh::buildInternal() */

void __thiscall btQuantizedBvh::buildInternal(btQuantizedBvh *this)

{
  undefined8 *puVar1;
  undefined2 uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined2 *puVar7;
  long lVar8;
  undefined2 *puVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 local_50;
  undefined8 uStack_48;
  
  iVar3 = *(int *)(this + 0x8c);
  this[0x40] = (btQuantizedBvh)0x1;
  iVar10 = *(int *)(this + 0xac);
  iVar11 = (int)((long)iVar3 << 1);
  if (iVar10 < iVar11) {
    lVar12 = (long)iVar10;
    if (*(int *)(this + 0xb0) < iVar11) {
      if (iVar3 == 0) {
        lVar4 = 0;
      }
      else {
        lVar4 = btAlignedAllocInternal((long)iVar3 << 5,0x10);
        iVar10 = *(int *)(this + 0xac);
      }
      if (0 < iVar10) {
        lVar8 = 0;
        lVar5 = (long)iVar10;
        do {
          lVar5 = lVar5 + -1;
          puVar6 = (undefined8 *)(*(long *)(this + 0xb8) + lVar8);
          uVar13 = *puVar6;
          ((undefined8 *)(lVar4 + lVar8))[1] = puVar6[1];
          *(undefined8 *)(lVar4 + lVar8) = uVar13;
          lVar8 = lVar8 + 0x10;
        } while (lVar5 != 0);
      }
      if (*(void **)(this + 0xb8) != (void *)0x0) {
        if (this[0xc0] != (btQuantizedBvh)0x0) {
          btAlignedFreeInternal(*(void **)(this + 0xb8));
        }
        *(undefined8 *)(this + 0xb8) = 0;
      }
      *(long *)(this + 0xb8) = lVar4;
      this[0xc0] = (btQuantizedBvh)0x1;
      *(int *)(this + 0xb0) = iVar11;
    }
    lVar4 = iVar11 - lVar12;
    lVar12 = lVar12 << 4;
    do {
      lVar8 = *(long *)(this + 0xb8);
      lVar4 = lVar4 + -1;
      ((undefined8 *)(lVar8 + lVar12))[1] = 0;
      *(undefined8 *)(lVar8 + lVar12) = 0;
      lVar12 = lVar12 + 0x10;
    } while (lVar4 != 0);
  }
  *(int *)(this + 0xac) = iVar11;
  *(undefined4 *)(this + 0x3c) = 0;
  buildTree(this,0,iVar3);
  if ((this[0x40] != (btQuantizedBvh)0x0) && (*(int *)(this + 0xd4) == 0)) {
    iVar10 = 1;
    if (*(int *)(this + 0xd8) == 0) {
      lVar12 = btAlignedAllocInternal(0x20,0x10);
      lVar4 = (long)*(int *)(this + 0xd4);
      if (0 < *(int *)(this + 0xd4)) {
        lVar8 = 0;
        do {
          puVar6 = (undefined8 *)(lVar12 + lVar8);
          lVar4 = lVar4 + -1;
          puVar1 = (undefined8 *)(*(long *)(this + 0xe0) + lVar8);
          uVar13 = puVar1[2];
          lVar8 = lVar8 + 0x20;
          puVar6[3] = puVar1[3];
          puVar6[2] = uVar13;
          uVar13 = *puVar1;
          puVar6[1] = puVar1[1];
          *puVar6 = uVar13;
        } while (lVar4 != 0);
      }
      if (*(void **)(this + 0xe0) != (void *)0x0) {
        if (this[0xe8] != (btQuantizedBvh)0x0) {
          btAlignedFreeInternal(*(void **)(this + 0xe0));
        }
        *(undefined8 *)(this + 0xe0) = 0;
      }
      this[0xe8] = (btQuantizedBvh)0x1;
      *(undefined4 *)(this + 0xd8) = 1;
      iVar10 = *(int *)(this + 0xd4) + 1;
      *(long *)(this + 0xe0) = lVar12;
    }
    *(int *)(this + 0xd4) = iVar10;
    puVar6 = *(undefined8 **)(this + 0xe0);
    puVar6[3] = uStack_48;
    puVar6[2] = local_50;
    puVar6[1] = 0;
    *puVar6 = 0;
    puVar7 = *(undefined2 **)(this + 0xb8);
    puVar9 = *(undefined2 **)(this + 0xe0);
    *puVar9 = *puVar7;
    puVar9[1] = puVar7[1];
    puVar9[2] = puVar7[2];
    puVar9[3] = puVar7[3];
    puVar9[4] = puVar7[4];
    uVar2 = puVar7[5];
    *(undefined4 *)(puVar9 + 6) = 0;
    puVar9[5] = uVar2;
    iVar10 = 1;
    if (*(int *)(puVar7 + 6) < 0) {
      iVar10 = -*(int *)(puVar7 + 6);
    }
    *(int *)(puVar9 + 8) = iVar10;
  }
  *(undefined4 *)(this + 0xf0) = *(undefined4 *)(this + 0xd4);
  if (*(void **)(this + 0x98) != (void *)0x0) {
    if (this[0xa0] != (btQuantizedBvh)0x0) {
      btAlignedFreeInternal(*(void **)(this + 0x98));
    }
    *(undefined8 *)(this + 0x98) = 0;
  }
  this[0xa0] = (btQuantizedBvh)0x1;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0x8c) = 0;
  if (*(void **)(this + 0x58) != (void *)0x0) {
    if (this[0x60] != (btQuantizedBvh)0x0) {
      btAlignedFreeInternal(*(void **)(this + 0x58));
    }
    *(undefined8 *)(this + 0x58) = 0;
  }
  this[0x60] = (btQuantizedBvh)0x1;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x4c) = 0;
  return;
}

