
ulong inflateSyncPoint(long param_1)

{
  int *piVar1;
  
  if (param_1 == 0) {
    return 0xfffffffe;
  }
  piVar1 = *(int **)(param_1 + 0x38);
  if (piVar1 != (int *)0x0) {
    if (*piVar1 == 0xd) {
      return (ulong)(piVar1[0x14] == 0);
    }
    return 0;
  }
  return 0xfffffffe;
}

