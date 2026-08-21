
int FUN_017f9020(long param_1,int param_2)

{
  byte *pbVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  undefined1 auStack_58 [12];
  undefined4 local_4c;
  undefined1 *local_48;
  undefined1 local_40 [8];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if (param_2 == -1) {
    if (*(char *)(param_1 + 0x60) == '\0') {
      param_2 = *(int *)(param_1 + 0x5c);
      bVar3 = param_2 != -1;
      goto LAB_017f910c;
    }
  }
  else {
    if (*(char *)(param_1 + 0x60) == '\0') {
LAB_017f90f4:
      bVar3 = true;
      *(int *)(param_1 + 0x5c) = param_2;
LAB_017f910c:
      *(bool *)(param_1 + 0x60) = bVar3;
      goto LAB_017f9110;
    }
    local_4c = *(undefined4 *)(param_1 + 0x5c);
    iVar4 = (**(code **)(**(long **)(param_1 + 0x48) + 0x18))
                      (*(long **)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50),&local_4c,
                       &local_48,auStack_58,local_40,&local_38,&local_48);
    if (1 < iVar4 - 1U) {
      if (iVar4 == 3) {
        local_48 = (undefined1 *)((ulong)local_40 | 1);
        local_40[0] = (undefined1)*(undefined4 *)(param_1 + 0x5c);
      }
      do {
        if (local_48 <= local_40) goto LAB_017f90f4;
        pbVar1 = local_48 + -1;
        local_48 = local_48 + -1;
        iVar4 = ungetc((uint)*pbVar1,*(FILE **)(param_1 + 0x40));
      } while (iVar4 != -1);
    }
  }
  param_2 = -1;
LAB_017f9110:
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_2;
}

