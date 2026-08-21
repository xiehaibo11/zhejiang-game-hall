
undefined8 FUN_00a186e8(long param_1,int param_2)

{
  int *piVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  piVar1 = (int *)(param_1 + 0x8e40);
  if (*piVar1 != 0) {
    plVar2 = (long *)(param_1 + 0x8e48);
    if (0 < *piVar1) {
      lVar4 = 0;
      do {
        lVar5 = lVar4 * 8;
        FUN_00a16c3c(*(undefined8 *)(*plVar2 + lVar5));
        lVar4 = lVar4 + 1;
        *(undefined8 *)(*plVar2 + lVar5) = 0;
      } while (lVar4 < *piVar1);
    }
    (*(code *)PTR_free_01d1b748)(*plVar2);
    *plVar2 = 0;
    *piVar1 = 0;
  }
  lVar4 = (*(code *)PTR_calloc_01d1b760)((long)param_2,8);
  if (lVar4 == 0) {
    uVar3 = 0x1b;
  }
  else {
    uVar3 = 0;
    *piVar1 = param_2;
    *(long *)(param_1 + 0x8e48) = lVar4;
  }
  return uVar3;
}

