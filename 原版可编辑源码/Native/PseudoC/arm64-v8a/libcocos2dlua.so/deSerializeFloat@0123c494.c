
/* btQuantizedBvh::deSerializeFloat(btQuantizedBvhFloatData&) */

void __thiscall
btQuantizedBvh::deSerializeFloat(btQuantizedBvh *this,btQuantizedBvhFloatData *param_1)

{
  undefined4 *puVar1;
  undefined2 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  undefined4 *puVar11;
  undefined2 *puVar12;
  long lVar13;
  undefined4 *puVar14;
  undefined2 *puVar15;
  ulong uVar16;
  long lVar17;
  undefined8 uVar18;
  
  lVar6 = tpidr_el0;
  lVar9 = *(long *)(lVar6 + 0x28);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 8) = *(undefined4 *)param_1;
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(this + 0x2c) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(this + 0x30) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(this + 0x34) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(this + 0x3c) = *(undefined4 *)(param_1 + 0x30);
  this[0x40] = (btQuantizedBvh)(*(int *)(param_1 + 0x34) != 0);
  uVar5 = *(uint *)(param_1 + 0x38);
  uVar16 = (ulong)uVar5;
  iVar8 = *(int *)(this + 0x6c);
  if (iVar8 < (int)uVar5) {
    lVar17 = (long)iVar8;
    if (*(int *)(this + 0x70) < (int)uVar5) {
      if (uVar5 == 0) {
        lVar7 = 0;
      }
      else {
        lVar7 = btAlignedAllocInternal((long)(int)uVar5 << 6,0x10);
        iVar8 = *(int *)(this + 0x6c);
      }
      if (0 < iVar8) {
        lVar13 = 0;
        lVar10 = (long)iVar8;
        do {
          puVar3 = (undefined8 *)(lVar7 + lVar13);
          lVar10 = lVar10 + -1;
          puVar4 = (undefined8 *)(*(long *)(this + 0x78) + lVar13);
          uVar18 = puVar4[6];
          lVar13 = lVar13 + 0x40;
          puVar3[7] = puVar4[7];
          puVar3[6] = uVar18;
          uVar18 = puVar4[4];
          puVar3[5] = puVar4[5];
          puVar3[4] = uVar18;
          uVar18 = puVar4[2];
          puVar3[3] = puVar4[3];
          puVar3[2] = uVar18;
          uVar18 = *puVar4;
          puVar3[1] = puVar4[1];
          *puVar3 = uVar18;
        } while (lVar10 != 0);
      }
      if (*(void **)(this + 0x78) != (void *)0x0) {
        if (this[0x80] != (btQuantizedBvh)0x0) {
          btAlignedFreeInternal(*(void **)(this + 0x78));
        }
        *(undefined8 *)(this + 0x78) = 0;
      }
      *(long *)(this + 0x78) = lVar7;
      this[0x80] = (btQuantizedBvh)0x1;
      *(uint *)(this + 0x70) = uVar5;
    }
    lVar7 = (int)uVar5 - lVar17;
    lVar17 = lVar17 << 6;
    do {
      lVar7 = lVar7 + -1;
      puVar3 = (undefined8 *)(*(long *)(this + 0x78) + lVar17);
      puVar3[7] = 0;
      puVar3[6] = 0;
      lVar17 = lVar17 + 0x40;
      puVar3[5] = 0;
      puVar3[4] = 0;
      puVar3[3] = 0;
      puVar3[2] = 0;
      puVar3[1] = 0;
      *puVar3 = 0;
    } while (lVar7 != 0);
  }
  *(uint *)(this + 0x6c) = uVar5;
  if (0 < (int)uVar5) {
    puVar11 = (undefined4 *)(*(long *)(param_1 + 0x40) + 0x10);
    puVar14 = (undefined4 *)(*(long *)(this + 0x78) + 0x10);
    do {
      uVar16 = uVar16 - 1;
      *puVar14 = *puVar11;
      puVar14[1] = puVar11[1];
      puVar14[2] = puVar11[2];
      uVar18 = *(undefined8 *)(puVar11 + 3);
      *(undefined8 *)(puVar14 + 5) = *(undefined8 *)(puVar11 + 5);
      *(undefined8 *)(puVar14 + 3) = uVar18;
      puVar14[-4] = puVar11[-4];
      puVar14[-3] = puVar11[-3];
      puVar14[-2] = puVar11[-2];
      puVar1 = puVar11 + -1;
      puVar11 = puVar11 + 0xc;
      puVar14[-1] = *puVar1;
      puVar14 = puVar14 + 0x10;
    } while (uVar16 != 0);
  }
  uVar5 = *(uint *)(param_1 + 0x3c);
  uVar16 = (ulong)uVar5;
  iVar8 = *(int *)(this + 0xac);
  if (iVar8 < (int)uVar5) {
    lVar17 = (long)iVar8;
    if (*(int *)(this + 0xb0) < (int)uVar5) {
      if (uVar5 == 0) {
        lVar7 = 0;
      }
      else {
        lVar7 = btAlignedAllocInternal((long)(int)uVar5 << 4,0x10);
        iVar8 = *(int *)(this + 0xac);
      }
      if (0 < iVar8) {
        lVar13 = 0;
        lVar10 = (long)iVar8;
        do {
          lVar10 = lVar10 + -1;
          puVar3 = (undefined8 *)(*(long *)(this + 0xb8) + lVar13);
          uVar18 = *puVar3;
          ((undefined8 *)(lVar7 + lVar13))[1] = puVar3[1];
          *(undefined8 *)(lVar7 + lVar13) = uVar18;
          lVar13 = lVar13 + 0x10;
        } while (lVar10 != 0);
      }
      if (*(void **)(this + 0xb8) != (void *)0x0) {
        if (this[0xc0] != (btQuantizedBvh)0x0) {
          btAlignedFreeInternal(*(void **)(this + 0xb8));
        }
        *(undefined8 *)(this + 0xb8) = 0;
      }
      *(long *)(this + 0xb8) = lVar7;
      this[0xc0] = (btQuantizedBvh)0x1;
      *(uint *)(this + 0xb0) = uVar5;
    }
    lVar7 = (int)uVar5 - lVar17;
    lVar17 = lVar17 << 4;
    do {
      lVar13 = *(long *)(this + 0xb8);
      lVar7 = lVar7 + -1;
      ((undefined8 *)(lVar13 + lVar17))[1] = 0;
      *(undefined8 *)(lVar13 + lVar17) = 0;
      lVar17 = lVar17 + 0x10;
    } while (lVar7 != 0);
  }
  *(uint *)(this + 0xac) = uVar5;
  if (0 < (int)uVar5) {
    puVar12 = (undefined2 *)(*(long *)(this + 0xb8) + 6);
    puVar15 = (undefined2 *)(*(long *)(param_1 + 0x48) + 6);
    do {
      uVar16 = uVar16 - 1;
      *(undefined4 *)(puVar12 + 3) = *(undefined4 *)(puVar15 + 3);
      *puVar12 = *puVar15;
      puVar12[1] = puVar15[1];
      puVar12[2] = puVar15[2];
      puVar12[-3] = puVar15[-3];
      puVar12[-2] = puVar15[-2];
      puVar2 = puVar15 + -1;
      puVar15 = puVar15 + 8;
      puVar12[-1] = *puVar2;
      puVar12 = puVar12 + 8;
    } while (uVar16 != 0);
  }
  *(undefined4 *)(this + 200) = *(undefined4 *)(param_1 + 0x58);
  uVar5 = *(uint *)(param_1 + 0x5c);
  uVar16 = (ulong)uVar5;
  iVar8 = *(int *)(this + 0xd4);
  if (iVar8 < (int)uVar5) {
    lVar17 = (long)iVar8;
    if (*(int *)(this + 0xd8) < (int)uVar5) {
      if (uVar5 == 0) {
        lVar7 = 0;
      }
      else {
        lVar7 = btAlignedAllocInternal((long)(int)uVar5 << 5,0x10);
        iVar8 = *(int *)(this + 0xd4);
      }
      if (0 < iVar8) {
        lVar13 = 0;
        lVar10 = (long)iVar8;
        do {
          puVar3 = (undefined8 *)(lVar7 + lVar13);
          lVar10 = lVar10 + -1;
          puVar4 = (undefined8 *)(*(long *)(this + 0xe0) + lVar13);
          uVar18 = puVar4[2];
          lVar13 = lVar13 + 0x20;
          puVar3[3] = puVar4[3];
          puVar3[2] = uVar18;
          uVar18 = *puVar4;
          puVar3[1] = puVar4[1];
          *puVar3 = uVar18;
        } while (lVar10 != 0);
      }
      if (*(void **)(this + 0xe0) != (void *)0x0) {
        if (this[0xe8] != (btQuantizedBvh)0x0) {
          btAlignedFreeInternal(*(void **)(this + 0xe0));
        }
        *(undefined8 *)(this + 0xe0) = 0;
      }
      *(long *)(this + 0xe0) = lVar7;
      this[0xe8] = (btQuantizedBvh)0x1;
      *(uint *)(this + 0xd8) = uVar5;
    }
    lVar7 = (int)uVar5 - lVar17;
    lVar17 = lVar17 << 5;
    do {
      lVar7 = lVar7 + -1;
      puVar3 = (undefined8 *)(*(long *)(this + 0xe0) + lVar17);
      puVar3[3] = 0;
      puVar3[2] = 0;
      lVar17 = lVar17 + 0x20;
      puVar3[1] = 0;
      *puVar3 = 0;
    } while (lVar7 != 0);
  }
  *(uint *)(this + 0xd4) = uVar5;
  if (0 < (int)uVar5) {
    puVar12 = (undefined2 *)(*(long *)(param_1 + 0x50) + 10);
    puVar15 = (undefined2 *)(*(long *)(this + 0xe0) + 8);
    do {
      uVar16 = uVar16 - 1;
      puVar15[-1] = puVar12[2];
      *puVar15 = puVar12[3];
      puVar15[1] = puVar12[4];
      puVar15[-4] = puVar12[-1];
      puVar15[-3] = *puVar12;
      puVar15[-2] = puVar12[1];
      *(undefined4 *)(puVar15 + 2) = *(undefined4 *)(puVar12 + -5);
      puVar11 = (undefined4 *)(puVar12 + -3);
      puVar12 = puVar12 + 10;
      *(undefined4 *)(puVar15 + 4) = *puVar11;
      puVar15 = puVar15 + 0x10;
    } while (uVar16 != 0);
  }
  if (*(long *)(lVar6 + 0x28) != lVar9) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

