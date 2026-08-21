
void cpSpaceSetDamping(float param_1,long param_2)

{
  if (0.0 <= param_1) {
    *(float *)(param_2 + 0xc) = param_1;
    return;
  }
  cpMessage("damping >= 0.0",
            "/Users/minggo/SourceCode/cocos2d-x-3rd-party-libs-src/contrib/android-arm64/chipmunk/src/cpSpace.c"
            ,0x112,1,1,"Damping must be positive.");
                    /* WARNING: Subroutine does not return */
  abort();
}

