
void cpGearJointSetRatio(float param_1,undefined8 *param_2)

{
  if ((undefined **)*param_2 == &PTR_FUN_0172d158) {
    cpBodyActivate(param_2[2]);
    cpBodyActivate(param_2[3]);
    *(float *)((long)param_2 + 0x5c) = param_1;
    *(float *)(param_2 + 0xc) = 1.0 / param_1;
    return;
  }
  cpMessage("cpConstraintIsGearJoint(constraint)",
            "/Users/minggo/SourceCode/cocos2d-x-3rd-party-libs-src/contrib/android-arm64/chipmunk/src/cpGearJoint.c"
            ,0x8d,1,1,"Constraint is not a ratchet joint.");
                    /* WARNING: Subroutine does not return */
  abort();
}

