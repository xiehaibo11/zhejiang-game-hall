
void cpSegmentShapeSetNeighbors
               (float param_1,float param_2,float param_3,float param_4,undefined8 *param_5)

{
  if ((undefined *)*param_5 == &DAT_0172d1e0) {
    *(ulong *)((long)param_5 + 0xc4) =
         CONCAT44(param_4 - (float)((ulong)param_5[0x12] >> 0x20),param_3 - (float)param_5[0x12]);
    *(ulong *)((long)param_5 + 0xbc) =
         CONCAT44(param_2 - (float)((ulong)param_5[0x11] >> 0x20),param_1 - (float)param_5[0x11]);
    return;
  }
  cpMessage("shape->klass == &cpSegmentShapeClass",
            "/Users/minggo/SourceCode/cocos2d-x-3rd-party-libs-src/contrib/android-arm64/chipmunk/src/cpShape.c"
            ,0x21c,1,1,"Shape is not a segment shape.");
                    /* WARNING: Subroutine does not return */
  abort();
}

