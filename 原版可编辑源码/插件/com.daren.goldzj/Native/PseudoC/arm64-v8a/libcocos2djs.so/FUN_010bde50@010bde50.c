
undefined8 FUN_010bde50(undefined8 param_1,long *param_2,ulong *param_3,long param_4)

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
  if ((ABS(dVar2) < INFINITY) || (ABS(dVar2) != INFINITY)) {
    if ((dVar2 < -1.7976931348623157e+308) || (1.7976931348623157e+308 < dVar2)) {
      return 1;
    }
  }
  else if (NAN(dVar2)) {
    return 1;
  }
  do {
    if (*(double *)(*(long *)(*param_2 + 0x27) + (ulong)*(uint *)(*param_2 + 0x2f) + param_4 * 8) ==
        dVar2) {
      return 1;
    }
    param_4 = param_4 + -1;
  } while (param_4 != -1);
  return 1;
}

