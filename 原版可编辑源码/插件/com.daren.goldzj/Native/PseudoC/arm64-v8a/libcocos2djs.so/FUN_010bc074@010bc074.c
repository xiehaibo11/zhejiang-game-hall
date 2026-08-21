
undefined8 FUN_010bc074(undefined8 param_1,long *param_2,ulong *param_3,long param_4)

{
  ulong uVar1;
  double dVar2;
  
  uVar1 = *param_3;
  if ((uVar1 & 1) == 0) {
    dVar2 = (double)((int)uVar1 >> 1);
  }
  else {
    if (*(short *)((uVar1 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar1 - 1)) != 0x42) {
      return 1;
    }
    dVar2 = *(double *)(uVar1 + 3);
  }
  if (((ABS(dVar2) < INFINITY) || (ABS(dVar2) != INFINITY)) &&
     ((dVar2 < -3.4028234663852886e+38 || (3.4028234663852886e+38 < dVar2)))) {
    return 1;
  }
  if (dVar2 == (double)(float)dVar2) {
    do {
      if (*(float *)(*(long *)(*param_2 + 0x27) + (ulong)*(uint *)(*param_2 + 0x2f) + param_4 * 4)
          == (float)dVar2) {
        return 1;
      }
      param_4 = param_4 + -1;
    } while (param_4 != -1);
  }
  return 1;
}

