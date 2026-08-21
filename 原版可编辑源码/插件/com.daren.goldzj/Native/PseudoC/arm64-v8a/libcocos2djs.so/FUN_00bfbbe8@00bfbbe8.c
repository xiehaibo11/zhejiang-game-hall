
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00bfbbe8(long param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  long lVar4;
  long local_68;
  long local_60;
  long local_58;
  long local_50;
  timeval local_48;
  long local_38;
  ulong local_30;
  char acStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (DAT_01d3be28 == 0) {
    local_68 = (long)*(double *)(param_1 + 0x140);
    local_58 = (long)*(double *)(param_1 + 0x148);
    local_60 = ((ulong)(long)(*(double *)(param_1 + 0x140) * 1000000.0) % 1000000) * 1000;
    local_50 = ((ulong)(long)(*(double *)(param_1 + 0x148) * 1000000.0) % 1000000) * 1000;
    iVar1 = uv__utimesat(*(undefined4 *)(param_1 + 0x118),0,&local_68);
    if (iVar1 != 0) {
      piVar3 = (int *)__errno();
      if (*piVar3 == 0x26) {
        DAT_01d3be28 = 1;
        goto LAB_00bfbc20;
      }
      goto LAB_00bfbcec;
    }
  }
  else {
LAB_00bfbc20:
    local_48.tv_sec = (__time_t)*(double *)(param_1 + 0x140);
    local_38 = (long)*(double *)(param_1 + 0x148);
    local_48.tv_usec = (ulong)(long)(*(double *)(param_1 + 0x140) * 1000000.0) % 1000000;
    local_30 = (ulong)(long)(*(double *)(param_1 + 0x148) * 1000000.0) % 1000000;
    snprintf(acStack_28,0x1b,"/proc/self/fd/%d",(ulong)*(uint *)(param_1 + 0x118));
    iVar1 = utimes(acStack_28,&local_48);
    if (iVar1 != 0) {
      piVar3 = (int *)__errno();
      iVar2 = *piVar3;
      if (((iVar2 == 0xd) || (iVar2 == 0x14)) ||
         ((iVar2 == 2 &&
          ((iVar2 = fcntl(*(int *)(param_1 + 0x118),3), iVar2 != -1 || (*piVar3 != 9)))))) {
        *piVar3 = 0x26;
        lVar4 = (long)iVar1;
        goto LAB_00bfbdb4;
      }
LAB_00bfbcec:
      lVar4 = (long)iVar1;
      goto LAB_00bfbdb4;
    }
  }
  lVar4 = 0;
LAB_00bfbdb4:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(lVar4);
  }
  return;
}

