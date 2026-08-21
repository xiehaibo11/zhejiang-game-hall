
/* dtObstacleAvoidanceDebugData::normalizeSamples() */

void __thiscall dtObstacleAvoidanceDebugData::normalizeSamples(dtObstacleAvoidanceDebugData *this)

{
  uint uVar1;
  ulong uVar2;
  float *pfVar3;
  float *pfVar4;
  float fVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  float fVar9;
  undefined1 auVar10 [16];
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  
  uVar1 = *(uint *)this;
  uVar2 = (ulong)uVar1;
  if ((int)uVar1 < 1) {
    return;
  }
  pfVar3 = *(float **)(this + 0x18);
  fVar5 = -3.4028235e+38;
  fVar13 = 3.4028235e+38;
  pfVar4 = pfVar3;
  uVar8 = uVar2;
  do {
    fVar9 = *pfVar4;
    if (fVar9 <= fVar13) {
      fVar13 = fVar9;
    }
    if (fVar5 <= fVar9) {
      fVar5 = fVar9;
    }
    uVar8 = uVar8 - 1;
    pfVar4 = pfVar4 + 1;
  } while (uVar8 != 0);
  fVar9 = 1.0 / (fVar5 - fVar13);
  if (fVar5 - fVar13 <= 0.001) {
    fVar9 = 1.0;
  }
  auVar10 = NEON_fmov(0x3f800000,4);
  if (uVar1 < 4) {
    uVar6 = 0;
LAB_01192204:
    lVar7 = uVar2 - uVar6;
    pfVar4 = pfVar3 + uVar6;
    do {
      fVar12 = fVar9 * (*pfVar4 - fVar13);
      fVar5 = fVar12;
      if (1.0 < fVar12) {
        fVar5 = 1.0;
      }
      fVar11 = 0.0;
      if (0.0 <= fVar12) {
        fVar11 = fVar5;
      }
      lVar7 = lVar7 + -1;
      *pfVar4 = fVar11;
      pfVar4 = pfVar4 + 1;
    } while (lVar7 != 0);
  }
  else {
    uVar6 = uVar2 & 0xfffffffc;
    uVar8 = uVar6;
    pfVar4 = pfVar3;
    do {
      uVar8 = uVar8 - 4;
      auVar18._0_4_ = fVar9 * (*pfVar4 - fVar13);
      auVar18._4_4_ = fVar9 * (pfVar4[1] - fVar13);
      auVar18._8_4_ = fVar9 * (pfVar4[2] - fVar13);
      auVar18._12_4_ = fVar9 * (pfVar4[3] - fVar13);
      iVar19 = -(uint)(auVar18._0_4_ < 0.0);
      iVar20 = -(uint)(auVar18._4_4_ < 0.0);
      iVar21 = -(uint)(auVar18._8_4_ < 0.0);
      iVar22 = -(uint)(auVar18._12_4_ < 0.0);
      auVar18 = NEON_fmin(auVar18,auVar10,4);
      *(byte *)(pfVar4 + 2) = auVar18[8] & ~(byte)iVar21;
      *(byte *)((long)pfVar4 + 9) = auVar18[9] & ~(byte)((uint)iVar21 >> 8);
      *(byte *)((long)pfVar4 + 10) = auVar18[10] & ~(byte)((uint)iVar21 >> 0x10);
      *(byte *)((long)pfVar4 + 0xb) = auVar18[0xb] & ~(byte)((uint)iVar21 >> 0x18);
      *(byte *)(pfVar4 + 3) = auVar18[0xc] & ~(byte)iVar22;
      *(byte *)((long)pfVar4 + 0xd) = auVar18[0xd] & ~(byte)((uint)iVar22 >> 8);
      *(byte *)((long)pfVar4 + 0xe) = auVar18[0xe] & ~(byte)((uint)iVar22 >> 0x10);
      *(byte *)((long)pfVar4 + 0xf) = auVar18[0xf] & ~(byte)((uint)iVar22 >> 0x18);
      *(byte *)pfVar4 = auVar18[0] & ~(byte)iVar19;
      *(byte *)((long)pfVar4 + 1) = auVar18[1] & ~(byte)((uint)iVar19 >> 8);
      *(byte *)((long)pfVar4 + 2) = auVar18[2] & ~(byte)((uint)iVar19 >> 0x10);
      *(byte *)((long)pfVar4 + 3) = auVar18[3] & ~(byte)((uint)iVar19 >> 0x18);
      *(byte *)(pfVar4 + 1) = auVar18[4] & ~(byte)iVar20;
      *(byte *)((long)pfVar4 + 5) = auVar18[5] & ~(byte)((uint)iVar20 >> 8);
      *(byte *)((long)pfVar4 + 6) = auVar18[6] & ~(byte)((uint)iVar20 >> 0x10);
      *(byte *)((long)pfVar4 + 7) = auVar18[7] & ~(byte)((uint)iVar20 >> 0x18);
      pfVar4 = pfVar4 + 4;
    } while (uVar8 != 0);
    if (uVar6 != uVar2) goto LAB_01192204;
  }
  pfVar3 = *(float **)(this + 0x20);
  fVar13 = -3.4028235e+38;
  fVar5 = 3.4028235e+38;
  pfVar4 = pfVar3;
  uVar8 = uVar2;
  do {
    fVar9 = *pfVar4;
    if (fVar9 <= fVar5) {
      fVar5 = fVar9;
    }
    if (fVar13 <= fVar9) {
      fVar13 = fVar9;
    }
    uVar8 = uVar8 - 1;
    pfVar4 = pfVar4 + 1;
  } while (uVar8 != 0);
  fVar9 = 1.0 / (fVar13 - fVar5);
  if (fVar13 - fVar5 <= 0.001) {
    fVar9 = 1.0;
  }
  if (uVar1 < 4) {
    uVar6 = 0;
LAB_011922e0:
    lVar7 = uVar2 - uVar6;
    pfVar4 = pfVar3 + uVar6;
    do {
      fVar12 = fVar9 * (*pfVar4 - fVar5);
      fVar13 = fVar12;
      if (1.0 < fVar12) {
        fVar13 = 1.0;
      }
      fVar11 = 0.0;
      if (0.0 <= fVar12) {
        fVar11 = fVar13;
      }
      lVar7 = lVar7 + -1;
      *pfVar4 = fVar11;
      pfVar4 = pfVar4 + 1;
    } while (lVar7 != 0);
  }
  else {
    uVar6 = uVar2 & 0xfffffffc;
    uVar8 = uVar6;
    pfVar4 = pfVar3;
    do {
      uVar8 = uVar8 - 4;
      auVar14._0_4_ = fVar9 * (*pfVar4 - fVar5);
      auVar14._4_4_ = fVar9 * (pfVar4[1] - fVar5);
      auVar14._8_4_ = fVar9 * (pfVar4[2] - fVar5);
      auVar14._12_4_ = fVar9 * (pfVar4[3] - fVar5);
      iVar19 = -(uint)(auVar14._0_4_ < 0.0);
      iVar20 = -(uint)(auVar14._4_4_ < 0.0);
      iVar21 = -(uint)(auVar14._8_4_ < 0.0);
      iVar22 = -(uint)(auVar14._12_4_ < 0.0);
      auVar18 = NEON_fmin(auVar14,auVar10,4);
      *(byte *)(pfVar4 + 2) = auVar18[8] & ~(byte)iVar21;
      *(byte *)((long)pfVar4 + 9) = auVar18[9] & ~(byte)((uint)iVar21 >> 8);
      *(byte *)((long)pfVar4 + 10) = auVar18[10] & ~(byte)((uint)iVar21 >> 0x10);
      *(byte *)((long)pfVar4 + 0xb) = auVar18[0xb] & ~(byte)((uint)iVar21 >> 0x18);
      *(byte *)(pfVar4 + 3) = auVar18[0xc] & ~(byte)iVar22;
      *(byte *)((long)pfVar4 + 0xd) = auVar18[0xd] & ~(byte)((uint)iVar22 >> 8);
      *(byte *)((long)pfVar4 + 0xe) = auVar18[0xe] & ~(byte)((uint)iVar22 >> 0x10);
      *(byte *)((long)pfVar4 + 0xf) = auVar18[0xf] & ~(byte)((uint)iVar22 >> 0x18);
      *(byte *)pfVar4 = auVar18[0] & ~(byte)iVar19;
      *(byte *)((long)pfVar4 + 1) = auVar18[1] & ~(byte)((uint)iVar19 >> 8);
      *(byte *)((long)pfVar4 + 2) = auVar18[2] & ~(byte)((uint)iVar19 >> 0x10);
      *(byte *)((long)pfVar4 + 3) = auVar18[3] & ~(byte)((uint)iVar19 >> 0x18);
      *(byte *)(pfVar4 + 1) = auVar18[4] & ~(byte)iVar20;
      *(byte *)((long)pfVar4 + 5) = auVar18[5] & ~(byte)((uint)iVar20 >> 8);
      *(byte *)((long)pfVar4 + 6) = auVar18[6] & ~(byte)((uint)iVar20 >> 0x10);
      *(byte *)((long)pfVar4 + 7) = auVar18[7] & ~(byte)((uint)iVar20 >> 0x18);
      pfVar4 = pfVar4 + 4;
    } while (uVar8 != 0);
    if (uVar6 != uVar2) goto LAB_011922e0;
  }
  pfVar3 = *(float **)(this + 0x28);
  fVar13 = -3.4028235e+38;
  fVar5 = 3.4028235e+38;
  pfVar4 = pfVar3;
  uVar8 = uVar2;
  do {
    fVar9 = *pfVar4;
    if (fVar9 <= fVar5) {
      fVar5 = fVar9;
    }
    if (fVar13 <= fVar9) {
      fVar13 = fVar9;
    }
    uVar8 = uVar8 - 1;
    pfVar4 = pfVar4 + 1;
  } while (uVar8 != 0);
  fVar9 = 1.0 / (fVar13 - fVar5);
  if (fVar13 - fVar5 <= 0.001) {
    fVar9 = 1.0;
  }
  if (uVar1 < 4) {
    uVar6 = 0;
LAB_011923bc:
    lVar7 = uVar2 - uVar6;
    pfVar4 = pfVar3 + uVar6;
    do {
      fVar12 = fVar9 * (*pfVar4 - fVar5);
      fVar13 = fVar12;
      if (1.0 < fVar12) {
        fVar13 = 1.0;
      }
      fVar11 = 0.0;
      if (0.0 <= fVar12) {
        fVar11 = fVar13;
      }
      lVar7 = lVar7 + -1;
      *pfVar4 = fVar11;
      pfVar4 = pfVar4 + 1;
    } while (lVar7 != 0);
  }
  else {
    uVar6 = uVar2 & 0xfffffffc;
    uVar8 = uVar6;
    pfVar4 = pfVar3;
    do {
      uVar8 = uVar8 - 4;
      auVar15._0_4_ = fVar9 * (*pfVar4 - fVar5);
      auVar15._4_4_ = fVar9 * (pfVar4[1] - fVar5);
      auVar15._8_4_ = fVar9 * (pfVar4[2] - fVar5);
      auVar15._12_4_ = fVar9 * (pfVar4[3] - fVar5);
      iVar19 = -(uint)(auVar15._0_4_ < 0.0);
      iVar20 = -(uint)(auVar15._4_4_ < 0.0);
      iVar21 = -(uint)(auVar15._8_4_ < 0.0);
      iVar22 = -(uint)(auVar15._12_4_ < 0.0);
      auVar18 = NEON_fmin(auVar15,auVar10,4);
      *(byte *)(pfVar4 + 2) = auVar18[8] & ~(byte)iVar21;
      *(byte *)((long)pfVar4 + 9) = auVar18[9] & ~(byte)((uint)iVar21 >> 8);
      *(byte *)((long)pfVar4 + 10) = auVar18[10] & ~(byte)((uint)iVar21 >> 0x10);
      *(byte *)((long)pfVar4 + 0xb) = auVar18[0xb] & ~(byte)((uint)iVar21 >> 0x18);
      *(byte *)(pfVar4 + 3) = auVar18[0xc] & ~(byte)iVar22;
      *(byte *)((long)pfVar4 + 0xd) = auVar18[0xd] & ~(byte)((uint)iVar22 >> 8);
      *(byte *)((long)pfVar4 + 0xe) = auVar18[0xe] & ~(byte)((uint)iVar22 >> 0x10);
      *(byte *)((long)pfVar4 + 0xf) = auVar18[0xf] & ~(byte)((uint)iVar22 >> 0x18);
      *(byte *)pfVar4 = auVar18[0] & ~(byte)iVar19;
      *(byte *)((long)pfVar4 + 1) = auVar18[1] & ~(byte)((uint)iVar19 >> 8);
      *(byte *)((long)pfVar4 + 2) = auVar18[2] & ~(byte)((uint)iVar19 >> 0x10);
      *(byte *)((long)pfVar4 + 3) = auVar18[3] & ~(byte)((uint)iVar19 >> 0x18);
      *(byte *)(pfVar4 + 1) = auVar18[4] & ~(byte)iVar20;
      *(byte *)((long)pfVar4 + 5) = auVar18[5] & ~(byte)((uint)iVar20 >> 8);
      *(byte *)((long)pfVar4 + 6) = auVar18[6] & ~(byte)((uint)iVar20 >> 0x10);
      *(byte *)((long)pfVar4 + 7) = auVar18[7] & ~(byte)((uint)iVar20 >> 0x18);
      pfVar4 = pfVar4 + 4;
    } while (uVar8 != 0);
    if (uVar6 != uVar2) goto LAB_011923bc;
  }
  pfVar3 = *(float **)(this + 0x30);
  fVar13 = -3.4028235e+38;
  fVar5 = 3.4028235e+38;
  pfVar4 = pfVar3;
  uVar8 = uVar2;
  do {
    fVar9 = *pfVar4;
    if (fVar9 <= fVar5) {
      fVar5 = fVar9;
    }
    if (fVar13 <= fVar9) {
      fVar13 = fVar9;
    }
    uVar8 = uVar8 - 1;
    pfVar4 = pfVar4 + 1;
  } while (uVar8 != 0);
  fVar9 = 1.0 / (fVar13 - fVar5);
  if (fVar13 - fVar5 <= 0.001) {
    fVar9 = 1.0;
  }
  if (uVar1 < 4) {
    uVar6 = 0;
  }
  else {
    uVar6 = uVar2 & 0xfffffffc;
    uVar8 = uVar6;
    pfVar4 = pfVar3;
    do {
      uVar8 = uVar8 - 4;
      auVar16._0_4_ = fVar9 * (*pfVar4 - fVar5);
      auVar16._4_4_ = fVar9 * (pfVar4[1] - fVar5);
      auVar16._8_4_ = fVar9 * (pfVar4[2] - fVar5);
      auVar16._12_4_ = fVar9 * (pfVar4[3] - fVar5);
      iVar19 = -(uint)(auVar16._0_4_ < 0.0);
      iVar20 = -(uint)(auVar16._4_4_ < 0.0);
      iVar21 = -(uint)(auVar16._8_4_ < 0.0);
      iVar22 = -(uint)(auVar16._12_4_ < 0.0);
      auVar18 = NEON_fmin(auVar16,auVar10,4);
      *(byte *)(pfVar4 + 2) = auVar18[8] & ~(byte)iVar21;
      *(byte *)((long)pfVar4 + 9) = auVar18[9] & ~(byte)((uint)iVar21 >> 8);
      *(byte *)((long)pfVar4 + 10) = auVar18[10] & ~(byte)((uint)iVar21 >> 0x10);
      *(byte *)((long)pfVar4 + 0xb) = auVar18[0xb] & ~(byte)((uint)iVar21 >> 0x18);
      *(byte *)(pfVar4 + 3) = auVar18[0xc] & ~(byte)iVar22;
      *(byte *)((long)pfVar4 + 0xd) = auVar18[0xd] & ~(byte)((uint)iVar22 >> 8);
      *(byte *)((long)pfVar4 + 0xe) = auVar18[0xe] & ~(byte)((uint)iVar22 >> 0x10);
      *(byte *)((long)pfVar4 + 0xf) = auVar18[0xf] & ~(byte)((uint)iVar22 >> 0x18);
      *(byte *)pfVar4 = auVar18[0] & ~(byte)iVar19;
      *(byte *)((long)pfVar4 + 1) = auVar18[1] & ~(byte)((uint)iVar19 >> 8);
      *(byte *)((long)pfVar4 + 2) = auVar18[2] & ~(byte)((uint)iVar19 >> 0x10);
      *(byte *)((long)pfVar4 + 3) = auVar18[3] & ~(byte)((uint)iVar19 >> 0x18);
      *(byte *)(pfVar4 + 1) = auVar18[4] & ~(byte)iVar20;
      *(byte *)((long)pfVar4 + 5) = auVar18[5] & ~(byte)((uint)iVar20 >> 8);
      *(byte *)((long)pfVar4 + 6) = auVar18[6] & ~(byte)((uint)iVar20 >> 0x10);
      *(byte *)((long)pfVar4 + 7) = auVar18[7] & ~(byte)((uint)iVar20 >> 0x18);
      pfVar4 = pfVar4 + 4;
    } while (uVar8 != 0);
    if (uVar6 == uVar2) goto LAB_011924c8;
  }
  lVar7 = uVar2 - uVar6;
  pfVar4 = pfVar3 + uVar6;
  do {
    fVar12 = fVar9 * (*pfVar4 - fVar5);
    fVar13 = fVar12;
    if (1.0 < fVar12) {
      fVar13 = 1.0;
    }
    fVar11 = 0.0;
    if (0.0 <= fVar12) {
      fVar11 = fVar13;
    }
    lVar7 = lVar7 + -1;
    *pfVar4 = fVar11;
    pfVar4 = pfVar4 + 1;
  } while (lVar7 != 0);
LAB_011924c8:
  pfVar3 = *(float **)(this + 0x38);
  fVar13 = -3.4028235e+38;
  fVar5 = 3.4028235e+38;
  pfVar4 = pfVar3;
  uVar8 = uVar2;
  do {
    fVar9 = *pfVar4;
    if (fVar9 <= fVar5) {
      fVar5 = fVar9;
    }
    if (fVar13 <= fVar9) {
      fVar13 = fVar9;
    }
    uVar8 = uVar8 - 1;
    pfVar4 = pfVar4 + 1;
  } while (uVar8 != 0);
  fVar9 = 1.0 / (fVar13 - fVar5);
  if (fVar13 - fVar5 <= 0.001) {
    fVar9 = 1.0;
  }
  if (uVar1 < 4) {
    uVar6 = 0;
  }
  else {
    uVar6 = uVar2 & 0xfffffffc;
    uVar8 = uVar6;
    pfVar4 = pfVar3;
    do {
      uVar8 = uVar8 - 4;
      auVar17._0_4_ = fVar9 * (*pfVar4 - fVar5);
      auVar17._4_4_ = fVar9 * (pfVar4[1] - fVar5);
      auVar17._8_4_ = fVar9 * (pfVar4[2] - fVar5);
      auVar17._12_4_ = fVar9 * (pfVar4[3] - fVar5);
      iVar19 = -(uint)(auVar17._0_4_ < 0.0);
      iVar20 = -(uint)(auVar17._4_4_ < 0.0);
      iVar21 = -(uint)(auVar17._8_4_ < 0.0);
      iVar22 = -(uint)(auVar17._12_4_ < 0.0);
      auVar18 = NEON_fmin(auVar17,auVar10,4);
      *(byte *)(pfVar4 + 2) = auVar18[8] & ~(byte)iVar21;
      *(byte *)((long)pfVar4 + 9) = auVar18[9] & ~(byte)((uint)iVar21 >> 8);
      *(byte *)((long)pfVar4 + 10) = auVar18[10] & ~(byte)((uint)iVar21 >> 0x10);
      *(byte *)((long)pfVar4 + 0xb) = auVar18[0xb] & ~(byte)((uint)iVar21 >> 0x18);
      *(byte *)(pfVar4 + 3) = auVar18[0xc] & ~(byte)iVar22;
      *(byte *)((long)pfVar4 + 0xd) = auVar18[0xd] & ~(byte)((uint)iVar22 >> 8);
      *(byte *)((long)pfVar4 + 0xe) = auVar18[0xe] & ~(byte)((uint)iVar22 >> 0x10);
      *(byte *)((long)pfVar4 + 0xf) = auVar18[0xf] & ~(byte)((uint)iVar22 >> 0x18);
      *(byte *)pfVar4 = auVar18[0] & ~(byte)iVar19;
      *(byte *)((long)pfVar4 + 1) = auVar18[1] & ~(byte)((uint)iVar19 >> 8);
      *(byte *)((long)pfVar4 + 2) = auVar18[2] & ~(byte)((uint)iVar19 >> 0x10);
      *(byte *)((long)pfVar4 + 3) = auVar18[3] & ~(byte)((uint)iVar19 >> 0x18);
      *(byte *)(pfVar4 + 1) = auVar18[4] & ~(byte)iVar20;
      *(byte *)((long)pfVar4 + 5) = auVar18[5] & ~(byte)((uint)iVar20 >> 8);
      *(byte *)((long)pfVar4 + 6) = auVar18[6] & ~(byte)((uint)iVar20 >> 0x10);
      *(byte *)((long)pfVar4 + 7) = auVar18[7] & ~(byte)((uint)iVar20 >> 0x18);
      pfVar4 = pfVar4 + 4;
    } while (uVar8 != 0);
    if (uVar6 == uVar2) {
      return;
    }
  }
  lVar7 = uVar2 - uVar6;
  pfVar4 = pfVar3 + uVar6;
  do {
    fVar12 = fVar9 * (*pfVar4 - fVar5);
    fVar13 = fVar12;
    if (1.0 < fVar12) {
      fVar13 = 1.0;
    }
    fVar11 = 0.0;
    if (0.0 <= fVar12) {
      fVar11 = fVar13;
    }
    lVar7 = lVar7 + -1;
    *pfVar4 = fVar11;
    pfVar4 = pfVar4 + 1;
  } while (lVar7 != 0);
  return;
}

