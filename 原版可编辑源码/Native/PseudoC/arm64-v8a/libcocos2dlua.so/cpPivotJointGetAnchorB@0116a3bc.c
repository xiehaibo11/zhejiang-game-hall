
undefined4 cpPivotJointGetAnchorB(undefined8 *param_1)

{
  if ((undefined **)*param_1 == &PTR_FUN_0172d228) {
    return *(undefined4 *)(param_1 + 0xc);
  }
  cpMessage("cpConstraintIsPivotJoint(constraint)",
            "/Users/minggo/SourceCode/cocos2d-x-3rd-party-libs-src/contrib/android-arm64/chipmunk/src/cpPivotJoint.c"
            ,0x8e,1,1,"Constraint is not a pivot joint.");
                    /* WARNING: Subroutine does not return */
  abort();
}

