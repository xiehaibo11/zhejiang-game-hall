
/* btConeTwistConstraint::getInfo2NonVirtual(btTypedConstraint::btConstraintInfo2*, btTransform
   const&, btTransform const&, btMatrix3x3 const&, btMatrix3x3 const&) */

void __thiscall
btConeTwistConstraint::getInfo2NonVirtual
          (btConeTwistConstraint *this,btConstraintInfo2 *param_1,btTransform *param_2,
          btTransform *param_3,btMatrix3x3 *param_4,btMatrix3x3 *param_5)

{
  long lVar1;
  long lVar2;
  float *pfVar3;
  btConeTwistConstraint *pbVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  float *pfVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  int iVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  uint uVar16;
  undefined4 *puVar17;
  float fVar18;
  undefined4 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  
  calcAngleInfo2(this,param_2,param_3,param_4,param_5);
  puVar5 = *(undefined4 **)(param_1 + 8);
  *puVar5 = 0x3f800000;
  uVar16 = *(uint *)(param_1 + 0x28);
  uVar10 = -(ulong)((uVar16 & 0x7fffffff) >> 0x1e) & 0xfffffffc00000000 | (ulong)(uVar16 << 1) << 2;
  uVar9 = -(ulong)(uVar16 + 1 >> 0x1f) & 0xfffffffc00000000 | (ulong)(uVar16 + 1) << 2;
  lVar13 = uVar10 + 8;
  *(undefined4 *)((long)puVar5 + uVar9) = 0x3f800000;
  *(undefined4 *)((long)puVar5 + lVar13) = 0x3f800000;
  fVar18 = *(float *)(this + 0x174);
  fVar23 = *(float *)(this + 0x178);
  fVar25 = *(float *)(this + 0x17c);
  fVar20 = *(float *)param_2 * fVar18 + *(float *)(param_2 + 4) * fVar23 +
           *(float *)(param_2 + 8) * fVar25;
  fVar21 = fVar18 * *(float *)(param_2 + 0x10) + fVar23 * *(float *)(param_2 + 0x14) +
           fVar25 * *(float *)(param_2 + 0x18);
  fVar18 = fVar18 * *(float *)(param_2 + 0x20) + fVar23 * *(float *)(param_2 + 0x24) +
           fVar25 * *(float *)(param_2 + 0x28);
  puVar5 = *(undefined4 **)(param_1 + 0x10);
  pfVar8 = (float *)(puVar5 + (int)uVar16);
  pfVar3 = (float *)((long)puVar5 + uVar10);
  *puVar5 = 0;
  puVar5[1] = fVar18;
  puVar5[2] = -fVar21;
  puVar5[3] = 0;
  *pfVar8 = -fVar18;
  pfVar8[1] = 0.0;
  pfVar8[2] = fVar20;
  pfVar8[3] = 0.0;
  *pfVar3 = fVar21;
  pfVar3[1] = -fVar20;
  pfVar3[2] = 0.0;
  pfVar3[3] = 0.0;
  puVar5 = *(undefined4 **)(param_1 + 0x18);
  *puVar5 = 0xbf800000;
  *(undefined4 *)((long)puVar5 + uVar9) = 0xbf800000;
  *(undefined4 *)((long)puVar5 + lVar13) = 0xbf800000;
  fVar23 = *(float *)(this + 0x1b4);
  fVar24 = *(float *)(this + 0x1b8);
  fVar26 = *(float *)(this + 0x1bc);
  iVar12 = *(int *)(param_1 + 0x28);
  puVar5 = *(undefined4 **)(param_1 + 0x20);
  fVar25 = *(float *)param_3 * fVar23 + *(float *)(param_3 + 4) * fVar24 +
           *(float *)(param_3 + 8) * fVar26;
  fVar22 = fVar23 * *(float *)(param_3 + 0x10) + fVar24 * *(float *)(param_3 + 0x14) +
           fVar26 * *(float *)(param_3 + 0x18);
  fVar23 = fVar23 * *(float *)(param_3 + 0x20) + fVar24 * *(float *)(param_3 + 0x24) +
           fVar26 * *(float *)(param_3 + 0x28);
  pfVar8 = (float *)(puVar5 + iVar12);
  pfVar3 = (float *)(puVar5 + (long)iVar12 * 2);
  *puVar5 = 0;
  puVar5[3] = 0;
  puVar5[1] = -fVar23;
  puVar5[2] = fVar22;
  *pfVar8 = fVar23;
  pfVar8[1] = 0.0;
  pfVar8[2] = -fVar25;
  pfVar8[3] = 0.0;
  *pfVar3 = -fVar22;
  pfVar3[1] = fVar25;
  pfVar3[2] = 0.0;
  pfVar3[3] = 0.0;
  uVar16 = *(uint *)(this + 0x268);
  pbVar4 = (btConeTwistConstraint *)(param_1 + 4);
  if ((uVar16 & 2) != 0) {
    pbVar4 = this + 0x270;
  }
  pfVar8 = *(float **)(param_1 + 0x30);
  puVar7 = *(undefined4 **)(param_1 + 0x40);
  puVar6 = *(undefined4 **)(param_1 + 0x48);
  fVar24 = *(float *)pbVar4 * *(float *)param_1;
  lVar13 = (long)iVar12;
  *pfVar8 = fVar24 * (((fVar25 + *(float *)(param_3 + 0x30)) - fVar20) - *(float *)(param_2 + 0x30))
  ;
  *puVar7 = 0xff7fffff;
  *puVar6 = 0x7f7fffff;
  if ((uVar16 & 1) == 0) {
    pfVar8[lVar13] =
         fVar24 * (((fVar22 + *(float *)(param_3 + 0x34)) - fVar21) - *(float *)(param_2 + 0x34));
    puVar7[lVar13] = 0xff7fffff;
    puVar6[lVar13] = 0x7f7fffff;
    pfVar8[lVar13 * 2] =
         fVar24 * (((fVar23 + *(float *)(param_3 + 0x38)) - fVar18) - *(float *)(param_2 + 0x38));
    puVar7[lVar13 * 2] = 0xff7fffff;
    puVar6[lVar13 * 2] = 0x7f7fffff;
  }
  else {
    puVar17 = *(undefined4 **)(param_1 + 0x38);
    *puVar17 = *(undefined4 *)(this + 0x26c);
    pfVar8[lVar13] =
         fVar24 * (((fVar22 + *(float *)(param_3 + 0x34)) - fVar21) - *(float *)(param_2 + 0x34));
    puVar7[lVar13] = 0xff7fffff;
    puVar6[lVar13] = 0x7f7fffff;
    puVar17[lVar13] = *(undefined4 *)(this + 0x26c);
    pfVar8[lVar13 * 2] =
         fVar24 * (((fVar23 + *(float *)(param_3 + 0x38)) - fVar18) - *(float *)(param_2 + 0x38));
    puVar7[lVar13 * 2] = 0xff7fffff;
    puVar6[lVar13 * 2] = 0x7f7fffff;
    puVar17[lVar13 * 2] = *(undefined4 *)(this + 0x26c);
  }
  uVar9 = lVar13 * 3;
  if (this[0x226] != (btConeTwistConstraint)0x0) {
    lVar15 = *(long *)(param_1 + 0x10);
    if ((*(float *)(this + 0x1e0) <= *(float *)(this + 0x1d4)) ||
       (*(float *)(this + 0x1e0) <= *(float *)(this + 0x1d8))) {
      fVar18 = *(float *)(this + 0x1e4);
      fVar23 = *(float *)(this + 0x1cc);
      fVar20 = *(float *)(this + 0x1e8);
      fVar25 = *(float *)(this + 0x1ec);
      uVar10 = -(uVar9 >> 0x1f & 1) & 0xfffffffc00000000 | (uVar9 & 0xffffffff) << 2;
      lVar1 = uVar10 + 4;
      lVar2 = uVar10 + 8;
      *(float *)(lVar15 + lVar13 * 0xc) = fVar23 * fVar18 * fVar23;
      *(float *)(lVar15 + lVar1) = fVar23 * fVar23 * fVar20;
      *(float *)(lVar15 + lVar2) = fVar23 * fVar23 * fVar25;
      puVar5[lVar13 * 3] = -(fVar23 * fVar18 * fVar23);
      *(float *)((long)puVar5 + lVar1) = -(fVar23 * fVar23 * fVar20);
      *(float *)((long)puVar5 + lVar2) = -(fVar23 * fVar23 * fVar25);
      pfVar8[lVar13 * 3] = *(float *)param_1 * *(float *)(this + 0x1c8) * *(float *)(this + 0x210);
      if ((uVar16 >> 2 & 1) != 0) {
        *(undefined4 *)(*(long *)(param_1 + 0x38) + lVar13 * 0xc) = *(undefined4 *)(this + 0x274);
      }
      uVar10 = uVar9 & 0xffffffff;
      puVar7[lVar13 * 3] = 0;
    }
    else {
      fVar25 = *(float *)(this + 0x148);
      fVar21 = *(float *)(this + 0x158);
      fVar24 = *(float *)(this + 0x14c);
      fVar27 = *(float *)(this + 0x15c);
      fVar22 = *(float *)(this + 0x168);
      fVar28 = *(float *)(this + 0x16c);
      uVar10 = lVar13 << 2;
      uVar11 = -(uVar9 >> 0x1f & 1) & 0xfffffffc00000000 | (uVar9 & 0xffffffff) << 2;
      uVar16 = (uint)uVar10;
      fVar26 = *(float *)param_2 * fVar25 + *(float *)(param_2 + 4) * fVar21 +
               *(float *)(param_2 + 8) * fVar22;
      fVar18 = *(float *)param_2 * fVar24 + *(float *)(param_2 + 4) * fVar27 +
               *(float *)(param_2 + 8) * fVar28;
      fVar23 = fVar25 * *(float *)(param_2 + 0x10) + fVar21 * *(float *)(param_2 + 0x14) +
               fVar22 * *(float *)(param_2 + 0x18);
      fVar20 = fVar24 * *(float *)(param_2 + 0x10) + fVar27 * *(float *)(param_2 + 0x14) +
               fVar28 * *(float *)(param_2 + 0x18);
      fVar25 = fVar25 * *(float *)(param_2 + 0x20) + fVar21 * *(float *)(param_2 + 0x24) +
               fVar22 * *(float *)(param_2 + 0x28);
      fVar21 = fVar24 * *(float *)(param_2 + 0x20) + fVar27 * *(float *)(param_2 + 0x24) +
               fVar28 * *(float *)(param_2 + 0x28);
      uVar9 = -(ulong)(uVar16 >> 0x1f) & 0xfffffffc00000000 | (ulong)(uVar16 | 1) << 2;
      uVar14 = -(ulong)(uVar16 >> 0x1f) & 0xfffffffc00000000 | (ulong)(uVar16 | 2) << 2;
      *(float *)(lVar15 + uVar11) = fVar26;
      *(float *)(lVar15 + uVar11 + 4) = fVar23;
      *(float *)(lVar15 + uVar11 + 8) = fVar25;
      *(float *)(lVar15 + lVar13 * 0x10) = fVar18;
      *(float *)(lVar15 + uVar9) = fVar20;
      *(float *)(lVar15 + uVar14) = fVar21;
      *(float *)((long)puVar5 + uVar11) = -fVar26;
      *(float *)((long)puVar5 + uVar11 + 4) = -fVar23;
      *(float *)((long)puVar5 + uVar11 + 8) = -fVar25;
      puVar5[lVar13 * 4] = -fVar18;
      *(float *)((long)puVar5 + uVar9) = -fVar20;
      *(float *)((long)puVar5 + uVar14) = -fVar21;
      fVar22 = *(float *)param_1;
      fVar24 = *(float *)(this + 0x1cc);
      pfVar8 = *(float **)(param_1 + 0x30);
      *(float *)((long)pfVar8 + uVar11) =
           fVar22 * fVar24 *
           (fVar26 * *(float *)(this + 0x1e4) + fVar23 * *(float *)(this + 0x1e8) +
           fVar25 * *(float *)(this + 0x1ec));
      pfVar8[lVar13 * 4] =
           fVar22 * fVar24 *
           (fVar18 * *(float *)(this + 0x1e4) + fVar20 * *(float *)(this + 0x1e8) +
           fVar21 * *(float *)(this + 0x1ec));
      puVar7 = *(undefined4 **)(param_1 + 0x40);
      *(undefined4 *)((long)puVar7 + uVar11) = 0xff7fffff;
      puVar6 = *(undefined4 **)(param_1 + 0x48);
      *(undefined4 *)((long)puVar6 + uVar11) = 0x7f7fffff;
      puVar7[lVar13 * 4] = 0xff7fffff;
      iVar12 = *(int *)(param_1 + 0x28);
      uVar9 = uVar10;
    }
    puVar6[uVar9] = 0x7f7fffff;
    uVar9 = (ulong)(uint)(iVar12 + (int)uVar10);
  }
  if (this[0x225] != (btConeTwistConstraint)0x0) {
    fVar18 = *(float *)(this + 500);
    fVar23 = *(float *)(this + 0x1cc);
    fVar20 = *(float *)(this + 0x1f8);
    fVar25 = *(float *)(this + 0x1fc);
    lVar13 = *(long *)(param_1 + 0x10);
    lVar15 = *(long *)(param_1 + 0x20);
    uVar10 = -(uVar9 >> 0x1f & 1) & 0xfffffffc00000000 | (uVar9 & 0xffffffff) << 2;
    *(float *)(lVar13 + uVar10) = fVar23 * fVar18 * fVar23;
    *(float *)(lVar13 + uVar10 + 4) = fVar23 * fVar23 * fVar20;
    *(float *)(lVar13 + uVar10 + 8) = fVar23 * fVar23 * fVar25;
    *(float *)(lVar15 + uVar10) = -(fVar23 * fVar18 * fVar23);
    *(float *)(lVar15 + uVar10 + 4) = -(fVar23 * fVar23 * fVar20);
    *(float *)(lVar15 + uVar10 + 8) = -(fVar23 * fVar23 * fVar25);
    *(float *)((long)pfVar8 + uVar10) =
         *(float *)param_1 * *(float *)(this + 0x1c8) * *(float *)(this + 0x214);
    lVar13 = (long)(int)uVar9;
    if (((byte)this[0x268] >> 2 & 1) != 0) {
      *(undefined4 *)(*(long *)(param_1 + 0x38) + lVar13 * 4) = *(undefined4 *)(this + 0x274);
    }
    if (*(float *)(this + 0x1dc) <= 0.0) {
      uVar19 = 0x7f7fffff;
      puVar7[lVar13] = 0xff7fffff;
    }
    else if (*(float *)(this + 0x214) <= 0.0) {
      puVar7[lVar13] = 0xff7fffff;
      uVar19 = 0;
    }
    else {
      uVar19 = 0x7f7fffff;
      puVar7[lVar13] = 0;
    }
    puVar6[lVar13] = uVar19;
  }
  return;
}

