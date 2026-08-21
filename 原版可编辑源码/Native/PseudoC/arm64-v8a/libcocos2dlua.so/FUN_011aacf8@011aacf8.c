
int FUN_011aacf8(long param_1,sockaddr *param_2,socklen_t param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  undefined4 local_38;
  undefined4 local_34;
  
  if (((param_4 & 0xfffffffa) == 0) && (((param_4 & 1) == 0 || (param_2->sa_family == 10)))) {
    iVar2 = *(int *)(param_1 + 0xb0);
    if (iVar2 == -1) {
      iVar2 = FUN_011a2b64(param_2->sa_family,2,0);
      if (iVar2 < 0) {
        return iVar2;
      }
      *(int *)(param_1 + 0xb0) = iVar2;
    }
    if ((param_4 >> 2 & 1) != 0) {
      local_34 = 1;
      iVar1 = setsockopt(iVar2,1,2,&local_34,4);
      if (iVar1 != 0) {
        piVar3 = (int *)__errno();
        if (*piVar3 != 0) {
          return -*piVar3;
        }
      }
    }
    if ((param_4 & 1) != 0) {
      local_38 = 1;
      iVar1 = setsockopt(iVar2,0x29,0x1a,&local_38,4);
      if (iVar1 == -1) {
        piVar3 = (int *)__errno();
        return -*piVar3;
      }
    }
    iVar2 = bind(iVar2,param_2,param_3);
    if (iVar2 == 0) {
      uVar4 = *(uint *)(param_1 + 0x58);
      if (param_2->sa_family == 10) {
        uVar4 = uVar4 | 0x400000;
        *(uint *)(param_1 + 0x58) = uVar4;
      }
      iVar2 = 0;
      *(uint *)(param_1 + 0x58) = uVar4 | 0x2000;
    }
    else {
      piVar3 = (int *)__errno();
      iVar2 = -0x16;
      if (*piVar3 != 0x61) {
        iVar2 = -*piVar3;
      }
    }
  }
  else {
    iVar2 = -0x16;
  }
  return iVar2;
}

