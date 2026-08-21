
void cpSpatialIndexInit(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  if (param_4 != 0) {
    if (*(long *)(param_4 + 0x18) != 0) {
      cpMessage("!staticIndex->dynamicIndex",
                "/Users/minggo/SourceCode/cocos2d-x-3rd-party-libs-src/contrib/android-arm64/chipmunk/src/cpSpatialIndex.c"
                ,0x29,1,1,"This static index is already associated with a dynamic index.");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 **)(param_4 + 0x18) = param_1;
  }
  return;
}

