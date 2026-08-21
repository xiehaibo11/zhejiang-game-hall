
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void uv__udp_bind(long param_1,sockaddr *param_2,socklen_t param_3,uint param_4)

{
  int __fd;
  int iVar1;
  int *piVar2;
  uint uVar3;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (((param_4 & 0xfffffffa) == 0) && (((param_4 & 1) == 0 || (param_2->sa_family == 10)))) {
    __fd = *(int *)(param_1 + 0xb0);
    if (__fd == -1) {
      iVar1 = uv__socket(param_2->sa_family,2,0);
      if (iVar1 < 0) goto LAB_00bf51dc;
      *(int *)(param_1 + 0xb0) = iVar1;
      __fd = iVar1;
    }
    if ((param_4 >> 2 & 1) != 0) {
      local_c = 1;
      iVar1 = setsockopt(__fd,1,2,&local_c,4);
      if (iVar1 != 0) {
        piVar2 = (int *)__errno();
        iVar1 = -*piVar2;
        if (*piVar2 != 0) goto LAB_00bf51dc;
      }
    }
    if ((param_4 & 1) != 0) {
      local_c = 1;
      iVar1 = setsockopt(__fd,0x29,0x1a,&local_c,4);
      if (iVar1 == -1) {
        piVar2 = (int *)__errno();
        iVar1 = -*piVar2;
        goto LAB_00bf51dc;
      }
    }
    iVar1 = bind(__fd,param_2,param_3);
    if (iVar1 == 0) {
      uVar3 = *(uint *)(param_1 + 0x58);
      if (param_2->sa_family == 10) {
        uVar3 = uVar3 | 0x10000;
      }
      *(uint *)(param_1 + 0x58) = uVar3 | 0x40000;
      iVar1 = 0;
    }
    else {
      piVar2 = (int *)__errno();
      iVar1 = -0x16;
      if (*piVar2 != 0x61) {
        iVar1 = -*piVar2;
      }
    }
  }
  else {
    iVar1 = -0x16;
  }
LAB_00bf51dc:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1);
  }
  return;
}

