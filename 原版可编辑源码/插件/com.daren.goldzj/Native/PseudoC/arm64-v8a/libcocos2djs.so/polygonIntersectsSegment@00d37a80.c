
/* dragonBones::PolygonBoundingBoxData::polygonIntersectsSegment(float, float, float, float,
   std::__ndk1::vector<float, std::__ndk1::allocator<float> > const&, dragonBones::Point*,
   dragonBones::Point*, dragonBones::Point*) */

int dragonBones::PolygonBoundingBoxData::polygonIntersectsSegment
              (float param_1,float param_2,float param_3,float param_4,vector *param_5,
              Point *param_6,Point *param_7,Point *param_8)

{
  long lVar1;
  float *pfVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
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
  
  lVar3 = *(long *)param_5;
  fVar11 = param_3 + 1e-06;
  if (param_1 != param_3) {
    fVar11 = param_1;
  }
  fVar7 = param_4 + 1e-06;
  if (param_2 != param_4) {
    fVar7 = param_2;
  }
  if (*(long *)(param_5 + 8) - lVar3 == 0) {
    iVar4 = 0;
  }
  else {
    uVar6 = *(long *)(param_5 + 8) - lVar3 >> 2;
    fVar21 = fVar7 - param_4;
    lVar1 = lVar3 + uVar6 * 4;
    iVar4 = 0;
    uVar5 = 0;
    fVar15 = fVar11 - param_3;
    fVar23 = 0.0;
    fVar25 = 0.0;
    fVar9 = 0.0;
    fVar24 = 0.0;
    fVar10 = 0.0;
    fVar22 = fVar11 * param_4 - fVar7 * param_3;
    fVar20 = 0.0;
    fVar12 = *(float *)(lVar1 + -4);
    fVar18 = *(float *)(lVar1 + -8);
    do {
      pfVar2 = (float *)(lVar3 + uVar5 * 4);
      fVar19 = *pfVar2;
      fVar17 = pfVar2[1];
      fVar16 = fVar19 + 1e-06;
      if (fVar18 != fVar19) {
        fVar16 = fVar18;
      }
      fVar18 = fVar17 + 1e-06;
      if (fVar12 != fVar17) {
        fVar18 = fVar12;
      }
      fVar13 = fVar17 * fVar16 - fVar19 * fVar18;
      fVar12 = fVar15 * (fVar18 - fVar17) - fVar21 * (fVar16 - fVar19);
      fVar14 = (fVar22 * (fVar16 - fVar19) - fVar15 * fVar13) / fVar12;
      if (((((fVar16 <= fVar14) && (fVar14 <= fVar19)) || ((fVar19 <= fVar14 && (fVar14 <= fVar16)))
           ) && (((fVar15 == 0.0 || ((fVar11 <= fVar14 && (fVar14 <= param_3)))) ||
                 ((param_3 <= fVar14 && (fVar14 <= fVar11)))))) &&
         ((((fVar12 = (fVar22 * (fVar18 - fVar17) - fVar21 * fVar13) / fVar12, fVar18 <= fVar12 &&
            (fVar12 <= fVar17)) || ((fVar17 <= fVar12 && (fVar12 <= fVar18)))) &&
          (((fVar21 == 0.0 || ((fVar7 <= fVar12 && (fVar12 <= param_4)))) ||
           ((param_4 <= fVar12 && (fVar12 <= fVar7)))))))) {
        if (param_7 == (Point *)0x0) {
          iVar4 = iVar4 + 1;
          fVar9 = fVar14;
          fVar10 = fVar14;
          fVar20 = fVar12;
          fVar24 = fVar12;
          if (param_8 != (Point *)0x0) {
            fVar11 = atan2f(fVar17 - fVar18,fVar19 - fVar16);
            *(float *)param_8 = fVar11 - 1.5707964;
            *(float *)(param_8 + 4) = fVar11 - 1.5707964;
          }
          break;
        }
        fVar8 = fVar14 - fVar11;
        fVar13 = -fVar8;
        if (0.0 <= fVar8) {
          fVar13 = fVar8;
        }
        if (iVar4 == 0) {
          fVar23 = fVar13;
          fVar25 = fVar13;
          fVar10 = fVar14;
          fVar9 = fVar14;
          fVar24 = fVar12;
          fVar20 = fVar12;
          if (param_8 != (Point *)0x0) {
            fVar9 = atan2f(fVar17 - fVar18,fVar19 - fVar16);
            *(float *)param_8 = fVar9 - 1.5707964;
            *(float *)(param_8 + 4) = fVar9 - 1.5707964;
            fVar9 = fVar14;
          }
        }
        else {
          if ((fVar13 < fVar23) &&
             (fVar23 = fVar13, fVar9 = fVar14, fVar20 = fVar12, param_8 != (Point *)0x0)) {
            fVar9 = atan2f(fVar17 - fVar18,fVar19 - fVar16);
            *(float *)param_8 = fVar9 - 1.5707964;
            fVar9 = fVar14;
          }
          if ((fVar25 < fVar13) &&
             (fVar25 = fVar13, fVar10 = fVar14, fVar24 = fVar12, param_8 != (Point *)0x0)) {
            fVar10 = atan2f(fVar17 - fVar18,fVar19 - fVar16);
            *(float *)(param_8 + 4) = fVar10 - 1.5707964;
            fVar10 = fVar14;
          }
        }
        iVar4 = iVar4 + 1;
      }
      uVar5 = uVar5 + 2;
      fVar12 = fVar17;
      fVar18 = fVar19;
    } while (uVar5 < uVar6);
    if (iVar4 == 1) {
      if (param_6 != (Point *)0x0) {
        *(float *)param_6 = fVar9;
        *(float *)(param_6 + 4) = fVar20;
      }
      if (param_7 != (Point *)0x0) {
        *(float *)param_7 = fVar9;
        *(float *)(param_7 + 4) = fVar20;
      }
      if (param_8 == (Point *)0x0) {
        iVar4 = 1;
      }
      else {
        iVar4 = 1;
        *(float *)(param_8 + 4) = *(float *)param_8 + 3.1415927;
      }
    }
    else if (1 < iVar4) {
      iVar4 = iVar4 + 1;
      if (param_6 != (Point *)0x0) {
        *(float *)param_6 = fVar9;
        *(float *)(param_6 + 4) = fVar20;
      }
      if (param_7 != (Point *)0x0) {
        *(float *)param_7 = fVar10;
        *(float *)(param_7 + 4) = fVar24;
      }
    }
  }
  return iVar4;
}

