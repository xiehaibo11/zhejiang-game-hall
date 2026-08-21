
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
  fVar9 = param_3 + 1e-06;
  if (param_1 != param_3) {
    fVar9 = param_1;
  }
  fVar10 = param_4 + 1e-06;
  if (param_2 != param_4) {
    fVar10 = param_2;
  }
  if (*(long *)(param_5 + 8) - lVar3 == 0) {
    iVar4 = 0;
  }
  else {
                    /* try { // try from 00da35c8 to 00ea35cf has its CatchHandler @ 00da383c */
    uVar6 = *(long *)(param_5 + 8) - lVar3 >> 2;
                    /* try { // try from 00da35d8 to 00ea35df has its CatchHandler @ 00da3838 */
    fVar19 = fVar10 - param_4;
                    /* try { // try from 00da35e8 to 00ea35ef has its CatchHandler @ 00da3834 */
    lVar1 = lVar3 + uVar6 * 4;
                    /* try { // try from 00da35f8 to 00ea35ff has its CatchHandler @ 00da3830 */
    iVar4 = 0;
                    /* try { // try from 00da3608 to 00ea360f has its CatchHandler @ 00da382c */
    uVar5 = 0;
    fVar18 = fVar9 - param_3;
    fVar8 = 0.0;
                    /* try { // try from 00da3618 to 00ea361b has its CatchHandler @ 00da3850 */
    fVar25 = 0.0;
    fVar21 = 0.0;
    fVar23 = 0.0;
    fVar24 = 0.0;
    fVar22 = fVar9 * param_4 - fVar10 * param_3;
    fVar20 = 0.0;
    fVar12 = *(float *)(lVar1 + -4);
    fVar16 = *(float *)(lVar1 + -8);
    do {
      pfVar2 = (float *)(lVar3 + uVar5 * 4);
      fVar14 = *pfVar2;
      fVar13 = pfVar2[1];
      fVar15 = fVar14 + 1e-06;
      if (fVar16 != fVar14) {
        fVar15 = fVar16;
      }
      fVar16 = fVar13 + 1e-06;
      if (fVar12 != fVar13) {
        fVar16 = fVar12;
      }
                    /* try { // try from 00da36a8 to 00ea36ef has its CatchHandler @ 00da3850 */
      fVar12 = fVar13 * fVar15 - fVar14 * fVar16;
      fVar11 = fVar18 * (fVar16 - fVar13) - fVar19 * (fVar15 - fVar14);
      fVar17 = (fVar22 * (fVar15 - fVar14) - fVar18 * fVar12) / fVar11;
                    /* try { // try from 00da36f8 to 00ea36ff has its CatchHandler @ 00da3824 */
                    /* try { // try from 00da3708 to 00ea370f has its CatchHandler @ 00da3820 */
                    /* try { // try from 00da3718 to 00ea371b has its CatchHandler @ 00da384c */
                    /* try { // try from 00da3758 to 00ea375f has its CatchHandler @ 00da381c */
      if (((((fVar15 <= fVar17) && (fVar17 <= fVar14)) || ((fVar14 <= fVar17 && (fVar17 <= fVar15)))
           ) && (((fVar18 == 0.0 || ((fVar9 <= fVar17 && (fVar17 <= param_3)))) ||
                 ((param_3 <= fVar17 && (fVar17 <= fVar9)))))) &&
         ((((fVar11 = (fVar22 * (fVar16 - fVar13) - fVar19 * fVar12) / fVar11, fVar16 <= fVar11 &&
            (fVar11 <= fVar13)) || ((fVar13 <= fVar11 && (fVar11 <= fVar16)))) &&
          (((fVar19 == 0.0 || ((fVar10 <= fVar11 && (fVar11 <= param_4)))) ||
           ((param_4 <= fVar11 && (fVar11 <= fVar10)))))))) {
        fVar16 = fVar13 - fVar16;
        fVar15 = fVar14 - fVar15;
                    /* try { // try from 00da3788 to 00ea37cf has its CatchHandler @ 00da384c */
        if (param_7 == (Point *)0x0) {
          iVar4 = iVar4 + 1;
          fVar24 = fVar17;
          fVar23 = fVar11;
          if (param_8 != (Point *)0x0) {
            fVar9 = atan2f(fVar16,fVar15);
            *(float *)param_8 = fVar9 - 1.5707964;
            *(float *)(param_8 + 4) = fVar9 - 1.5707964;
          }
          break;
        }
        fVar7 = fVar17 - fVar9;
        fVar12 = -fVar7;
        if (0.0 <= fVar7) {
          fVar12 = fVar7;
        }
        if (iVar4 == 0) {
                    /* catch() { ... } // from try @ 00da30ec with catch @ 00da3840 */
          fVar8 = fVar12;
          fVar25 = fVar12;
          fVar24 = fVar17;
          fVar21 = fVar17;
          fVar23 = fVar11;
          fVar20 = fVar11;
          if (param_8 != (Point *)0x0) {
                    /* catch() { ... } // from try @ 00da307c with catch @ 00da3844 */
                    /* catch() { ... } // from try @ 00da3044 with catch @ 00da3848 */
                    /* catch() { ... } // from try @ 00da3718 with catch @ 00da384c
                       catch() { ... } // from try @ 00da3788 with catch @ 00da384c */
            fVar16 = atan2f(fVar16,fVar15);
                    /* catch() { ... } // from try @ 00da3618 with catch @ 00da3850
                       catch() { ... } // from try @ 00da36a8 with catch @ 00da3850 */
                    /* catch() { ... } // from try @ 00da3104 with catch @ 00da3854 */
            *(float *)param_8 = fVar16 - 1.5707964;
            *(float *)(param_8 + 4) = fVar16 - 1.5707964;
          }
        }
        else {
          if ((fVar12 < fVar8) &&
             (fVar8 = fVar12, fVar21 = fVar17, fVar20 = fVar11, param_8 != (Point *)0x0)) {
            fVar8 = atan2f(fVar16,fVar15);
                    /* try { // try from 00da37d0 to 00ea386f has its CatchHandler @ 00da2fbc */
            *(float *)param_8 = fVar8 - 1.5707964;
            fVar8 = fVar12;
          }
          if ((fVar25 < fVar12) &&
             (fVar25 = fVar12, fVar24 = fVar17, fVar23 = fVar11, param_8 != (Point *)0x0)) {
            fVar16 = atan2f(fVar16,fVar15);
                    /* catch() { ... } // from try @ 00da3758 with catch @ 00da381c */
                    /* catch() { ... } // from try @ 00da3708 with catch @ 00da3820 */
                    /* catch() { ... } // from try @ 00da36f8 with catch @ 00da3824 */
                    /* catch() { ... } // from try @ 00da365c with catch @ 00da3828 */
                    /* catch() { ... } // from try @ 00da3608 with catch @ 00da382c */
                    /* catch() { ... } // from try @ 00da35f8 with catch @ 00da3830 */
                    /* catch() { ... } // from try @ 00da35e8 with catch @ 00da3834 */
                    /* catch() { ... } // from try @ 00da35d8 with catch @ 00da3838 */
            *(float *)(param_8 + 4) = fVar16 - 1.5707964;
                    /* catch() { ... } // from try @ 00da35c8 with catch @ 00da383c */
          }
        }
        iVar4 = iVar4 + 1;
                    /* try { // try from 00da365c to 00ea3663 has its CatchHandler @ 00da3828 */
      }
      uVar5 = uVar5 + 2;
      fVar12 = fVar13;
      fVar16 = fVar14;
      fVar17 = fVar21;
      fVar11 = fVar20;
    } while (uVar5 < uVar6);
    if (iVar4 == 1) {
      if (param_6 != (Point *)0x0) {
        *(float *)param_6 = fVar17;
        *(float *)(param_6 + 4) = fVar11;
      }
      if (param_7 != (Point *)0x0) {
        *(float *)param_7 = fVar17;
        *(float *)(param_7 + 4) = fVar11;
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
        *(float *)param_6 = fVar17;
        *(float *)(param_6 + 4) = fVar11;
      }
      if (param_7 != (Point *)0x0) {
        *(float *)param_7 = fVar24;
        *(float *)(param_7 + 4) = fVar23;
      }
    }
  }
  return iVar4;
}

