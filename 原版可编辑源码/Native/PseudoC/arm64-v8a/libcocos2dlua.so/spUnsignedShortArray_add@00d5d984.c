
void spUnsignedShortArray_add(int *param_1,undefined2 param_2)

{
  void *pvVar1;
  int iVar2;
  
  iVar2 = *param_1;
  if (iVar2 == param_1[1]) {
    iVar2 = (int)((float)iVar2 * 1.75);
    if (iVar2 < 9) {
      iVar2 = 8;
    }
    param_1[1] = iVar2;
    pvVar1 = _spRealloc(*(void **)(param_1 + 2),(ulong)(uint)(iVar2 << 1));
    iVar2 = *param_1;
    *(void **)(param_1 + 2) = pvVar1;
  }
  else {
    pvVar1 = *(void **)(param_1 + 2);
  }
  *param_1 = iVar2 + 1;
  *(undefined2 *)((long)pvVar1 + (long)iVar2 * 2) = param_2;
  return;
}

