
void cpPinJointSetAnchorB(undefined4 param_1,undefined4 param_2,undefined8 *param_3)

{
  if ((undefined **)*param_3 == &PTR_FUN_0172d208) {
    cpBodyActivate(param_3[2]);
    cpBodyActivate(param_3[3]);
    *(undefined4 *)(param_3 + 0xc) = param_1;
    *(undefined4 *)((long)param_3 + 100) = param_2;
    return;
  }
  cpMessage("cpConstraintIsPinJoint(constraint)",
            "/Users/minggo/SourceCode/cocos2d-x-3rd-party-libs-src/contrib/android-arm64/chipmunk/src/cpPinJoint.c"
            ,0x9a,1,1,"Constraint is not a pin joint.");
                    /* WARNING: Subroutine does not return */
  abort();
}

