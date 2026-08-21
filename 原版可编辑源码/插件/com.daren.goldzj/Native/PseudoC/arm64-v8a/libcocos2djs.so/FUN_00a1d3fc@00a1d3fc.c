
int FUN_00a1d3fc(long *param_1,long *param_2)

{
  int iVar1;
  size_t sVar2;
  char *pcVar3;
  size_t sVar4;
  long lVar5;
  long lVar6;
  
                    /* catch() { ... } // from try @ 00a1d328 with catch @ 00a1d408 */
  lVar5 = *param_1;
  lVar6 = *param_2;
  if (*(char **)(lVar5 + 0x18) == (char *)0x0) {
    sVar2 = 0;
    pcVar3 = *(char **)(lVar6 + 0x18);
    if (pcVar3 != (char *)0x0) goto LAB_00a1d42c;
    sVar4 = 0;
  }
  else {
    sVar2 = strlen(*(char **)(lVar5 + 0x18));
    pcVar3 = *(char **)(lVar6 + 0x18);
    sVar4 = 0;
    if (pcVar3 != (char *)0x0) {
LAB_00a1d42c:
      sVar4 = strlen(pcVar3);
    }
  }
  if (sVar2 != sVar4) goto LAB_00a1d47c;
  if (*(char **)(lVar5 + 0x28) == (char *)0x0) {
    sVar2 = 0;
    pcVar3 = *(char **)(lVar6 + 0x28);
    if (pcVar3 != (char *)0x0) goto LAB_00a1d450;
    sVar4 = 0;
  }
  else {
    sVar2 = strlen(*(char **)(lVar5 + 0x28));
                    /* catch() { ... } // from try @ 00a1d2f0 with catch @ 00a1d448 */
    pcVar3 = *(char **)(lVar6 + 0x28);
    sVar4 = 0;
    if (pcVar3 != (char *)0x0) {
LAB_00a1d450:
      sVar4 = strlen(pcVar3);
    }
  }
  if (sVar2 == sVar4) {
    if (*(char **)(lVar5 + 8) == (char *)0x0) {
      return 0;
    }
    if (*(char **)(lVar6 + 8) == (char *)0x0) {
      return 0;
    }
    iVar1 = strcmp(*(char **)(lVar5 + 8),*(char **)(lVar6 + 8));
    return iVar1;
  }
LAB_00a1d47c:
                    /* catch() { ... } // from try @ 00a1d530 with catch @ 00a1d484
                       catch() { ... } // from try @ 00a1d5b8 with catch @ 00a1d484
                       catch() { ... } // from try @ 00a1d618 with catch @ 00a1d484
                       catch() { ... } // from try @ 00a1d6cc with catch @ 00a1d484 */
  iVar1 = -1;
  if (sVar2 < sVar4) {
    iVar1 = 1;
  }
  return iVar1;
}

