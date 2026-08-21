
/* dragonBones::EllipseBoundingBoxData::ellipseIntersectsSegment(float, float, float, float, float,
   float, float, float, dragonBones::Point*, dragonBones::Point*, dragonBones::Point*) */

undefined8
dragonBones::EllipseBoundingBoxData::ellipseIntersectsSegment
          (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
          float param_7,float param_8,Point *param_9,Point *param_10,Point *param_11)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  fVar12 = param_7 / param_8;
  fVar13 = fVar12 * param_2;
  fVar4 = param_3 - param_1;
  fVar11 = param_7 * param_7;
  fVar10 = fVar12 * param_4 - fVar13;
  fVar7 = SQRT(fVar4 * fVar4 + fVar10 * fVar10);
  fVar4 = fVar4 / fVar7;
  fVar10 = fVar10 / fVar7;
  fVar9 = (param_5 - param_1) * fVar4 + (param_6 - fVar13) * fVar10;
  fVar5 = (fVar11 - (param_1 * param_1 + fVar13 * fVar13)) + fVar9 * fVar9;
  if (0.0 <= fVar5) {
    fVar5 = SQRT(fVar5);
    fVar6 = fVar9 - fVar5;
    fVar9 = fVar9 + fVar5;
    uVar2 = (uint)(fVar7 < fVar6);
    if (fVar6 < 0.0) {
      uVar2 = 0xffffffff;
    }
    uVar3 = (uint)(fVar7 < fVar9);
    if (fVar9 < 0.0) {
      uVar3 = 0xffffffff;
    }
    if ((int)(uVar2 * uVar3) < 0) {
      return 0xffffffff;
    }
    if (uVar2 * uVar3 == 0) {
      fVar5 = fVar12 * fVar12;
      if (0.0 <= fVar6) {
        if (uVar3 != 1) {
          if (param_9 != (Point *)0x0) {
            fVar8 = fVar4 * fVar6 + param_1;
            fVar7 = (fVar13 + fVar10 * fVar6) / fVar12;
            *(float *)param_9 = fVar8;
            *(float *)(param_9 + 4) = fVar7;
            if (param_11 != (Point *)0x0) {
              fVar7 = atan2f(fVar5 * (fVar7 / fVar11),fVar8 / fVar11);
              *(float *)param_11 = fVar7;
            }
          }
          if (param_10 != (Point *)0x0) {
            fVar4 = fVar4 * fVar9 + param_1;
            fVar12 = (fVar13 + fVar10 * fVar9) / fVar12;
            *(float *)param_10 = fVar4;
            *(float *)(param_10 + 4) = fVar12;
            if (param_11 != (Point *)0x0) {
              fVar4 = atan2f(fVar5 * (fVar12 / fVar11),fVar4 / fVar11);
              *(float *)(param_11 + 4) = fVar4;
            }
          }
          return 3;
        }
        fVar4 = fVar4 * fVar6 + param_1;
        fVar12 = (fVar13 + fVar10 * fVar6) / fVar12;
        if (param_9 != (Point *)0x0) {
          *(float *)param_9 = fVar4;
          *(float *)(param_9 + 4) = fVar12;
        }
        if (param_10 != (Point *)0x0) {
          *(float *)param_10 = fVar4;
          *(float *)(param_10 + 4) = fVar12;
        }
        if (param_11 == (Point *)0x0) {
          return 1;
        }
        fVar4 = atan2f(fVar5 * (fVar12 / fVar11),fVar4 / fVar11);
        uVar1 = 1;
      }
      else {
        fVar4 = fVar4 * fVar9 + param_1;
        fVar12 = (fVar13 + fVar10 * fVar9) / fVar12;
        if (param_9 != (Point *)0x0) {
          *(float *)param_9 = fVar4;
          *(float *)(param_9 + 4) = fVar12;
        }
        if (param_10 != (Point *)0x0) {
          *(float *)param_10 = fVar4;
          *(float *)(param_10 + 4) = fVar12;
        }
        if (param_11 == (Point *)0x0) {
          return 2;
        }
        fVar4 = atan2f(fVar5 * (fVar12 / fVar11),fVar4 / fVar11);
        uVar1 = 2;
      }
      *(float *)param_11 = fVar4;
      *(float *)(param_11 + 4) = fVar4 + 3.1415927;
      return uVar1;
    }
  }
  return 0;
}

