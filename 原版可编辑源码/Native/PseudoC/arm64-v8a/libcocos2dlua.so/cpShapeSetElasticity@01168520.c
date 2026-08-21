
void cpShapeSetElasticity(float param_1,long param_2)

{
  if (0.0 <= param_1) {
    cpBodyActivate(*(undefined8 *)(param_2 + 0x10));
    *(float *)(param_2 + 0x40) = param_1;
    return;
  }
  cpMessage("elasticity >= 0.0f",
            "/Users/minggo/SourceCode/cocos2d-x-3rd-party-libs-src/contrib/android-arm64/chipmunk/src/cpShape.c"
            ,0x8c,1,1,"Elasticity must be positive and non-zero.");
                    /* WARNING: Subroutine does not return */
  abort();
}

