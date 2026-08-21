
/* btQuantizedBvh::updateSubtreeHeaders(int, int) */

void __thiscall btQuantizedBvh::updateSubtreeHeaders(btQuantizedBvh *this,int param_1,int param_2)

{
  undefined8 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined2 uVar6;
  uint uVar7;
  long lVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  lVar14 = *(long *)(this + 0xb8);
  iVar9 = *(int *)(lVar14 + (long)param_1 * 0x10 + 0xc);
  iVar5 = *(int *)(lVar14 + (long)param_2 * 0x10 + 0xc);
  iVar13 = 1;
  iVar10 = iVar13;
  if (iVar9 < 0) {
    iVar10 = -iVar9;
  }
  if (iVar5 < 0) {
    iVar13 = -iVar5;
  }
  if (iVar10 < 0x81) {
    iVar9 = *(int *)(this + 0xd4);
    lVar15 = (long)iVar9;
    if (iVar9 == *(int *)(this + 0xd8)) {
      uVar7 = iVar9 << 1;
      if (iVar9 == 0) {
        uVar7 = 1;
      }
      if (iVar9 < (int)uVar7) {
        if (uVar7 == 0) {
          lVar8 = 0;
        }
        else {
          lVar8 = btAlignedAllocInternal
                            (-(ulong)(uVar7 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar7 << 5,0x10);
          iVar9 = *(int *)(this + 0xd4);
        }
        if (0 < iVar9) {
          lVar12 = 0;
          lVar11 = (long)iVar9;
          do {
            puVar1 = (undefined8 *)(lVar8 + lVar12);
            lVar11 = lVar11 + -1;
            puVar4 = (undefined8 *)(*(long *)(this + 0xe0) + lVar12);
            uVar16 = puVar4[2];
            lVar12 = lVar12 + 0x20;
            puVar1[3] = puVar4[3];
            puVar1[2] = uVar16;
            uVar16 = *puVar4;
            puVar1[1] = puVar4[1];
            *puVar1 = uVar16;
          } while (lVar11 != 0);
        }
        if (*(void **)(this + 0xe0) != (void *)0x0) {
          if (this[0xe8] != (btQuantizedBvh)0x0) {
            btAlignedFreeInternal(*(void **)(this + 0xe0));
          }
          *(undefined8 *)(this + 0xe0) = 0;
        }
        iVar9 = *(int *)(this + 0xd4);
        this[0xe8] = (btQuantizedBvh)0x1;
        *(long *)(this + 0xe0) = lVar8;
        *(uint *)(this + 0xd8) = uVar7;
      }
    }
    *(int *)(this + 0xd4) = iVar9 + 1;
    puVar1 = (undefined8 *)(*(long *)(this + 0xe0) + lVar15 * 0x20);
    puVar2 = (undefined2 *)(lVar14 + (long)param_1 * 0x10);
    puVar1[3] = uStack_68;
    puVar1[2] = local_70;
    puVar1[1] = uStack_78;
    *puVar1 = local_80;
    puVar3 = (undefined2 *)(*(long *)(this + 0xe0) + lVar15 * 0x20);
    *puVar3 = *puVar2;
    puVar3[1] = puVar2[1];
    puVar3[2] = puVar2[2];
    puVar3[3] = puVar2[3];
    puVar3[4] = puVar2[4];
    uVar6 = puVar2[5];
    *(int *)(puVar3 + 6) = param_1;
    *(int *)(puVar3 + 8) = iVar10;
    puVar3[5] = uVar6;
  }
  if (iVar13 < 0x81) {
    iVar10 = *(int *)(this + 0xd4);
    lVar15 = (long)iVar10;
    if (iVar10 == *(int *)(this + 0xd8)) {
      uVar7 = iVar10 << 1;
      if (iVar10 == 0) {
        uVar7 = 1;
      }
      if (iVar10 < (int)uVar7) {
        if (uVar7 == 0) {
          lVar8 = 0;
        }
        else {
          lVar8 = btAlignedAllocInternal
                            (-(ulong)(uVar7 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar7 << 5,0x10);
          iVar10 = *(int *)(this + 0xd4);
        }
        if (0 < iVar10) {
          lVar12 = 0;
          lVar11 = (long)iVar10;
          do {
            puVar1 = (undefined8 *)(lVar8 + lVar12);
            lVar11 = lVar11 + -1;
            puVar4 = (undefined8 *)(*(long *)(this + 0xe0) + lVar12);
            uVar16 = puVar4[2];
            lVar12 = lVar12 + 0x20;
            puVar1[3] = puVar4[3];
            puVar1[2] = uVar16;
            uVar16 = *puVar4;
            puVar1[1] = puVar4[1];
            *puVar1 = uVar16;
          } while (lVar11 != 0);
        }
        if (*(void **)(this + 0xe0) != (void *)0x0) {
          if (this[0xe8] != (btQuantizedBvh)0x0) {
            btAlignedFreeInternal(*(void **)(this + 0xe0));
          }
          *(undefined8 *)(this + 0xe0) = 0;
        }
        iVar10 = *(int *)(this + 0xd4);
        this[0xe8] = (btQuantizedBvh)0x1;
        *(long *)(this + 0xe0) = lVar8;
        *(uint *)(this + 0xd8) = uVar7;
      }
    }
    *(int *)(this + 0xd4) = iVar10 + 1;
    puVar2 = (undefined2 *)(lVar14 + (long)param_2 * 0x10);
    puVar1 = (undefined8 *)(*(long *)(this + 0xe0) + lVar15 * 0x20);
    puVar1[3] = uStack_68;
    puVar1[2] = local_70;
    puVar1[1] = uStack_78;
    *puVar1 = local_80;
    puVar3 = (undefined2 *)(*(long *)(this + 0xe0) + lVar15 * 0x20);
    *puVar3 = *puVar2;
    puVar3[1] = puVar2[1];
    puVar3[2] = puVar2[2];
    puVar3[3] = puVar2[3];
    puVar3[4] = puVar2[4];
    uVar6 = puVar2[5];
    *(int *)(puVar3 + 6) = param_2;
    *(int *)(puVar3 + 8) = iVar13;
    puVar3[5] = uVar6;
  }
  *(undefined4 *)(this + 0xf0) = *(undefined4 *)(this + 0xd4);
  return;
}

