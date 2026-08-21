
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00bf4de8(undefined8 param_1,long param_2,uint param_3)

{
  undefined1 *puVar1;
  int *piVar2;
  ssize_t sVar3;
  undefined4 uVar4;
  long lVar5;
  int iVar6;
  iovec iVar7;
  iovec local_d0;
  msghdr local_c0;
  undefined1 auStack_88 [128];
  long local_8;
  
  lVar5 = param_2 + -0x80;
  local_8 = ___stack_chk_guard;
  if ((param_3 & 1) != 0) {
    local_c0.msg_namelen = 0;
    local_c0._12_4_ = 0;
    local_c0._48_8_ = 0;
    local_c0.msg_iov = (iovec *)0x0;
    local_c0.msg_iovlen = 0;
    local_c0.msg_control = (void *)0x0;
    local_c0.msg_controllen = 0;
    iVar6 = 0x21;
    local_c0.msg_name = auStack_88;
    while( true ) {
      iVar7 = (iovec)uv_buf_init(0,0);
      local_d0 = iVar7;
      (**(code **)(param_2 + -0x10))(lVar5,0x10000,&local_d0);
      if ((local_d0.iov_base == (void *)0x0) || (local_d0.iov_len == 0)) break;
      local_c0.msg_namelen = 0x80;
      local_c0.msg_iovlen = 1;
      local_c0.msg_iov = &local_d0;
      while( true ) {
        sVar3 = recvmsg(*(int *)(param_2 + 0x30),&local_c0,0);
        if ((long)(int)sVar3 != -1) break;
        piVar2 = (int *)__errno();
        if (*piVar2 != 4) {
          if ((*piVar2 == 0xb) || (*piVar2 == 0xb)) {
            (**(code **)(param_2 + -8))(lVar5,0,&local_d0,0,0);
          }
          else {
            (**(code **)(param_2 + -8))(lVar5,(long)-*piVar2,&local_d0,0,0);
          }
          goto LAB_00bf4e24;
        }
      }
      puVar1 = auStack_88;
      if (local_c0.msg_namelen == 0) {
        puVar1 = (undefined1 *)0x0;
      }
      uVar4 = 2;
      if ((local_c0._48_8_ & 0x20) == 0) {
        uVar4 = 0;
      }
      (**(code **)(param_2 + -8))(lVar5,(long)(int)sVar3,&local_d0,puVar1,uVar4);
      iVar6 = iVar6 + -1;
      if (((iVar6 == 0) || (*(int *)(param_2 + 0x30) == -1)) || (*(long *)(param_2 + -8) == 0))
      goto LAB_00bf4e24;
    }
    (**(code **)(param_2 + -8))(lVar5,0xffffffffffffff97,&local_d0,0,0);
  }
LAB_00bf4e24:
  if ((param_3 >> 2 & 1) != 0) {
    FUN_00bf4c80(lVar5);
    FUN_00bf4b1c(lVar5);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

