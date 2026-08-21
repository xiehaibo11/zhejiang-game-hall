
/* dragonBones::RectangleBoundingBoxData::rectangleIntersectsSegment(float, float, float, float,
   float, float, float, float, dragonBones::Point*, dragonBones::Point*, dragonBones::Point*) */

undefined8
dragonBones::RectangleBoundingBoxData::rectangleIntersectsSegment
          (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
          float param_7,float param_8,Point *param_9,Point *param_10,Point *param_11)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  
  bVar1 = param_5 < param_1;
  bVar5 = param_1 < param_7;
  if ((param_2 < param_8 && (param_6 < param_2 && (bVar1 && bVar5))) &&
     (param_8 > param_4 && (param_6 < param_4 && (param_5 < param_3 && param_7 > param_3)))) {
    return 0xffffffff;
  }
  fVar10 = param_3;
  fVar11 = param_4;
  fVar14 = param_2;
  if (param_5 <= param_1) {
    if (param_1 <= param_7) {
      uVar6 = 0;
      goto joined_r0x00d37704;
    }
    uVar6 = 2;
    if (param_2 < param_6) goto LAB_00d3746c;
LAB_00d37674:
    if (param_8 < param_2) {
      uVar6 = uVar6 | 8;
    }
    if (param_3 < param_5) goto LAB_00d37688;
LAB_00d37478:
    if (param_7 < param_3) {
      uVar7 = 2;
      goto joined_r0x00d37690;
    }
    uVar8 = 0;
    uVar7 = 0;
    if (param_4 < param_6) goto LAB_00d37694;
LAB_00d3748c:
    if (param_8 < param_4) {
      uVar7 = uVar7 | 8;
    }
    if (uVar7 == 0 && uVar6 == 0) {
LAB_00d376a0:
      bVar1 = param_2 <= param_6 || (!bVar1 || !bVar5);
      goto joined_r0x00d376a8;
    }
  }
  else {
    uVar6 = 1;
joined_r0x00d37704:
    if (param_6 <= param_2) goto LAB_00d37674;
LAB_00d3746c:
    uVar6 = uVar6 | 4;
    if (param_5 <= param_3) goto LAB_00d37478;
LAB_00d37688:
    uVar7 = 1;
joined_r0x00d37690:
    uVar8 = uVar7;
    if (param_6 <= param_4) goto LAB_00d3748c;
LAB_00d37694:
    uVar7 = uVar8 | 4;
    if (uVar7 == 0 && uVar6 == 0) goto LAB_00d376a0;
  }
  uVar12 = 0;
  uVar2 = uVar12;
  uVar3 = uVar12;
  if (param_11 != (Point *)0x0) {
    uVar12 = 0x3fc90fdb;
    uVar2 = 0xbfc90fdb;
    uVar3 = 0x40490fdb;
  }
  do {
    if ((uVar7 & uVar6) != 0) {
      return 0;
    }
    uVar8 = uVar7;
    if (uVar6 != 0) {
      uVar8 = uVar6;
    }
    if ((uVar8 >> 2 & 1) == 0) {
      if (uVar8 >> 3 != 0) {
        fVar15 = param_1 + ((param_8 - fVar14) * (fVar10 - param_1)) / (fVar11 - fVar14);
        fVar13 = param_8;
        uVar16 = uVar12;
        goto LAB_00d37590;
      }
      if ((uVar8 >> 1 & 1) != 0) {
        fVar15 = param_7;
        fVar13 = fVar14 + ((fVar11 - fVar14) * (param_7 - param_1)) / (fVar10 - param_1);
        uVar16 = 0;
        goto LAB_00d37590;
      }
      fVar15 = 0.0;
      fVar13 = 0.0;
      uVar16 = 0;
      if ((uVar8 & 1) == 0) goto LAB_00d37590;
      fVar13 = fVar14 + ((fVar11 - fVar14) * (param_5 - param_1)) / (fVar10 - param_1);
      fVar15 = param_5;
      uVar16 = uVar3;
LAB_00d375d4:
      if (fVar15 <= param_7) {
        uVar9 = 0;
        goto joined_r0x00d375a8;
      }
      uVar9 = 2;
      if (fVar13 < param_6) goto LAB_00d375ac;
LAB_00d375e8:
      if (param_8 < fVar13) {
        uVar9 = uVar9 | 8;
      }
      uVar4 = uVar9;
      if (uVar8 == uVar6) goto LAB_00d375f8;
LAB_00d375b4:
      uVar7 = uVar4;
      fVar10 = fVar15;
      fVar11 = fVar13;
      if (param_11 != (Point *)0x0) {
        *(undefined4 *)(param_11 + 4) = uVar16;
      }
    }
    else {
      fVar15 = param_1 + ((param_6 - fVar14) * (fVar10 - param_1)) / (fVar11 - fVar14);
      fVar13 = param_6;
      uVar16 = uVar2;
LAB_00d37590:
      if (param_5 <= fVar15) goto LAB_00d375d4;
      uVar9 = 1;
joined_r0x00d375a8:
      if (param_6 <= fVar13) goto LAB_00d375e8;
LAB_00d375ac:
      uVar4 = uVar9 | 4;
      uVar9 = uVar9 | 4;
      if (uVar8 != uVar6) goto LAB_00d375b4;
LAB_00d375f8:
      uVar6 = uVar9;
      param_1 = fVar15;
      fVar14 = fVar13;
      if (param_11 != (Point *)0x0) {
        *(undefined4 *)param_11 = uVar16;
      }
    }
  } while (uVar7 != 0 || uVar6 != 0);
  bVar1 = param_2 <= param_6 || (!bVar1 || !bVar5);
joined_r0x00d376a8:
  if (param_2 < param_8 && !bVar1) {
    if (param_9 != (Point *)0x0) {
      *(float *)param_9 = fVar10;
      *(float *)(param_9 + 4) = fVar11;
    }
    if (param_10 != (Point *)0x0) {
      *(float *)param_10 = fVar10;
      *(float *)(param_10 + 4) = fVar10;
    }
    if (param_11 != (Point *)0x0) {
      *(float *)param_11 = *(float *)(param_11 + 4) + 3.1415927;
      return 2;
    }
    return 2;
  }
  if (param_8 <= param_4 || (param_4 <= param_6 || (param_3 <= param_5 || param_7 <= param_3))) {
    if (param_9 != (Point *)0x0) {
      *(float *)param_9 = param_1;
      *(float *)(param_9 + 4) = fVar14;
    }
    if (param_10 != (Point *)0x0) {
      *(float *)param_10 = fVar10;
      *(float *)(param_10 + 4) = fVar11;
    }
    return 3;
  }
  if (param_9 != (Point *)0x0) {
    *(float *)param_9 = param_1;
    *(float *)(param_9 + 4) = fVar14;
  }
  if (param_10 != (Point *)0x0) {
    *(float *)param_10 = param_1;
    *(float *)(param_10 + 4) = fVar14;
  }
  if (param_11 != (Point *)0x0) {
    *(float *)(param_11 + 4) = *(float *)param_11 + 3.1415927;
    return 1;
  }
  return 1;
}

