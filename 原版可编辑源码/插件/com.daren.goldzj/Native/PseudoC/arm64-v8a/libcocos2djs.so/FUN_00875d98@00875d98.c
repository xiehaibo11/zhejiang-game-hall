
undefined4 FUN_00875d98(char *param_1,char *param_2)

{
  int iVar1;
  size_t sVar2;
  size_t sVar3;
  undefined4 *puVar4;
  char *pcVar5;
  char *pcVar6;
  undefined4 uVar7;
  long lVar8;
  
  if ((param_1 == (char *)0x0) || (param_2 == (char *)0x0)) {
    puVar4 = (undefined4 *)__errno();
    uVar7 = 0x16;
  }
  else {
    lVar8 = *(long *)(param_1 + 0x1020);
    if (lVar8 == 0) {
      puVar4 = (undefined4 *)__errno();
      uVar7 = 2;
    }
    else {
      sVar2 = strlen(param_1);
      sVar3 = strlen((char *)(lVar8 + 0x13));
      if ((sVar2 + sVar3 + 1 < 0x1000) && (sVar3 < 0x100)) {
        pcVar5 = strcpy(param_2,param_1);
        sVar2 = strlen(pcVar5);
        (param_2 + sVar2)[0] = '/';
        (param_2 + sVar2)[1] = '\0';
        pcVar5 = param_2 + 0x1000;
        strcpy(pcVar5,(char *)(*(long *)(param_1 + 0x1020) + 0x13));
        pcVar6 = strcat(param_2,pcVar5);
        iVar1 = stat(pcVar6,(stat *)(param_2 + 0x1110));
        if (iVar1 == -1) {
          return 0xffffffff;
        }
        pcVar6 = strrchr(pcVar5,0x2e);
        if (pcVar6 == (char *)0x0) {
          sVar2 = strlen(pcVar5);
          pcVar6 = param_2 + sVar2 + 0x1000;
        }
        else {
          pcVar6 = pcVar6 + 1;
        }
        *(char **)(param_2 + 0x1100) = pcVar6;
        *(ulong *)(param_2 + 0x1108) =
             CONCAT44(-(uint)((*(uint *)(param_2 + 0x1120) & 0xf000) == 0x8000),
                      -(uint)((*(uint *)(param_2 + 0x1120) & 0xf000) == 0x4000)) & 0x100000001;
        return 0;
      }
      puVar4 = (undefined4 *)__errno();
      uVar7 = 0x24;
    }
  }
  *puVar4 = uVar7;
  return 0xffffffff;
}

