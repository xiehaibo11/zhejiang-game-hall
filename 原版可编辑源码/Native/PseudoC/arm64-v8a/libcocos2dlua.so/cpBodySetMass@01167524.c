
void cpBodySetMass(float param_1,long param_2)

{
  char *pcVar1;
  undefined8 uVar2;
  char *pcVar3;
  
  if ((*(float *)(param_2 + 0xb0) == INFINITY) || (*(float *)(param_2 + 0x10) == INFINITY)) {
    pcVar1 = "cpBodyGetType(body) == CP_BODY_TYPE_DYNAMIC";
    pcVar3 = "You cannot set the mass of kinematic or static bodies.";
    uVar2 = 0x100;
  }
  else {
    if ((0.0 <= param_1) && (param_1 < INFINITY)) {
      cpBodyActivate(param_2);
      *(float *)(param_2 + 0x10) = param_1;
      *(float *)(param_2 + 0x14) = 1.0 / param_1;
      return;
    }
    pcVar1 = "0.0f <= mass && mass < INFINITY";
    pcVar3 = "Mass must be positive and finite.";
    uVar2 = 0x101;
  }
  cpMessage(pcVar1,
            "/Users/minggo/SourceCode/cocos2d-x-3rd-party-libs-src/contrib/android-arm64/chipmunk/src/cpBody.c"
            ,uVar2,1,1,pcVar3);
                    /* WARNING: Subroutine does not return */
  abort();
}

