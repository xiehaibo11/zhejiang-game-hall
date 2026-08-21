
void cpShapeSetFriction(float param_1,long param_2)

{
  if (0.0 <= param_1) {
    cpBodyActivate(*(undefined8 *)(param_2 + 0x10));
    *(float *)(param_2 + 0x44) = param_1;
    return;
  }
  cpMessage("friction >= 0.0f",
            "/Users/minggo/SourceCode/cocos2d-x-3rd-party-libs-src/contrib/android-arm64/chipmunk/src/cpShape.c"
            ,0x9a,1,1,"Friction must be postive and non-zero.");
                    /* WARNING: Subroutine does not return */
  abort();
}

