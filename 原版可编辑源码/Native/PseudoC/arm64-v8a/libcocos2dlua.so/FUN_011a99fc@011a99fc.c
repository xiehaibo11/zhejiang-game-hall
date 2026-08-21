
int FUN_011a99fc(long param_1,sockaddr *param_2,socklen_t param_3,uint param_4)

{
  uint uVar1;
  sa_family_t sVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  uint local_44;
  
  sVar2 = param_2->sa_family;
  if ((param_4 & 1) == 0) {
    if (sVar2 != 0) {
LAB_011a9a40:
      if (*(int *)(param_1 + 0xb8) == -1) {
        iVar3 = FUN_011a2b64(sVar2,1,0);
        if (iVar3 < 0) {
          return iVar3;
        }
        iVar4 = FUN_011a8740(param_1,iVar3,0);
        if (iVar4 != 0) {
          FUN_011a2d5c(iVar3);
          return iVar4;
        }
      }
    }
    piVar5 = (int *)(param_1 + 0xb8);
    local_44 = 1;
    iVar3 = setsockopt(*piVar5,1,2,&local_44,4);
    if (iVar3 != 0) {
LAB_011a9a74:
      piVar5 = (int *)__errno();
      iVar3 = *piVar5;
LAB_011a9a7c:
      return -iVar3;
    }
    if (param_2->sa_family == 10) {
      local_44 = param_4 & 1;
      iVar3 = setsockopt(*piVar5,0x29,0x1a,&local_44,4);
      if (iVar3 == -1) goto LAB_011a9a74;
    }
    piVar6 = (int *)__errno();
    *piVar6 = 0;
    iVar4 = bind(*piVar5,param_2,param_3);
    iVar3 = *piVar6;
    if (iVar4 == 0) {
      iVar3 = -iVar3;
    }
    else {
      if (iVar3 == 0x61) goto LAB_011a9af4;
      if (iVar3 != 0x62) goto LAB_011a9a7c;
      iVar3 = -0x62;
    }
    uVar1 = *(uint *)(param_1 + 0x58);
    *(int *)(param_1 + 0xe8) = iVar3;
    *(uint *)(param_1 + 0x58) = uVar1 | 0x2000;
    if (param_2->sa_family == 10) {
      iVar3 = 0;
      *(uint *)(param_1 + 0x58) = uVar1 | 0x402000;
    }
    else {
      iVar3 = 0;
    }
  }
  else {
    if (sVar2 == 10) goto LAB_011a9a40;
LAB_011a9af4:
    iVar3 = -0x16;
  }
  return iVar3;
}

