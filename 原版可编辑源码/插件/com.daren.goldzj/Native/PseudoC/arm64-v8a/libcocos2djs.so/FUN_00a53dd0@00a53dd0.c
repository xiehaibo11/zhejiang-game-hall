
bool FUN_00a53dd0(char *param_1)

{
  bool bVar1;
  char *pcVar2;
  size_t sVar3;
  
  bVar1 = false;
  if (param_1 != (char *)0x0) {
    if (*param_1 == '\0') {
      bVar1 = false;
    }
    else {
      pcVar2 = strpbrk(param_1,"\\/@");
      bVar1 = false;
      if ((pcVar2 != (char *)0x0) && (param_1 < pcVar2)) {
        sVar3 = strlen(param_1);
        bVar1 = pcVar2 < param_1 + (sVar3 - 1);
      }
    }
  }
  return bVar1;
}

