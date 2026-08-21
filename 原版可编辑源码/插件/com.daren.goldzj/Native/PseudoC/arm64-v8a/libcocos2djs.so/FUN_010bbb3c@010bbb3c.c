
void FUN_010bbb3c(undefined8 param_1,long *param_2,long param_3,ulong param_4)

{
  long lVar1;
  undefined4 uVar2;
  double dVar3;
  
  lVar1 = *(long *)(*param_2 + 0x27) + (ulong)*(uint *)(*param_2 + 0x2f);
  if ((param_4 & 1) == 0) {
    *(float *)(lVar1 + param_3 * 4) = (float)((int)param_4 >> 1);
    return;
  }
  dVar3 = *(double *)(param_4 + 3);
  if (dVar3 <= 3.4028234663852886e+38) {
    if (-3.4028234663852886e+38 <= dVar3) {
      *(float *)(lVar1 + param_3 * 4) = (float)dVar3;
      return;
    }
    if (-3.4028235677973362e+38 <= dVar3) {
      uVar2 = 0xff7fffff;
    }
    else {
      uVar2 = 0xff800000;
    }
  }
  else if (dVar3 <= 3.4028235677973362e+38) {
    uVar2 = 0x7f7fffff;
  }
  else {
    uVar2 = 0x7f800000;
  }
  *(undefined4 *)(lVar1 + param_3 * 4) = uVar2;
  return;
}

