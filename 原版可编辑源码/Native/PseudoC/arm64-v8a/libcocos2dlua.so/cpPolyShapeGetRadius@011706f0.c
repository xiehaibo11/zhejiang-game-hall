
undefined4 cpPolyShapeGetRadius(undefined8 *param_1)

{
  if ((undefined *)*param_1 == &DAT_0172d2b0) {
    return *(undefined4 *)(param_1 + 0x11);
  }
  cpMessage("shape->klass == &polyClass",
            "/Users/minggo/SourceCode/cocos2d-x-3rd-party-libs-src/contrib/android-arm64/chipmunk/src/cpPolyShape.c"
            ,0x117,1,1,"Shape is not a poly shape.");
                    /* WARNING: Subroutine does not return */
  abort();
}

