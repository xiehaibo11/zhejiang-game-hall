
undefined4 cpGrooveJointGetAnchorB(undefined8 *param_1)

{
  if ((undefined **)*param_1 == &PTR_FUN_0172d178) {
    return *(undefined4 *)(param_1 + 0xe);
  }
  cpMessage("cpConstraintIsGrooveJoint(constraint)",
            "/Users/minggo/SourceCode/cocos2d-x-3rd-party-libs-src/contrib/android-arm64/chipmunk/src/cpGrooveJoint.c"
            ,0xbb,1,1,"Constraint is not a groove joint.");
                    /* WARNING: Subroutine does not return */
  abort();
}

