
float cpArbiterGetPointA(long param_1,int param_2)

{
  if (-1 < param_2) {
    if (*(uint *)(param_1 + 0x90) < 3) {
      if (param_2 < *(int *)(param_1 + 0x58)) {
LAB_011723b8:
        return *(float *)(*(long *)(param_1 + 0x60) + (long)param_2 * 0x38) +
               *(float *)(*(long *)(param_1 + 0x28) + 0x28);
      }
    }
    else if (param_2 < 0) goto LAB_011723b8;
  }
  cpMessage("0 <= i && i < cpArbiterGetCount(arb)",
            "/Users/minggo/SourceCode/cocos2d-x-3rd-party-libs-src/contrib/android-arm64/chipmunk/src/cpArbiter.c"
            ,0x4f,1,1,"Index error: The specified contact index is invalid for this arbiter");
                    /* WARNING: Subroutine does not return */
  abort();
}

