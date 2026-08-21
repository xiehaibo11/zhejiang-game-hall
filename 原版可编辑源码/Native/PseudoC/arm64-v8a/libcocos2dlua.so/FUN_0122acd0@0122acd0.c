
void FUN_0122acd0(long param_1,float *param_2,int param_3,uint param_4)

{
  ushort *puVar1;
  long lVar2;
  uint uVar3;
  undefined8 *puVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  
  fVar9 = *param_2;
  fVar12 = param_2[1];
  fVar16 = param_2[2];
  fVar10 = 1e+18;
  fVar14 = fVar9;
  if (1e+18 <= fVar9) {
    fVar14 = fVar10;
  }
  fVar15 = fVar12;
  if (1e+18 <= fVar12) {
    fVar15 = fVar10;
  }
  fVar18 = param_2[4];
  fVar19 = param_2[5];
  fVar20 = -1e+18;
  fVar13 = fVar16;
  if (1e+18 <= fVar16) {
    fVar13 = fVar10;
  }
  fVar10 = param_2[6];
  if (fVar9 <= -1e+18) {
    fVar9 = fVar20;
  }
  if (fVar12 <= -1e+18) {
    fVar12 = fVar20;
  }
  if (fVar16 <= -1e+18) {
    fVar16 = fVar20;
  }
  fVar20 = fVar18;
  if (fVar14 <= fVar18) {
    fVar20 = fVar14;
  }
  fVar14 = fVar19;
  if (fVar15 <= fVar19) {
    fVar14 = fVar15;
  }
  fVar15 = fVar10;
  if (fVar13 <= fVar10) {
    fVar15 = fVar13;
  }
  fVar13 = param_2[8];
  fVar17 = param_2[9];
  if (fVar18 <= fVar9) {
    fVar18 = fVar9;
  }
  fVar9 = param_2[10];
  if (fVar19 <= fVar12) {
    fVar19 = fVar12;
  }
  if (fVar10 <= fVar16) {
    fVar10 = fVar16;
  }
  fVar12 = fVar13;
  if (fVar20 <= fVar13) {
    fVar12 = fVar20;
  }
  fVar16 = fVar17;
  if (fVar14 <= fVar17) {
    fVar16 = fVar14;
  }
  fVar14 = fVar9;
  if (fVar15 <= fVar9) {
    fVar14 = fVar15;
  }
  if (fVar13 <= fVar18) {
    fVar13 = fVar18;
  }
  if (fVar17 <= fVar19) {
    fVar17 = fVar19;
  }
  if (fVar9 <= fVar10) {
    fVar9 = fVar10;
  }
  if (fVar13 - fVar12 < 0.002) {
    fVar13 = fVar13 + 0.001;
    fVar12 = fVar12 + -0.001;
  }
  if (fVar17 - fVar16 < 0.002) {
    fVar17 = fVar17 + 0.001;
    fVar16 = fVar16 + -0.001;
  }
  if (fVar9 - fVar14 < 0.002) {
    fVar9 = fVar9 + 0.001;
    fVar14 = fVar14 + -0.001;
  }
  lVar2 = *(long *)(param_1 + 8);
  lVar5 = *(long *)(param_1 + 0x10);
  fVar10 = *(float *)(lVar5 + 8);
  fVar15 = *(float *)(lVar5 + 0xc);
  fVar20 = *(float *)(lVar5 + 0x10);
  fVar18 = *(float *)(lVar5 + 0x28);
  fVar19 = *(float *)(lVar5 + 0x2c);
  fVar21 = *(float *)(lVar5 + 0x30);
  iVar6 = *(int *)(lVar2 + 4);
  if (iVar6 == *(int *)(lVar2 + 8)) {
    uVar3 = iVar6 << 1;
    if (iVar6 == 0) {
      uVar3 = 1;
    }
    if (iVar6 < (int)uVar3) {
      if (uVar3 == 0) {
        lVar5 = 0;
      }
      else {
        lVar5 = btAlignedAllocInternal
                          (-(ulong)(uVar3 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar3 << 4,0x10);
        iVar6 = *(int *)(lVar2 + 4);
      }
      if (0 < iVar6) {
        lVar8 = 0;
        lVar7 = (long)iVar6;
        do {
          lVar7 = lVar7 + -1;
          puVar4 = (undefined8 *)(*(long *)(lVar2 + 0x10) + lVar8);
          uVar11 = *puVar4;
          ((undefined8 *)(lVar5 + lVar8))[1] = puVar4[1];
          *(undefined8 *)(lVar5 + lVar8) = uVar11;
          lVar8 = lVar8 + 0x10;
        } while (lVar7 != 0);
      }
      if (*(void **)(lVar2 + 0x10) != (void *)0x0) {
        if (*(char *)(lVar2 + 0x18) != '\0') {
          btAlignedFreeInternal(*(void **)(lVar2 + 0x10));
        }
        *(undefined8 *)(lVar2 + 0x10) = 0;
      }
      iVar6 = *(int *)(lVar2 + 4);
      *(undefined1 *)(lVar2 + 0x18) = 1;
      *(long *)(lVar2 + 0x10) = lVar5;
      *(uint *)(lVar2 + 8) = uVar3;
    }
  }
  puVar1 = (ushort *)(*(long *)(lVar2 + 0x10) + (long)iVar6 * 0x10);
  *puVar1 = (ushort)(int)((fVar12 - fVar10) * fVar18) & 0xfffe;
  puVar1[1] = (ushort)(int)((fVar16 - fVar15) * fVar19) & 0xfffe;
  puVar1[2] = (ushort)(int)((fVar14 - fVar20) * fVar21) & 0xfffe;
  puVar1[3] = (ushort)(int)((fVar13 - fVar10) * fVar18 + 1.0) | 1;
  puVar1[4] = (ushort)(int)((fVar17 - fVar15) * fVar19 + 1.0) | 1;
  puVar1[5] = (ushort)(int)((fVar9 - fVar20) * fVar21 + 1.0) | 1;
  *(uint *)(puVar1 + 6) = param_4 | param_3 << 0x15;
  *(int *)(lVar2 + 4) = *(int *)(lVar2 + 4) + 1;
  return;
}

