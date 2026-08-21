
int * spShortArray_setSize(int *param_1,int param_2)

{
  void *pvVar1;
  int iVar2;
  
  *param_1 = param_2;
  if (param_1[1] < param_2) {
    iVar2 = (int)((float)param_2 * 1.75);
    if (iVar2 < 9) {
      iVar2 = 8;
    }
    param_1[1] = iVar2;
    pvVar1 = _spRealloc(*(void **)(param_1 + 2),(ulong)(uint)(iVar2 << 1));
    *(void **)(param_1 + 2) = pvVar1;
  }
  return param_1;
}

