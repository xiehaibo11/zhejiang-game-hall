
/* v8::base::ieee754::atan2(double, double) */

double v8::base::ieee754::atan2(double param_1,double param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  double dVar7;
  
  uVar4 = SUB84(param_2,0);
  uVar1 = (uint)((ulong)param_2 >> 0x20);
  uVar2 = uVar1 & 0x7fffffff;
  if ((uVar2 | (-uVar4 | uVar4) >> 0x1f) < 0x7ff00001) {
    uVar6 = SUB84(param_1,0);
    uVar5 = (uint)((ulong)param_1 >> 0x20);
    uVar3 = uVar5 & 0x7fffffff;
    if ((uVar3 | (-uVar6 | uVar6) >> 0x1f) < 0x7ff00001) {
      if (param_2 == 1.0) {
        dVar7 = (double)atan(param_1);
        return dVar7;
      }
      uVar5 = -((int)uVar5 >> 0x1f);
      uVar1 = uVar1 >> 0x1e & 2 | uVar5;
      if (((ulong)param_1 & 0x7fffffff00000000) != 0 || uVar6 != 0) {
        if (((ulong)param_2 & 0x7fffffff00000000) != 0 || uVar4 != 0) {
          if (uVar2 == 0x7ff00000) {
            if (uVar3 == 0x7ff00000) {
                    /* WARNING: Could not recover jumptable at 0x0146ff98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              dVar7 = (double)(*(code *)(&UNK_0146ff9c + (ulong)(byte)(&DAT_01a3d5d4)[uVar1] * 4))()
              ;
              return dVar7;
            }
                    /* WARNING: Could not recover jumptable at 0x0147001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            dVar7 = (double)(*(code *)((ulong)(byte)(&DAT_01a3d5d0)[uVar1] * 4 + 0x146ff2c))(0);
            return dVar7;
          }
          if (uVar3 != 0x7ff00000) {
            if ((int)(uVar3 - uVar2) < 0x3d00000) {
              if ((-1 < (long)param_2) || (dVar7 = 0.0, -0x3c00001 < (int)(uVar3 - uVar2))) {
                dVar7 = (double)atan(ABS(param_1 / param_2));
              }
            }
            else {
              dVar7 = DAT_01d358b8 * 0.5 + 1.5707963267948966;
              uVar1 = uVar5;
            }
            if (uVar1 == 0) {
              return dVar7;
            }
            if (uVar1 == 2) {
              param_2 = 3.141592653589793;
              param_1 = DAT_01d358b8 - dVar7;
            }
            else {
              if (uVar1 == 1) {
                return -dVar7;
              }
              param_2 = -3.141592653589793;
              param_1 = dVar7 - DAT_01d358b8;
            }
            goto LAB_0146ff28;
          }
        }
        if ((long)param_1 < 0) {
          return -1.5707963267948966 - DAT_01d358b0;
        }
        return DAT_01d358b0 + 1.5707963267948966;
      }
      if (uVar1 < 2) {
        return param_1;
      }
      if (uVar1 == 3) {
        return -3.141592653589793 - DAT_01d358b0;
      }
      param_2 = 3.141592653589793;
      param_1 = DAT_01d358b0;
    }
  }
LAB_0146ff28:
  return param_1 + param_2;
}

