
void FUN_0122b06c(long param_1,float *param_2,float param_3,float param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  float *pfVar3;
  float fVar4;
  uint uVar5;
  float fVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined8 local_8c;
  undefined8 uStack_84;
  float local_7c;
  
  lVar7 = tpidr_el0;
  lVar12 = *(long *)(lVar7 + 0x28);
  fVar17 = *param_2;
  fVar19 = param_2[1];
  fVar21 = param_2[2];
  fVar23 = param_2[3];
  fVar15 = 1e+18;
  fVar4 = fVar17;
  if (1e+18 <= fVar17) {
    fVar4 = fVar15;
  }
  fVar24 = param_2[4];
  fVar26 = param_2[5];
  fVar25 = fVar19;
  if (1e+18 <= fVar19) {
    fVar25 = fVar15;
  }
  fVar6 = -1e+18;
  fVar16 = fVar21;
  if (1e+18 <= fVar21) {
    fVar16 = fVar15;
  }
  fVar15 = param_2[6];
  fVar18 = param_2[7];
  if (fVar17 <= -1e+18) {
    fVar17 = fVar6;
  }
  if (fVar19 <= -1e+18) {
    fVar19 = fVar6;
  }
  if (fVar21 <= -1e+18) {
    fVar21 = fVar6;
  }
  fVar6 = fVar24;
  if (fVar4 <= fVar24) {
    fVar6 = fVar4;
  }
  fVar20 = (float)NEON_fminnm(fVar23,0);
  fVar4 = fVar26;
  if (fVar25 <= fVar26) {
    fVar4 = fVar25;
  }
  fVar25 = fVar15;
  if (fVar16 <= fVar15) {
    fVar25 = fVar16;
  }
  fVar16 = fVar18;
  if (fVar20 <= fVar18) {
    fVar16 = fVar20;
  }
  fVar20 = param_2[8];
  fVar22 = param_2[9];
  if (fVar24 <= fVar17) {
    fVar24 = fVar17;
  }
  if (fVar26 <= fVar19) {
    fVar26 = fVar19;
  }
  fVar17 = param_2[10];
  fVar19 = param_2[0xb];
  if (fVar15 <= fVar21) {
    fVar15 = fVar21;
  }
  if (fVar18 <= fVar23) {
    fVar18 = fVar23;
  }
  lVar13 = *(long *)(param_1 + 8);
  fVar21 = fVar20;
  if (fVar6 <= fVar20) {
    fVar21 = fVar6;
  }
  fVar23 = fVar22;
  if (fVar4 <= fVar22) {
    fVar23 = fVar4;
  }
  fVar4 = fVar17;
  if (fVar25 <= fVar17) {
    fVar4 = fVar25;
  }
  fVar25 = fVar19;
  if (fVar16 <= fVar19) {
    fVar25 = fVar16;
  }
  if (fVar20 <= fVar24) {
    fVar20 = fVar24;
  }
  iVar9 = *(int *)(lVar13 + 4);
  if (fVar22 <= fVar26) {
    fVar22 = fVar26;
  }
  if (fVar17 <= fVar15) {
    fVar17 = fVar15;
  }
  if (fVar19 <= fVar18) {
    fVar19 = fVar18;
  }
  if (iVar9 == *(int *)(lVar13 + 8)) {
    uVar5 = iVar9 << 1;
    if (iVar9 == 0) {
      uVar5 = 1;
    }
    if (iVar9 < (int)uVar5) {
      if (uVar5 == 0) {
        lVar8 = 0;
      }
      else {
        lVar8 = btAlignedAllocInternal
                          (-(ulong)(uVar5 >> 0x1f) & 0xffffffc000000000 | (ulong)uVar5 << 6,0x10);
        iVar9 = *(int *)(lVar13 + 4);
      }
      if (0 < iVar9) {
        lVar11 = 0;
        lVar10 = (long)iVar9;
        do {
          puVar1 = (undefined8 *)(lVar8 + lVar11);
          lVar10 = lVar10 + -1;
          puVar2 = (undefined8 *)(*(long *)(lVar13 + 0x10) + lVar11);
          uVar14 = puVar2[6];
          lVar11 = lVar11 + 0x40;
          puVar1[7] = puVar2[7];
          puVar1[6] = uVar14;
          uVar14 = puVar2[4];
          puVar1[5] = puVar2[5];
          puVar1[4] = uVar14;
          uVar14 = puVar2[2];
          puVar1[3] = puVar2[3];
          puVar1[2] = uVar14;
          uVar14 = *puVar2;
          puVar1[1] = puVar2[1];
          *puVar1 = uVar14;
        } while (lVar10 != 0);
      }
      if (*(void **)(lVar13 + 0x10) != (void *)0x0) {
        if (*(char *)(lVar13 + 0x18) != '\0') {
          btAlignedFreeInternal(*(void **)(lVar13 + 0x10));
        }
        *(undefined8 *)(lVar13 + 0x10) = 0;
      }
      *(undefined1 *)(lVar13 + 0x18) = 1;
      *(long *)(lVar13 + 0x10) = lVar8;
      *(uint *)(lVar13 + 8) = uVar5;
      iVar9 = *(int *)(lVar13 + 4);
    }
  }
  pfVar3 = (float *)(*(long *)(lVar13 + 0x10) + (long)iVar9 * 0x40);
  *pfVar3 = fVar21;
  pfVar3[1] = fVar23;
  pfVar3[2] = fVar4;
  pfVar3[3] = fVar25;
  pfVar3[4] = fVar20;
  pfVar3[5] = fVar22;
  pfVar3[6] = fVar17;
  pfVar3[7] = fVar19;
  pfVar3[8] = -NAN;
  pfVar3[9] = param_3;
  pfVar3[10] = param_4;
  pfVar3[0xf] = local_7c;
  *(undefined8 *)(pfVar3 + 0xd) = uStack_84;
  *(undefined8 *)(pfVar3 + 0xb) = local_8c;
  *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + 1;
  if (*(long *)(lVar7 + 0x28) != lVar12) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

