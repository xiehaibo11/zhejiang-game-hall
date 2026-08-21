
undefined4 cpRatchetJointGetAngle(undefined8 *param_1)

{
  if ((undefined **)*param_1 == &PTR_FUN_0172d318) {
    return *(undefined4 *)(param_1 + 0xb);
  }
  cpMessage("cpConstraintIsRatchetJoint(constraint)",
            "/Users/minggo/SourceCode/cocos2d-x-3rd-party-libs-src/contrib/android-arm64/chipmunk/src/cpRatchetJoint.c"
            ,0x8c,1,1,"Constraint is not a ratchet joint.");
                    /* WARNING: Subroutine does not return */
  abort();
}

