
undefined4 FUN_00f712dc(char *param_1,char *param_2)

{
  int iVar1;
  size_t sVar2;
  size_t sVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  char *pcVar6;
  long lVar7;
  
  if ((param_1 == (char *)0x0) || (param_2 == (char *)0x0)) {
    puVar4 = (undefined4 *)__errno();
    uVar5 = 0x16;
  }
  else {
    lVar7 = *(long *)(param_1 + 0x1020);
    if (lVar7 == 0) {
      puVar4 = (undefined4 *)__errno();
      uVar5 = 2;
    }
    else {
      sVar2 = strlen(param_1);
      sVar3 = strlen((char *)(lVar7 + 0x13));
      if ((sVar2 + sVar3 + 1 < 0x1000) &&
         (sVar2 = strlen((char *)(*(long *)(param_1 + 0x1020) + 0x13)), sVar2 < 0x100)) {
        __strcpy_chk(param_2,param_1,0x1000);
        __strcat_chk(param_2,&DAT_0144b7ba,0x1000);
        pcVar6 = param_2 + 0x1000;
        __strcpy_chk(pcVar6,*(long *)(param_1 + 0x1020) + 0x13,0x100);
        __strcat_chk(param_2,pcVar6,0x1000);
        iVar1 = stat(param_2,(stat *)(param_2 + 0x1110));
        if (iVar1 == -1) {
          return 0xffffffff;
        }
        lVar7 = __strrchr_chk(pcVar6,0x2e,0x100);
        if (lVar7 == 0) {
          sVar2 = strlen(pcVar6);
          pcVar6 = param_2 + sVar2 + 0x1000;
        }
        else {
          pcVar6 = (char *)(lVar7 + 1);
        }
        *(char **)(param_2 + 0x1100) = pcVar6;
        *(ulong *)(param_2 + 0x1108) =
             CONCAT44(-(uint)((*(uint *)(param_2 + 0x1120) & 0xf000) == 0x8000),
                      -(uint)((*(uint *)(param_2 + 0x1120) & 0xf000) == 0x4000)) & 0x100000001;
        return 0;
      }
      puVar4 = (undefined4 *)__errno();
      uVar5 = 0x24;
    }
  }
  *puVar4 = uVar5;
  return 0xffffffff;
}

