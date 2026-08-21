
void FUN_01171400(long param_1)

{
  long *plVar1;
  undefined8 *__ptr;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  
  __ptr = *(undefined8 **)(param_1 + 0x28);
  if ((__ptr != (undefined8 *)0x0) && (iVar3 = *(int *)(param_1 + 0x20), 0 < iVar3)) {
    lVar4 = 0;
    plVar5 = (long *)*__ptr;
    while( true ) {
      if (plVar5 != (long *)0x0) {
        do {
          plVar1 = (long *)plVar5[1];
          uVar2 = *(undefined8 *)(param_1 + 0x40);
          iVar3 = *(int *)(*plVar5 + 8) + -1;
          *(int *)(*plVar5 + 8) = iVar3;
          if (iVar3 == 0) {
            cpArrayPush(uVar2);
          }
          plVar5[1] = *(long *)(param_1 + 0x38);
          *(long **)(param_1 + 0x38) = plVar5;
          plVar5 = plVar1;
        } while (plVar1 != (long *)0x0);
        __ptr = *(undefined8 **)(param_1 + 0x28);
        iVar3 = *(int *)(param_1 + 0x20);
      }
      __ptr[lVar4] = 0;
      lVar4 = lVar4 + 1;
      if (iVar3 <= lVar4) break;
      __ptr = *(undefined8 **)(param_1 + 0x28);
      plVar5 = (long *)__ptr[lVar4];
    }
    __ptr = *(undefined8 **)(param_1 + 0x28);
  }
  free(__ptr);
  cpHashSetFree(*(undefined8 *)(param_1 + 0x30));
  cpArrayFreeEach(*(undefined8 *)(param_1 + 0x48),free);
  cpArrayFree(*(undefined8 *)(param_1 + 0x48));
  cpArrayFree(*(undefined8 *)(param_1 + 0x40));
  return;
}

