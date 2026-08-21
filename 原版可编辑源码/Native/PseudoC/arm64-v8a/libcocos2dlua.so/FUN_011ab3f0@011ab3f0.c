
void FUN_011ab3f0(undefined8 param_1,long param_2,uint param_3)

{
  undefined1 *puVar1;
  int iVar2;
  long lVar3;
  ssize_t sVar4;
  int *piVar5;
  long lVar6;
  code *pcVar7;
  long lVar8;
  int iVar9;
  iovec iVar10;
  iovec local_130;
  msghdr local_120;
  undefined1 auStack_e8 [128];
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  lVar8 = param_2 + -0x80;
  if ((param_3 & 1) != 0) {
    local_120.msg_flags = 0;
    local_120._52_4_ = 0;
    local_120.msg_controllen = 0;
    local_120.msg_control = (void *)0x0;
    local_120.msg_iovlen = 0;
    local_120.msg_iov = (iovec *)0x0;
    local_120.msg_namelen = 0;
    local_120._12_4_ = 0;
    iVar9 = 0x20;
    local_120.msg_name = auStack_e8;
    while( true ) {
      iVar10 = (iovec)uv_buf_init(0,0);
      local_130 = iVar10;
      (**(code **)(param_2 + -0x10))(lVar8,0x10000,&local_130);
      if ((local_130.iov_base == (void *)0x0) || (local_130.iov_len == 0)) break;
      local_120.msg_namelen = 0x80;
      local_120.msg_iovlen = 1;
      local_120.msg_iov = &local_130;
      while( true ) {
        sVar4 = recvmsg(*(int *)(param_2 + 0x30),&local_120,0);
        if (sVar4 != -1) break;
        piVar5 = (int *)__errno();
        iVar2 = *piVar5;
        if (iVar2 != 4) {
          pcVar7 = *(code **)(param_2 + -8);
          if (iVar2 == 0xb) {
            lVar6 = 0;
          }
          else {
            lVar6 = -(long)iVar2;
          }
          goto LAB_011ab530;
        }
      }
      puVar1 = (undefined1 *)0x0;
      if (local_120.msg_namelen != 0) {
        puVar1 = auStack_e8;
      }
      (**(code **)(param_2 + -8))(lVar8,sVar4,&local_130,puVar1,(uint)local_120.msg_flags >> 4 & 2);
      if (((iVar9 < 1) || (*(int *)(param_2 + 0x30) == -1)) ||
         (iVar9 = iVar9 + -1, *(long *)(param_2 + -8) == 0)) goto LAB_011ab53c;
    }
    pcVar7 = *(code **)(param_2 + -8);
    lVar6 = -0x69;
LAB_011ab530:
    (*pcVar7)(lVar8,lVar6,&local_130,0,0);
  }
LAB_011ab53c:
  if ((param_3 >> 2 & 1) != 0) {
    FUN_011ab08c(lVar8);
    FUN_011aabc4(lVar8);
  }
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

