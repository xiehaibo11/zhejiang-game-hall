
void cpSpaceSetIterations(int *param_1,int param_2)

{
  if (0 < param_2) {
    *param_1 = param_2;
    return;
  }
  cpMessage("iterations > 0",
            "/Users/minggo/SourceCode/cocos2d-x-3rd-party-libs-src/contrib/android-arm64/chipmunk/src/cpSpace.c"
            ,0xf3,1,1,"Iterations must be positive and non-zero.");
                    /* WARNING: Subroutine does not return */
  abort();
}

