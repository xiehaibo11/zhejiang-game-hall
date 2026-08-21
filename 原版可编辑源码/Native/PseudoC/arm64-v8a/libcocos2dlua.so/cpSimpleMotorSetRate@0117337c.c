
void cpSimpleMotorSetRate(undefined4 param_1,undefined8 *param_2)

{
  if ((undefined **)*param_2 == &PTR_FUN_0172d2d8) {
    cpBodyActivate(param_2[2]);
    cpBodyActivate(param_2[3]);
    *(undefined4 *)(param_2 + 0xb) = param_1;
    return;
  }
  cpMessage("cpConstraintIsSimpleMotor(constraint)",
            "/Users/minggo/SourceCode/cocos2d-x-3rd-party-libs-src/contrib/android-arm64/chipmunk/src/cpSimpleMotor.c"
            ,0x78,1,1,"Constraint is not a pin joint.");
                    /* WARNING: Subroutine does not return */
  abort();
}

