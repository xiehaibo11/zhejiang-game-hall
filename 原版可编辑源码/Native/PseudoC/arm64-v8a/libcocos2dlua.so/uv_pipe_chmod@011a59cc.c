
int uv_pipe_chmod(long param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  size_t sVar3;
  char *__file;
  int *piVar4;
  long lVar5;
  long lVar6;
  ulong __size;
  ulong __n;
  socklen_t local_dc;
  sockaddr sStack_d8;
  uint local_c8;
  
  lVar6 = tpidr_el0;
  lVar5 = *(long *)(lVar6 + 0x28);
  if ((param_1 == 0) || (iVar2 = *(int *)(param_1 + 0xb8), iVar2 == -1)) {
    iVar2 = -9;
    lVar6 = *(long *)(lVar6 + 0x28);
    goto joined_r0x011a5ac8;
  }
  if (2 < param_2 - 1) {
    iVar2 = -0x16;
    lVar6 = *(long *)(lVar6 + 0x28);
    goto joined_r0x011a5ac8;
  }
  local_dc = 0x6e;
  memset(&sStack_d8,0,0x6e);
  iVar2 = getsockname(iVar2,&sStack_d8,&local_dc);
  if (iVar2 < 0) {
    piVar4 = (int *)__errno();
    iVar2 = -*piVar4;
    if (*piVar4 == 0x69) {
      __size = 0;
      __file = malloc(0);
      goto joined_r0x011a5ab4;
    }
LAB_011a5be4:
    lVar6 = *(long *)(lVar6 + 0x28);
    goto joined_r0x011a5ac8;
  }
  if (sStack_d8.sa_data[0] == '\0') {
    iVar2 = local_dc - 2;
  }
  else {
    sVar3 = strlen((char *)((ulong)&sStack_d8 | 2));
    iVar2 = (int)sVar3;
  }
  __size = (ulong)(iVar2 + 1);
  __file = malloc(__size);
joined_r0x011a5ab4:
  if (__file == (char *)0x0) {
    iVar2 = -0xc;
    lVar6 = *(long *)(lVar6 + 0x28);
    goto joined_r0x011a5ac8;
  }
  iVar2 = *(int *)(param_1 + 0xb8);
  local_dc = 0x6e;
  memset(&sStack_d8,0,0x6e);
  iVar2 = getsockname(iVar2,&sStack_d8,&local_dc);
  if (iVar2 < 0) {
    piVar4 = (int *)__errno();
    if (*piVar4 != 0) {
      iVar2 = -*piVar4;
      goto LAB_011a5bdc;
    }
  }
  else {
    if (sStack_d8.sa_data[0] == '\0') {
      local_dc = local_dc - 2;
      __n = (ulong)local_dc;
    }
    else {
      sVar3 = strlen((char *)((ulong)&sStack_d8 | 2));
      __n = sVar3 & 0xffffffff;
      local_dc = (socklen_t)sVar3;
    }
    if (__size <= __n) {
      iVar2 = -0x69;
LAB_011a5bdc:
      FUN_0119f27c(__file);
      goto LAB_011a5be4;
    }
    memcpy(__file,(char *)((ulong)&sStack_d8 | 2),__n);
    if (*__file != '\0') {
      __file[__n] = '\0';
    }
  }
  iVar2 = stat(__file,(stat *)&sStack_d8);
  if (iVar2 == -1) {
    FUN_0119f27c(__file);
LAB_011a5c5c:
    piVar4 = (int *)__errno();
    iVar2 = -*piVar4;
    lVar6 = *(long *)(lVar6 + 0x28);
  }
  else {
    uVar1 = -(param_2 & 1) & 0x124;
    if ((param_2 & 2) != 0) {
      uVar1 = uVar1 | 0x92;
    }
    if ((uVar1 & (local_c8 ^ 0xffffffff)) == 0) {
      FUN_0119f27c(__file);
    }
    else {
      local_c8 = local_c8 | uVar1;
      iVar2 = chmod(__file,local_c8);
      FUN_0119f27c(__file);
      if (iVar2 == -1) goto LAB_011a5c5c;
    }
    iVar2 = 0;
    lVar6 = *(long *)(lVar6 + 0x28);
  }
joined_r0x011a5ac8:
  if (lVar6 == lVar5) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

