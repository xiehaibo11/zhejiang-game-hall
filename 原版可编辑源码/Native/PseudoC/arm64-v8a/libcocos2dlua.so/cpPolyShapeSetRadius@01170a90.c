
void cpPolyShapeSetRadius(undefined4 param_1,undefined8 *param_2)

{
  if ((undefined *)*param_2 == &DAT_0172d2b0) {
    *(undefined4 *)(param_2 + 0x11) = param_1;
    return;
  }
  cpMessage("shape->klass == &polyClass",
            "/Users/minggo/SourceCode/cocos2d-x-3rd-party-libs-src/contrib/android-arm64/chipmunk/src/cpPolyShape.c"
            ,0x13a,1,1,"Shape is not a poly shape.");
                    /* WARNING: Subroutine does not return */
  abort();
}

