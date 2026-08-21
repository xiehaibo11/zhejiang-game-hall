
void cpRatchetJointSetPhase(undefined4 param_1,undefined8 *param_2)

{
  if ((undefined **)*param_2 == &PTR_FUN_0172d318) {
    cpBodyActivate(param_2[2]);
    cpBodyActivate(param_2[3]);
    *(undefined4 *)((long)param_2 + 0x5c) = param_1;
    return;
  }
  cpMessage("cpConstraintIsRatchetJoint(constraint)",
            "/Users/minggo/SourceCode/cocos2d-x-3rd-party-libs-src/contrib/android-arm64/chipmunk/src/cpRatchetJoint.c"
            ,0xa2,1,1,"Constraint is not a ratchet joint.");
                    /* WARNING: Subroutine does not return */
  abort();
}

