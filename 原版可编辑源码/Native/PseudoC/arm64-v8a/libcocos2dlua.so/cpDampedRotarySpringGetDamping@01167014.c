
undefined4 cpDampedRotarySpringGetDamping(undefined8 *param_1)

{
  if ((undefined **)*param_1 == &PTR_FUN_0172d198) {
    return *(undefined4 *)(param_1 + 0xc);
  }
  cpMessage("cpConstraintIsDampedRotarySpring(constraint)",
            "/Users/minggo/SourceCode/cocos2d-x-3rd-party-libs-src/contrib/android-arm64/chipmunk/src/cpDampedRotarySpring.c"
            ,0x99,1,1,"Constraint is not a damped rotary spring.");
                    /* WARNING: Subroutine does not return */
  abort();
}

