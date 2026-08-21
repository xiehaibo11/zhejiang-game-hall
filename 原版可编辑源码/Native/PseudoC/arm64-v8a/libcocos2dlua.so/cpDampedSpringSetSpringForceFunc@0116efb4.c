
void cpDampedSpringSetSpringForceFunc(undefined8 *param_1,undefined8 param_2)

{
  if ((undefined **)*param_1 == &PTR_FUN_0172d290) {
    cpBodyActivate(param_1[2]);
    cpBodyActivate(param_1[3]);
    param_1[0xf] = param_2;
    return;
  }
  cpMessage("cpConstraintIsDampedSpring(constraint)",
            "/Users/minggo/SourceCode/cocos2d-x-3rd-party-libs-src/contrib/android-arm64/chipmunk/src/cpDampedSpring.c"
            ,0xd5,1,1,"Constraint is not a damped spring.");
                    /* WARNING: Subroutine does not return */
  abort();
}

