
long inflateMark(long param_1)

{
  long lVar1;
  int *piVar2;
  
  if (param_1 == 0) {
    return -0x10000;
  }
  piVar2 = *(int **)(param_1 + 0x38);
  if (piVar2 == (int *)0x0) {
    return -0x10000;
  }
  lVar1 = (long)piVar2[0x6f9] * 0x10000;
  if (*piVar2 == 0x18) {
    return lVar1 + (ulong)(uint)(piVar2[0x6fa] - piVar2[0x15]);
  }
  if (*piVar2 == 0xf) {
    return lVar1 + (ulong)(uint)piVar2[0x15];
  }
  return lVar1;
}

