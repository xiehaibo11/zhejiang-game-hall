
void spMeshAttachment_updateUVs(long param_1)

{
  ulong uVar1;
  int iVar2;
  float fVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  ulong uVar7;
  ulong uVar8;
  float *pfVar9;
  long lVar10;
  long lVar11;
  float *pfVar12;
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
  
  pfVar12 = (float *)(param_1 + 0x6c);
  iVar2 = *(int *)(param_1 + 0x40);
  lVar11 = (long)iVar2;
  fVar14 = *(float *)(param_1 + 0x70) - *(float *)(param_1 + 0x68);
  fVar13 = *(float *)(param_1 + 0x74) - *pfVar12;
  _spFree(*(void **)(param_1 + 0x90));
  lVar10 = lVar11 * 4;
  pfVar5 = (float *)_spMalloc(lVar10,
                              "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/MeshAttachment.c"
                              ,0x3d);
  *(float **)(param_1 + 0x90) = pfVar5;
  if (*(int *)(param_1 + 0x78) == 0) {
    if (0 < iVar2) {
      pfVar6 = *(float **)(param_1 + 0x88);
      uVar1 = (lVar11 - 1U >> 1) + 1;
      if (uVar1 < 4) {
        lVar10 = 0;
      }
      else {
        pfVar9 = (float *)((long)pfVar5 + (lVar10 - 4U & 0xfffffffffffffff8) + 8);
        lVar10 = 0;
        if (((float *)(param_1 + 0x6dU) <= pfVar5 || pfVar9 <= pfVar12) &&
           (pfVar6 + (lVar11 + 1U & 0x3ffffffffffffffe) <= pfVar5 || pfVar9 <= pfVar6)) {
          uVar7 = uVar1 & 0xfffffffffffffffc;
          lVar10 = uVar7 << 1;
          uVar8 = uVar7;
          pfVar12 = pfVar5;
          pfVar9 = pfVar6;
          do {
            fVar3 = *(float *)(param_1 + 0x68);
            fVar16 = *pfVar9;
            fVar20 = pfVar9[1];
            fVar17 = pfVar9[2];
            fVar21 = pfVar9[3];
            fVar18 = pfVar9[4];
            fVar23 = pfVar9[5];
            fVar19 = pfVar9[6];
            fVar22 = pfVar9[7];
            pfVar9 = pfVar9 + 8;
            fVar15 = *(float *)(param_1 + 0x6c);
            uVar8 = uVar8 - 4;
            *pfVar12 = fVar3 + fVar14 * fVar16;
            pfVar12[1] = fVar15 + fVar13 * fVar20;
            pfVar12[2] = fVar3 + fVar14 * fVar17;
            pfVar12[3] = fVar15 + fVar13 * fVar21;
            pfVar12[4] = fVar3 + fVar14 * fVar18;
            pfVar12[5] = fVar15 + fVar13 * fVar23;
            pfVar12[6] = fVar3 + fVar14 * fVar19;
            pfVar12[7] = fVar15 + fVar13 * fVar22;
            pfVar12 = pfVar12 + 8;
          } while (uVar8 != 0);
          if (uVar1 == uVar7) {
            return;
          }
        }
      }
      pfVar12 = pfVar6 + lVar10 + 1;
      pfVar5 = pfVar5 + lVar10 + 1;
      do {
        lVar10 = lVar10 + 2;
        pfVar5[-1] = *(float *)(param_1 + 0x68) + fVar14 * pfVar12[-1];
        *pfVar5 = *(float *)(param_1 + 0x6c) + fVar13 * *pfVar12;
        pfVar12 = pfVar12 + 2;
        pfVar5 = pfVar5 + 2;
      } while (lVar10 < lVar11);
    }
  }
  else if (0 < iVar2) {
    pfVar6 = *(float **)(param_1 + 0x88);
    uVar1 = (lVar11 - 1U >> 1) + 1;
    if (uVar1 < 4) {
      lVar10 = 0;
    }
    else {
      pfVar9 = (float *)((long)pfVar5 + (lVar10 - 4U & 0xfffffffffffffff8) + 8);
      lVar10 = 0;
      if (((float *)(param_1 + 0x6dU) <= pfVar5 || pfVar9 <= pfVar12) &&
         (pfVar6 + (lVar11 + 1U & 0x3ffffffffffffffe) <= pfVar5 || pfVar9 <= pfVar6)) {
        uVar7 = uVar1 & 0xfffffffffffffffc;
        lVar10 = uVar7 << 1;
        uVar8 = uVar7;
        pfVar12 = pfVar6;
        pfVar9 = pfVar5;
        do {
          fVar3 = *(float *)(param_1 + 0x68);
          fVar15 = *pfVar12;
          pfVar4 = pfVar12 + 1;
          fVar16 = pfVar12[2];
          fVar19 = pfVar12[3];
          fVar17 = pfVar12[4];
          fVar20 = pfVar12[5];
          fVar18 = pfVar12[6];
          fVar21 = pfVar12[7];
          pfVar12 = pfVar12 + 8;
          uVar8 = uVar8 - 4;
          fVar23 = fVar13 + *(float *)(param_1 + 0x6c);
          *pfVar9 = fVar3 + fVar14 * *pfVar4;
          pfVar9[1] = fVar23 - fVar13 * fVar15;
          pfVar9[2] = fVar3 + fVar14 * fVar19;
          pfVar9[3] = fVar23 - fVar13 * fVar16;
          pfVar9[4] = fVar3 + fVar14 * fVar20;
          pfVar9[5] = fVar23 - fVar13 * fVar17;
          pfVar9[6] = fVar3 + fVar14 * fVar21;
          pfVar9[7] = fVar23 - fVar13 * fVar18;
          pfVar9 = pfVar9 + 8;
        } while (uVar8 != 0);
        if (uVar1 == uVar7) {
          return;
        }
      }
    }
    pfVar6 = pfVar6 + lVar10 + 1;
    pfVar5 = pfVar5 + lVar10 + 1;
    do {
      lVar10 = lVar10 + 2;
      pfVar5[-1] = *(float *)(param_1 + 0x68) + fVar14 * *pfVar6;
      pfVar12 = pfVar6 + -1;
      pfVar6 = pfVar6 + 2;
      *pfVar5 = (fVar13 + *(float *)(param_1 + 0x6c)) - fVar13 * *pfVar12;
      pfVar5 = pfVar5 + 2;
    } while (lVar10 < lVar11);
  }
  return;
}

