
/* dragonBones::CCSlot::_updateMesh() */

void __thiscall dragonBones::CCSlot::_updateMesh(CCSlot *this)

{
  CCSlot *pCVar1;
  CCSlot *pCVar2;
  float *pfVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  short sVar7;
  short sVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  float *pfVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  float *pfVar21;
  ulong uVar22;
  ulong uVar23;
  long lVar24;
  ulong uVar25;
  float fVar26;
  float fVar27;
  ulong uVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined8 uVar32;
  float fVar33;
  
  lVar9 = *(long *)(this + 0xd8);
  lVar16 = *(long *)(lVar9 + 0x40);
  lVar5 = *(long *)(lVar9 + 0x10);
  lVar18 = *(long *)(lVar9 + 0x18);
  fVar26 = *(float *)(*(long *)(*(long *)(this + 0x68) + 0x20) + 0x1c);
  lVar13 = *(long *)(lVar16 + 0x10);
  lVar14 = *(long *)(this + 0x1d0);
  pCVar1 = this + 500;
  *(undefined8 *)(this + 0x1fc) = 0xc97423f0c97423f0;
  *(undefined8 *)pCVar1 = 0x497423f0497423f0;
  if (*(long *)(this + 0x168) == 0) {
    return;
  }
  pCVar2 = this + 0x1fc;
  if (lVar13 == 0) {
    if (lVar5 != lVar18) {
      lVar18 = *(long *)(*(long *)(lVar16 + 8) + 0xb0);
      sVar8 = *(short *)(lVar18 + (ulong)*(uint *)(lVar16 + 4) * 2);
      if ((ulong)(long)*(int *)(this + 0x1e0) < (ulong)(long)sVar8) {
        return;
      }
      if (sVar8 != 0) {
        lVar9 = *(long *)(*(long *)(lVar16 + 8) + 0xb8);
        sVar7 = *(short *)(lVar18 + (ulong)(*(uint *)(lVar16 + 4) + 2) * 2);
        fVar30 = -999999.0;
        uVar15 = 0;
        fVar29 = fVar30;
        do {
          pfVar12 = (float *)(lVar9 + (long)sVar7 * 4 + uVar15 * 4);
          pfVar3 = (float *)(lVar5 + uVar15 * 4);
          pfVar21 = (float *)(lVar14 + (uVar15 >> 1) * 0x14);
          fVar27 = fVar26 * *pfVar12 + *pfVar3;
          fVar31 = -(fVar26 * pfVar12[1] + pfVar3[1]);
          *pfVar21 = fVar27;
          pfVar21[1] = fVar31;
          fVar33 = *(float *)pCVar1;
          if (fVar27 < *(float *)pCVar1) {
            *(float *)pCVar1 = fVar27;
            fVar33 = fVar27;
          }
          if (fVar29 < fVar27) {
            *(float *)pCVar2 = fVar27;
            fVar29 = fVar27;
          }
          fVar27 = *(float *)(this + 0x1f8);
          if (fVar31 < *(float *)(this + 0x1f8)) {
            *(float *)(this + 0x1f8) = fVar31;
            fVar27 = fVar31;
          }
          if (fVar30 < fVar31) {
            *(float *)(this + 0x200) = fVar31;
            fVar30 = fVar31;
          }
          uVar15 = uVar15 + 2;
        } while (uVar15 < (ulong)((long)sVar8 << 1));
        goto LAB_00d52b20;
      }
    }
    *(undefined8 *)pCVar2 = 0xc9f423f0c9f423f0;
  }
  else {
    lVar17 = *(long *)(*(long *)(lVar16 + 8) + 0xb0);
    sVar8 = *(short *)(lVar17 + (ulong)*(uint *)(lVar16 + 4) * 2);
    if ((ulong)(long)*(int *)(this + 0x1e0) < (ulong)(long)sVar8) {
      return;
    }
    if (sVar8 == 0) {
      *(undefined8 *)pCVar2 = 0xc9f423f0c9f423f0;
      goto LAB_00d52b64;
    }
    lVar6 = *(long *)(lVar9 + 0x28);
    uVar15 = 0xc97423f0;
    sVar7 = *(short *)(lVar17 + (ulong)(*(int *)(lVar13 + 0x14) + 1) * 2);
    lVar16 = *(long *)(*(long *)(lVar16 + 8) + 0xb8);
    iVar4 = sVar7 + 0x10000;
    if (-1 < sVar7) {
      iVar4 = (int)sVar7;
    }
    uVar19 = 0;
    lVar20 = 0;
    lVar10 = (long)iVar4;
    lVar9 = (ulong)(*(int *)(lVar13 + 0x14) + 2) + (*(long *)(lVar9 + 0x30) - lVar6 >> 3);
    uVar25 = uVar15;
    do {
      uVar22 = (ulong)*(short *)(lVar17 + lVar9 * 2);
      lVar11 = lVar9 + 1;
      if (uVar22 == 0) {
        uVar28 = 0;
      }
      else {
        uVar23 = 0;
        uVar28 = 0;
        do {
          lVar24 = *(long *)(lVar6 + ((long)*(short *)(lVar17 + 2 + lVar9 * 2 + uVar23 * 2) &
                                     0xffffffffU) * 8);
          if (lVar24 != 0) {
            pfVar12 = (float *)(lVar16 + lVar10 * 4);
            uVar32 = *(undefined8 *)(pfVar12 + 1);
            fVar29 = *pfVar12;
            lVar10 = lVar10 + 3;
            fVar30 = fVar26 * (float)uVar32;
            fVar33 = fVar26 * (float)((ulong)uVar32 >> 0x20);
            if (lVar5 != lVar18) {
              uVar32 = *(undefined8 *)(lVar5 + lVar20 * 4);
              lVar20 = lVar20 + 2;
              fVar30 = fVar30 + (float)uVar32;
              fVar33 = fVar33 + (float)((ulong)uVar32 >> 0x20);
            }
            uVar28 = CONCAT44((float)(uVar28 >> 0x20) +
                              ((float)((ulong)*(undefined8 *)(lVar24 + 0x20) >> 0x20) +
                              (float)((ulong)*(undefined8 *)(lVar24 + 0x10) >> 0x20) * fVar30 +
                              (float)((ulong)*(undefined8 *)(lVar24 + 0x18) >> 0x20) * fVar33) *
                              fVar29,(float)uVar28 +
                                     ((float)*(undefined8 *)(lVar24 + 0x20) +
                                     (float)*(undefined8 *)(lVar24 + 0x10) * fVar30 +
                                     (float)*(undefined8 *)(lVar24 + 0x18) * fVar33) * fVar29);
          }
          uVar23 = uVar23 + 1;
        } while (uVar23 < uVar22);
        lVar11 = lVar11 + uVar23;
      }
      pfVar12 = (float *)(lVar14 + uVar19 * 0x14);
      fVar30 = -(float)(uVar28 >> 0x20);
      fVar29 = (float)uVar28;
      *pfVar12 = fVar29;
      pfVar12[1] = fVar30;
      uVar22 = (ulong)(uint)*(float *)pCVar1;
      if (fVar29 < *(float *)pCVar1) {
        *(float *)pCVar1 = fVar29;
        uVar22 = uVar28;
      }
      fVar33 = (float)uVar22;
      if ((float)uVar25 < fVar29) {
        *(float *)pCVar2 = fVar29;
        uVar25 = uVar28;
      }
      fVar29 = (float)uVar25;
      fVar27 = *(float *)(this + 0x1f8);
      if (fVar30 < *(float *)(this + 0x1f8)) {
        *(float *)(this + 0x1f8) = fVar30;
        fVar27 = fVar30;
      }
      if ((float)uVar15 < fVar30) {
        *(float *)(this + 0x200) = fVar30;
        uVar15 = (ulong)(uint)fVar30;
      }
      fVar30 = (float)uVar15;
      uVar19 = uVar19 + 1;
      lVar9 = lVar11;
    } while (uVar19 < (ulong)(long)sVar8);
LAB_00d52b20:
    *(float *)(this + 0x1fc) = fVar29 - fVar33;
    *(float *)(this + 0x200) = fVar30 - fVar27;
    if (lVar13 != 0) {
LAB_00d52b64:
                    /* WARNING: Could not recover jumptable at 0x00d52b74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)this + 0x70))();
      return;
    }
  }
  return;
}

