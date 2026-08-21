
/* WARNING: Type propagation algorithm not settling */
/* dragonBones::RectangleBoundingBoxData::rectangleIntersectsSegment(float, float, float, float,
   float, float, float, float, dragonBones::Point*, dragonBones::Point*, dragonBones::Point*) */

undefined8
dragonBones::RectangleBoundingBoxData::rectangleIntersectsSegment
          (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
          float param_7,float param_8,Point *param_9,Point *param_10,Point *param_11)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  
  if ((param_2 < param_8 && (param_6 < param_2 && (param_5 < param_1 && param_1 < param_7))) &&
     (param_8 > param_4 && (param_6 < param_4 && (param_5 < param_3 && param_7 > param_3)))) {
                    /* catch() { ... } // from try @ 00da2eb8 with catch @ 00da2f4c */
                    /* catch() { ... } // from try @ 00da2e28 with catch @ 00da2f50 */
    return 0xffffffff;
  }
                    /* catch() { ... } // from try @ 00da2e4c with catch @ 00da2f54 */
  if (param_5 <= param_1) {
    if (param_7 < param_1) {
      uVar5 = 2;
    }
    else {
      uVar5 = 0;
    }
  }
  else {
    uVar5 = 1;
  }
  if (param_6 <= param_2) {
    if (param_8 < param_2) {
      uVar5 = uVar5 | 8;
    }
  }
  else {
    uVar5 = uVar5 | 4;
                    /* catch() { ... } // from try @ 00da2d10 with catch @ 00da2f6c */
  }
  if (param_5 <= param_3) {
    if (param_7 < param_3) {
                    /* try { // try from 00da2fbc to 00ea3043 has its CatchHandler @ 00da2fbc
                       catch() { ... } // from try @ 00da2fbc with catch @ 00da2fbc
                       catch() { ... } // from try @ 00da37d0 with catch @ 00da2fbc */
      uVar6 = 2;
    }
    else {
      uVar6 = 0;
    }
  }
  else {
    uVar6 = 1;
  }
  if (param_4 < param_6) {
    uVar6 = uVar6 | 4;
  }
  else if (param_8 < param_4) {
    uVar6 = uVar6 | 8;
  }
  fVar13 = param_1;
  fVar8 = param_3;
  fVar11 = param_2;
  fVar9 = param_4;
  if (uVar6 == 0 && uVar5 == 0) {
LAB_00da316c:
    if (param_2 < param_8 && (param_6 < param_2 && (param_5 < param_1 && param_1 < param_7))) {
      if (param_9 != (Point *)0x0) {
        *(float *)param_9 = fVar8;
        *(float *)(param_9 + 4) = fVar9;
      }
      if (param_10 != (Point *)0x0) {
        *(float *)param_10 = fVar8;
        *(float *)(param_10 + 4) = fVar8;
      }
      if (param_11 == (Point *)0x0) {
        return 2;
      }
      *(float *)param_11 = *(float *)(param_11 + 4) + 3.1415927;
      return 2;
    }
    if (param_8 <= param_4 || (param_4 <= param_6 || (param_3 <= param_5 || param_7 <= param_3))) {
      if (param_9 != (Point *)0x0) {
        *(float *)param_9 = fVar13;
        *(float *)(param_9 + 4) = fVar11;
      }
      if (param_10 != (Point *)0x0) {
        *(float *)param_10 = fVar8;
        *(float *)(param_10 + 4) = fVar9;
      }
      return 3;
    }
    if (param_9 != (Point *)0x0) {
      *(float *)param_9 = fVar13;
      *(float *)(param_9 + 4) = fVar11;
    }
    if (param_10 != (Point *)0x0) {
      *(float *)param_10 = fVar13;
      *(float *)(param_10 + 4) = fVar11;
    }
    if (param_11 == (Point *)0x0) {
      return 1;
    }
    *(float *)(param_11 + 4) = *(float *)param_11 + 3.1415927;
    return 1;
  }
  uVar10 = 0;
  uVar2 = uVar10;
  uVar3 = uVar10;
  if (param_11 != (Point *)0x0) {
    uVar10 = 0x3fc90fdb;
    uVar2 = 0xbfc90fdb;
    uVar3 = 0x40490fdb;
  }
  uVar1 = uVar6 & uVar5;
  do {
    if (uVar1 != 0) {
      return 0;
    }
                    /* try { // try from 00da3044 to 00ea3047 has its CatchHandler @ 00da3848 */
    uVar1 = uVar6;
    if (uVar5 != 0) {
      uVar1 = uVar5;
    }
    fVar16 = fVar8 - fVar13;
    fVar17 = fVar9 - fVar11;
    if ((uVar1 >> 2 & 1) == 0) {
      if (uVar1 >> 3 != 0) {
        fVar14 = fVar13 + ((param_8 - fVar11) * fVar16) / fVar17;
        fVar12 = param_8;
        uVar15 = uVar10;
        goto LAB_00da30e4;
      }
      if ((uVar1 >> 1 & 1) != 0) {
        fVar14 = param_7;
        fVar12 = fVar11 + (fVar17 * (param_7 - fVar13)) / fVar16;
        uVar15 = 0;
        goto LAB_00da30e4;
      }
      fVar14 = 0.0;
      fVar12 = 0.0;
      uVar15 = 0;
      if ((uVar1 & 1) == 0) goto LAB_00da30e4;
                    /* try { // try from 00da307c to 00ea3083 has its CatchHandler @ 00da3844 */
      fVar12 = fVar11 + (fVar17 * (param_5 - fVar13)) / fVar16;
      fVar14 = param_5;
      uVar15 = uVar3;
LAB_00da310c:
      if (fVar14 <= param_7) {
        uVar7 = 0;
        goto joined_r0x00da30fc;
      }
      uVar7 = 2;
      if (param_6 <= fVar12) goto LAB_00da3120;
LAB_00da3100:
      uVar4 = uVar7 | 4;
      uVar7 = uVar7 | 4;
                    /* try { // try from 00da3104 to 00ea310f has its CatchHandler @ 00da3854 */
      if (uVar1 == uVar5) goto LAB_00da3130;
LAB_00da3140:
      uVar6 = uVar4;
      fVar8 = fVar14;
      fVar9 = fVar12;
      if (param_11 != (Point *)0x0) {
        *(undefined4 *)(param_11 + 4) = uVar15;
      }
    }
    else {
      fVar14 = fVar13 + ((param_6 - fVar11) * fVar16) / fVar17;
      fVar12 = param_6;
      uVar15 = uVar2;
LAB_00da30e4:
                    /* try { // try from 00da30ec to 00ea30f3 has its CatchHandler @ 00da3840 */
      if (param_5 <= fVar14) goto LAB_00da310c;
      uVar7 = 1;
joined_r0x00da30fc:
      if (fVar12 < param_6) goto LAB_00da3100;
LAB_00da3120:
      if (param_8 < fVar12) {
        uVar7 = uVar7 | 8;
      }
      uVar4 = uVar7;
      if (uVar1 != uVar5) goto LAB_00da3140;
LAB_00da3130:
      fVar11 = fVar12;
      fVar13 = fVar14;
      uVar5 = uVar7;
      if (param_11 != (Point *)0x0) {
        *(undefined4 *)param_11 = uVar15;
      }
    }
    if (uVar6 == 0 && uVar5 == 0) goto LAB_00da316c;
    uVar1 = uVar6 & uVar5;
  } while( true );
}

