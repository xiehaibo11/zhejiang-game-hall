
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void uv_resident_set_memory(long *param_1)

{
  int iVar1;
  ssize_t sVar2;
  char *pcVar3;
  int *piVar4;
  long lVar5;
  char acStack_408 [1024];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  do {
    iVar1 = open("/proc/self/stat",0);
    if (iVar1 != -1) {
      goto LAB_00bf6aec;
    }
    piVar4 = (int *)__errno();
  } while (*piVar4 == 4);
  iVar1 = -*piVar4;
  goto LAB_00bf6ba0;
  while( true ) {
    piVar4 = (int *)__errno();
    if (*piVar4 != 4) break;
LAB_00bf6aec:
    sVar2 = read(iVar1,acStack_408,0x3ff);
    if (sVar2 != -1) {
      uv__close(iVar1);
      acStack_408[sVar2] = '\0';
      pcVar3 = strchr(acStack_408,0x20);
      if (((pcVar3 == (char *)0x0) || (pcVar3[1] != '(')) ||
         (pcVar3 = strchr(pcVar3 + 1,0x29), pcVar3 == (char *)0x0)) goto LAB_00bf6bec;
      iVar1 = 0x16;
      goto LAB_00bf6b50;
    }
  }
  uv__close(iVar1);
  iVar1 = -*piVar4;
  goto LAB_00bf6ba0;
  while (iVar1 = iVar1 + -1, iVar1 != 0) {
LAB_00bf6b50:
    pcVar3 = strchr(pcVar3 + 1,0x20);
    if (pcVar3 == (char *)0x0) goto LAB_00bf6bec;
  }
  piVar4 = (int *)__errno();
  *piVar4 = 0;
  lVar5 = strtol(pcVar3,(char **)0x0,10);
  if ((*piVar4 == 0) && (-1 < lVar5)) {
    iVar1 = 0;
    *param_1 = lVar5 << 0xc;
  }
  else {
LAB_00bf6bec:
    iVar1 = -0x16;
  }
LAB_00bf6ba0:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1);
}

