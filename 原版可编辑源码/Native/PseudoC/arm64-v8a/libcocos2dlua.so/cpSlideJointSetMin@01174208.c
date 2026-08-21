
void cpSlideJointSetMin(undefined4 param_1,undefined8 *param_2)

{
  if ((undefined **)*param_2 == &PTR_FUN_0172d338) {
    cpBodyActivate(param_2[2]);
    cpBodyActivate(param_2[3]);
    *(undefined4 *)(param_2 + 0xd) = param_1;
    return;
  }
  cpMessage("cpConstraintIsSlideJoint(constraint)",
            "/Users/minggo/SourceCode/cocos2d-x-3rd-party-libs-src/contrib/android-arm64/chipmunk/src/cpSlideJoint.c"
            ,0xb1,1,1,"Constraint is not a slide joint.");
                    /* WARNING: Subroutine does not return */
  abort();
}

