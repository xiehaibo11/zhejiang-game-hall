
void cpDampedSpringSetAnchorA(undefined4 param_1,undefined4 param_2,undefined8 *param_3)

{
  if ((undefined **)*param_3 == &PTR_FUN_0172d290) {
    cpBodyActivate(param_3[2]);
    cpBodyActivate(param_3[3]);
    *(undefined4 *)(param_3 + 0xb) = param_1;
    *(undefined4 *)((long)param_3 + 0x5c) = param_2;
    return;
  }
  cpMessage("cpConstraintIsDampedSpring(constraint)",
            "/Users/minggo/SourceCode/cocos2d-x-3rd-party-libs-src/contrib/android-arm64/chipmunk/src/cpDampedSpring.c"
            ,0x8a,1,1,"Constraint is not a damped spring.");
                    /* WARNING: Subroutine does not return */
  abort();
}

