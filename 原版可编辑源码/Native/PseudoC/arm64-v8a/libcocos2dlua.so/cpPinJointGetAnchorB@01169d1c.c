
undefined4 cpPinJointGetAnchorB(undefined8 *param_1)

{
  if ((undefined **)*param_1 == &PTR_FUN_0172d208) {
    return *(undefined4 *)(param_1 + 0xc);
  }
  cpMessage("cpConstraintIsPinJoint(constraint)",
            "/Users/minggo/SourceCode/cocos2d-x-3rd-party-libs-src/contrib/android-arm64/chipmunk/src/cpPinJoint.c"
            ,0x93,1,1,"Constraint is not a pin joint.");
                    /* WARNING: Subroutine does not return */
  abort();
}

