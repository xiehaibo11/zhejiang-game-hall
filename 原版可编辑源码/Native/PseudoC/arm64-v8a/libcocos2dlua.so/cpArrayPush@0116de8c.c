
void cpArrayPush(int *param_1,undefined8 param_2)

{
  void *pvVar1;
  int iVar2;
  
  iVar2 = *param_1;
  if (iVar2 == param_1[1]) {
    param_1[1] = (int)((long)iVar2 << 1);
    pvVar1 = realloc(*(void **)(param_1 + 2),(long)iVar2 << 4);
    iVar2 = *param_1;
    *(void **)(param_1 + 2) = pvVar1;
  }
  else {
    pvVar1 = *(void **)(param_1 + 2);
  }
  *(undefined8 *)((long)pvVar1 + (long)iVar2 * 8) = param_2;
  *param_1 = iVar2 + 1;
  return;
}

