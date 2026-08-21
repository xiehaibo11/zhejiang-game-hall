
void FUN_011dbe04(long param_1)

{
  long lVar1;
  int iVar2;
  size_t sVar3;
  size_t __n;
  long local_58;
  undefined1 auStack_50 [8];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  do {
    iVar2 = (**(code **)(**(long **)(param_1 + 0x48) + 0x28))
                      (*(long **)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50),auStack_50,
                       &local_48,&local_58);
    __n = local_58 - (long)auStack_50;
    sVar3 = fwrite(auStack_50,1,__n,*(FILE **)(param_1 + 0x40));
    if (sVar3 != __n) goto LAB_011dbe88;
  } while (iVar2 == 1);
  if (iVar2 == 2) {
LAB_011dbe88:
    iVar2 = -1;
  }
  else {
    iVar2 = fflush(*(FILE **)(param_1 + 0x40));
    iVar2 = -(uint)(iVar2 != 0);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2);
}

