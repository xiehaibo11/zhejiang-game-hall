
void spIntArray_addAllValues(int *param_1,long param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  void *pvVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  
  if (0 < param_4) {
    lVar5 = (long)param_3;
    do {
      iVar4 = *param_1;
      uVar1 = *(undefined4 *)(param_2 + lVar5 * 4);
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
      lVar5 = lVar5 + 1;
      *param_1 = iVar4 + 1;
      *(undefined4 *)((long)pvVar2 + (long)iVar4 * 4) = uVar1;
    } while (lVar5 < param_4 + param_3);
  }
  return;
}

