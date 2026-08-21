
void spArrayFloatArray_add(int *param_1,undefined8 param_2)

{
  void *pvVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = *param_1;
  if (iVar2 == param_1[1]) {
    uVar3 = (uint)((float)iVar2 * 1.75);
    if ((int)uVar3 < 9) {
      uVar3 = 8;
    }
    param_1[1] = uVar3;
    pvVar1 = _spRealloc(*(void **)(param_1 + 2),(ulong)uVar3 << 3);
    iVar2 = *param_1;
    *(void **)(param_1 + 2) = pvVar1;
  }
  else {
    pvVar1 = *(void **)(param_1 + 2);
  }
  *param_1 = iVar2 + 1;
  *(undefined8 *)((long)pvVar1 + (long)iVar2 * 8) = param_2;
  return;
}

