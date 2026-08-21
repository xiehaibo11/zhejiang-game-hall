
long FUN_01042c90(long param_1,char *param_2,long *param_3)

{
  char cVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  char *pcVar6;
  
  *param_3 = 0;
  lVar5 = *(long *)(param_1 + 0x58);
  if ((lVar5 != 0) && (param_2 != (char *)0x0)) {
    cVar1 = *param_2;
    pcVar6 = param_2;
    lVar2 = lVar5;
    if (cVar1 != '/') goto LAB_01042cec;
    while( true ) {
      while (lVar2 == 0) {
        while( true ) {
          pcVar6 = pcVar6 + 1;
          cVar1 = *pcVar6;
          lVar2 = lVar5;
          if (cVar1 == '/') break;
LAB_01042cec:
          if (cVar1 == '\0') {
            return param_1;
          }
        }
      }
      if ((*(char **)(lVar2 + 0x28) != (char *)0x0) &&
         (((uVar4 = (ulong)*(byte *)(lVar2 + 0x30), param_2 + uVar4 <= pcVar6 &&
           (iVar3 = strncmp(pcVar6 + (1 - uVar4),*(char **)(lVar2 + 0x28),uVar4 - 1), iVar3 == 0))
          || ((*(char **)(lVar2 + 0x38) != (char *)0x0 &&
              (((uVar4 = (ulong)*(byte *)(lVar2 + 0x40), param_2 + uVar4 <= pcVar6 &&
                (iVar3 = strncmp(pcVar6 + (1 - uVar4),*(char **)(lVar2 + 0x38),uVar4 - 1),
                iVar3 == 0)) ||
               ((*(char **)(lVar2 + 0x48) != (char *)0x0 &&
                ((uVar4 = (ulong)*(byte *)(lVar2 + 0x50), param_2 + uVar4 <= pcVar6 &&
                 (iVar3 = strncmp(pcVar6 + (1 - uVar4),*(char **)(lVar2 + 0x48),uVar4 - 1),
                 iVar3 == 0)))))))))))) break;
      lVar2 = *(long *)(lVar2 + 0x58);
    }
    *param_3 = (long)(pcVar6 + 1);
    param_1 = lVar2;
  }
  return param_1;
}

