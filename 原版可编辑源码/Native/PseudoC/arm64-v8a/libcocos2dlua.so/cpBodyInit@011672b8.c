
undefined8 * cpBodyInit(float param_1,float param_2,undefined8 *param_3)

{
  char *pcVar1;
  undefined8 uVar2;
  char *pcVar3;
  
  param_3[0x11] = 0;
  param_3[0x10] = 0;
  param_3[0x13] = 0;
  param_3[0x12] = 0;
  *(undefined8 *)((long)param_3 + 0x44) = 0;
  param_3[6] = 0;
  param_3[7] = 0;
  param_3[5] = 0;
  *(undefined4 *)(param_3 + 0xf) = 0;
  param_3[0xd] = 0;
  param_3[0xe] = 0;
  *(undefined4 *)(param_3 + 0x16) = 0;
  *param_3 = cpBodyUpdateVelocity;
  param_3[1] = cpBodyUpdatePosition;
  param_3[0x14] = 0;
  param_3[0x15] = 0;
  if (*(float *)(param_3 + 2) == INFINITY) {
    pcVar1 = "cpBodyGetType(body) == CP_BODY_TYPE_DYNAMIC";
    pcVar3 = "You cannot set the mass of kinematic or static bodies.";
    uVar2 = 0x100;
  }
  else if ((param_1 < 0.0) || (INFINITY <= param_1)) {
    pcVar1 = "0.0f <= mass && mass < INFINITY";
    pcVar3 = "Mass must be positive and finite.";
    uVar2 = 0x101;
  }
  else {
    cpBodyActivate(param_3);
    *(float *)(param_3 + 2) = param_1;
    *(float *)((long)param_3 + 0x14) = 1.0 / param_1;
    if (0.0 <= param_2) {
      cpBodyActivate(param_3);
      *(float *)(param_3 + 3) = param_2;
      *(float *)((long)param_3 + 0x1c) = 1.0 / param_2;
      cpBodyActivate(param_3);
      *(undefined4 *)(param_3 + 8) = 0;
      *(undefined8 *)((long)param_3 + 0x54) = 0x3f80000080000000;
      *(undefined8 *)((long)param_3 + 0x4c) = 0x3f800000;
      *(float *)((long)param_3 + 0x5c) = *(float *)(param_3 + 5) - *(float *)(param_3 + 4);
      *(float *)(param_3 + 0xc) =
           *(float *)((long)param_3 + 0x2c) - *(float *)((long)param_3 + 0x24);
      return param_3;
    }
    pcVar1 = "moment >= 0.0f";
    pcVar3 = "Moment of Inertia must be positive.";
    uVar2 = 0x112;
  }
  cpMessage(pcVar1,
            "/Users/minggo/SourceCode/cocos2d-x-3rd-party-libs-src/contrib/android-arm64/chipmunk/src/cpBody.c"
            ,uVar2,1,1,pcVar3);
                    /* WARNING: Subroutine does not return */
  abort();
}

