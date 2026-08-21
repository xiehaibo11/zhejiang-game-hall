
/* btHingeConstraint::setAxis(btVector3&) */

void __thiscall btHingeConstraint::setAxis(btHingeConstraint *this,btVector3 *param_1)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
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
  float fVar29;
  
  fVar5 = *(float *)(param_1 + 8);
  if (ABS(fVar5) <= 0.70710677) {
    fVar11 = *(float *)param_1;
    fVar6 = *(float *)(param_1 + 4);
    fVar4 = 0.0;
    fVar8 = fVar11 * fVar11 + fVar6 * fVar6;
    fVar7 = 1.0 / SQRT(fVar8);
    fVar13 = -(fVar6 * fVar7);
    fVar11 = fVar11 * fVar7;
    fVar8 = fVar8 * fVar7;
    fVar6 = -(fVar5 * fVar11);
    fVar5 = fVar5 * fVar13;
  }
  else {
    fVar4 = *(float *)(param_1 + 4);
    fVar13 = 0.0;
    fVar6 = fVar5 * fVar5 + fVar4 * fVar4;
    fVar8 = 1.0 / SQRT(fVar6);
    fVar11 = -(fVar5 * fVar8);
    fVar4 = fVar4 * fVar8;
    fVar6 = fVar6 * fVar8;
    fVar5 = -(*(float *)param_1 * fVar4);
    fVar8 = *(float *)param_1 * fVar11;
  }
  *(float *)(this + 0x240) = fVar13;
  *(float *)(this + 0x244) = fVar6;
  uVar1 = *(undefined4 *)param_1;
  *(undefined4 *)(this + 0x24c) = 0;
  *(float *)(this + 0x250) = fVar11;
  *(float *)(this + 0x254) = fVar5;
  *(undefined4 *)(this + 0x248) = uVar1;
  uVar1 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 0x25c) = 0;
  *(float *)(this + 0x260) = fVar4;
  *(float *)(this + 0x264) = fVar8;
  *(undefined4 *)(this + 600) = uVar1;
  uVar1 = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0x26c) = 0;
  fVar9 = *(float *)(this + 0x270);
  fVar7 = *(float *)(this + 0x274);
  *(undefined4 *)(this + 0x268) = uVar1;
  lVar2 = *(long *)(this + 0x28);
  fVar17 = *(float *)param_1;
  fVar18 = *(float *)(param_1 + 4);
  fVar16 = *(float *)(param_1 + 8);
  fVar8 = *(float *)(lVar2 + 8) * fVar17 + *(float *)(lVar2 + 0xc) * fVar18 +
          *(float *)(lVar2 + 0x10) * fVar16;
  fVar6 = fVar17 * *(float *)(lVar2 + 0x18) + fVar18 * *(float *)(lVar2 + 0x1c) +
          fVar16 * *(float *)(lVar2 + 0x20);
  fVar10 = *(float *)(this + 0x278);
  fVar5 = fVar17 * *(float *)(lVar2 + 0x28) + fVar18 * *(float *)(lVar2 + 0x2c) +
          fVar16 * *(float *)(lVar2 + 0x30);
  fVar15 = fVar17 * fVar8 + fVar18 * fVar6 + fVar16 * fVar5;
  if (-0.9999999 <= fVar15) {
    fVar15 = fVar15 + 1.0;
    fVar19 = SQRT(fVar15 + fVar15);
    fVar20 = 1.0 / fVar19;
    fVar15 = (fVar18 * fVar5 - fVar16 * fVar6) * fVar20;
    fVar16 = (fVar16 * fVar8 - fVar17 * fVar5) * fVar20;
    fVar20 = (fVar17 * fVar6 - fVar18 * fVar8) * fVar20;
    fVar19 = fVar19 * 0.5;
  }
  else {
    if (ABS(fVar16) <= 0.70710677) {
      fVar16 = 1.0 / SQRT(fVar17 * fVar17 + fVar18 * fVar18);
      fVar20 = 0.0;
      fVar15 = -(fVar18 * fVar16);
      fVar16 = fVar17 * fVar16;
    }
    else {
      fVar20 = 1.0 / SQRT(fVar18 * fVar18 + fVar16 * fVar16);
      fVar15 = 0.0;
      fVar16 = -(fVar16 * fVar20);
      fVar20 = fVar18 * fVar20;
    }
    fVar19 = 0.0;
  }
  lVar3 = *(long *)(this + 0x30);
  fVar14 = (fVar4 * fVar16 + fVar13 * fVar19) - fVar11 * fVar20;
  fVar21 = (fVar13 * fVar20 + fVar11 * fVar19) - fVar4 * fVar15;
  fVar22 = (fVar11 * fVar15 + fVar4 * fVar19) - fVar13 * fVar16;
  fVar4 = (-(fVar13 * fVar15) - fVar11 * fVar16) - fVar4 * fVar20;
  fVar17 = *(float *)(lVar3 + 0x3c);
  fVar24 = *(float *)(lVar3 + 0x10);
  fVar23 = *(float *)(lVar3 + 0x20);
  fVar12 = *(float *)(lVar3 + 0x40);
  fVar18 = *(float *)(lVar3 + 0x30);
  fVar13 = ((fVar19 * fVar21 - fVar4 * fVar16) - fVar22 * fVar15) + fVar14 * fVar20;
  fVar11 = ((fVar19 * fVar22 - fVar4 * fVar20) - fVar14 * fVar16) + fVar21 * fVar15;
  fVar15 = ((fVar19 * fVar14 - fVar4 * fVar15) - fVar21 * fVar20) + fVar22 * fVar16;
  fVar22 = fVar9 * *(float *)(lVar2 + 8) + fVar7 * *(float *)(lVar2 + 0xc) +
           fVar10 * *(float *)(lVar2 + 0x10) + *(float *)(lVar2 + 0x38);
  fVar25 = fVar9 * *(float *)(lVar2 + 0x18) + fVar7 * *(float *)(lVar2 + 0x1c) +
           fVar10 * *(float *)(lVar2 + 0x20) + *(float *)(lVar2 + 0x3c);
  fVar16 = fVar6 * fVar11 - fVar5 * fVar13;
  fVar4 = -*(float *)(lVar3 + 0x38);
  fVar20 = -fVar17;
  fVar19 = fVar9 * *(float *)(lVar2 + 0x28) + fVar7 * *(float *)(lVar2 + 0x2c) +
           fVar10 * *(float *)(lVar2 + 0x30) + *(float *)(lVar2 + 0x40);
  fVar9 = fVar5 * fVar15 - fVar8 * fVar11;
  fVar7 = fVar8 * fVar13 - fVar6 * fVar15;
  fVar10 = -fVar12;
  fVar29 = (float)*(undefined8 *)(lVar3 + 8);
  fVar26 = (float)((ulong)*(undefined8 *)(lVar3 + 8) >> 0x20);
  fVar27 = (float)*(undefined8 *)(lVar3 + 0x18);
  fVar28 = (float)((ulong)*(undefined8 *)(lVar3 + 0x18) >> 0x20);
  fVar14 = (float)*(undefined8 *)(lVar3 + 0x28);
  fVar21 = (float)((ulong)*(undefined8 *)(lVar3 + 0x28) >> 0x20);
  *(undefined4 *)(this + 700) = 0;
  *(float *)(this + 0x288) = fVar8;
  *(undefined4 *)(this + 0x28c) = 0;
  *(float *)(this + 0x298) = fVar6;
  *(undefined4 *)(this + 0x29c) = 0;
  *(float *)(this + 0x2a8) = fVar5;
  *(undefined4 *)(this + 0x2ac) = 0;
  *(float *)(this + 0x280) = fVar15;
  *(float *)(this + 0x290) = fVar13;
  *(float *)(this + 0x2a0) = fVar11;
  *(float *)(this + 0x284) = fVar16;
  *(float *)(this + 0x294) = fVar9;
  *(float *)(this + 0x2a4) = fVar7;
  *(ulong *)(this + 0x2b0) =
       CONCAT44(fVar26 * fVar4 + fVar28 * fVar20 + fVar21 * fVar10 +
                fVar26 * fVar22 + fVar28 * fVar25 + fVar21 * fVar19,
                fVar29 * fVar4 + fVar27 * fVar20 + fVar14 * fVar10 +
                fVar29 * fVar22 + fVar27 * fVar25 + fVar14 * fVar19);
  *(float *)(this + 0x2b8) =
       ((fVar24 * fVar4 - fVar23 * fVar17) - fVar18 * fVar12) +
       fVar24 * fVar22 + fVar23 * fVar25 + fVar18 * fVar19;
  fVar10 = *(float *)(lVar3 + 0x18);
  fVar17 = *(float *)(lVar3 + 0x1c);
  fVar14 = *(float *)(lVar3 + 0x2c);
  fVar20 = *(float *)(lVar3 + 0x30);
  fVar19 = *(float *)(lVar3 + 0x20);
  fVar12 = *(float *)(lVar3 + 0x28);
  fVar22 = *(float *)(lVar3 + 8);
  fVar23 = *(float *)(lVar3 + 0xc);
  fVar25 = *(float *)(lVar3 + 0x10);
  fVar18 = fVar17 * fVar20 - fVar19 * fVar14;
  fVar24 = fVar19 * fVar12 - fVar20 * fVar10;
  fVar29 = fVar14 * fVar10 - fVar17 * fVar12;
  fVar4 = 1.0 / (fVar18 * fVar22 + fVar23 * fVar24 + fVar29 * fVar25);
  fVar18 = fVar18 * fVar4;
  fVar21 = (fVar14 * fVar25 - fVar20 * fVar23) * fVar4;
  fVar24 = fVar24 * fVar4;
  fVar20 = (fVar20 * fVar22 - fVar12 * fVar25) * fVar4;
  fVar29 = fVar29 * fVar4;
  fVar12 = (fVar12 * fVar23 - fVar14 * fVar22) * fVar4;
  fVar14 = (fVar19 * fVar23 - fVar17 * fVar25) * fVar4;
  fVar19 = (fVar10 * fVar25 - fVar19 * fVar22) * fVar4;
  fVar4 = (fVar17 * fVar22 - fVar10 * fVar23) * fVar4;
  *(undefined4 *)(this + 0x28c) = 0;
  *(undefined4 *)(this + 0x29c) = 0;
  *(float *)(this + 0x280) = fVar11 * fVar14 + fVar15 * fVar18 + fVar13 * fVar21;
  *(float *)(this + 0x284) = fVar18 * fVar16 + fVar21 * fVar9 + fVar14 * fVar7;
  *(float *)(this + 0x288) = fVar18 * fVar8 + fVar21 * fVar6 + fVar14 * fVar5;
  *(float *)(this + 0x290) = fVar11 * fVar19 + fVar15 * fVar24 + fVar13 * fVar20;
  *(float *)(this + 0x294) = fVar16 * fVar24 + fVar20 * fVar9 + fVar19 * fVar7;
  *(float *)(this + 0x298) = fVar24 * fVar8 + fVar20 * fVar6 + fVar19 * fVar5;
  *(float *)(this + 0x2a0) = fVar11 * fVar4 + fVar15 * fVar29 + fVar13 * fVar12;
  *(float *)(this + 0x2a4) = fVar16 * fVar29 + fVar12 * fVar9 + fVar4 * fVar7;
  *(float *)(this + 0x2a8) = fVar29 * fVar8 + fVar12 * fVar6 + fVar4 * fVar5;
  *(undefined4 *)(this + 0x2ac) = 0;
  return;
}

