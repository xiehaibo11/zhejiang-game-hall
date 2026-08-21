
undefined8
speex_resampler_set_rate_frac(int *param_1,uint param_2,uint param_3,int param_4,int param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  
  if ((((*param_1 != param_4) || (param_1[1] != param_5)) || (param_1[2] != param_2)) ||
     (param_1[3] != param_3)) {
    uVar1 = param_1[3];
    uVar5 = param_2;
    if (param_3 <= param_2) {
      uVar5 = param_3;
    }
    *param_1 = param_4;
    param_1[1] = param_5;
    param_1[2] = param_2;
    param_1[3] = param_3;
    if (1 < uVar5) {
      uVar5 = 2;
      do {
        uVar2 = 0;
        if (uVar5 != 0) {
          uVar2 = param_2 / uVar5;
        }
        uVar4 = param_2;
        if (param_2 == uVar2 * uVar5) {
          do {
            uVar2 = 0;
            if (uVar5 != 0) {
              uVar2 = param_3 / uVar5;
            }
            param_2 = uVar4;
            if (param_3 != uVar2 * uVar5) break;
            param_2 = 0;
            if (uVar5 != 0) {
              param_2 = uVar4 / uVar5;
            }
            uVar3 = 0;
            if (uVar5 != 0) {
              uVar3 = param_2 / uVar5;
            }
            param_1[2] = param_2;
            param_1[3] = uVar2;
            uVar4 = param_2;
            param_3 = uVar2;
          } while (param_2 == uVar3 * uVar5);
        }
        uVar5 = uVar5 + 1;
        uVar2 = param_2;
        if (param_3 <= param_2) {
          uVar2 = param_3;
        }
      } while (uVar5 <= uVar2);
    }
    if ((uVar1 != 0) && (param_1[5] != 0)) {
      lVar6 = *(long *)(param_1 + 0x12);
      uVar7 = 0;
      while( true ) {
        uVar5 = 0;
        if (uVar1 != 0) {
          uVar5 = (param_3 * *(int *)(lVar6 + uVar7 * 4)) / uVar1;
        }
        *(uint *)(lVar6 + uVar7 * 4) = uVar5;
        if ((uint)param_1[3] <= uVar5) {
          *(uint *)(lVar6 + uVar7 * 4) = param_1[3] - 1;
        }
        uVar7 = uVar7 + 1;
        if ((uint)param_1[5] <= uVar7) break;
        param_3 = param_1[3];
      }
    }
    if (param_1[0xd] != 0) {
      FUN_00126de0();
    }
  }
  return 0;
}

