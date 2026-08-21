
void cpBodySetMoment(float param_1,long param_2)

{
  if (0.0 <= param_1) {
    cpBodyActivate(param_2);
    *(float *)(param_2 + 0x18) = param_1;
    *(float *)(param_2 + 0x1c) = 1.0 / param_1;
    return;
  }
  cpMessage("moment >= 0.0f",
            "/Users/minggo/SourceCode/cocos2d-x-3rd-party-libs-src/contrib/android-arm64/chipmunk/src/cpBody.c"
            ,0x112,1,1,"Moment of Inertia must be positive.");
                    /* WARNING: Subroutine does not return */
  abort();
}

