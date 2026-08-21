
void cpCircleShapeSetOffset(undefined4 param_1,undefined4 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  
  if ((undefined *)*param_3 != &DAT_0172d1b8) {
    cpMessage("shape->klass == &cpCircleShapeClass",
              "/Users/minggo/SourceCode/cocos2d-x-3rd-party-libs-src/contrib/android-arm64/chipmunk/src/cpShape.c"
              ,0x237,1,1,"Shape is not a circle shape.");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar2 = *(undefined4 *)(param_3 + 0x13);
  fVar3 = *(float *)(param_3 + 3);
  *(undefined4 *)(param_3 + 0x11) = param_1;
  *(undefined4 *)((long)param_3 + 0x8c) = param_2;
  uVar1 = cpMomentForCircle(0x3f800000,0,uVar2,0,0);
  uVar2 = cpAreaForCircle(0,uVar2);
  *(float *)(param_3 + 3) = fVar3;
  *(undefined4 *)((long)param_3 + 0x1c) = uVar1;
  *(undefined4 *)(param_3 + 4) = param_1;
  *(undefined4 *)((long)param_3 + 0x24) = param_2;
  *(undefined4 *)(param_3 + 5) = uVar2;
  if (0.0 < fVar3) {
    cpBodyAccumulateMassFromShapes(param_3[2]);
    return;
  }
  return;
}

