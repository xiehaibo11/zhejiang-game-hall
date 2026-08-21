
/* btQuantizedBvh::calcSplittingAxis(int, int) */

undefined1 __thiscall
btQuantizedBvh::calcSplittingAxis(btQuantizedBvh *this,int param_1,int param_2)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  undefined1 uVar4;
  int iVar5;
  float *pfVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  long lVar12;
  ulong uVar13;
  ushort *puVar14;
  float *pfVar15;
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
  
  iVar5 = param_2 - param_1;
  if (iVar5 != 0 && param_1 <= param_2) {
    if (this[0x40] == (btQuantizedBvh)0x0) {
      lVar12 = (long)param_2 - (long)param_1;
      fVar16 = 0.0;
      fVar18 = 0.0;
      pfVar15 = (float *)(*(long *)(this + 0x58) + (long)param_1 * 0x40 + 0x10);
      fVar22 = 0.0;
      do {
        fVar17 = *pfVar15;
        pfVar6 = pfVar15 + 1;
        pfVar1 = pfVar15 + 2;
        pfVar3 = pfVar15 + -4;
        pfVar7 = pfVar15 + -3;
        pfVar2 = pfVar15 + -2;
        lVar12 = lVar12 + -1;
        pfVar15 = pfVar15 + 0x10;
        fVar22 = fVar22 + (fVar17 + *pfVar3) * 0.5;
        fVar18 = fVar18 + (*pfVar6 + *pfVar7) * 0.5;
        fVar16 = fVar16 + (*pfVar1 + *pfVar2) * 0.5;
      } while (lVar12 != 0);
    }
    else {
      fVar16 = 0.0;
      fVar18 = 0.0;
      lVar12 = (long)param_2 - (long)param_1;
      puVar14 = (ushort *)(*(long *)(this + 0x98) + (long)param_1 * 0x10 + 6);
      fVar22 = 0.0;
      do {
        fVar17 = (float)NEON_ucvtf((uint)*puVar14);
        fVar21 = (float)NEON_ucvtf((uint)puVar14[1]);
        fVar19 = (float)NEON_ucvtf((uint)puVar14[2]);
        fVar20 = (float)NEON_ucvtf((uint)puVar14[-3]);
        fVar9 = (float)NEON_ucvtf((uint)puVar14[-2]);
        fVar10 = (float)NEON_ucvtf((uint)puVar14[-1]);
        lVar12 = lVar12 + -1;
        fVar22 = fVar22 + (fVar17 / *(float *)(this + 0x28) + *(float *)(this + 8) +
                          fVar20 / *(float *)(this + 0x28) + *(float *)(this + 8)) * 0.5;
        fVar18 = fVar18 + (fVar21 / *(float *)(this + 0x2c) + *(float *)(this + 0xc) +
                          fVar9 / *(float *)(this + 0x2c) + *(float *)(this + 0xc)) * 0.5;
        fVar16 = fVar16 + (fVar19 / *(float *)(this + 0x30) + *(float *)(this + 0x10) +
                          fVar10 / *(float *)(this + 0x30) + *(float *)(this + 0x10)) * 0.5;
        puVar14 = puVar14 + 8;
      } while (lVar12 != 0);
    }
    if (param_1 < param_2) {
      fVar20 = 1.0 / (float)iVar5;
      uVar13 = -(ulong)((uint)param_1 >> 0x1f) & 0xfffffff000000000 | (ulong)(uint)param_1 << 4;
      fVar19 = 0.0;
      lVar12 = (long)param_2 - (long)param_1;
      fVar17 = 0.0;
      fVar21 = 0.0;
      do {
        if (this[0x40] == (btQuantizedBvh)0x0) {
          pfVar15 = (float *)(*(long *)(this + 0x58) + uVar13 * 4);
          fVar9 = pfVar15[4];
          fVar24 = pfVar15[5];
          fVar10 = pfVar15[6];
          fVar25 = *pfVar15;
          fVar11 = pfVar15[1];
          fVar8 = pfVar15[2];
        }
        else {
          puVar14 = (ushort *)(*(long *)(this + 0x98) + uVar13);
          fVar9 = (float)NEON_ucvtf((uint)puVar14[3]);
          fVar25 = (float)NEON_ucvtf((uint)*puVar14);
          fVar10 = (float)NEON_ucvtf((uint)puVar14[4]);
          fVar11 = (float)NEON_ucvtf((uint)puVar14[1]);
          fVar23 = (float)NEON_ucvtf((uint)puVar14[5]);
          fVar8 = (float)NEON_ucvtf((uint)puVar14[2]);
          fVar9 = fVar9 / *(float *)(this + 0x28) + *(float *)(this + 8);
          fVar24 = fVar10 / *(float *)(this + 0x2c) + *(float *)(this + 0xc);
          fVar10 = fVar23 / *(float *)(this + 0x30) + *(float *)(this + 0x10);
          fVar25 = fVar25 / *(float *)(this + 0x28) + *(float *)(this + 8);
          fVar11 = fVar11 / *(float *)(this + 0x2c) + *(float *)(this + 0xc);
          fVar8 = fVar8 / *(float *)(this + 0x30) + *(float *)(this + 0x10);
        }
        fVar9 = (fVar9 + fVar25) * 0.5 - fVar20 * fVar22;
        fVar25 = (fVar24 + fVar11) * 0.5 - fVar20 * fVar18;
        fVar10 = (fVar10 + fVar8) * 0.5 - fVar20 * fVar16;
        lVar12 = lVar12 + -1;
        fVar21 = fVar21 + fVar9 * fVar9;
        fVar17 = fVar17 + fVar25 * fVar25;
        fVar19 = fVar19 + fVar10 * fVar10;
        uVar13 = uVar13 + 0x10;
      } while (lVar12 != 0);
      goto LAB_01239944;
    }
  }
  fVar21 = 0.0;
  fVar17 = 0.0;
  fVar19 = 0.0;
LAB_01239944:
  fVar18 = 1.0 / ((float)iVar5 + -1.0);
  fVar21 = fVar18 * fVar21;
  fVar17 = fVar18 * fVar17;
  fVar16 = fVar17;
  if (fVar21 >= fVar17) {
    fVar16 = fVar21;
  }
  uVar4 = 2;
  if (fVar18 * fVar19 <= fVar16) {
    uVar4 = fVar21 < fVar17;
  }
  return uVar4;
}

