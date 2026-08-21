
undefined4 cpSlideJointGetAnchorB(undefined8 *param_1)

{
  if ((undefined **)*param_1 == &PTR_FUN_0172d338) {
    return *(undefined4 *)(param_1 + 0xc);
  }
  cpMessage("cpConstraintIsSlideJoint(constraint)",
            "/Users/minggo/SourceCode/cocos2d-x-3rd-party-libs-src/contrib/android-arm64/chipmunk/src/cpSlideJoint.c"
            ,0x9b,1,1,"Constraint is not a slide joint.");
                    /* WARNING: Subroutine does not return */
  abort();
}

