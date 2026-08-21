
void uv_os_gethostname(void *param_1,size_t *param_2)

{
  long lVar1;
  int iVar2;
  int *piVar3;
  size_t sVar4;
  char acStack_7c [64];
  undefined1 local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (((param_1 == (void *)0x0) || (param_2 == (size_t *)0x0)) || (*param_2 == 0)) {
    iVar2 = -0x16;
    if (*(long *)(lVar1 + 0x28) == local_38) {
      return;
    }
  }
  else {
    iVar2 = gethostname(acStack_7c,0x41);
    if (iVar2 == 0) {
      local_3c = 0;
      sVar4 = strlen(acStack_7c);
      if (sVar4 < *param_2) {
        memcpy(param_1,acStack_7c,sVar4 + 1);
        iVar2 = 0;
        *param_2 = sVar4;
        if (*(long *)(lVar1 + 0x28) == local_38) {
          return;
        }
      }
      else {
        *param_2 = sVar4 + 1;
        iVar2 = -0x69;
        if (*(long *)(lVar1 + 0x28) == local_38) {
          return;
        }
      }
    }
    else {
      piVar3 = (int *)__errno();
      iVar2 = -*piVar3;
      if (*(long *)(lVar1 + 0x28) == local_38) {
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2);
}

