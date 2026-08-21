
void FUN_009fee30(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  if ((*(long *)(param_1 + 0x30) != 0) &&
     (lVar1 = *(long *)(*(long *)(param_1 + 0x30) + -8), lVar1 != 0)) {
    FUN_009fee30();
    lVar1 = lVar1 + -1;
    if (lVar1 != 0) {
      lVar2 = 0x40;
      do {
        FUN_009fee30(*(long *)(param_1 + 0x30) + lVar2);
        lVar1 = lVar1 + -1;
        lVar2 = lVar2 + 0x40;
      } while (lVar1 != 0);
    }
  }
  lVar1 = *(long *)(param_1 + 0x28);
  if ((lVar1 != 0) && (lVar2 = *(long *)(lVar1 + -8), lVar2 != 0)) {
    lVar3 = 0x10;
    lVar1 = *(long *)(lVar1 + 0x10);
    while( true ) {
      lVar2 = lVar2 + -1;
      if (lVar1 != 0) {
        free((void *)(lVar1 + -0x10));
      }
      if (lVar2 == 0) break;
      lVar3 = lVar3 + 0x18;
      lVar1 = *(long *)(*(long *)(param_1 + 0x28) + lVar3);
    }
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    free((void *)(*(long *)(param_1 + 0x30) + -0x10));
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    free((void *)(*(long *)(param_1 + 0x28) + -0x10));
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    free((void *)(*(long *)(param_1 + 0x18) + -0x10));
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    free((void *)(*(long *)(param_1 + 0x20) + -0x10));
    return;
  }
  return;
}

