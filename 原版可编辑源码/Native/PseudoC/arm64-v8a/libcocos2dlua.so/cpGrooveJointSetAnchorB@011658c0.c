
void cpGrooveJointSetAnchorB(undefined4 param_1,undefined4 param_2,undefined8 *param_3)

{
  if ((undefined **)*param_3 == &PTR_FUN_0172d178) {
    cpBodyActivate(param_3[2]);
    cpBodyActivate(param_3[3]);
    *(undefined4 *)(param_3 + 0xe) = param_1;
    *(undefined4 *)((long)param_3 + 0x74) = param_2;
    return;
  }
  cpMessage("cpConstraintIsGrooveJoint(constraint)",
            "/Users/minggo/SourceCode/cocos2d-x-3rd-party-libs-src/contrib/android-arm64/chipmunk/src/cpGrooveJoint.c"
            ,0xc2,1,1,"Constraint is not a groove joint.");
                    /* WARNING: Subroutine does not return */
  abort();
}

