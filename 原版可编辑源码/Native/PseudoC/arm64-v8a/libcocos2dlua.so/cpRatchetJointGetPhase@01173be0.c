
undefined4 cpRatchetJointGetPhase(undefined8 *param_1)

{
  if ((undefined **)*param_1 == &PTR_FUN_0172d318) {
    return *(undefined4 *)((long)param_1 + 0x5c);
  }
  cpMessage("cpConstraintIsRatchetJoint(constraint)",
            "/Users/minggo/SourceCode/cocos2d-x-3rd-party-libs-src/contrib/android-arm64/chipmunk/src/cpRatchetJoint.c"
            ,0x9b,1,1,"Constraint is not a ratchet joint.");
                    /* WARNING: Subroutine does not return */
  abort();
}

