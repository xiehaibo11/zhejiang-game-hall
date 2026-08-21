
void FUN_00a18660(long param_1)

{
  int *piVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  piVar1 = (int *)(param_1 + 0x8e40);
  if (*piVar1 != 0) {
    plVar2 = (long *)(param_1 + 0x8e48);
    if (0 < *piVar1) {
      lVar3 = 0;
      do {
        lVar4 = lVar3 * 8;
        FUN_00a16c3c(*(undefined8 *)(*plVar2 + lVar4));
        lVar3 = lVar3 + 1;
        *(undefined8 *)(*plVar2 + lVar4) = 0;
      } while (lVar3 < *piVar1);
    }
    (*(code *)PTR_free_01d1b748)(*plVar2);
    *plVar2 = 0;
    *piVar1 = 0;
  }
  return;
}

