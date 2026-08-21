
/* fairygui::EaseManager::evaluate(fairygui::EaseType, float, float, float, float) */

undefined1  [16]
fairygui::EaseManager::evaluate
          (float param_1,float param_2,float param_3,float param_4,undefined4 param_5)

{
  ulong uVar1;
  double dVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  
  switch(param_5) {
  case 0:
    uVar1 = (ulong)(uint)(param_1 / param_2);
    break;
  case 1:
    param_2 = cosf((param_1 / param_2) * 1.5707964);
    goto LAB_00ac6194;
  case 2:
    auVar3._0_4_ = sinf((param_1 / param_2) * 1.5707964);
    auVar3._4_4_ = extraout_var;
    auVar3._8_8_ = extraout_var_00;
    return auVar3;
  case 3:
    dVar2 = cos(((double)param_1 * 3.141592653589793) / (double)param_2);
    param_1 = (float)dVar2;
    fVar5 = -1.0;
    goto LAB_00ac5ea4;
  case 4:
    uVar1 = (ulong)(uint)((param_1 / param_2) * (param_1 / param_2));
    break;
  default:
    uVar1 = (ulong)(uint)-((param_1 / param_2) * (param_1 / param_2 + -2.0));
    break;
  case 6:
    param_1 = param_1 / (param_2 * 0.5);
                    /* try { // try from 00ac5a58 to 00bc5acb has its CatchHandler @ 00ac5a58
                       catch() { ... } // from try @ 00ac5a58 with catch @ 00ac5a58
                       catch() { ... } // from try @ 00ac5ad8 with catch @ 00ac5a58 */
    if (param_1 < 1.0) {
      uVar1 = (ulong)(uint)(param_1 * param_1 * 0.5);
      break;
    }
    fVar5 = -1.0;
    param_1 = param_1 + -1.0;
    fVar6 = param_1 + -2.0;
    goto LAB_00ac5ea0;
  case 7:
    param_1 = param_1 / param_2;
    uVar1 = (ulong)(uint)(param_1 * param_1 * param_1);
    break;
  case 8:
    fVar5 = param_1 / param_2 + -1.0;
    fVar6 = fVar5 * fVar5;
    goto LAB_00ac5b2c;
  case 9:
    fVar5 = 0.5;
    param_1 = param_1 / (param_2 * 0.5);
    if (param_1 < 1.0) {
LAB_00ac5b5c:
      uVar1 = (ulong)(uint)(param_1 * param_1 * param_1 * fVar5);
      break;
    }
    param_1 = param_1 + -2.0;
    fVar5 = param_1 * param_1;
    goto LAB_00ac5ec8;
  case 10:
    param_1 = param_1 / param_2;
    fVar5 = param_1 * param_1;
    goto LAB_00ac5e70;
  case 0xb:
                    /* try { // try from 00ac5acc to 00bc5ad7 has its CatchHandler @ 00ac5b0c */
    fVar5 = param_1 / param_2 + -1.0;
                    /* try { // try from 00ac5ad8 to 00bc5b1f has its CatchHandler @ 00ac5a58 */
    fVar5 = fVar5 * fVar5 * fVar5 * fVar5;
    goto LAB_00ac5d4c;
  case 0xc:
    param_1 = param_1 / (param_2 * 0.5);
    if (param_1 < 1.0) {
      fVar5 = param_1 * 0.5;
      goto LAB_00ac5b0c;
    }
                    /* catch() { ... } // from try @ 00ac5d14 with catch @ 00ac5e90
                       catch() { ... } // from try @ 00ac5e60 with catch @ 00ac5e90 */
    fVar5 = -2.0;
                    /* catch() { ... } // from try @ 00ac5cf8 with catch @ 00ac5e94 */
    param_1 = param_1 + -2.0;
    fVar6 = param_1 * param_1 * param_1;
LAB_00ac5ea0:
    param_1 = param_1 * fVar6;
LAB_00ac5ea4:
                    /* catch() { ... } // from try @ 00ac5cf0 with catch @ 00ac5ea4 */
    param_1 = param_1 + fVar5;
    goto LAB_00ac5ea8;
  case 0xd:
    param_1 = param_1 / param_2;
    fVar5 = param_1 * param_1;
LAB_00ac5b0c:
                    /* catch() { ... } // from try @ 00ac5acc with catch @ 00ac5b0c */
    fVar5 = param_1 * fVar5;
    goto LAB_00ac5e70;
  case 0xe:
    fVar5 = param_1 / param_2 + -1.0;
    fVar6 = fVar5 * fVar5 * fVar5 * fVar5;
LAB_00ac5b2c:
    uVar1 = (ulong)(uint)(fVar5 * fVar6 + 1.0);
    break;
  case 0xf:
    param_1 = param_1 / (param_2 * 0.5);
    if (param_1 < 1.0) {
      fVar5 = param_1 * param_1 * 0.5;
      goto LAB_00ac5b5c;
    }
    param_1 = param_1 + -2.0;
                    /* try { // try from 00ac5ec4 to 00bc5f0f has its CatchHandler @ 00ac5ec4
                       catch() { ... } // from try @ 00ac5ec4 with catch @ 00ac5ec4
                       catch() { ... } // from try @ 00ac5f14 with catch @ 00ac5ec4 */
    fVar5 = param_1 * param_1 * param_1 * param_1;
LAB_00ac5ec8:
    param_1 = param_1 * fVar5;
LAB_00ac5f0c:
                    /* try { // try from 00ac5f10 to 00bc5f13 has its CatchHandler @ 00ac5f60 */
                    /* try { // try from 00ac5f14 to 00bc5f73 has its CatchHandler @ 00ac5ec4 */
    uVar1 = (ulong)(uint)((param_1 + 2.0) * 0.5);
    break;
  case 0x10:
    uVar1 = 0;
    if (param_1 != 0.0) {
      dVar2 = exp2((double)((param_1 / param_2 + -1.0) * 10.0));
      uVar1 = (ulong)(uint)(float)dVar2;
    }
    break;
  case 0x11:
    if (param_1 == param_2) goto LAB_00ac5c84;
    dVar2 = exp2((double)((param_1 * -10.0) / param_2));
    param_2 = (float)dVar2;
    goto LAB_00ac6194;
  case 0x12:
    uVar1 = 0;
    if (param_1 == 0.0) break;
    if (param_1 != param_2) {
      param_1 = param_1 / (param_2 * 0.5);
      fVar5 = param_1 + -1.0;
      if (1.0 <= param_1) {
        dVar2 = exp2((double)(fVar5 * -10.0));
                    /* try { // try from 00ac61f8 to 00bc620b has its CatchHandler @ 00ac6290 */
        uVar1 = (ulong)(uint)((2.0 - (float)dVar2) * 0.5);
      }
      else {
        dVar2 = exp2((double)(fVar5 * 10.0));
                    /* try { // try from 00ac5c08 to 00bc5cd3 has its CatchHandler @ 00ac5c08
                       catch() { ... } // from try @ 00ac5c08 with catch @ 00ac5c08
                       catch() { ... } // from try @ 00ac5d48 with catch @ 00ac5c08
                       catch() { ... } // from try @ 00ac5de0 with catch @ 00ac5c08
                       catch() { ... } // from try @ 00ac5e68 with catch @ 00ac5c08 */
        uVar1 = (ulong)(uint)((float)dVar2 * 0.5);
      }
      break;
    }
LAB_00ac5c84:
    uVar1 = 0x3f800000;
    break;
  case 0x13:
    fVar5 = SQRT(1.0 - (param_1 / param_2) * (param_1 / param_2));
                    /* try { // try from 00ac5d48 to 00bc5d97 has its CatchHandler @ 00ac5c08 */
LAB_00ac5d4c:
    uVar1 = (ulong)(uint)-(fVar5 + -1.0);
    break;
  case 0x14:
    fVar5 = param_1 / param_2 + -1.0;
    uVar1 = (ulong)(uint)SQRT(1.0 - fVar5 * fVar5);
    break;
  case 0x15:
    param_1 = param_1 / (param_2 * 0.5);
    if (1.0 <= param_1) {
      uVar1 = (ulong)(uint)((SQRT(1.0 - (param_1 + -2.0) * (param_1 + -2.0)) + 1.0) * 0.5);
      break;
    }
    param_1 = SQRT(1.0 - param_1 * param_1) + -1.0;
    goto LAB_00ac5ea8;
  case 0x16:
    uVar1 = 0;
    if (param_1 != 0.0) {
      uVar1 = 0x3f800000;
      if (param_1 / param_2 != 1.0) {
        fVar5 = param_2 * 0.3;
        if (param_4 != 0.0) {
          fVar5 = param_4;
        }
        if (1.0 <= param_3) {
                    /* catch() { ... } // from try @ 00ac61c4 with catch @ 00ac62c4 */
          fVar6 = asinf(1.0 / param_3);
          fVar6 = (fVar5 / 6.2831855) * fVar6;
        }
        else {
                    /* try { // try from 00ac5d98 to 00bc5daf has its CatchHandler @ 00ac5eb0 */
          fVar6 = fVar5 * 0.25;
          param_3 = 1.0;
        }
        fVar7 = param_1 / param_2 + -1.0;
        dVar2 = exp2((double)(fVar7 * 10.0));
        fVar5 = sinf(((fVar7 * param_2 - fVar6) * -6.2831855) / fVar5);
        uVar1 = (ulong)(uint)(param_3 * (float)dVar2 * fVar5);
      }
    }
    break;
  case 0x17:
    uVar1 = 0;
    if (param_1 != 0.0) {
      param_1 = param_1 / param_2;
                    /* try { // try from 00ac5db4 to 00bc5ddf has its CatchHandler @ 00ac5eac */
      uVar1 = 0x3f800000;
      if (param_1 != 1.0) {
        fVar5 = param_2 * 0.3;
        if (param_4 != 0.0) {
          fVar5 = param_4;
        }
                    /* try { // try from 00ac5de0 to 00bc5e37 has its CatchHandler @ 00ac5c08 */
        if (1.0 <= param_3) {
          fVar6 = asinf(1.0 / param_3);
          fVar6 = (fVar5 / 6.2831855) * fVar6;
        }
        else {
          fVar6 = fVar5 * 0.25;
          param_3 = 1.0;
        }
        dVar2 = exp2((double)(param_1 * -10.0));
        fVar5 = sinf(((param_1 * param_2 - fVar6) * 6.2831855) / fVar5);
        uVar1 = (ulong)(uint)(param_3 * (float)dVar2 * fVar5 + 1.0);
      }
    }
    break;
  case 0x18:
    uVar1 = 0;
    if (param_1 == 0.0) break;
    param_1 = param_1 / (param_2 * 0.5);
    if (param_1 == 2.0) goto LAB_00ac5c84;
    fVar5 = param_2 * 0.45000002;
    if (param_4 != 0.0) {
      fVar5 = param_4;
    }
    if (1.0 <= param_3) {
                    /* try { // try from 00ac6210 to 00bc6243 has its CatchHandler @ 00ac6294 */
      fVar6 = asinf(1.0 / param_3);
      fVar6 = (fVar5 / 6.2831855) * fVar6;
    }
    else {
      fVar6 = fVar5 * 0.25;
      param_3 = 1.0;
    }
    fVar7 = param_1 + -1.0;
    if (1.0 <= param_1) {
      dVar2 = exp2((double)(fVar7 * -10.0));
                    /* catch() { ... } // from try @ 00ac61f8 with catch @ 00ac6290 */
                    /* catch() { ... } // from try @ 00ac6210 with catch @ 00ac6294 */
      fVar5 = sinf(((fVar7 * param_2 - fVar6) * 6.2831855) / fVar5);
      uVar1 = (ulong)(uint)(param_3 * (float)dVar2 * fVar5 * 0.5 + 1.0);
      break;
    }
    dVar2 = exp2((double)(fVar7 * 10.0));
                    /* try { // try from 00ac6244 to 00bc62df has its CatchHandler @ 00ac5f74 */
    param_1 = sinf(((fVar7 * param_2 - fVar6) * 6.2831855) / fVar5);
    param_1 = param_3 * (float)dVar2 * param_1;
LAB_00ac5ea8:
                    /* catch() { ... } // from try @ 00ac5cd4 with catch @ 00ac5ea8 */
                    /* catch() { ... } // from try @ 00ac5db4 with catch @ 00ac5eac
                       catch() { ... } // from try @ 00ac5e38 with catch @ 00ac5eac */
    uVar1 = (ulong)(uint)(param_1 * -0.5);
                    /* catch() { ... } // from try @ 00ac5d98 with catch @ 00ac5eb0 */
    break;
  case 0x19:
    param_1 = param_1 / param_2;
    uVar1 = (ulong)(uint)(param_1 * param_1 * (param_1 * (param_3 + 1.0) - param_3));
    break;
  case 0x1a:
    fVar5 = param_1 / param_2 + -1.0;
    uVar1 = (ulong)(uint)(fVar5 * fVar5 * ((param_3 + 1.0) * fVar5 + param_3) + 1.0);
    break;
  case 0x1b:
    param_1 = param_1 / (param_2 * 0.5);
    param_3 = param_3 * 1.525;
    if (param_1 < 1.0) {
                    /* try { // try from 00ac5cd4 to 00bc5ceb has its CatchHandler @ 00ac5ea8 */
      uVar1 = (ulong)(uint)(param_1 * param_1 * (param_1 * (param_3 + 1.0) - param_3) * 0.5);
      break;
    }
    param_1 = param_1 + -2.0;
    param_1 = param_1 * param_1 * (param_3 + (param_3 + 1.0) * param_1);
    goto LAB_00ac5f0c;
  case 0x1c:
    param_2 = (param_2 - param_1) / param_2;
                    /* try { // try from 00ac5e38 to 00bc5e3f has its CatchHandler @ 00ac5eac */
    if (0.36363637 <= param_2) {
      if (0.72727275 <= param_2) {
        if (0.90909094 <= param_2) {
          param_2 = (param_2 + -0.95454544) * (param_2 + -0.95454544) * 7.5625;
          fVar5 = 0.984375;
        }
        else {
          param_2 = (param_2 + -0.8181818) * (param_2 + -0.8181818) * 7.5625;
          fVar5 = 0.9375;
        }
      }
      else {
                    /* catch() { ... } // from try @ 00ac5f10 with catch @ 00ac5f60 */
                    /* try { // try from 00ac5f74 to 00bc61c3 has its CatchHandler @ 00ac5f74
                       catch() { ... } // from try @ 00ac5f74 with catch @ 00ac5f74
                       catch() { ... } // from try @ 00ac6244 with catch @ 00ac5f74 */
        param_2 = (param_2 + -0.54545456) * (param_2 + -0.54545456) * 7.5625;
        fVar5 = 0.75;
      }
      param_2 = param_2 + fVar5;
    }
    else {
      param_2 = param_2 * param_2 * 7.5625;
    }
LAB_00ac6194:
    uVar1 = (ulong)(uint)(1.0 - param_2);
    break;
  case 0x1d:
    param_1 = param_1 / param_2;
                    /* try { // try from 00ac5e60 to 00bc5e67 has its CatchHandler @ 00ac5e90 */
    if (0.36363637 <= param_1) {
      if (0.72727275 <= param_1) {
        if (0.90909094 <= param_1) {
                    /* try { // try from 00ac61c4 to 00bc61f7 has its CatchHandler @ 00ac62c4 */
          uVar1 = (ulong)(uint)((param_1 + -0.95454544) * (param_1 + -0.95454544) * 7.5625 +
                               0.984375);
        }
        else {
          uVar1 = (ulong)(uint)((param_1 + -0.8181818) * (param_1 + -0.8181818) * 7.5625 + 0.9375);
        }
      }
      else {
        uVar1 = (ulong)(uint)((param_1 + -0.54545456) * (param_1 + -0.54545456) * 7.5625 + 0.75);
      }
      break;
    }
                    /* try { // try from 00ac5e68 to 00bc5ec3 has its CatchHandler @ 00ac5c08 */
    fVar5 = 7.5625;
LAB_00ac5e70:
    uVar1 = (ulong)(uint)(param_1 * param_1 * fVar5);
    break;
  case 0x1e:
                    /* try { // try from 00ac5cf0 to 00bc5cf7 has its CatchHandler @ 00ac5ea4 */
                    /* try { // try from 00ac5cf8 to 00bc5d0f has its CatchHandler @ 00ac5e94 */
    if (param_2 * 0.5 <= param_1) {
      param_2 = ((param_1 + param_1) - param_2) / param_2;
      if (0.36363637 <= param_2) {
        if (0.72727275 <= param_2) {
          if (0.90909094 <= param_2) {
            param_2 = (param_2 + -0.95454544) * (param_2 + -0.95454544) * 7.5625;
            fVar5 = 0.984375;
          }
          else {
            param_2 = (param_2 + -0.8181818) * (param_2 + -0.8181818) * 7.5625;
            fVar5 = 0.9375;
          }
        }
        else {
          param_2 = (param_2 + -0.54545456) * (param_2 + -0.54545456) * 7.5625;
          fVar5 = 0.75;
        }
        param_2 = param_2 + fVar5;
      }
      else {
        param_2 = param_2 * param_2 * 7.5625;
      }
      uVar1 = (ulong)(uint)(param_2 * 0.5 + 0.5);
    }
    else {
      param_2 = (param_2 - (param_1 + param_1)) / param_2;
                    /* try { // try from 00ac5d14 to 00bc5d47 has its CatchHandler @ 00ac5e90 */
      if (0.36363637 <= param_2) {
        if (0.72727275 <= param_2) {
          if (0.90909094 <= param_2) {
            param_2 = (param_2 + -0.95454544) * (param_2 + -0.95454544) * 7.5625;
            fVar5 = 0.984375;
          }
          else {
            param_2 = (param_2 + -0.8181818) * (param_2 + -0.8181818) * 7.5625;
            fVar5 = 0.9375;
          }
        }
        else {
          param_2 = (param_2 + -0.54545456) * (param_2 + -0.54545456) * 7.5625;
          fVar5 = 0.75;
        }
        param_2 = param_2 + fVar5;
      }
      else {
        param_2 = param_2 * param_2 * 7.5625;
      }
      uVar1 = (ulong)(uint)((1.0 - param_2) * 0.5);
    }
  }
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uVar1;
  return auVar4;
}

