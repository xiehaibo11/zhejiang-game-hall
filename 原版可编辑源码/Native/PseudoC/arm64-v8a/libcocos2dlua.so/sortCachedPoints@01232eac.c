
/* btPersistentManifold::sortCachedPoints(btManifoldPoint const&) */

int __thiscall
btPersistentManifold::sortCachedPoints(btPersistentManifold *this,btManifoldPoint *param_1)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
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
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  
  fVar3 = *(float *)(param_1 + 0x50);
  fVar4 = *(float *)(this + 0x58);
  fVar6 = *(float *)(this + 0x1d8);
  fVar8 = fVar4;
  if (fVar3 <= fVar4) {
    fVar8 = fVar3;
  }
  fVar5 = *(float *)(this + 0x298);
  iVar2 = -(uint)(fVar3 <= fVar4);
  if (*(float *)(this + 0x118) < fVar8) {
    iVar2 = 1;
    fVar8 = *(float *)(this + 0x118);
  }
  fVar3 = fVar6;
  if (fVar8 <= fVar6) {
    fVar3 = fVar8;
  }
  fVar4 = *(float *)param_1;
  iVar1 = 2;
  if (fVar8 <= fVar6) {
    iVar1 = iVar2;
  }
  iVar2 = 3;
  if (fVar3 <= fVar5) {
    iVar2 = iVar1;
  }
  if (gContactCalcArea3Points == '\0') {
    fVar8 = *(float *)(param_1 + 4);
    fVar6 = *(float *)(param_1 + 8);
    if (iVar2 == 0) {
      fVar9 = *(float *)(this + 0x188);
      fVar7 = 0.0;
      fVar10 = *(float *)(this + 0x18c);
      fVar11 = *(float *)(this + 400);
      fVar14 = *(float *)(this + 0x248);
      fVar16 = *(float *)(this + 0x24c);
      fVar17 = *(float *)(this + 0x250);
LAB_01233248:
      fVar20 = *(float *)(this + 8);
      fVar22 = *(float *)(this + 0xc);
      fVar23 = *(float *)(this + 0x10);
      fVar12 = (fVar23 - fVar11) * (fVar8 - fVar16) - (fVar22 - fVar10) * (fVar6 - fVar17);
      fVar27 = (fVar20 - fVar9) * (fVar6 - fVar17) - (fVar23 - fVar11) * (fVar4 - fVar14);
      fVar25 = (fVar22 - fVar10) * (fVar4 - fVar14) - (fVar20 - fVar9) * (fVar8 - fVar16);
      fVar28 = (fVar8 - fVar22) * (fVar11 - fVar17) - (fVar6 - fVar23) * (fVar10 - fVar16);
      fVar18 = (fVar8 - fVar10) * (fVar23 - fVar17) - (fVar6 - fVar11) * (fVar22 - fVar16);
      fVar19 = (fVar6 - fVar23) * (fVar9 - fVar14) - (fVar4 - fVar20) * (fVar11 - fVar17);
      fVar21 = (fVar6 - fVar11) * (fVar20 - fVar14) - (fVar4 - fVar9) * (fVar23 - fVar17);
      fVar13 = (fVar4 - fVar20) * (fVar10 - fVar16) - (fVar8 - fVar22) * (fVar9 - fVar14);
      fVar15 = (fVar4 - fVar9) * (fVar22 - fVar16) - (fVar8 - fVar10) * (fVar20 - fVar14);
      fVar25 = fVar25 * fVar25 + fVar12 * fVar12 + fVar27 * fVar27;
      fVar19 = fVar13 * fVar13 + fVar28 * fVar28 + fVar19 * fVar19;
      fVar21 = fVar15 * fVar15 + fVar18 * fVar18 + fVar21 * fVar21;
      fVar12 = *(float *)(this + 200);
      fVar13 = *(float *)(this + 0xcc);
      fVar15 = *(float *)(this + 0xd0);
      if (fVar19 <= fVar21) {
        fVar19 = fVar21;
      }
      if (fVar19 <= fVar25) {
        fVar19 = fVar25;
      }
      fVar21 = 0.0;
      if (iVar2 != 2) goto LAB_01233364;
    }
    else {
      fVar12 = *(float *)(this + 200);
      fVar13 = *(float *)(this + 0xcc);
      fVar15 = *(float *)(this + 0xd0);
      fVar9 = *(float *)(this + 0x188);
      fVar10 = *(float *)(this + 0x18c);
      fVar11 = *(float *)(this + 400);
      fVar14 = *(float *)(this + 0x248);
      fVar16 = *(float *)(this + 0x24c);
      fVar17 = *(float *)(this + 0x250);
      fVar22 = (fVar15 - fVar11) * (fVar8 - fVar16) - (fVar13 - fVar10) * (fVar6 - fVar17);
      fVar28 = (fVar12 - fVar9) * (fVar6 - fVar17) - (fVar15 - fVar11) * (fVar4 - fVar14);
      fVar23 = (fVar13 - fVar10) * (fVar4 - fVar14) - (fVar12 - fVar9) * (fVar8 - fVar16);
      fVar25 = (fVar8 - fVar13) * (fVar11 - fVar17) - (fVar6 - fVar15) * (fVar10 - fVar16);
      fVar27 = (fVar8 - fVar10) * (fVar15 - fVar17) - (fVar6 - fVar11) * (fVar13 - fVar16);
      fVar21 = (fVar6 - fVar15) * (fVar9 - fVar14) - (fVar4 - fVar12) * (fVar11 - fVar17);
      fVar20 = (fVar6 - fVar11) * (fVar12 - fVar14) - (fVar4 - fVar9) * (fVar15 - fVar17);
      fVar7 = (fVar4 - fVar12) * (fVar10 - fVar16) - (fVar8 - fVar13) * (fVar9 - fVar14);
      fVar19 = (fVar4 - fVar9) * (fVar13 - fVar16) - (fVar8 - fVar10) * (fVar12 - fVar14);
      fVar7 = fVar7 * fVar7 + fVar25 * fVar25 + fVar21 * fVar21;
      fVar19 = fVar19 * fVar19 + fVar27 * fVar27 + fVar20 * fVar20;
      fVar21 = fVar23 * fVar23 + fVar22 * fVar22 + fVar28 * fVar28;
      if (fVar7 <= fVar19) {
        fVar7 = fVar19;
      }
      if (fVar7 <= fVar21) {
        fVar7 = fVar21;
      }
      if (iVar2 != 1) goto LAB_01233248;
      fVar20 = *(float *)(this + 8);
      fVar22 = *(float *)(this + 0xc);
      fVar23 = *(float *)(this + 0x10);
      fVar19 = 0.0;
LAB_01233364:
      fVar21 = (fVar8 - fVar22) * (fVar15 - fVar17) - (fVar6 - fVar23) * (fVar13 - fVar16);
      fVar25 = (fVar6 - fVar23) * (fVar12 - fVar14) - (fVar4 - fVar20) * (fVar15 - fVar17);
      fVar24 = (fVar4 - fVar20) * (fVar13 - fVar16) - (fVar8 - fVar22) * (fVar12 - fVar14);
      fVar26 = (fVar8 - fVar13) * (fVar23 - fVar17) - (fVar6 - fVar15) * (fVar22 - fVar16);
      fVar18 = (fVar6 - fVar15) * (fVar20 - fVar14) - (fVar4 - fVar12) * (fVar23 - fVar17);
      fVar27 = (fVar4 - fVar12) * (fVar22 - fVar16) - (fVar8 - fVar13) * (fVar20 - fVar14);
      fVar28 = (fVar23 - fVar15) * (fVar8 - fVar16) - (fVar22 - fVar13) * (fVar6 - fVar17);
      fVar17 = (fVar20 - fVar12) * (fVar6 - fVar17) - (fVar23 - fVar15) * (fVar4 - fVar14);
      fVar14 = (fVar22 - fVar13) * (fVar4 - fVar14) - (fVar20 - fVar12) * (fVar8 - fVar16);
      fVar21 = fVar24 * fVar24 + fVar21 * fVar21 + fVar25 * fVar25;
      fVar16 = fVar27 * fVar27 + fVar26 * fVar26 + fVar18 * fVar18;
      fVar14 = fVar14 * fVar14 + fVar28 * fVar28 + fVar17 * fVar17;
      if (fVar21 <= fVar16) {
        fVar21 = fVar16;
      }
      if (fVar21 <= fVar14) {
        fVar21 = fVar14;
      }
      fVar14 = 0.0;
      if (fVar5 < fVar3) goto LAB_012335a4;
    }
    fVar27 = (fVar8 - fVar22) * (fVar15 - fVar11) - (fVar6 - fVar23) * (fVar13 - fVar10);
    fVar14 = (fVar6 - fVar23) * (fVar12 - fVar9) - (fVar4 - fVar20) * (fVar15 - fVar11);
    fVar5 = (fVar4 - fVar20) * (fVar13 - fVar10) - (fVar8 - fVar22) * (fVar12 - fVar9);
    fVar16 = (fVar8 - fVar13) * (fVar23 - fVar11) - (fVar6 - fVar15) * (fVar22 - fVar10);
    fVar25 = (fVar6 - fVar15) * (fVar20 - fVar9) - (fVar4 - fVar12) * (fVar23 - fVar11);
    fVar17 = (fVar4 - fVar12) * (fVar22 - fVar10) - (fVar8 - fVar13) * (fVar20 - fVar9);
    fVar3 = (fVar22 - fVar13) * (fVar4 - fVar9) - (fVar20 - fVar12) * (fVar8 - fVar10);
    fVar10 = (fVar23 - fVar15) * (fVar8 - fVar10) - (fVar22 - fVar13) * (fVar6 - fVar11);
    fVar8 = (fVar20 - fVar12) * (fVar6 - fVar11) - (fVar23 - fVar15) * (fVar4 - fVar9);
    fVar14 = fVar5 * fVar5 + fVar27 * fVar27 + fVar14 * fVar14;
    fVar4 = fVar17 * fVar17 + fVar16 * fVar16 + fVar25 * fVar25;
    fVar8 = fVar3 * fVar3 + fVar10 * fVar10 + fVar8 * fVar8;
    if (fVar14 <= fVar4) {
      fVar14 = fVar4;
    }
    if (fVar14 <= fVar8) {
      fVar14 = fVar8;
    }
    goto LAB_012335a4;
  }
  if (iVar2 == 0) {
    fVar8 = *(float *)(param_1 + 4);
    fVar6 = *(float *)(param_1 + 8);
    fVar14 = *(float *)(this + 0x248);
    fVar9 = *(float *)(this + 0x188);
    fVar16 = *(float *)(this + 0x24c);
    fVar10 = *(float *)(this + 0x18c);
    fVar17 = *(float *)(this + 0x250);
    fVar11 = *(float *)(this + 400);
    fVar7 = 0.0;
LAB_0123310c:
    fVar20 = *(float *)(this + 8);
    fVar22 = *(float *)(this + 0xc);
    fVar23 = *(float *)(this + 0x10);
    fVar12 = *(float *)(this + 200);
    fVar13 = *(float *)(this + 0xcc);
    fVar21 = (fVar8 - fVar22) * (fVar17 - fVar11) - (fVar6 - fVar23) * (fVar16 - fVar10);
    fVar15 = *(float *)(this + 0xd0);
    fVar25 = (fVar6 - fVar23) * (fVar14 - fVar9) - (fVar4 - fVar20) * (fVar17 - fVar11);
    fVar19 = (fVar4 - fVar20) * (fVar16 - fVar10) - (fVar8 - fVar22) * (fVar14 - fVar9);
    fVar19 = fVar19 * fVar19 + fVar21 * fVar21 + fVar25 * fVar25;
    fVar21 = 0.0;
    if (iVar2 != 2) goto LAB_01233178;
  }
  else {
    fVar12 = *(float *)(this + 200);
    fVar13 = *(float *)(this + 0xcc);
    fVar8 = *(float *)(param_1 + 4);
    fVar6 = *(float *)(param_1 + 8);
    fVar15 = *(float *)(this + 0xd0);
    fVar14 = *(float *)(this + 0x248);
    fVar9 = *(float *)(this + 0x188);
    fVar16 = *(float *)(this + 0x24c);
    fVar10 = *(float *)(this + 0x18c);
    fVar17 = *(float *)(this + 0x250);
    fVar11 = *(float *)(this + 400);
    fVar21 = (fVar8 - fVar13) * (fVar17 - fVar11) - (fVar6 - fVar15) * (fVar16 - fVar10);
    fVar19 = (fVar6 - fVar15) * (fVar14 - fVar9) - (fVar4 - fVar12) * (fVar17 - fVar11);
    fVar7 = (fVar4 - fVar12) * (fVar16 - fVar10) - (fVar8 - fVar13) * (fVar14 - fVar9);
    fVar7 = fVar7 * fVar7 + fVar21 * fVar21 + fVar19 * fVar19;
    if (iVar2 != 1) goto LAB_0123310c;
    fVar20 = *(float *)(this + 8);
    fVar22 = *(float *)(this + 0xc);
    fVar23 = *(float *)(this + 0x10);
    fVar19 = 0.0;
LAB_01233178:
    fVar21 = (fVar8 - fVar22) * (fVar17 - fVar15) - (fVar6 - fVar23) * (fVar16 - fVar13);
    fVar17 = (fVar6 - fVar23) * (fVar14 - fVar12) - (fVar4 - fVar20) * (fVar17 - fVar15);
    fVar14 = (fVar4 - fVar20) * (fVar16 - fVar13) - (fVar8 - fVar22) * (fVar14 - fVar12);
    fVar21 = fVar14 * fVar14 + fVar21 * fVar21 + fVar17 * fVar17;
    fVar14 = 0.0;
    if (fVar5 < fVar3) goto LAB_012335a4;
  }
  fVar5 = (fVar8 - fVar22) * (fVar11 - fVar15) - (fVar6 - fVar23) * (fVar10 - fVar13);
  fVar3 = (fVar6 - fVar23) * (fVar9 - fVar12) - (fVar4 - fVar20) * (fVar11 - fVar15);
  fVar8 = (fVar4 - fVar20) * (fVar10 - fVar13) - (fVar8 - fVar22) * (fVar9 - fVar12);
  fVar14 = fVar8 * fVar8 + fVar5 * fVar5 + fVar3 * fVar3;
LAB_012335a4:
  fVar7 = ABS(fVar7);
  fVar21 = ABS(fVar21);
  fVar8 = fVar7;
  if (fVar7 <= -1e+18) {
    fVar8 = -1e+18;
  }
  iVar2 = -(uint)(fVar7 <= -1e+18);
  if (fVar8 < ABS(fVar19)) {
    iVar2 = 1;
    fVar8 = ABS(fVar19);
  }
  fVar3 = fVar21;
  if (fVar21 <= fVar8) {
    fVar3 = fVar8;
  }
  iVar1 = 2;
  if (fVar21 <= fVar8) {
    iVar1 = iVar2;
  }
  iVar2 = 3;
  if (ABS(fVar14) <= fVar3) {
    iVar2 = iVar1;
  }
  return iVar2;
}

