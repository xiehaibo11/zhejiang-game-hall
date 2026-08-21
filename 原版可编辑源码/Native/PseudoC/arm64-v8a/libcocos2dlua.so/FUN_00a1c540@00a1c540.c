
void FUN_00a1c540(long param_1,char *param_2,uint param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  char *pcVar4;
  int iVar5;
  char local_4c;
  char local_4b;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  iVar5 = *(int *)(param_1 + 0x44);
  if (param_3 < 0x80) {
    local_4c = (char)param_3;
    if (local_4c < '\0') goto LAB_00a1c5b4;
    uVar3 = 3;
    if (iVar5 == 0) {
      uVar3 = 1;
    }
    uVar2 = (ulong)uVar3;
    if (uVar2 <= param_4) {
      pcVar4 = param_2;
      if (iVar5 != 0) {
        pcVar4 = param_2 + 2;
        param_2[0] = '~';
        param_2[1] = '}';
      }
      *pcVar4 = local_4c;
      *(undefined4 *)(param_1 + 0x44) = 0;
      goto LAB_00a1c628;
    }
  }
  else {
LAB_00a1c5b4:
    uVar2 = FUN_00a158bc(param_1,&local_4c,param_3,2);
    if ((int)uVar2 == -1) goto LAB_00a1c628;
    if ((int)uVar2 != 2) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if ((local_4c < '\0') || (local_4b < '\0')) {
      uVar2 = 0xffffffff;
      goto LAB_00a1c628;
    }
    uVar3 = 2;
    if (iVar5 == 0) {
      uVar3 = 4;
    }
    uVar2 = (ulong)uVar3;
    if (uVar2 <= param_4) {
      pcVar4 = param_2;
      if (iVar5 == 0) {
        pcVar4 = param_2 + 2;
        param_2[0] = '~';
        param_2[1] = '{';
        iVar5 = 1;
      }
      *pcVar4 = local_4c;
      pcVar4[1] = local_4b;
      *(int *)(param_1 + 0x44) = iVar5;
      goto LAB_00a1c628;
    }
  }
  uVar2 = 0xfffffffe;
LAB_00a1c628:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}

