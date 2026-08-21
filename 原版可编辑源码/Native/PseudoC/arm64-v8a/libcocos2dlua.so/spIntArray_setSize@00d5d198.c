
int * spIntArray_setSize(int *param_1,int param_2)

{
  void *pvVar1;
  uint uVar2;
  
  *param_1 = param_2;
  if (param_1[1] < param_2) {
    uVar2 = (uint)((float)param_2 * 1.75);
    if ((int)uVar2 < 9) {
      uVar2 = 8;
    }
    param_1[1] = uVar2;
    pvVar1 = _spRealloc(*(void **)(param_1 + 2),(ulong)uVar2 << 2);
    *(void **)(param_1 + 2) = pvVar1;
  }
  return param_1;
}

