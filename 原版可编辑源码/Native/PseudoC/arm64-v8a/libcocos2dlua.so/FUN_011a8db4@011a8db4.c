
void FUN_011a8db4(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  int local_c4;
  socklen_t local_c0;
  socklen_t local_bc;
  sockaddr local_b8 [8];
  
  lVar4 = tpidr_el0;
  lVar3 = *(long *)(lVar4 + 0x28);
  memset(local_b8,0,0x80);
  local_bc = 0x80;
  iVar1 = getsockname(param_1,local_b8,&local_bc);
  if (iVar1 == 0) {
    local_c0 = 4;
    iVar1 = getsockopt(param_1,1,3,&local_c4,&local_c0);
    if (iVar1 == 0) {
      if (local_c4 == 2) {
        if ((local_b8[0].sa_family | 8) == 10) {
          uVar2 = 0xf;
          lVar4 = *(long *)(lVar4 + 0x28);
          goto joined_r0x011a8ec4;
        }
      }
      else if (local_c4 == 1) {
        if (local_b8[0].sa_family == 1) {
          uVar2 = 7;
          lVar4 = *(long *)(lVar4 + 0x28);
          goto joined_r0x011a8ec4;
        }
        if ((local_b8[0].sa_family == 10) || (local_b8[0].sa_family == 2)) {
          uVar2 = 0xc;
          lVar4 = *(long *)(lVar4 + 0x28);
          goto joined_r0x011a8ec4;
        }
      }
    }
  }
  uVar2 = 0;
  lVar4 = *(long *)(lVar4 + 0x28);
joined_r0x011a8ec4:
  if (lVar4 != lVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}

