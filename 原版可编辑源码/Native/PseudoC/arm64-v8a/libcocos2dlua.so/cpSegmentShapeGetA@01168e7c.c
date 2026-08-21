
undefined4 cpSegmentShapeGetA(undefined8 *param_1)

{
  if ((undefined *)*param_1 == &DAT_0172d1e0) {
    return *(undefined4 *)(param_1 + 0x11);
  }
  cpMessage("shape->klass == &cpSegmentShapeClass",
            "/Users/minggo/SourceCode/cocos2d-x-3rd-party-libs-src/contrib/android-arm64/chipmunk/src/cpShape.c"
            ,0x200,1,1,"Shape is not a segment shape.");
                    /* WARNING: Subroutine does not return */
  abort();
}

