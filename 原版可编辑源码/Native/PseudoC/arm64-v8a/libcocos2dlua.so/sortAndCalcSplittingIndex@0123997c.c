
/* btQuantizedBvh::sortAndCalcSplittingIndex(int, int, int) */

ulong __thiscall
btQuantizedBvh::sortAndCalcSplittingIndex(btQuantizedBvh *this,int param_1,int param_2,int param_3)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  undefined8 *puVar4;
  int iVar5;
  float *pfVar6;
  float *pfVar7;
  undefined8 *puVar8;
  long lVar9;
  float fVar10;
  long lVar11;
  ulong uVar12;
  ushort *puVar13;
  float *pfVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined8 uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float local_80 [5];
  float fStack_6c;
  ulong local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  long local_18;
  
  uVar12 = (ulong)(uint)param_1;
  lVar9 = tpidr_el0;
  local_18 = *(long *)(lVar9 + 0x28);
  iVar5 = param_2 - param_1;
  if (iVar5 == 0 || param_2 < param_1) {
    fVar19 = 0.0;
    fVar20 = 0.0;
    fVar21 = 0.0;
  }
  else if (this[0x40] == (btQuantizedBvh)0x0) {
    lVar11 = (long)param_2 - (long)param_1;
    fVar19 = 0.0;
    fVar20 = 0.0;
    pfVar14 = (float *)(*(long *)(this + 0x58) + (long)param_1 * 0x40 + 0x10);
    fVar21 = 0.0;
    do {
      fVar24 = *pfVar14;
      pfVar6 = pfVar14 + 1;
      pfVar1 = pfVar14 + 2;
      pfVar3 = pfVar14 + -4;
      pfVar7 = pfVar14 + -3;
      pfVar2 = pfVar14 + -2;
      lVar11 = lVar11 + -1;
      pfVar14 = pfVar14 + 0x10;
      fVar21 = (fVar24 + *pfVar3) * 0.5 + fVar21;
      fVar20 = (*pfVar6 + *pfVar7) * 0.5 + fVar20;
      fVar19 = (*pfVar1 + *pfVar2) * 0.5 + fVar19;
    } while (lVar11 != 0);
  }
  else {
    fVar19 = 0.0;
    fVar20 = 0.0;
    lVar11 = (long)param_2 - (long)param_1;
    puVar13 = (ushort *)(*(long *)(this + 0x98) + (long)param_1 * 0x10 + 6);
    fVar21 = 0.0;
    do {
      fVar24 = (float)NEON_ucvtf((uint)*puVar13);
      fVar25 = (float)NEON_ucvtf((uint)puVar13[1]);
      fVar26 = (float)NEON_ucvtf((uint)puVar13[2]);
      fVar27 = (float)NEON_ucvtf((uint)puVar13[-3]);
      fVar22 = (float)NEON_ucvtf((uint)puVar13[-2]);
      fVar10 = (float)NEON_ucvtf((uint)puVar13[-1]);
      lVar11 = lVar11 + -1;
      fVar21 = (fVar24 / *(float *)(this + 0x28) + *(float *)(this + 8) +
               fVar27 / *(float *)(this + 0x28) + *(float *)(this + 8)) * 0.5 + fVar21;
      fVar20 = (fVar25 / *(float *)(this + 0x2c) + *(float *)(this + 0xc) +
               fVar22 / *(float *)(this + 0x2c) + *(float *)(this + 0xc)) * 0.5 + fVar20;
      fVar19 = (fVar26 / *(float *)(this + 0x30) + *(float *)(this + 0x10) +
               fVar10 / *(float *)(this + 0x30) + *(float *)(this + 0x10)) * 0.5 + fVar19;
      puVar13 = puVar13 + 8;
    } while (lVar11 != 0);
  }
  fVar24 = 1.0 / (float)iVar5;
  stack0xffffffffffffff90 = CONCAT44(fVar24 * fVar20,fVar24 * fVar21);
  local_68 = (ulong)(uint)(fVar24 * fVar19);
  if (param_1 < param_2) {
    fVar19 = local_80[(long)param_3 + 4];
    uVar15 = -(ulong)((uint)param_1 >> 0x1f) & 0xfffffff000000000 | uVar12 << 4;
    uVar16 = -(ulong)((uint)param_1 >> 0x1f) & 0xffffffc000000000 | uVar12 << 6;
    lVar11 = (long)param_2 - (long)param_1;
    uVar12 = (ulong)(uint)param_1;
    do {
      if (this[0x40] == (btQuantizedBvh)0x0) {
        pfVar14 = (float *)(*(long *)(this + 0x58) + uVar15 * 4);
        fVar21 = pfVar14[4];
        fVar24 = pfVar14[5];
        fVar25 = pfVar14[6];
        fVar26 = *pfVar14;
        fVar27 = pfVar14[1];
        fVar20 = pfVar14[2];
      }
      else {
        puVar13 = (ushort *)(*(long *)(this + 0x98) + uVar15);
        fVar20 = (float)NEON_ucvtf((uint)puVar13[3]);
        fVar26 = (float)NEON_ucvtf((uint)*puVar13);
        fVar24 = (float)NEON_ucvtf((uint)puVar13[4]);
        fVar27 = (float)NEON_ucvtf((uint)puVar13[1]);
        fVar25 = (float)NEON_ucvtf((uint)puVar13[5]);
        fVar22 = (float)NEON_ucvtf((uint)puVar13[2]);
        fVar21 = fVar20 / *(float *)(this + 0x28) + *(float *)(this + 8);
        fVar24 = fVar24 / *(float *)(this + 0x2c) + *(float *)(this + 0xc);
        fVar25 = fVar25 / *(float *)(this + 0x30) + *(float *)(this + 0x10);
        fVar26 = fVar26 / *(float *)(this + 0x28) + *(float *)(this + 8);
        fVar27 = fVar27 / *(float *)(this + 0x2c) + *(float *)(this + 0xc);
        fVar20 = fVar22 / *(float *)(this + 0x30) + *(float *)(this + 0x10);
      }
      local_80[0] = (fVar21 + fVar26) * 0.5;
      local_80[1] = (fVar24 + fVar27) * 0.5;
      local_80[2] = (fVar25 + fVar20) * 0.5;
      local_80[3] = 0.0;
      if (fVar19 < local_80[param_3]) {
        if (this[0x40] == (btQuantizedBvh)0x0) {
          uVar18 = -(uVar12 >> 0x1f) & 0xffffffc000000000 | uVar12 << 6;
          puVar8 = (undefined8 *)(*(long *)(this + 0x58) + uVar16);
          uStack_28 = puVar8[7];
          local_30 = puVar8[6];
          puVar4 = (undefined8 *)(*(long *)(this + 0x58) + uVar18);
          uStack_38 = puVar8[5];
          local_40 = puVar8[4];
          uStack_48 = puVar8[3];
          local_50 = puVar8[2];
          uStack_58 = puVar8[1];
          local_60 = *puVar8;
          uVar23 = puVar4[6];
          puVar8[7] = puVar4[7];
          puVar8[6] = uVar23;
          uVar23 = puVar4[4];
          puVar8[5] = puVar4[5];
          puVar8[4] = uVar23;
          uVar23 = puVar4[2];
          puVar8[3] = puVar4[3];
          puVar8[2] = uVar23;
          uVar23 = *puVar4;
          puVar8[1] = puVar4[1];
          *puVar8 = uVar23;
          puVar8 = (undefined8 *)(*(long *)(this + 0x58) + uVar18);
          puVar8[7] = uStack_28;
          puVar8[6] = local_30;
          puVar8[5] = uStack_38;
          puVar8[4] = local_40;
          puVar8[3] = uStack_48;
          puVar8[2] = local_50;
          puVar8[1] = uStack_58;
          *puVar8 = local_60;
        }
        else {
          lVar17 = *(long *)(this + 0x98);
          uVar18 = -(uVar12 >> 0x1f) & 0xfffffff000000000 | uVar12 << 4;
          uStack_58 = ((undefined8 *)(lVar17 + uVar15))[1];
          local_60 = *(undefined8 *)(lVar17 + uVar15);
          puVar8 = (undefined8 *)(lVar17 + uVar18);
          uVar23 = *puVar8;
          ((undefined8 *)(lVar17 + uVar15))[1] = puVar8[1];
          *(undefined8 *)(lVar17 + uVar15) = uVar23;
          puVar8 = (undefined8 *)(*(long *)(this + 0x98) + uVar18);
          puVar8[1] = uStack_58;
          *puVar8 = local_60;
        }
        uVar12 = (ulong)((int)uVar12 + 1);
      }
      uVar15 = uVar15 + 0x10;
      lVar11 = lVar11 + -1;
      uVar16 = uVar16 + 0x40;
    } while (lVar11 != 0);
  }
  if (((int)uVar12 <= iVar5 / 3 + param_1) || ((param_2 + -1) - iVar5 / 3 <= (int)uVar12)) {
    uVar12 = (ulong)(uint)(param_1 + (iVar5 >> 1));
  }
  if (*(long *)(lVar9 + 0x28) == local_18) {
    return uVar12;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

