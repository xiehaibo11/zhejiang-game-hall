
void FUN_0116be68(undefined8 *param_1,undefined8 *param_2,uint param_3,long param_4,int param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  float fVar5;
  char cVar6;
  undefined8 *puVar7;
  long lVar8;
  float *pfVar9;
  undefined8 *puVar10;
  float *pfVar11;
  ulong uVar12;
  long lVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  undefined8 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined1 auVar29 [12];
  undefined1 auVar30 [12];
  undefined8 local_f0;
  float afStack_e8 [2];
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 *local_b8;
  long local_b0;
  long local_a8;
  
  local_b0 = tpidr_el0;
  local_a8 = *(long *)(local_b0 + 0x28);
  iVar14 = param_3 - 1;
  if ((int)param_3 < 1) {
    iVar16 = 0;
  }
  else {
    fVar19 = INFINITY;
    uVar12 = 0;
    pfVar9 = (float *)(param_4 + 0x14);
    iVar15 = 0;
    do {
      lVar13 = param_4 + (long)iVar14 * 0x1c;
      fVar20 = pfVar9[-1];
      fVar22 = *pfVar9;
      fVar23 = *(float *)(lVar13 + 0x10);
      fVar26 = *(float *)(lVar13 + 0x14);
      pfVar9 = pfVar9 + 7;
      fVar27 = fVar20 - fVar23;
      fVar28 = fVar22 - fVar26;
      fVar27 = ((fVar20 + fVar23) * fVar27 + fVar28 * (fVar22 + fVar26)) /
               (fVar27 * fVar27 + fVar28 * fVar28);
      if (fVar27 <= -1.0) {
        fVar27 = -1.0;
      }
      fVar27 = (float)NEON_fminnm(fVar27,0x3f800000);
      fVar28 = 0.5 - fVar27 * -0.5;
      fVar27 = fVar27 * -0.5 + 0.5;
      fVar22 = fVar28 * fVar26 + fVar22 * fVar27;
      fVar20 = fVar28 * fVar23 + fVar20 * fVar27;
      fVar20 = fVar22 * fVar22 + fVar20 * fVar20;
      iVar16 = iVar14;
      if (fVar19 <= fVar20) {
        iVar16 = iVar15;
      }
      iVar14 = (int)uVar12;
      uVar12 = uVar12 + 1;
      fVar19 = (float)NEON_fminnm(fVar20,fVar19);
      iVar15 = iVar16;
    } while (param_3 != uVar12);
  }
  iVar14 = 0;
  if (param_3 != 0) {
    iVar14 = (iVar16 + 1) / (int)param_3;
  }
  puVar10 = (undefined8 *)(param_4 + (long)(int)((iVar16 + 1) - iVar14 * param_3) * 0x1c);
  puVar7 = (undefined8 *)(param_4 + (long)iVar16 * 0x1c);
  uStack_c8 = puVar7[1];
  local_d0 = *puVar7;
  uStack_d8 = puVar10[1];
  local_e0 = *puVar10;
  fVar20 = *(float *)(puVar7 + 2);
  fVar22 = *(float *)((long)puVar7 + 0x14);
  fVar23 = *(float *)(puVar10 + 2);
  fVar26 = *(float *)((long)puVar10 + 0x14);
  uVar2 = *(uint *)(puVar7 + 3);
  uVar3 = *(uint *)(puVar10 + 3);
  fVar19 = fVar26 - fVar22;
  fVar27 = fVar23 - fVar20;
  afStack_e8[1] = (float)param_5;
  local_b8 = param_1;
  auVar29 = (*(code *)param_2[2])(fVar19,fVar20 - fVar23,*param_2);
  local_f0 = param_2;
  auVar30 = (*(code *)param_2[3])(fVar22 - fVar26,fVar27,param_2[1]);
  uVar1 = auVar30._8_4_ & 0xff | (auVar29._8_4_ & 0xff) << 8;
  if ((uVar1 != uVar2) && (uVar1 != uVar3)) {
    fVar28 = auVar30._0_4_ - auVar29._0_4_;
    fVar25 = auVar30._4_4_ - auVar29._4_4_;
    cVar6 = cpCheckSignedArea(fVar20,fVar22,fVar23,fVar26,fVar28,fVar25);
    if (((int)afStack_e8[1] < 0x1e) && (cVar6 != '\0')) {
      lVar13 = -((long)(int)(param_3 + 1) * 0x1c + 0xfU & 0xfffffffffffffff0);
      pfVar9 = (float *)((long)afStack_e8 + lVar13 + -8);
      iVar14 = 0;
      *pfVar9 = auVar29._0_4_;
      *(float *)((long)afStack_e8 + lVar13 + -4) = auVar29._4_4_;
      uVar12 = 1;
      *(float *)((long)afStack_e8 + lVar13) = auVar30._0_4_;
      *(float *)((long)afStack_e8 + lVar13 + 4) = auVar30._4_4_;
      *(float *)((long)&local_e0 + lVar13) = fVar28;
      *(float *)((long)&local_e0 + lVar13 + 4) = fVar25;
      *(uint *)((long)&uStack_d8 + lVar13) = uVar1;
      do {
        iVar15 = iVar14;
        do {
          iVar14 = iVar15 + 1;
          if ((int)param_3 <= iVar15) {
            FUN_0116be68(local_b8,local_f0,uVar12 & 0xffffffff,pfVar9,(int)afStack_e8[1] + 1);
            goto LAB_0116c22c;
          }
          iVar15 = 0;
          if (param_3 != 0) {
            iVar15 = (iVar16 + iVar14) / (int)param_3;
          }
          iVar4 = (iVar16 + iVar14) - iVar15 * param_3;
          lVar13 = param_4 + (long)iVar4 * 0x1c;
          fVar19 = fVar28;
          fVar20 = fVar25;
          if (iVar14 < (int)param_3) {
            iVar15 = 0;
            if (param_3 != 0) {
              iVar15 = (iVar4 + 1) / (int)param_3;
            }
            lVar8 = param_4 + (long)(int)((iVar4 + 1) - iVar15 * param_3) * 0x1c;
            fVar19 = *(float *)(lVar8 + 0x10);
            fVar20 = *(float *)(lVar8 + 0x14);
          }
          cVar6 = cpCheckSignedArea(pfVar9[uVar12 * 7 + -3],pfVar9[uVar12 * 7 + -2],fVar19,fVar20,
                                    *(undefined4 *)(lVar13 + 0x10),*(undefined4 *)(lVar13 + 0x14));
          iVar15 = iVar14;
        } while (cVar6 == '\0');
        puVar7 = (undefined8 *)(param_4 + (long)iVar4 * 0x1c);
        uVar17 = *(undefined8 *)((long)puVar7 + 0xc);
        pfVar11 = pfVar9 + uVar12 * 7;
        uVar12 = uVar12 + 1;
        *(undefined8 *)(pfVar11 + 5) = *(undefined8 *)((long)puVar7 + 0x14);
        *(undefined8 *)(pfVar11 + 3) = uVar17;
        uVar17 = *puVar7;
        *(undefined8 *)(pfVar11 + 2) = puVar7[1];
        *(undefined8 *)pfVar11 = uVar17;
      } while( true );
    }
  }
  fVar28 = fVar27 * fVar27 + fVar19 * fVar19;
  fVar25 = ((fVar23 + fVar20) * fVar27 + fVar19 * (fVar26 + fVar22)) / fVar28;
  if (fVar25 <= -1.0) {
    fVar25 = -1.0;
  }
  fVar5 = fVar25;
  if (1.0 <= fVar25) {
    fVar5 = 1.0;
  }
  fVar18 = 0.5 - fVar5 * -0.5;
  fVar21 = fVar5 * -0.5 + 0.5;
  fVar24 = fVar18 * fVar20 + fVar23 * fVar21;
  fVar23 = fVar18 * fVar22 + fVar26 * fVar21;
  fVar22 = 1.0 / (SQRT(fVar28) + 1.1754944e-38);
  fVar19 = fVar22 * fVar19;
  fVar20 = -(fVar27 * fVar22);
  fVar22 = fVar24 * fVar19 - fVar23 * fVar27 * fVar22;
  if ((1.0 <= fVar25 || fVar5 <= -1.0) && (0.0 < fVar22)) {
    fVar22 = SQRT(fVar23 * fVar23 + fVar24 * fVar24);
    fVar20 = 1.0 / (fVar22 + 1.1754944e-38);
    fVar19 = fVar20 * fVar24;
    fVar20 = fVar20 * fVar23;
  }
  local_b8[1] = CONCAT44((float)((ulong)uStack_c8 >> 0x20) * fVar18 +
                         (float)((ulong)uStack_d8 >> 0x20) * fVar21,
                         (float)uStack_c8 * fVar18 + (float)uStack_d8 * fVar21);
  *local_b8 = CONCAT44((float)((ulong)local_d0 >> 0x20) * fVar18 +
                       (float)((ulong)local_e0 >> 0x20) * fVar21,
                       (float)local_d0 * fVar18 + (float)local_e0 * fVar21);
  *(float *)(local_b8 + 2) = fVar19;
  *(float *)((long)local_b8 + 0x14) = fVar20;
  *(float *)(local_b8 + 3) = fVar22;
  *(uint *)((long)local_b8 + 0x1c) = uVar3 & 0xffff | uVar2 << 0x10;
LAB_0116c22c:
  if (*(long *)(local_b0 + 0x28) == local_a8) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

