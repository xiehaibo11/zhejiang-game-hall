
undefined4 cpDampedRotarySpringGetStiffness(undefined8 *param_1)

{
  if ((undefined **)*param_1 == &PTR_FUN_0172d198) {
    return *(undefined4 *)((long)param_1 + 0x5c);
  }
  cpMessage("cpConstraintIsDampedRotarySpring(constraint)",
            "/Users/minggo/SourceCode/cocos2d-x-3rd-party-libs-src/contrib/android-arm64/chipmunk/src/cpDampedRotarySpring.c"
            ,0x8a,1,1,"Constraint is not a damped rotary spring.");
                    /* WARNING: Subroutine does not return */
  abort();
}

