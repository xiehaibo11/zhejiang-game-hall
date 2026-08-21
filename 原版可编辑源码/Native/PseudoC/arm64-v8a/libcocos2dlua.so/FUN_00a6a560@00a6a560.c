
bool FUN_00a6a560(char *param_1,char *param_2)

{
  bool bVar1;
  int iVar2;
  char *__s;
  char *__s_00;
  size_t sVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  undefined1 auStack_58 [24];
  undefined1 auStack_38 [8];
  
  if (param_1 == (char *)0x0) {
    return false;
  }
  if (param_2 == (char *)0x0) {
    return false;
  }
  if (*param_1 == '\0') {
    return false;
  }
  if ((*param_2 == '\0') || (__s = (char *)(*(code *)PTR_strdup_01769a10)(), __s == (char *)0x0)) {
    return false;
  }
  __s_00 = (char *)(*(code *)PTR_strdup_01769a10)(param_2);
  if (__s_00 == (char *)0x0) {
    bVar1 = false;
    goto LAB_00a6a6c8;
  }
  sVar3 = strlen(__s_00);
  if (__s_00[sVar3 - 1] == '.') {
    __s_00[sVar3 - 1] = '\0';
  }
  sVar3 = strlen(__s);
  if (__s[sVar3 - 1] == '.') {
    __s[sVar3 - 1] = '\0';
  }
  pcVar4 = strchr(__s,0x2a);
  if (pcVar4 == (char *)0x0) {
LAB_00a6a6a0:
    iVar2 = FUN_00a4a0f8(__s,__s_00);
LAB_00a6a6ac:
    bVar1 = iVar2 != 0;
  }
  else {
    iVar2 = inet_pton(2,__s_00,auStack_38);
    if ((iVar2 < 1) && (iVar2 = inet_pton(10,__s_00,auStack_58), iVar2 < 1)) {
      pcVar5 = strchr(__s,0x2e);
      if ((pcVar5 == (char *)0x0) ||
         (((pcVar6 = strchr(pcVar5 + 1,0x2e), pcVar5 < pcVar4 || (pcVar6 == (char *)0x0)) ||
          (iVar2 = FUN_00a4a220(__s,&DAT_013cc03a,4), iVar2 != 0)))) goto LAB_00a6a6a0;
      pcVar6 = strchr(__s_00,0x2e);
      if (((pcVar6 == (char *)0x0) || (iVar2 = FUN_00a4a0f8(pcVar5,pcVar6), iVar2 == 0)) ||
         (((long)pcVar6 - (long)__s_00 < (long)pcVar5 - (long)__s ||
          (iVar2 = FUN_00a4a220(__s,__s_00,(long)pcVar4 - (long)__s), iVar2 == 0))))
      goto LAB_00a6a644;
      iVar2 = FUN_00a4a220(pcVar4 + 1,(long)pcVar6 - ((long)pcVar5 - (long)(pcVar4 + 1)));
      goto LAB_00a6a6ac;
    }
LAB_00a6a644:
    bVar1 = false;
  }
  (*(code *)PTR_free_01769a00)(__s_00);
LAB_00a6a6c8:
  (*(code *)PTR_free_01769a00)(__s);
  return bVar1;
}

