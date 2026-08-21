
void uv_pipe_getsockname(long param_1,char *param_2,ulong *param_3)

{
  int iVar1;
  ulong uVar2;
  int *piVar3;
  long lVar4;
  socklen_t local_bc;
  sockaddr asStack_b8 [7];
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  iVar1 = *(int *)(param_1 + 0xb8);
  local_bc = 0x6e;
  memset(asStack_b8,0,0x6e);
  iVar1 = getsockname(iVar1,asStack_b8,&local_bc);
  if (iVar1 < 0) {
    *param_3 = 0;
    piVar3 = (int *)__errno();
    iVar1 = -*piVar3;
    if (*(long *)(lVar4 + 0x28) == local_48) {
      return;
    }
  }
  else {
    if (asStack_b8[0].sa_data[0] == '\0') {
      uVar2 = (ulong)local_bc - 2;
    }
    else {
      uVar2 = strlen((char *)((ulong)asStack_b8 | 2));
    }
    local_bc = (socklen_t)uVar2;
    uVar2 = uVar2 & 0xffffffff;
    if (uVar2 < *param_3) {
      memcpy(param_2,(char *)((ulong)asStack_b8 | 2),uVar2);
      *param_3 = uVar2;
      if (*param_2 == '\0') {
        lVar4 = *(long *)(lVar4 + 0x28);
      }
      else {
        param_2[uVar2] = '\0';
        lVar4 = *(long *)(lVar4 + 0x28);
      }
      iVar1 = 0;
      if (lVar4 == local_48) {
        return;
      }
    }
    else {
      *param_3 = (ulong)(local_bc + 1);
      iVar1 = -0x69;
      if (*(long *)(lVar4 + 0x28) == local_48) {
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1);
}

