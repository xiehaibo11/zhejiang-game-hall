
void LogLuv24toXYZ(uint param_1,float *param_2)

{
  uint uVar1;
  short sVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  uVar5 = param_1 >> 0xe & 0x3ff;
  if ((uVar5 == 0) ||
     (dVar6 = exp(((double)uVar5 + 0.5) * 0.010830424696249145 + -8.317766166719343), dVar6 <= 0.0))
  {
    param_2[2] = 0.0;
    param_2[0] = 0.0;
    param_2[1] = 0.0;
  }
  else {
    param_1 = param_1 & 0x3fff;
    if (param_1 < 0x3fa1) {
      uVar3 = 0;
      uVar5 = 0xa3;
      do {
        uVar4 = (ulong)uVar3;
        do {
          uVar3 = (uint)uVar4;
          if ((int)(uVar5 - uVar3) < 2) {
            sVar2 = *(short *)(&DAT_0196ec56 + (long)(int)uVar3 * 8);
            goto LAB_00ddb58c;
          }
          uVar1 = (int)(uVar3 + uVar5) >> 1;
          uVar4 = (ulong)uVar1;
          sVar2 = *(short *)(&DAT_0196ec56 + (long)(int)uVar1 * 8);
        } while (0 < (int)(param_1 - (int)sVar2));
        uVar5 = uVar1;
      } while ((int)(param_1 - (int)sVar2) < 0);
LAB_00ddb58c:
      dVar8 = ((double)(int)(param_1 - (int)sVar2) + 0.5) * 0.0035000001080334187 +
              (double)*(float *)(&DAT_0196ec50 + uVar4 * 8);
      dVar7 = ((double)(int)uVar4 + 0.5) * 0.0035000001080334187 + 0.016939999535679817;
    }
    else {
      dVar7 = 0.473684211;
      dVar8 = 0.210526316;
    }
    dVar9 = 1.0 / (dVar8 * 6.0 + dVar7 * -16.0 + 12.0);
    dVar8 = dVar8 * 9.0 * dVar9;
    dVar9 = dVar7 * 4.0 * dVar9;
    *param_2 = (float)(dVar6 * (dVar8 / dVar9));
    param_2[1] = (float)dVar6;
    param_2[2] = (float)(dVar6 * (((1.0 - dVar8) - dVar9) / dVar9));
  }
  return;
}

