
int FUN_00a32de4(long *param_1,long *param_2)

{
  int iVar1;
  size_t sVar2;
  char *pcVar3;
  size_t sVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = *param_1;
  lVar6 = *param_2;
  if (*(char **)(lVar5 + 0x18) == (char *)0x0) {
    sVar2 = 0;
    pcVar3 = *(char **)(lVar6 + 0x18);
    if (pcVar3 != (char *)0x0) goto LAB_00a32e14;
    sVar4 = 0;
  }
  else {
    sVar2 = strlen(*(char **)(lVar5 + 0x18));
    pcVar3 = *(char **)(lVar6 + 0x18);
    sVar4 = 0;
    if (pcVar3 != (char *)0x0) {
LAB_00a32e14:
      sVar4 = strlen(pcVar3);
    }
  }
  if (sVar2 != sVar4) goto LAB_00a32e64;
  if (*(char **)(lVar5 + 0x28) == (char *)0x0) {
    sVar2 = 0;
    pcVar3 = *(char **)(lVar6 + 0x28);
    if (pcVar3 != (char *)0x0) goto LAB_00a32e38;
    sVar4 = 0;
  }
  else {
    sVar2 = strlen(*(char **)(lVar5 + 0x28));
    pcVar3 = *(char **)(lVar6 + 0x28);
    sVar4 = 0;
    if (pcVar3 != (char *)0x0) {
LAB_00a32e38:
      sVar4 = strlen(pcVar3);
    }
  }
  if (sVar2 == sVar4) {
    if (*(char **)(lVar5 + 8) == (char *)0x0) {
      return 0;
    }
                    /* try { // try from 00a32e50 to 00b32e9f has its CatchHandler @ 00a32e50
                       catch() { ... } // from try @ 00a32e50 with catch @ 00a32e50
                       catch() { ... } // from try @ 00a32efc with catch @ 00a32e50
                       catch() { ... } // from try @ 00a32f40 with catch @ 00a32e50 */
    if (*(char **)(lVar6 + 8) == (char *)0x0) {
      return 0;
    }
    iVar1 = strcmp(*(char **)(lVar5 + 8),*(char **)(lVar6 + 8));
    return iVar1;
  }
LAB_00a32e64:
  iVar1 = -1;
  if (sVar2 < sVar4) {
    iVar1 = 1;
  }
  return iVar1;
}

