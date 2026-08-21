
void cpCircleShapeSetRadius(undefined1 param_1 [16],undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  
  if ((undefined *)*param_2 != &DAT_0172d1b8) {
    cpMessage("shape->klass == &cpCircleShapeClass",
              "/Users/minggo/SourceCode/cocos2d-x-3rd-party-libs-src/contrib/android-arm64/chipmunk/src/cpShape.c"
              ,0x22a,1,1,"Shape is not a circle shape.");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  fVar5 = *(float *)(param_2 + 3);
  uVar1 = *(undefined4 *)(param_2 + 0x11);
  uVar2 = *(undefined4 *)((long)param_2 + 0x8c);
  *(int *)(param_2 + 0x13) = param_1._0_4_;
  uVar3 = cpMomentForCircle(0x3f800000,0,param_1._0_8_,0,0);
  uVar4 = cpAreaForCircle(0,param_1._0_8_);
  *(float *)(param_2 + 3) = fVar5;
  *(undefined4 *)((long)param_2 + 0x1c) = uVar3;
  *(undefined4 *)(param_2 + 4) = uVar1;
  *(undefined4 *)((long)param_2 + 0x24) = uVar2;
  *(undefined4 *)(param_2 + 5) = uVar4;
  if (0.0 < fVar5) {
    cpBodyAccumulateMassFromShapes(param_2[2]);
    return;
  }
  return;
}

