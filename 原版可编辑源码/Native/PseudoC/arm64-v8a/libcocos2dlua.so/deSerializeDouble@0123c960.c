
/* btQuantizedBvh::deSerializeDouble(btQuantizedBvhDoubleData&) */

void __thiscall
btQuantizedBvh::deSerializeDouble(btQuantizedBvh *this,btQuantizedBvhDoubleData *param_1)

{
  undefined4 *puVar1;
  undefined2 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  long lVar6;
  double dVar7;
  undefined8 uVar8;
  long lVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  undefined4 *puVar13;
  undefined2 *puVar14;
  long lVar15;
  undefined4 *puVar16;
  undefined2 *puVar17;
  ulong uVar18;
  long lVar19;
  double dVar20;
  
  lVar6 = tpidr_el0;
  lVar11 = *(long *)(lVar6 + 0x28);
  dVar20 = *(double *)(param_1 + 0x28);
  dVar7 = *(double *)(param_1 + 0x20);
  *(ulong *)(this + 0x20) =
       CONCAT44((float)*(double *)(param_1 + 0x38),(float)*(double *)(param_1 + 0x30));
  *(ulong *)(this + 0x18) = CONCAT44((float)dVar20,(float)dVar7);
  dVar20 = *(double *)(param_1 + 8);
  dVar7 = *(double *)param_1;
  *(ulong *)(this + 0x10) =
       CONCAT44((float)*(double *)(param_1 + 0x18),(float)*(double *)(param_1 + 0x10));
  *(ulong *)(this + 8) = CONCAT44((float)dVar20,(float)dVar7);
  dVar20 = *(double *)(param_1 + 0x48);
  dVar7 = *(double *)(param_1 + 0x40);
  *(ulong *)(this + 0x30) =
       CONCAT44((float)*(double *)(param_1 + 0x58),(float)*(double *)(param_1 + 0x50));
  *(ulong *)(this + 0x28) = CONCAT44((float)dVar20,(float)dVar7);
  *(undefined4 *)(this + 0x3c) = *(undefined4 *)(param_1 + 0x60);
  this[0x40] = (btQuantizedBvh)(*(int *)(param_1 + 100) != 0);
  uVar5 = *(uint *)(param_1 + 0x68);
  uVar18 = (ulong)uVar5;
  iVar10 = *(int *)(this + 0x6c);
  if (iVar10 < (int)uVar5) {
    lVar19 = (long)iVar10;
    if (*(int *)(this + 0x70) < (int)uVar5) {
      if (uVar5 == 0) {
        lVar9 = 0;
      }
      else {
        lVar9 = btAlignedAllocInternal((long)(int)uVar5 << 6,0x10);
        iVar10 = *(int *)(this + 0x6c);
      }
      if (0 < iVar10) {
        lVar15 = 0;
        lVar12 = (long)iVar10;
        do {
          puVar3 = (undefined8 *)(lVar9 + lVar15);
          lVar12 = lVar12 + -1;
          puVar4 = (undefined8 *)(*(long *)(this + 0x78) + lVar15);
          uVar8 = puVar4[6];
          lVar15 = lVar15 + 0x40;
          puVar3[7] = puVar4[7];
          puVar3[6] = uVar8;
          uVar8 = puVar4[4];
          puVar3[5] = puVar4[5];
          puVar3[4] = uVar8;
          uVar8 = puVar4[2];
          puVar3[3] = puVar4[3];
          puVar3[2] = uVar8;
          uVar8 = *puVar4;
          puVar3[1] = puVar4[1];
          *puVar3 = uVar8;
        } while (lVar12 != 0);
      }
      if (*(void **)(this + 0x78) != (void *)0x0) {
        if (this[0x80] != (btQuantizedBvh)0x0) {
          btAlignedFreeInternal(*(void **)(this + 0x78));
        }
        *(undefined8 *)(this + 0x78) = 0;
      }
      *(long *)(this + 0x78) = lVar9;
      this[0x80] = (btQuantizedBvh)0x1;
      *(uint *)(this + 0x70) = uVar5;
    }
    lVar9 = (int)uVar5 - lVar19;
    lVar19 = lVar19 << 6;
    do {
      lVar9 = lVar9 + -1;
      puVar3 = (undefined8 *)(*(long *)(this + 0x78) + lVar19);
      puVar3[7] = 0;
      puVar3[6] = 0;
      lVar19 = lVar19 + 0x40;
      puVar3[5] = 0;
      puVar3[4] = 0;
      puVar3[3] = 0;
      puVar3[2] = 0;
      puVar3[1] = 0;
      *puVar3 = 0;
    } while (lVar9 != 0);
  }
  *(uint *)(this + 0x6c) = uVar5;
  if (0 < (int)uVar5) {
    puVar13 = (undefined4 *)(*(long *)(param_1 + 0x70) + 0x40);
    puVar16 = (undefined4 *)(*(long *)(this + 0x78) + 0x28);
    do {
      dVar20 = *(double *)(puVar13 + -6);
      dVar7 = *(double *)(puVar13 + -8);
      uVar18 = uVar18 - 1;
      *(ulong *)(puVar16 + -4) =
           CONCAT44((float)*(double *)(puVar13 + -2),(float)*(double *)(puVar13 + -4));
      *(ulong *)(puVar16 + -6) = CONCAT44((float)dVar20,(float)dVar7);
      dVar20 = *(double *)(puVar13 + -0xe);
      dVar7 = *(double *)(puVar13 + -0x10);
      *(ulong *)(puVar16 + -8) =
           CONCAT44((float)*(double *)(puVar13 + -10),(float)*(double *)(puVar13 + -0xc));
      *(ulong *)(puVar16 + -10) = CONCAT44((float)dVar20,(float)dVar7);
      puVar16[-2] = *puVar13;
      puVar16[-1] = puVar13[1];
      puVar1 = puVar13 + 2;
      puVar13 = puVar13 + 0x14;
      *puVar16 = *puVar1;
      puVar16 = puVar16 + 0x10;
    } while (uVar18 != 0);
  }
  uVar5 = *(uint *)(param_1 + 0x6c);
  uVar18 = (ulong)uVar5;
  iVar10 = *(int *)(this + 0xac);
  if (iVar10 < (int)uVar5) {
    lVar19 = (long)iVar10;
    if (*(int *)(this + 0xb0) < (int)uVar5) {
      if (uVar5 == 0) {
        lVar9 = 0;
      }
      else {
        lVar9 = btAlignedAllocInternal((long)(int)uVar5 << 4,0x10);
        iVar10 = *(int *)(this + 0xac);
      }
      if (0 < iVar10) {
        lVar15 = 0;
        lVar12 = (long)iVar10;
        do {
          lVar12 = lVar12 + -1;
          puVar3 = (undefined8 *)(*(long *)(this + 0xb8) + lVar15);
          uVar8 = *puVar3;
          ((undefined8 *)(lVar9 + lVar15))[1] = puVar3[1];
          *(undefined8 *)(lVar9 + lVar15) = uVar8;
          lVar15 = lVar15 + 0x10;
        } while (lVar12 != 0);
      }
      if (*(void **)(this + 0xb8) != (void *)0x0) {
        if (this[0xc0] != (btQuantizedBvh)0x0) {
          btAlignedFreeInternal(*(void **)(this + 0xb8));
        }
        *(undefined8 *)(this + 0xb8) = 0;
      }
      *(long *)(this + 0xb8) = lVar9;
      this[0xc0] = (btQuantizedBvh)0x1;
      *(uint *)(this + 0xb0) = uVar5;
    }
    lVar9 = (int)uVar5 - lVar19;
    lVar19 = lVar19 << 4;
    do {
      lVar15 = *(long *)(this + 0xb8);
      lVar9 = lVar9 + -1;
      ((undefined8 *)(lVar15 + lVar19))[1] = 0;
      *(undefined8 *)(lVar15 + lVar19) = 0;
      lVar19 = lVar19 + 0x10;
    } while (lVar9 != 0);
  }
  *(uint *)(this + 0xac) = uVar5;
  if (0 < (int)uVar5) {
    puVar14 = (undefined2 *)(*(long *)(this + 0xb8) + 6);
    puVar17 = (undefined2 *)(*(long *)(param_1 + 0x78) + 6);
    do {
      uVar18 = uVar18 - 1;
      *(undefined4 *)(puVar14 + 3) = *(undefined4 *)(puVar17 + 3);
      *puVar14 = *puVar17;
      puVar14[1] = puVar17[1];
      puVar14[2] = puVar17[2];
      puVar14[-3] = puVar17[-3];
      puVar14[-2] = puVar17[-2];
      puVar2 = puVar17 + -1;
      puVar17 = puVar17 + 8;
      puVar14[-1] = *puVar2;
      puVar14 = puVar14 + 8;
    } while (uVar18 != 0);
  }
  *(undefined4 *)(this + 200) = *(undefined4 *)(param_1 + 0x80);
  uVar5 = *(uint *)(param_1 + 0x84);
  uVar18 = (ulong)uVar5;
  iVar10 = *(int *)(this + 0xd4);
  if (iVar10 < (int)uVar5) {
    lVar19 = (long)iVar10;
    if (*(int *)(this + 0xd8) < (int)uVar5) {
      if (uVar5 == 0) {
        lVar9 = 0;
      }
      else {
        lVar9 = btAlignedAllocInternal((long)(int)uVar5 << 5,0x10);
        iVar10 = *(int *)(this + 0xd4);
      }
      if (0 < iVar10) {
        lVar15 = 0;
        lVar12 = (long)iVar10;
        do {
          puVar3 = (undefined8 *)(lVar9 + lVar15);
          lVar12 = lVar12 + -1;
          puVar4 = (undefined8 *)(*(long *)(this + 0xe0) + lVar15);
          uVar8 = puVar4[2];
          lVar15 = lVar15 + 0x20;
          puVar3[3] = puVar4[3];
          puVar3[2] = uVar8;
          uVar8 = *puVar4;
          puVar3[1] = puVar4[1];
          *puVar3 = uVar8;
        } while (lVar12 != 0);
      }
      if (*(void **)(this + 0xe0) != (void *)0x0) {
        if (this[0xe8] != (btQuantizedBvh)0x0) {
          btAlignedFreeInternal(*(void **)(this + 0xe0));
        }
        *(undefined8 *)(this + 0xe0) = 0;
      }
      *(long *)(this + 0xe0) = lVar9;
      this[0xe8] = (btQuantizedBvh)0x1;
      *(uint *)(this + 0xd8) = uVar5;
    }
    lVar9 = (int)uVar5 - lVar19;
    lVar19 = lVar19 << 5;
    do {
      lVar9 = lVar9 + -1;
      puVar3 = (undefined8 *)(*(long *)(this + 0xe0) + lVar19);
      puVar3[3] = 0;
      puVar3[2] = 0;
      lVar19 = lVar19 + 0x20;
      puVar3[1] = 0;
      *puVar3 = 0;
    } while (lVar9 != 0);
  }
  *(uint *)(this + 0xd4) = uVar5;
  if (0 < (int)uVar5) {
    puVar14 = (undefined2 *)(*(long *)(param_1 + 0x88) + 10);
    puVar17 = (undefined2 *)(*(long *)(this + 0xe0) + 8);
    do {
      uVar18 = uVar18 - 1;
      puVar17[-1] = puVar14[2];
      *puVar17 = puVar14[3];
      puVar17[1] = puVar14[4];
      puVar17[-4] = puVar14[-1];
      puVar17[-3] = *puVar14;
      puVar17[-2] = puVar14[1];
      *(undefined4 *)(puVar17 + 2) = *(undefined4 *)(puVar14 + -5);
      puVar13 = (undefined4 *)(puVar14 + -3);
      puVar14 = puVar14 + 10;
      *(undefined4 *)(puVar17 + 4) = *puVar13;
      puVar17 = puVar17 + 0x10;
    } while (uVar18 != 0);
  }
  if (*(long *)(lVar6 + 0x28) != lVar11) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

