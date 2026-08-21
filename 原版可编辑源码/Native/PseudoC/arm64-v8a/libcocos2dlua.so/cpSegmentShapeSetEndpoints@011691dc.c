
void cpSegmentShapeSetEndpoints
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  if ((undefined *)*param_5 != &DAT_0172d1e0) {
    cpMessage("shape->klass == &cpSegmentShapeClass",
              "/Users/minggo/SourceCode/cocos2d-x-3rd-party-libs-src/contrib/android-arm64/chipmunk/src/cpShape.c"
              ,0x244,1,1,"Shape is not a segment shape.");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  fVar7 = (float)param_3;
  fVar9 = (float)param_1;
  fVar6 = (float)param_4;
  fVar8 = (float)param_2;
  fVar4 = fVar6 - fVar8;
  fVar3 = fVar7 - fVar9;
  fVar10 = *(float *)(param_5 + 0x17);
  fVar5 = 1.0 / (SQRT(fVar4 * fVar4 + fVar3 * fVar3) + 1.1754944e-38);
  fVar11 = *(float *)(param_5 + 3);
  *(float *)(param_5 + 0x13) = -(fVar4 * fVar5);
  *(float *)((long)param_5 + 0x9c) = fVar5 * fVar3;
  *(float *)(param_5 + 0x11) = fVar9;
  *(float *)((long)param_5 + 0x8c) = fVar8;
  *(float *)(param_5 + 0x12) = fVar7;
  *(float *)((long)param_5 + 0x94) = fVar6;
  uVar1 = cpMomentForBox(0x3f800000,
                         SQRT((fVar9 - fVar7) * (fVar9 - fVar7) + (fVar8 - fVar6) * (fVar8 - fVar6))
                         + fVar10 + fVar10);
  uVar2 = cpAreaForSegment(param_1,param_2,param_3,param_4,fVar10);
  *(float *)(param_5 + 3) = fVar11;
  *(float *)((long)param_5 + 0x24) = (fVar6 + fVar8) * 0.5;
  *(undefined4 *)(param_5 + 5) = uVar2;
  *(undefined4 *)((long)param_5 + 0x1c) = uVar1;
  *(float *)(param_5 + 4) = (fVar7 + fVar9) * 0.5;
  if (0.0 < fVar11) {
    cpBodyAccumulateMassFromShapes(param_5[2]);
    return;
  }
  return;
}

