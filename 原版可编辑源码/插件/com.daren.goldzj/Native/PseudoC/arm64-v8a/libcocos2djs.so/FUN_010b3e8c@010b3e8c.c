
undefined8 FUN_010b3e8c(undefined8 param_1,long *param_2,ulong *param_3,long param_4)

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
  if ((((dVar2 <= 65535.0) && (0.0 <= dVar2)) && (ABS(dVar2) != INFINITY)) &&
     ((!NAN(ABS(dVar2)) && (dVar2 == (double)(uint)(int)dVar2)))) {
    do {
      if ((uint)*(ushort *)
                 (*(long *)(*param_2 + 0x27) + (ulong)*(uint *)(*param_2 + 0x2f) + param_4 * 2) ==
          (int)dVar2) {
        return 1;
      }
      param_4 = param_4 + -1;
    } while (param_4 != -1);
  }
  return 1;
}

