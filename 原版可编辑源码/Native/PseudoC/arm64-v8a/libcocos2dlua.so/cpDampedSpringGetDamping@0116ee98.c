
undefined4 cpDampedSpringGetDamping(undefined8 *param_1)

{
  if ((undefined **)*param_1 == &PTR_FUN_0172d290) {
    return *(undefined4 *)(param_1 + 0xe);
  }
  cpMessage("cpConstraintIsDampedSpring(constraint)",
            "/Users/minggo/SourceCode/cocos2d-x-3rd-party-libs-src/contrib/android-arm64/chipmunk/src/cpDampedSpring.c"
            ,0xbf,1,1,"Constraint is not a damped spring.");
                    /* WARNING: Subroutine does not return */
  abort();
}

