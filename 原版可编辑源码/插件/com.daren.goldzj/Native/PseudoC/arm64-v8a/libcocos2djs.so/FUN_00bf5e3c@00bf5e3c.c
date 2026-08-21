
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00bf5e3c(FILE *param_1,int *param_2)

{
  int iVar1;
  char *pcVar2;
  undefined8 uVar3;
  int iVar4;
  char acStack_408 [1024];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar4 = 0;
  pcVar2 = fgets(acStack_408,0x400,param_1);
  if (pcVar2 != (char *)0x0) {
    while ((pcVar2 = fgets(acStack_408,0x400,param_1), pcVar2 != (char *)0x0 &&
           (iVar1 = strncmp(acStack_408,"cpu",3), iVar1 == 0))) {
      iVar4 = iVar4 + 1;
    }
    if (iVar4 != 0) {
      *param_2 = iVar4;
      uVar3 = 0;
      goto LAB_00bf5ecc;
    }
  }
  uVar3 = 0xfffffffb;
LAB_00bf5ecc:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}

