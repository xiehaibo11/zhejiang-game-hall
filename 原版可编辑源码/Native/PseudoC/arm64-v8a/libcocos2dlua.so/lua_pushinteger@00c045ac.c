
void lua_pushinteger(long param_1,long param_2)

{
  ulong uVar1;
  double *pdVar2;
  
  pdVar2 = *(double **)(param_1 + 0x28);
  if (param_2 == (int)param_2) {
    *(int *)pdVar2 = (int)param_2;
    *(int *)((long)pdVar2 + 4) = -0x70000;
  }
  else {
    *pdVar2 = (double)param_2;
  }
  uVar1 = *(long *)(param_1 + 0x28) + 8;
  *(ulong *)(param_1 + 0x28) = uVar1;
  if (uVar1 < *(ulong *)(param_1 + 0x30)) {
    return;
  }
  FUN_00bfe164();
  return;
}

