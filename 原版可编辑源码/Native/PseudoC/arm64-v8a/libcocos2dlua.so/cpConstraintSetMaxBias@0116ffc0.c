
void cpConstraintSetMaxBias(float param_1,long param_2)

{
  if (0.0 <= param_1) {
    cpBodyActivate(*(undefined8 *)(param_2 + 0x10));
    cpBodyActivate(*(undefined8 *)(param_2 + 0x18));
    *(float *)(param_2 + 0x38) = param_1;
    return;
  }
  cpMessage("maxBias >= 0.0f",
            "/Users/minggo/SourceCode/cocos2d-x-3rd-party-libs-src/contrib/android-arm64/chipmunk/src/cpConstraint.c"
            ,0x72,1,1,"maxBias must be positive.");
                    /* WARNING: Subroutine does not return */
  abort();
}

