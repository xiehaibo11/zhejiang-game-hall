
float cpArbiterTotalImpulse(long param_1)

{
  float *pfVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  float *pfVar4;
  long lVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  float fVar13;
  float fVar14;
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
  
  fVar11 = 0.0;
  if (2 < *(uint *)(param_1 + 0x90)) goto LAB_01172900;
  uVar2 = *(uint *)(param_1 + 0x58);
  if ((int)uVar2 < 1) goto LAB_01172900;
  fVar7 = *(float *)(param_1 + 0x68);
  fVar8 = *(float *)(param_1 + 0x6c);
  if (uVar2 < 8) {
    lVar5 = 0;
LAB_011728cc:
    fVar11 = 0.0;
  }
  else {
    lVar5 = (ulong)uVar2 - (ulong)(uVar2 & 7);
    if (lVar5 == 0) goto LAB_011728cc;
    pfVar4 = (float *)(*(long *)(param_1 + 0x60) + 0xfc);
    fVar11 = 0.0;
    fVar14 = 0.0;
    fVar9 = 0.0;
    fVar10 = 0.0;
    fVar13 = 0.0;
    fVar15 = 0.0;
    fVar16 = 0.0;
    fVar17 = 0.0;
    fVar18 = 0.0;
    fVar19 = 0.0;
    fVar20 = 0.0;
    fVar21 = 0.0;
    fVar22 = 0.0;
    fVar23 = 0.0;
    fVar24 = 0.0;
    fVar25 = 0.0;
    lVar6 = lVar5;
    do {
      lVar6 = lVar6 + -8;
      fVar18 = (fVar18 + pfVar4[-0x38] * fVar7) - pfVar4[-0x37] * fVar8;
      fVar19 = (fVar19 + pfVar4[-0x2a] * fVar7) - pfVar4[-0x29] * fVar8;
      fVar20 = (fVar20 + pfVar4[-0x1c] * fVar7) - pfVar4[-0x1b] * fVar8;
      fVar21 = (fVar21 + pfVar4[-0xe] * fVar7) - pfVar4[-0xd] * fVar8;
      fVar22 = (fVar22 + *pfVar4 * fVar7) - pfVar4[1] * fVar8;
      fVar23 = (fVar23 + pfVar4[0xe] * fVar7) - pfVar4[0xf] * fVar8;
      fVar24 = (fVar24 + pfVar4[0x1c] * fVar7) - pfVar4[0x1d] * fVar8;
      fVar25 = (fVar25 + pfVar4[0x2a] * fVar7) - pfVar4[0x2b] * fVar8;
      fVar11 = fVar11 + pfVar4[-0x38] * fVar8 + pfVar4[-0x37] * fVar7;
      fVar14 = fVar14 + pfVar4[-0x2a] * fVar8 + pfVar4[-0x29] * fVar7;
      fVar9 = fVar9 + pfVar4[-0x1c] * fVar8 + pfVar4[-0x1b] * fVar7;
      fVar10 = fVar10 + pfVar4[-0xe] * fVar8 + pfVar4[-0xd] * fVar7;
      fVar13 = fVar13 + *pfVar4 * fVar8 + pfVar4[1] * fVar7;
      fVar15 = fVar15 + pfVar4[0xe] * fVar8 + pfVar4[0xf] * fVar7;
      fVar16 = fVar16 + pfVar4[0x1c] * fVar8 + pfVar4[0x1d] * fVar7;
      fVar17 = fVar17 + pfVar4[0x2a] * fVar8 + pfVar4[0x2b] * fVar7;
      pfVar4 = pfVar4 + 0x70;
    } while (lVar6 != 0);
    auVar12._4_4_ = fVar23 + fVar19;
    auVar12._0_4_ = fVar22 + fVar18;
    auVar12._8_4_ = fVar24 + fVar20;
    auVar12._12_4_ = fVar25 + fVar21;
    auVar12 = NEON_ext(auVar12,ZEXT416((uint)fVar7),8,1);
    auVar3._4_4_ = fVar15 + fVar14;
    auVar3._0_4_ = fVar13 + fVar11;
    auVar3._8_4_ = fVar16 + fVar9;
    auVar3._12_4_ = fVar17 + fVar10;
    NEON_ext(auVar3,ZEXT416((uint)fVar7),8,1);
    fVar11 = fVar22 + fVar18 + auVar12._0_4_ + fVar23 + fVar19 + auVar12._4_4_;
    if ((uVar2 & 7) == 0) goto LAB_01172900;
  }
  pfVar4 = (float *)(*(long *)(param_1 + 0x60) + lVar5 * 0x38 + 0x20);
  lVar5 = (ulong)uVar2 - lVar5;
  do {
    pfVar1 = pfVar4 + -1;
    fVar14 = *pfVar4;
    lVar5 = lVar5 + -1;
    pfVar4 = pfVar4 + 0xe;
    fVar11 = (fVar11 + fVar7 * *pfVar1) - fVar8 * fVar14;
  } while (lVar5 != 0);
LAB_01172900:
  fVar7 = -fVar11;
  if (*(char *)(param_1 + 0x88) != '\0') {
    fVar7 = fVar11;
  }
  return fVar7;
}

