
int uv_pipe_bind(long param_1,undefined8 param_2)

{
  long lVar1;
  int __fd;
  int iVar2;
  char *__src;
  int *piVar3;
  sockaddr local_b8 [6];
  undefined1 local_4b;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (*(int *)(param_1 + 0xb8) < 0) {
    __src = (char *)FUN_0119f1b4(param_2);
    if (__src == (char *)0x0) {
      iVar2 = -0xc;
      if (*(long *)(lVar1 + 0x28) != local_48) goto LAB_011a5424;
    }
    else {
      __fd = FUN_011a2b64(1,1,0);
      iVar2 = __fd;
      if (-1 < __fd) {
        memset(local_b8,0,0x6e);
        strncpy((char *)((ulong)local_b8 | 2),__src,0x6b);
        local_4b = 0;
        local_b8[0].sa_family = 1;
        iVar2 = bind(__fd,local_b8,0x6e);
        if (iVar2 == 0) {
          *(char **)(param_1 + 0x100) = __src;
          *(int *)(param_1 + 0xb8) = __fd;
          *(uint *)(param_1 + 0x58) = *(uint *)(param_1 + 0x58) | 0x2000;
          if (*(long *)(lVar1 + 0x28) == local_48) {
            return 0;
          }
          goto LAB_011a5424;
        }
        piVar3 = (int *)__errno();
        iVar2 = -0xd;
        if (*piVar3 != 2) {
          iVar2 = -*piVar3;
        }
        FUN_011a2d5c(__fd);
      }
      FUN_0119f27c(__src);
      if (*(long *)(lVar1 + 0x28) != local_48) {
LAB_011a5424:
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
    }
  }
  else {
    iVar2 = -0x16;
    if (*(long *)(lVar1 + 0x28) != local_48) goto LAB_011a5424;
  }
  return iVar2;
}

