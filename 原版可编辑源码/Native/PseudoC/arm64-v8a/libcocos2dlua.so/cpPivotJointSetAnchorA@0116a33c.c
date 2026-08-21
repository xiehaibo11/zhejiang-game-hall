
void cpPivotJointSetAnchorA(undefined4 param_1,undefined4 param_2,undefined8 *param_3)

{
  if ((undefined **)*param_3 == &PTR_FUN_0172d228) {
    cpBodyActivate(param_3[2]);
    cpBodyActivate(param_3[3]);
    *(undefined4 *)(param_3 + 0xb) = param_1;
    *(undefined4 *)((long)param_3 + 0x5c) = param_2;
    return;
  }
  cpMessage("cpConstraintIsPivotJoint(constraint)",
            "/Users/minggo/SourceCode/cocos2d-x-3rd-party-libs-src/contrib/android-arm64/chipmunk/src/cpPivotJoint.c"
            ,0x86,1,1,"Constraint is not a pivot joint.");
                    /* WARNING: Subroutine does not return */
  abort();
}

