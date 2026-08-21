
void cpGrooveJointSetGrooveA(float param_1,float param_2,undefined8 *param_3)

{
  float fVar1;
  
  if ((undefined **)*param_3 == &PTR_FUN_0172d178) {
    *(float *)(param_3 + 0xc) = param_1;
    *(float *)((long)param_3 + 100) = param_2;
    param_1 = *(float *)(param_3 + 0xd) - param_1;
    param_2 = *(float *)((long)param_3 + 0x6c) - param_2;
    fVar1 = 1.0 / (SQRT(param_1 * param_1 + param_2 * param_2) + 1.1754944e-38);
    *(float *)(param_3 + 0xb) = -(param_2 * fVar1);
    *(float *)((long)param_3 + 0x5c) = fVar1 * param_1;
    cpBodyActivate(param_3[2]);
    cpBodyActivate(param_3[3]);
    return;
  }
  cpMessage("cpConstraintIsGrooveJoint(constraint)",
            "/Users/minggo/SourceCode/cocos2d-x-3rd-party-libs-src/contrib/android-arm64/chipmunk/src/cpGrooveJoint.c"
            ,0x9c,1,1,"Constraint is not a groove joint.");
                    /* WARNING: Subroutine does not return */
  abort();
}

