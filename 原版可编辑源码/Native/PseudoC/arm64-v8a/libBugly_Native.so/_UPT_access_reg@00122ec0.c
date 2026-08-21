
void _UPT_access_reg(undefined8 param_1,int param_2,undefined8 *param_3,int param_4,uint *param_5)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int *piVar6;
  char *pcVar7;
  undefined8 *local_168;
  undefined8 local_160;
  undefined8 auStack_158 [31];
  undefined8 local_60;
  undefined8 local_58;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uVar1 = *param_5;
  local_168 = auStack_158;
  local_160 = 0x110;
  lVar3 = ptrace(PTRACE_SETOPTIONS|PTRACE_POKETEXT,(ulong)uVar1,1,&local_168);
  if (lVar3 != -1) {
    if (param_4 == 0) {
      uVar5 = local_60;
      if ((param_2 != 0x1f) && (uVar5 = local_58, param_2 != 0x20)) {
        if (0x1e < param_2) goto LAB_00122fbc;
        uVar5 = auStack_158[param_2];
      }
      uVar4 = 0;
      *param_3 = uVar5;
      goto LAB_00122ffc;
    }
    if (param_2 != 0x1f) {
      if (param_2 == 0x20) {
        local_58 = *param_3;
      }
      else {
        if (0x1e < param_2) goto LAB_00122fbc;
        auStack_158[param_2] = *param_3;
      }
    }
    else {
      local_60 = *param_3;
    }
    lVar3 = ptrace(PTRACE_SETOPTIONS|PTRACE_POKEDATA,(ulong)uVar1,1,&local_168);
    if (lVar3 != -1) {
      uVar4 = 0;
      goto LAB_00122ffc;
    }
  }
LAB_00122fbc:
  uVar5 = _Uaarch64_regname(param_2);
  piVar6 = (int *)__errno();
  pcVar7 = strerror(*piVar6);
  log2Console(3,"Bugly-libunwind","bad register %s [%u] (error: %s)\n",uVar5,param_2,pcVar7);
  uVar4 = 0xfffffffd;
LAB_00122ffc:
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}

