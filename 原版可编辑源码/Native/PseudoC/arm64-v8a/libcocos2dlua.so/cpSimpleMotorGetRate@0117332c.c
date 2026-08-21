
undefined4 cpSimpleMotorGetRate(undefined8 *param_1)

{
  if ((undefined **)*param_1 == &PTR_FUN_0172d2d8) {
    return *(undefined4 *)(param_1 + 0xb);
  }
  cpMessage("cpConstraintIsSimpleMotor(constraint)",
            "/Users/minggo/SourceCode/cocos2d-x-3rd-party-libs-src/contrib/android-arm64/chipmunk/src/cpSimpleMotor.c"
            ,0x71,1,1,"Constraint is not a pin joint.");
                    /* WARNING: Subroutine does not return */
  abort();
}

