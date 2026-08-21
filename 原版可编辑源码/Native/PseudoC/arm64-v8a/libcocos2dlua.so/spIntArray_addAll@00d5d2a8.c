
void spIntArray_addAll(int *param_1,int *param_2)

{
  undefined4 uVar1;
  void *pvVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  
  if (0 < *param_2) {
    lVar5 = 0;
    do {
      iVar4 = *param_1;
      uVar1 = *(undefined4 *)(*(long *)(param_2 + 2) + lVar5 * 4);
      if (iVar4 == param_1[1]) {
        uVar3 = (uint)((float)iVar4 * 1.75);
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
      }
      *param_1 = iVar4 + 1;
      *(undefined4 *)((long)pvVar2 + (long)iVar4 * 4) = uVar1;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *param_2);
  }
  return;
}

