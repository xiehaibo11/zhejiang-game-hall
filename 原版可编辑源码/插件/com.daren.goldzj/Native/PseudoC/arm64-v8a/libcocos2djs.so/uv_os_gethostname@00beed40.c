
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void uv_os_gethostname(void *param_1,size_t *param_2)

{
  int iVar1;
  size_t sVar2;
  int *piVar3;
  char acStack_110 [256];
  undefined1 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (((param_1 == (void *)0x0) || (param_2 == (size_t *)0x0)) || (*param_2 == 0)) {
    iVar1 = -0x16;
  }
  else {
    iVar1 = gethostname(acStack_110,0x101);
    if (iVar1 == 0) {
      local_10 = 0;
      sVar2 = strlen(acStack_110);
      if (sVar2 < *param_2) {
        memcpy(param_1,acStack_110,sVar2 + 1);
        *param_2 = sVar2;
        iVar1 = 0;
      }
      else {
        iVar1 = -0x69;
        *param_2 = sVar2 + 1;
      }
    }
    else {
      piVar3 = (int *)__errno();
      iVar1 = -*piVar3;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1);
}

