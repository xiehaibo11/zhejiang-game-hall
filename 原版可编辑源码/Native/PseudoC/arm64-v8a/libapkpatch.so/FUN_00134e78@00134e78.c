
void FUN_00134e78(char *param_1)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  size_t sVar4;
  size_t sVar5;
  char acStack_849 [2049];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  sVar4 = strlen(param_1);
  if (sVar4 < 0x800) {
    if (sVar4 == 0) {
      sVar5 = 0;
    }
    else {
      sVar5 = sVar4 - 1;
      if (param_1[sVar4 - 1] != '/') {
        sVar5 = sVar4;
      }
    }
    __memcpy_chk(acStack_849 + 1,param_1,sVar5,0x800);
    acStack_849[sVar5 + 1] = '\0';
    iVar3 = remove(acStack_849 + 1);
    bVar2 = iVar3 == 0;
  }
  else {
    bVar2 = false;
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar2);
  }
  return;
}

