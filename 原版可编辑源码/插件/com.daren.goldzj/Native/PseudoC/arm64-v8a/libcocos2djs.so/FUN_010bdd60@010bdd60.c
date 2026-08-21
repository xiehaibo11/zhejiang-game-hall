
undefined8
FUN_010bdd60(undefined8 param_1,undefined8 param_2,ulong *param_3,ulong *param_4,ulong param_5,
            ulong param_6)

{
  ulong uVar1;
  ulong uVar2;
  double dVar3;
  
  uVar1 = *param_3;
  if ((*(uint *)((uVar1 & 0xffffffff00000000 | (ulong)*(uint *)(uVar1 + 0xb)) + 0x1b) >> 2 & 1) == 0
     ) {
    uVar2 = *param_4;
    if ((uVar2 & 1) == 0) {
      dVar3 = (double)((int)uVar2 >> 1);
    }
    else {
      if (*(short *)((uVar2 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar2 - 1)) != 0x42) {
        return 1;
      }
      dVar3 = *(double *)(uVar2 + 3);
    }
    if ((ABS(dVar3) < INFINITY) || (ABS(dVar3) != INFINITY)) {
      if ((dVar3 < -1.7976931348623157e+308) || (1.7976931348623157e+308 < dVar3)) {
        return 1;
      }
    }
    else if (NAN(dVar3)) {
      return 1;
    }
    uVar2 = *(ulong *)(uVar1 + 0x1f);
    if (param_6 <= *(ulong *)(uVar1 + 0x1f)) {
      uVar2 = param_6;
    }
    if (param_5 < uVar2) {
      do {
        if (*(double *)(*(long *)(uVar1 + 0x27) + (ulong)*(uint *)(uVar1 + 0x2f) + param_5 * 8) ==
            dVar3) {
          return 1;
        }
        param_5 = param_5 + 1;
      } while (param_5 < uVar2);
    }
  }
  return 1;
}

