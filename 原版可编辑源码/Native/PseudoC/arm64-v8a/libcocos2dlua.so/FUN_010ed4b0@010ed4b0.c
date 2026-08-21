
int FUN_010ed4b0(long *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *__format;
  long lVar4;
  char *pcVar5;
  
  lVar4 = *param_1;
  iVar2 = *(int *)(lVar4 + 0x28);
  if ((iVar2 < 1) || (*(int *)(lVar4 + 0x90) < iVar2)) {
    if ((*(long *)(lVar4 + 0x98) != 0) &&
       ((*(int *)(lVar4 + 0xa0) <= iVar2 && (iVar2 <= *(int *)(lVar4 + 0xa4))))) {
      pcVar3 = *(char **)(*(long *)(lVar4 + 0x98) + (long)(iVar2 - *(int *)(lVar4 + 0xa0)) * 8);
      goto joined_r0x010ed4f0;
    }
  }
  else {
    pcVar3 = *(char **)(*(long *)(lVar4 + 0x88) + (long)iVar2 * 8);
joined_r0x010ed4f0:
    __format = pcVar3;
    if (pcVar3 != (char *)0x0) goto LAB_010ed504;
  }
  *(int *)(lVar4 + 0x2c) = iVar2;
  pcVar3 = (char *)**(undefined8 **)(lVar4 + 0x88);
  __format = pcVar3;
LAB_010ed504:
  do {
    pcVar5 = pcVar3 + 1;
    cVar1 = *pcVar3;
    if (cVar1 == '\0') goto LAB_010ed530;
    pcVar3 = pcVar5;
  } while (cVar1 != '%');
  if (*pcVar5 == 's') {
    iVar2 = sprintf(param_2,__format,lVar4 + 0x2c);
    return iVar2;
  }
LAB_010ed530:
  iVar2 = sprintf(param_2,__format,(ulong)*(uint *)(lVar4 + 0x2c),(ulong)*(uint *)(lVar4 + 0x30),
                  (ulong)*(uint *)(lVar4 + 0x34),(ulong)*(uint *)(lVar4 + 0x38),
                  (ulong)*(uint *)(lVar4 + 0x3c),(ulong)*(uint *)(lVar4 + 0x40),
                  *(undefined4 *)(lVar4 + 0x44),*(undefined4 *)(lVar4 + 0x48));
  return iVar2;
}

