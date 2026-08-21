
/* spine::MeshAttachment::updateUVs() */

void __thiscall spine::MeshAttachment::updateUVs(MeshAttachment *this)

{
  int iVar1;
  float *pfVar2;
  long *plVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  float *pfVar8;
  float *pfVar9;
  long lVar10;
  ulong uVar11;
  float *pfVar12;
  float *pfVar13;
  undefined8 uVar14;
  ulong uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auVar21 [16];
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  
  uVar15 = *(ulong *)(this + 0xc0);
  uVar5 = *(ulong *)(this + 0xe0);
  if (uVar15 != uVar5) {
    *(ulong *)(this + 0xc0) = uVar5;
    if (*(ulong *)(this + 200) < uVar5) {
      uVar7 = (uint)((float)uVar5 * 1.75);
      uVar14 = *(undefined8 *)(this + 0xd0);
      if (uVar7 < 9) {
        uVar7 = 8;
      }
      *(long *)(this + 200) = (long)(int)uVar7;
      plVar3 = (long *)SpineExtension::getInstance();
      uVar14 = (**(code **)(*plVar3 + 0x20))
                         (plVar3,uVar14,
                          -(ulong)(uVar7 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar7 << 2,
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                          ,0x52);
      uVar5 = *(ulong *)(this + 0xc0);
      *(undefined8 *)(this + 0xd0) = uVar14;
    }
    if (uVar15 <= uVar5 && uVar5 - uVar15 != 0) {
      memset((void *)(*(long *)(this + 0xd0) + uVar15 * 4),0,(uVar5 - uVar15) * 4);
    }
  }
  iVar1 = *(int *)(this + 0x188);
  fVar17 = *(float *)(this + 0x150);
  fVar16 = *(float *)(this + 0x154);
  iVar4 = (int)*(undefined8 *)(this + 0xe0);
  if (iVar1 == 0x10e) {
    if (0 < iVar4) {
      fVar19 = *(float *)(this + 0xa4) / (*(float *)(this + 0x15c) - fVar16);
      lVar6 = (long)iVar4;
      fVar18 = *(float *)(this + 0xa0) / (*(float *)(this + 0x158) - fVar17);
      pfVar8 = *(float **)(this + 0xf0);
      pfVar9 = *(float **)(this + 0xd0);
      fVar17 = fVar17 - *(float *)(this + 0x9c) / fVar18;
      uVar5 = (lVar6 - 1U >> 1) + 1;
      fVar18 = *(float *)(this + 0xac) / fVar18;
      fVar16 = fVar16 - *(float *)(this + 0x98) / fVar19;
      fVar19 = *(float *)(this + 0xa8) / fVar19;
      if ((uVar5 < 4) ||
         ((uVar15 = lVar6 + 1U & 0x3ffffffffffffffe, pfVar9 < pfVar8 + uVar15 &&
          (pfVar8 < pfVar9 + uVar15)))) {
        lVar10 = 0;
      }
      else {
        uVar11 = uVar5 & 0xfffffffffffffffc;
        lVar10 = uVar11 << 1;
        auVar21 = NEON_fmov(0x3f800000,4);
        uVar15 = uVar11;
        pfVar12 = pfVar8;
        pfVar13 = pfVar9;
        do {
          fVar20 = *pfVar12;
          pfVar2 = pfVar12 + 1;
          fVar22 = pfVar12[2];
          fVar26 = pfVar12[3];
          fVar23 = pfVar12[4];
          fVar27 = pfVar12[5];
          fVar24 = pfVar12[6];
          fVar28 = pfVar12[7];
          pfVar12 = pfVar12 + 8;
          uVar15 = uVar15 - 4;
          *pfVar13 = fVar17 + fVar18 * (auVar21._0_4_ - *pfVar2);
          pfVar13[1] = fVar16 + fVar19 * fVar20;
          pfVar13[2] = fVar17 + fVar18 * (auVar21._4_4_ - fVar26);
          pfVar13[3] = fVar16 + fVar19 * fVar22;
          pfVar13[4] = fVar17 + fVar18 * (auVar21._8_4_ - fVar27);
          pfVar13[5] = fVar16 + fVar19 * fVar23;
          pfVar13[6] = fVar17 + fVar18 * (auVar21._12_4_ - fVar28);
          pfVar13[7] = fVar16 + fVar19 * fVar24;
          pfVar13 = pfVar13 + 8;
        } while (uVar15 != 0);
        if (uVar5 == uVar11) {
          return;
        }
      }
      pfVar8 = pfVar8 + lVar10 + 1;
      pfVar9 = pfVar9 + lVar10 + 1;
      do {
        lVar10 = lVar10 + 2;
        pfVar9[-1] = fVar17 + fVar18 * (1.0 - *pfVar8);
        pfVar12 = pfVar8 + -1;
        pfVar8 = pfVar8 + 2;
        *pfVar9 = fVar16 + fVar19 * *pfVar12;
        pfVar9 = pfVar9 + 2;
      } while (lVar10 < lVar6);
    }
  }
  else if (iVar1 == 0xb4) {
    if (0 < iVar4) {
      fVar20 = *(float *)(this + 0xa4) / (*(float *)(this + 0x15c) - fVar16);
      lVar6 = (long)iVar4;
      pfVar9 = *(float **)(this + 0xf0);
      pfVar8 = *(float **)(this + 0xd0);
      fVar18 = *(float *)(this + 0xa0) / (*(float *)(this + 0x158) - fVar17);
      uVar5 = (lVar6 - 1U >> 1) + 1;
      fVar19 = *(float *)(this + 0xa8) / fVar18;
      fVar17 = fVar17 - ((*(float *)(this + 0xa8) - *(float *)(this + 0x98)) -
                        *(float *)(this + 0xa0)) / fVar18;
      fVar16 = fVar16 - *(float *)(this + 0x9c) / fVar20;
      fVar20 = *(float *)(this + 0xac) / fVar20;
      if ((uVar5 < 4) ||
         ((uVar15 = lVar6 + 1U & 0x3ffffffffffffffe, pfVar8 < pfVar9 + uVar15 &&
          (pfVar9 < pfVar8 + uVar15)))) {
        lVar10 = 0;
      }
      else {
        uVar11 = uVar5 & 0xfffffffffffffffc;
        lVar10 = uVar11 << 1;
        auVar21 = NEON_fmov(0x3f800000,4);
        uVar15 = uVar11;
        pfVar12 = pfVar8;
        pfVar13 = pfVar9;
        do {
          fVar18 = *pfVar13;
          fVar26 = pfVar13[1];
          fVar22 = pfVar13[2];
          fVar27 = pfVar13[3];
          fVar23 = pfVar13[4];
          fVar28 = pfVar13[5];
          fVar24 = pfVar13[6];
          fVar25 = pfVar13[7];
          pfVar13 = pfVar13 + 8;
          uVar15 = uVar15 - 4;
          *pfVar12 = fVar17 + fVar19 * (auVar21._0_4_ - fVar18);
          pfVar12[1] = fVar16 + fVar20 * (auVar21._0_4_ - fVar26);
          pfVar12[2] = fVar17 + fVar19 * (auVar21._4_4_ - fVar22);
          pfVar12[3] = fVar16 + fVar20 * (auVar21._4_4_ - fVar27);
          pfVar12[4] = fVar17 + fVar19 * (auVar21._8_4_ - fVar23);
          pfVar12[5] = fVar16 + fVar20 * (auVar21._8_4_ - fVar28);
          pfVar12[6] = fVar17 + fVar19 * (auVar21._12_4_ - fVar24);
          pfVar12[7] = fVar16 + fVar20 * (auVar21._12_4_ - fVar25);
          pfVar12 = pfVar12 + 8;
        } while (uVar15 != 0);
        if (uVar5 == uVar11) {
          return;
        }
      }
      pfVar8 = pfVar8 + lVar10 + 1;
      pfVar9 = pfVar9 + lVar10 + 1;
      do {
        lVar10 = lVar10 + 2;
        pfVar8[-1] = fVar17 + fVar19 * (1.0 - pfVar9[-1]);
        *pfVar8 = fVar16 + fVar20 * (1.0 - *pfVar9);
        pfVar8 = pfVar8 + 2;
        pfVar9 = pfVar9 + 2;
      } while (lVar10 < lVar6);
    }
  }
  else if (iVar1 == 0x5a) {
    if (0 < iVar4) {
      lVar6 = (long)iVar4;
      fVar18 = *(float *)(this + 0xa4) / (*(float *)(this + 0x158) - fVar17);
      pfVar8 = *(float **)(this + 0xf0);
      pfVar9 = *(float **)(this + 0xd0);
      fVar20 = *(float *)(this + 0xa0) / (*(float *)(this + 0x15c) - fVar16);
      uVar5 = (lVar6 - 1U >> 1) + 1;
      fVar19 = *(float *)(this + 0xac) / fVar18;
      fVar17 = fVar17 - ((*(float *)(this + 0xac) - *(float *)(this + 0x9c)) -
                        *(float *)(this + 0xa4)) / fVar18;
      fVar16 = fVar16 - ((*(float *)(this + 0xa8) - *(float *)(this + 0x98)) -
                        *(float *)(this + 0xa0)) / fVar20;
      fVar20 = *(float *)(this + 0xa8) / fVar20;
      if ((uVar5 < 4) ||
         ((uVar15 = lVar6 + 1U & 0x3ffffffffffffffe, pfVar9 < pfVar8 + uVar15 &&
          (pfVar8 < pfVar9 + uVar15)))) {
        lVar10 = 0;
      }
      else {
        uVar11 = uVar5 & 0xfffffffffffffffc;
        lVar10 = uVar11 << 1;
        auVar21 = NEON_fmov(0x3f800000,4);
        uVar15 = uVar11;
        pfVar12 = pfVar8;
        pfVar13 = pfVar9;
        do {
          fVar18 = *pfVar12;
          pfVar2 = pfVar12 + 1;
          fVar22 = pfVar12[2];
          fVar26 = pfVar12[3];
          fVar23 = pfVar12[4];
          fVar27 = pfVar12[5];
          fVar24 = pfVar12[6];
          fVar28 = pfVar12[7];
          pfVar12 = pfVar12 + 8;
          uVar15 = uVar15 - 4;
          *pfVar13 = fVar17 + fVar19 * *pfVar2;
          pfVar13[1] = fVar16 + fVar20 * (auVar21._0_4_ - fVar18);
          pfVar13[2] = fVar17 + fVar19 * fVar26;
          pfVar13[3] = fVar16 + fVar20 * (auVar21._4_4_ - fVar22);
          pfVar13[4] = fVar17 + fVar19 * fVar27;
          pfVar13[5] = fVar16 + fVar20 * (auVar21._8_4_ - fVar23);
          pfVar13[6] = fVar17 + fVar19 * fVar28;
          pfVar13[7] = fVar16 + fVar20 * (auVar21._12_4_ - fVar24);
          pfVar13 = pfVar13 + 8;
        } while (uVar15 != 0);
        if (uVar5 == uVar11) {
          return;
        }
      }
      pfVar8 = pfVar8 + lVar10 + 1;
      pfVar9 = pfVar9 + lVar10 + 1;
      do {
        lVar10 = lVar10 + 2;
        pfVar9[-1] = fVar17 + fVar19 * *pfVar8;
        pfVar12 = pfVar8 + -1;
        pfVar8 = pfVar8 + 2;
        *pfVar9 = fVar16 + fVar20 * (1.0 - *pfVar12);
        pfVar9 = pfVar9 + 2;
      } while (lVar10 < lVar6);
    }
  }
  else if (0 < iVar4) {
    lVar6 = (long)iVar4;
    fVar18 = *(float *)(this + 0xa0) / (*(float *)(this + 0x158) - fVar17);
    pfVar9 = *(float **)(this + 0xf0);
    pfVar8 = *(float **)(this + 0xd0);
    fVar20 = *(float *)(this + 0xa4) / (*(float *)(this + 0x15c) - fVar16);
    uVar5 = (lVar6 - 1U >> 1) + 1;
    fVar19 = *(float *)(this + 0xa8) / fVar18;
    fVar17 = fVar17 - *(float *)(this + 0x98) / fVar18;
    fVar16 = fVar16 - ((*(float *)(this + 0xac) - *(float *)(this + 0x9c)) - *(float *)(this + 0xa4)
                      ) / fVar20;
    fVar20 = *(float *)(this + 0xac) / fVar20;
    if ((uVar5 < 4) ||
       ((uVar15 = lVar6 + 1U & 0x3ffffffffffffffe, pfVar8 < pfVar9 + uVar15 &&
        (pfVar9 < pfVar8 + uVar15)))) {
      lVar10 = 0;
    }
    else {
      uVar11 = uVar5 & 0xfffffffffffffffc;
      lVar10 = uVar11 << 1;
      uVar15 = uVar11;
      pfVar12 = pfVar8;
      pfVar13 = pfVar9;
      do {
        fVar18 = *pfVar13;
        fVar26 = pfVar13[1];
        fVar22 = pfVar13[2];
        fVar27 = pfVar13[3];
        fVar23 = pfVar13[4];
        fVar28 = pfVar13[5];
        fVar24 = pfVar13[6];
        fVar25 = pfVar13[7];
        pfVar13 = pfVar13 + 8;
        uVar15 = uVar15 - 4;
        *pfVar12 = fVar17 + fVar19 * fVar18;
        pfVar12[1] = fVar16 + fVar20 * fVar26;
        pfVar12[2] = fVar17 + fVar19 * fVar22;
        pfVar12[3] = fVar16 + fVar20 * fVar27;
        pfVar12[4] = fVar17 + fVar19 * fVar23;
        pfVar12[5] = fVar16 + fVar20 * fVar28;
        pfVar12[6] = fVar17 + fVar19 * fVar24;
        pfVar12[7] = fVar16 + fVar20 * fVar25;
        pfVar12 = pfVar12 + 8;
      } while (uVar15 != 0);
      if (uVar5 == uVar11) {
        return;
      }
    }
    pfVar8 = pfVar8 + lVar10 + 1;
    pfVar9 = pfVar9 + lVar10 + 1;
    do {
      lVar10 = lVar10 + 2;
      pfVar8[-1] = fVar17 + fVar19 * pfVar9[-1];
      *pfVar8 = fVar16 + fVar20 * *pfVar9;
      pfVar8 = pfVar8 + 2;
      pfVar9 = pfVar9 + 2;
    } while (lVar10 < lVar6);
  }
  return;
}

