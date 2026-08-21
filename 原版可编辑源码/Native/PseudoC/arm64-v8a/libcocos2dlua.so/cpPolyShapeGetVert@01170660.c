
undefined4 cpPolyShapeGetVert(undefined8 *param_1,int param_2)

{
  char *pcVar1;
  undefined8 uVar2;
  char *pcVar3;
  
  if ((undefined *)*param_1 == &DAT_0172d2b0) {
    if (-1 < param_2) {
      if (param_2 < *(int *)((long)param_1 + 0x8c)) {
        return *(undefined4 *)
                (param_1[0x12] + (long)(*(int *)((long)param_1 + 0x8c) + param_2) * 0x10);
      }
    }
    pcVar1 = "0 <= i && i < count";
    pcVar3 = "Index out of range.";
    uVar2 = 0x10f;
  }
  else {
    pcVar1 = "shape->klass == &polyClass";
    pcVar3 = "Shape is not a poly shape.";
    uVar2 = 0x10c;
  }
  cpMessage(pcVar1,
            "/Users/minggo/SourceCode/cocos2d-x-3rd-party-libs-src/contrib/android-arm64/chipmunk/src/cpPolyShape.c"
            ,uVar2,1,1,pcVar3);
                    /* WARNING: Subroutine does not return */
  abort();
}

