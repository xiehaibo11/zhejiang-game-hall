
undefined8 FUN_00c2fcc0(long param_1)

{
  clock_t cVar1;
  double *pdVar2;
  
  pdVar2 = *(double **)(param_1 + 0x28);
  *(double **)(param_1 + 0x28) = pdVar2 + 1;
  cVar1 = clock();
  *pdVar2 = (double)cVar1 * 1e-06;
  return 1;
}

