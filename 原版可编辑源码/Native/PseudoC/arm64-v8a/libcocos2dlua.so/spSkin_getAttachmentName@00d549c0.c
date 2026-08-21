
undefined8 spSkin_getAttachmentName(long param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)(param_1 + 8);
  if (piVar1 != (int *)0x0) {
    iVar2 = 0;
    do {
      if (*piVar1 == param_2) {
        if (iVar2 == param_3) {
          return *(undefined8 *)(piVar1 + 2);
        }
        iVar2 = iVar2 + 1;
      }
      piVar1 = *(int **)(piVar1 + 6);
    } while (piVar1 != (int *)0x0);
  }
  return 0;
}

