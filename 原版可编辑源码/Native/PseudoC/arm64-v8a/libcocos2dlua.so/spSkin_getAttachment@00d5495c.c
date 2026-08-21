
undefined8 spSkin_getAttachment(long param_1,int param_2,char *param_3)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 8);
  while( true ) {
    if (piVar2 == (int *)0x0) {
      return 0;
    }
    if ((*piVar2 == param_2) && (iVar1 = strcmp(*(char **)(piVar2 + 2),param_3), iVar1 == 0)) break;
    piVar2 = *(int **)(piVar2 + 6);
  }
  return *(undefined8 *)(piVar2 + 4);
}

