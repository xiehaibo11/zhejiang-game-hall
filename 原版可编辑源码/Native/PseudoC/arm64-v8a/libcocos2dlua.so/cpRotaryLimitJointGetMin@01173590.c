
undefined4 cpRotaryLimitJointGetMin(undefined8 *param_1)

{
  if ((undefined **)*param_1 == &PTR_FUN_0172d2f8) {
    return *(undefined4 *)(param_1 + 0xb);
  }
  cpMessage("cpConstraintIsRotaryLimitJoint(constraint)",
            "/Users/minggo/SourceCode/cocos2d-x-3rd-party-libs-src/contrib/android-arm64/chipmunk/src/cpRotaryLimitJoint.c"
            ,0x87,1,1,"Constraint is not a rotary limit joint.");
                    /* WARNING: Subroutine does not return */
  abort();
}

