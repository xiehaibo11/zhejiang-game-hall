
void spSkin_attachAll(long param_1,long param_2,long param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  char *__s2;
  int *piVar4;
  int *piVar5;
  
  piVar4 = *(int **)(param_3 + 8);
  do {
    if (piVar4 == (int *)0x0) {
      return;
    }
    iVar1 = *piVar4;
    lVar3 = *(long *)(*(long *)(param_2 + 0x28) + (long)iVar1 * 8);
    if ((*(long *)(lVar3 + 0x28) == *(long *)(piVar4 + 4)) &&
       (piVar5 = *(int **)(param_1 + 8), piVar5 != (int *)0x0)) {
      __s2 = *(char **)(piVar4 + 2);
      do {
        if ((*piVar5 == iVar1) && (iVar2 = strcmp(*(char **)(piVar5 + 2),__s2), iVar2 == 0)) {
          if (*(long *)(piVar5 + 4) != 0) {
            spSlot_setAttachment(lVar3);
          }
          break;
        }
        piVar5 = *(int **)(piVar5 + 6);
      } while (piVar5 != (int *)0x0);
    }
    piVar4 = *(int **)(piVar4 + 6);
  } while( true );
}

