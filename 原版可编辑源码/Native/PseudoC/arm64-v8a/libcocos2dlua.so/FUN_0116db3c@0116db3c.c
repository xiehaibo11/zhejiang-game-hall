
undefined1  [16]
FUN_0116db3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined1 param_5 [16],long *param_6,undefined8 param_7,code *UNRECOVERED_JUMPTABLE,
            undefined8 param_9)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  uVar6 = param_5._8_8_;
  uVar4 = param_5._0_8_;
  if (*param_6 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0116dbb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar5 = (*UNRECOVERED_JUMPTABLE)(param_7,*param_6,param_9);
    return auVar5;
  }
  lVar1 = param_6[4];
  fVar16 = (float)param_1;
  fVar8 = (float)param_2;
  fVar10 = 1.0 / ((float)param_3 - fVar16);
  fVar9 = 1.0 / ((float)param_4 - fVar8);
  fVar7 = -INFINITY;
  fVar17 = INFINITY;
  fVar12 = fVar7;
  if (*(float *)(lVar1 + 8) != fVar16) {
    fVar12 = (*(float *)(lVar1 + 8) - fVar16) * fVar10;
  }
  fVar14 = fVar17;
  if (*(float *)(lVar1 + 0x10) != fVar16) {
    fVar14 = (*(float *)(lVar1 + 0x10) - fVar16) * fVar10;
  }
  fVar15 = fVar7;
  if (*(float *)(lVar1 + 0xc) != fVar8) {
    fVar15 = (*(float *)(lVar1 + 0xc) - fVar8) * fVar9;
  }
  fVar19 = fVar17;
  if (*(float *)(lVar1 + 0x14) != fVar8) {
    fVar19 = (*(float *)(lVar1 + 0x14) - fVar8) * fVar9;
  }
  fVar13 = fVar12;
  if (fVar12 <= fVar14) {
    fVar13 = fVar14;
  }
  fVar11 = (float)NEON_fminnm(fVar15,fVar19);
  fVar18 = fVar17;
  if (fVar11 <= fVar13) {
    fVar12 = (float)NEON_fminnm(fVar12,fVar14);
    if (fVar15 <= fVar19) {
      fVar15 = fVar19;
    }
    if ((((fVar12 <= fVar15) && (fVar14 = (float)NEON_fminnm(fVar13,fVar15), 0.0 <= fVar14)) &&
        (fVar12 <= 1.0)) && (fVar18 = fVar12, fVar12 <= 0.0)) {
      fVar18 = 0.0;
    }
  }
  lVar2 = param_6[5];
  fVar12 = fVar7;
  if (*(float *)(lVar2 + 8) != fVar16) {
    fVar12 = (*(float *)(lVar2 + 8) - fVar16) * fVar10;
  }
  fVar14 = fVar17;
  if (*(float *)(lVar2 + 0x10) != fVar16) {
    fVar14 = (*(float *)(lVar2 + 0x10) - fVar16) * fVar10;
  }
  if (*(float *)(lVar2 + 0xc) != fVar8) {
    fVar7 = (*(float *)(lVar2 + 0xc) - fVar8) * fVar9;
  }
  fVar10 = fVar17;
  if (*(float *)(lVar2 + 0x14) != fVar8) {
    fVar10 = (*(float *)(lVar2 + 0x14) - fVar8) * fVar9;
  }
  fVar9 = fVar12;
  if (fVar12 <= fVar14) {
    fVar9 = fVar14;
  }
  fVar8 = (float)NEON_fminnm(fVar7,fVar10);
  if (fVar8 <= fVar9) {
    fVar12 = (float)NEON_fminnm(fVar12,fVar14);
    if (fVar7 <= fVar10) {
      fVar7 = fVar10;
    }
    if (((fVar12 <= fVar7) && (fVar7 = (float)NEON_fminnm(fVar9,fVar7), 0.0 <= fVar7)) &&
       ((fVar12 <= 1.0 && (fVar17 = fVar12, fVar12 <= 0.0)))) {
      fVar17 = 0.0;
    }
  }
  fVar7 = param_5._0_4_;
  if (fVar17 <= fVar18) {
    if (fVar17 < fVar7) {
      uVar3 = FUN_0116db3c(param_1,param_2,param_3,param_4,uVar4,lVar2,param_7,UNRECOVERED_JUMPTABLE
                           ,param_9);
      uVar3 = NEON_fminnm(uVar3,fVar7);
      uVar4 = CONCAT44(param_5._4_4_,uVar3);
    }
    if ((float)uVar4 <= fVar18) goto LAB_0116ddc4;
    lVar1 = param_6[4];
  }
  else {
    if (fVar18 < fVar7) {
      uVar3 = FUN_0116db3c(param_1,param_2,param_3,param_4,uVar4,lVar1,param_7,UNRECOVERED_JUMPTABLE
                           ,param_9);
      uVar3 = NEON_fminnm(uVar3,fVar7);
      uVar4 = CONCAT44(param_5._4_4_,uVar3);
    }
    if ((float)uVar4 <= fVar17) goto LAB_0116ddc4;
    lVar1 = param_6[5];
  }
  auVar5 = FUN_0116db3c(param_1,param_2,param_3,param_4,uVar4,lVar1,param_7,UNRECOVERED_JUMPTABLE,
                        param_9);
  uVar6 = auVar5._8_8_;
  uVar3 = NEON_fminnm((int)uVar4,auVar5._0_4_);
  uVar4 = CONCAT44(auVar5._4_4_,uVar3);
LAB_0116ddc4:
  auVar5._8_8_ = uVar6;
  auVar5._0_8_ = uVar4;
  return auVar5;
}

