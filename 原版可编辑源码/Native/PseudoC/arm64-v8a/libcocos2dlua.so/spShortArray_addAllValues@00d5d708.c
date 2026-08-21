
void spShortArray_addAllValues(int *param_1,long param_2,int param_3,int param_4)

{
  undefined2 uVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  
  if (0 < param_4) {
    iVar3 = *param_1;
    lVar5 = (long)param_3;
    do {
      uVar1 = *(undefined2 *)(param_2 + lVar5 * 2);
      if (iVar3 == param_1[1]) {
        iVar3 = (int)((float)iVar3 * 1.75);
        if (iVar3 < 9) {
          iVar3 = 8;
        }
        param_1[1] = iVar3;
        pvVar2 = _spRealloc(*(void **)(param_1 + 2),(ulong)(uint)(iVar3 << 1));
        iVar4 = *param_1;
        *(void **)(param_1 + 2) = pvVar2;
      }
      else {
        pvVar2 = *(void **)(param_1 + 2);
        iVar4 = iVar3;
      }
      iVar3 = iVar4 + 1;
      lVar5 = lVar5 + 1;
      *param_1 = iVar3;
      *(undefined2 *)((long)pvVar2 + (long)iVar4 * 2) = uVar1;
    } while (lVar5 < param_4 + param_3);
  }
  return;
}

