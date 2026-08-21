
void spFloatArray_add(undefined4 param_1,int *param_2)

{
  void *pvVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = *param_2;
  if (iVar2 == param_2[1]) {
    uVar3 = (uint)((float)iVar2 * 1.75);
    if ((int)uVar3 < 9) {
      uVar3 = 8;
    }
    param_2[1] = uVar3;
    pvVar1 = _spRealloc(*(void **)(param_2 + 2),(ulong)uVar3 << 2);
    iVar2 = *param_2;
    *(void **)(param_2 + 2) = pvVar1;
  }
  else {
    pvVar1 = *(void **)(param_2 + 2);
  }
  *param_2 = iVar2 + 1;
  *(undefined4 *)((long)pvVar1 + (long)iVar2 * 4) = param_1;
  return;
}

