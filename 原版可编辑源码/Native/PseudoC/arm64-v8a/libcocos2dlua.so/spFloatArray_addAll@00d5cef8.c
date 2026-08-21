
void spFloatArray_addAll(int *param_1,int *param_2)

{
  undefined4 uVar1;
  void *pvVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  
  if (0 < *param_2) {
    iVar5 = *param_1;
    lVar6 = 0;
    do {
      uVar1 = *(undefined4 *)(*(long *)(param_2 + 2) + lVar6 * 4);
      if (iVar5 == param_1[1]) {
        uVar3 = (uint)((float)iVar5 * 1.75);
        if ((int)uVar3 < 9) {
          uVar3 = 8;
        }
        param_1[1] = uVar3;
        pvVar2 = _spRealloc(*(void **)(param_1 + 2),(ulong)uVar3 << 2);
        iVar4 = *param_1;
        *(void **)(param_1 + 2) = pvVar2;
      }
      else {
        pvVar2 = *(void **)(param_1 + 2);
        iVar4 = iVar5;
      }
      iVar5 = iVar4 + 1;
      *param_1 = iVar5;
      *(undefined4 *)((long)pvVar2 + (long)iVar4 * 4) = uVar1;
      lVar6 = lVar6 + 1;
    } while (lVar6 < *param_2);
  }
  return;
}

