
undefined4 cpCircleShapeGetRadius(undefined8 *param_1)

{
  if ((undefined *)*param_1 == &DAT_0172d1b8) {
    return *(undefined4 *)(param_1 + 0x13);
  }
  cpMessage("shape->klass == &cpCircleShapeClass",
            "/Users/minggo/SourceCode/cocos2d-x-3rd-party-libs-src/contrib/android-arm64/chipmunk/src/cpShape.c"
            ,0x16e,1,1,"Shape is not a circle shape.");
                    /* WARNING: Subroutine does not return */
  abort();
}

