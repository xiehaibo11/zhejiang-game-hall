
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void uv__tcp_bind(long param_1,sockaddr *param_2,socklen_t param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  sa_family_t sVar4;
  uint local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((param_4 & 1) == 0) {
    sVar4 = param_2->sa_family;
LAB_00bf37dc:
    iVar2 = FUN_00bf364c(param_1,sVar4,0x60);
    if (iVar2 != 0) goto LAB_00bf37f0;
    local_c = 1;
    iVar2 = setsockopt(*(int *)(param_1 + 0xb8),1,2,&local_c,4);
    if (iVar2 != 0) {
LAB_00bf38fc:
      piVar3 = (int *)__errno();
      iVar2 = -*piVar3;
      goto LAB_00bf37f0;
    }
    if (param_2->sa_family == 10) {
      local_c = param_4 & 1;
      iVar2 = setsockopt(*(int *)(param_1 + 0xb8),0x29,0x1a,&local_c,4);
      if (iVar2 == -1) goto LAB_00bf38fc;
    }
    piVar3 = (int *)__errno();
    *piVar3 = 0;
    iVar2 = bind(*(int *)(param_1 + 0xb8),param_2,param_3);
    if ((iVar2 == 0) || (*piVar3 == 0x62)) {
      sVar4 = param_2->sa_family;
      uVar1 = *(uint *)(param_1 + 0x58);
      *(int *)(param_1 + 0xe8) = -*piVar3;
      *(uint *)(param_1 + 0x58) = uVar1 | 0x40000;
      iVar2 = 0;
      if (sVar4 == 10) {
        *(uint *)(param_1 + 0x58) = uVar1 | 0x50000;
      }
      goto LAB_00bf37f0;
    }
    if (*piVar3 != 0x61) {
      iVar2 = -*piVar3;
      goto LAB_00bf37f0;
    }
  }
  else {
    sVar4 = 10;
    if (param_2->sa_family == 10) goto LAB_00bf37dc;
  }
  iVar2 = -0x16;
LAB_00bf37f0:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2);
}

