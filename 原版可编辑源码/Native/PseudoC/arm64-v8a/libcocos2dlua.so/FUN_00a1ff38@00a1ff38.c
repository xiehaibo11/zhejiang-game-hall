
void FUN_00a1ff38(long param_1,char *param_2,uint param_3,ulong param_4)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  uint uVar8;
  char local_4c;
  char local_4b;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uVar1 = *(uint *)(param_1 + 0x44) & 0xff;
  uVar8 = *(uint *)(param_1 + 0x44) >> 8;
  if (param_3 < 0x80) {
    local_4c = (char)param_3;
    if (local_4c < '\0') goto LAB_00a1ffc8;
    uVar4 = 1;
    if (uVar1 != 0) {
      uVar4 = 2;
    }
    uVar3 = (ulong)uVar4;
    if (param_4 < uVar3) {
LAB_00a20018:
      uVar3 = 0xfffffffe;
      goto LAB_00a2005c;
    }
    pcVar6 = param_2;
    if (uVar1 != 0) {
      pcVar6 = param_2 + 1;
      *param_2 = '\x0f';
    }
    *pcVar6 = local_4c;
    if ((param_3 == 0xd) || (param_3 == 10)) {
      uVar8 = 0;
    }
    iVar5 = uVar8 << 8;
  }
  else {
LAB_00a1ffc8:
    uVar3 = FUN_00a15fac(param_1,&local_4c,param_3,2);
    if ((int)uVar3 == -1) goto LAB_00a2005c;
    if ((int)uVar3 != 2) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if ((local_4c < '\0') || (local_4b < '\0')) {
      uVar3 = 0xffffffff;
      goto LAB_00a2005c;
    }
    uVar3 = (ulong)((uint)(uVar1 != 1) | (uint)(uVar8 != 1) << 2 | 2);
    if (param_4 < uVar3) goto LAB_00a20018;
    pcVar6 = param_2;
    if (uVar8 != 1) {
      pcVar6 = param_2 + 4;
      builtin_strncpy(param_2,"\x1b$)C",4);
    }
    pcVar7 = pcVar6;
    if (uVar1 != 1) {
      pcVar7 = pcVar6 + 1;
      *pcVar6 = '\x0e';
    }
    *pcVar7 = local_4c;
    iVar5 = 0x101;
    pcVar7[1] = local_4b;
  }
  *(int *)(param_1 + 0x44) = iVar5;
LAB_00a2005c:
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}

