
void cpSegmentShapeSetRadius(undefined8 param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  if ((undefined *)*param_2 != &DAT_0172d1e0) {
    cpMessage("shape->klass == &cpSegmentShapeClass",
              "/Users/minggo/SourceCode/cocos2d-x-3rd-party-libs-src/contrib/android-arm64/chipmunk/src/cpShape.c"
              ,0x253,1,1,"Shape is not a segment shape.");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  fVar4 = *(float *)(param_2 + 0x11);
  fVar5 = *(float *)((long)param_2 + 0x8c);
  fVar6 = *(float *)(param_2 + 0x12);
  fVar7 = *(float *)((long)param_2 + 0x94);
  fVar8 = *(float *)(param_2 + 3);
  fVar3 = (float)param_1;
  *(float *)(param_2 + 0x17) = fVar3;
  uVar1 = cpMomentForBox(0x3f800000,
                         SQRT((fVar4 - fVar6) * (fVar4 - fVar6) + (fVar5 - fVar7) * (fVar5 - fVar7))
                         + fVar3 + fVar3);
  uVar2 = cpAreaForSegment(fVar4,fVar5,fVar6,fVar7,param_1);
  *(float *)(param_2 + 3) = fVar8;
  *(float *)((long)param_2 + 0x24) = (fVar7 + fVar5) * 0.5;
  *(undefined4 *)(param_2 + 5) = uVar2;
  *(undefined4 *)((long)param_2 + 0x1c) = uVar1;
  *(float *)(param_2 + 4) = (fVar6 + fVar4) * 0.5;
  if (0.0 < fVar8) {
    cpBodyAccumulateMassFromShapes(param_2[2]);
    return;
  }
  return;
}

