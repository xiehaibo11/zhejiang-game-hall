
void uv_if_indextoiid(uint param_1,void *param_2,size_t *param_3)

{
  long lVar1;
  int iVar2;
  char *pcVar3;
  size_t __n;
  int *piVar4;
  char acStack_4c [20];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (((param_2 == (void *)0x0) || (param_3 == (size_t *)0x0)) || (*param_3 == 0)) {
    iVar2 = -0x16;
    if (*(long *)(lVar1 + 0x28) == local_38) {
      return;
    }
  }
  else {
    pcVar3 = if_indextoname(param_1,acStack_4c);
    if (pcVar3 == (char *)0x0) {
      piVar4 = (int *)__errno();
      iVar2 = -*piVar4;
      if (*(long *)(lVar1 + 0x28) == local_38) {
        return;
      }
    }
    else {
      __n = strnlen(acStack_4c,0x11);
      if (__n < *param_3) {
        memcpy(param_2,acStack_4c,__n);
        iVar2 = 0;
        *(undefined1 *)((long)param_2 + __n) = 0;
        *param_3 = __n;
        if (*(long *)(lVar1 + 0x28) == local_38) {
          return;
        }
      }
      else {
        *param_3 = __n + 1;
        iVar2 = -0x69;
        if (*(long *)(lVar1 + 0x28) == local_38) {
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2);
}

