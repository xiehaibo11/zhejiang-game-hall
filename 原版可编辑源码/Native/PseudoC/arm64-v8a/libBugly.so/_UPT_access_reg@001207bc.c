
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _UPT_access_reg(undefined8 param_1,int param_2,undefined8 *param_3,int param_4,uint *param_5)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  int *piVar4;
  char *pcVar5;
  undefined8 *local_128;
  undefined8 local_120;
  undefined8 auStack_118 [31];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  uVar1 = *param_5;
  local_8 = ___stack_chk_guard;
  local_120 = 0x110;
  local_128 = auStack_118;
  lVar2 = ptrace(PTRACE_SETOPTIONS|PTRACE_POKETEXT,(ulong)uVar1,1,&local_128);
  if (lVar2 != -1) {
    if (param_4 == 0) {
      if (param_2 == 0x1f) {
        uVar3 = 0;
        *param_3 = local_20;
        goto LAB_0012088c;
      }
      if (param_2 == 0x20) {
        uVar3 = 0;
        *param_3 = local_18;
        goto LAB_0012088c;
      }
      if (param_2 < 0x1f) {
        uVar3 = 0;
        *param_3 = auStack_118[param_2];
        goto LAB_0012088c;
      }
    }
    else {
      if (param_2 == 0x1f) {
        local_20 = *param_3;
      }
      else if (param_2 == 0x20) {
        local_18 = *param_3;
      }
      else {
        if (0x1e < param_2) goto LAB_001208f0;
        auStack_118[param_2] = *param_3;
      }
      lVar2 = ptrace(PTRACE_SETOPTIONS|PTRACE_POKEDATA,(ulong)uVar1,1,&local_128);
      if (lVar2 != -1) {
        uVar3 = 0;
        goto LAB_0012088c;
      }
    }
  }
LAB_001208f0:
  uVar3 = _Uaarch64_regname(param_2);
  piVar4 = (int *)__errno();
  pcVar5 = strerror(*piVar4);
  log2Console(3,"Bugly-libunwind","bad register %s [%u] (error: %s)\n",uVar3,param_2,pcVar5);
  uVar3 = 0xfffffffd;
LAB_0012088c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}

