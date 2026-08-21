
void spArrayFloatArray_addAll(int *param_1,int *param_2)

{
  void *pvVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  
  if (0 < *param_2) {
    iVar4 = *param_1;
    lVar5 = 0;
    do {
      uVar6 = *(undefined8 *)(*(long *)(param_2 + 2) + lVar5 * 8);
      if (iVar4 == param_1[1]) {
        uVar2 = (uint)((float)iVar4 * 1.75);
        if ((int)uVar2 < 9) {
          uVar2 = 8;
        }
        param_1[1] = uVar2;
        pvVar1 = _spRealloc(*(void **)(param_1 + 2),(ulong)uVar2 << 3);
        iVar3 = *param_1;
        *(void **)(param_1 + 2) = pvVar1;
      }
      else {
        pvVar1 = *(void **)(param_1 + 2);
        iVar3 = iVar4;
      }
      iVar4 = iVar3 + 1;
      *param_1 = iVar4;
      *(undefined8 *)((long)pvVar1 + (long)iVar3 * 8) = uVar6;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *param_2);
  }
  return;
}

