
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void uv__udp_try_send(long param_1,iovec *param_2,uint param_3,undefined2 *param_4,ulong param_5)

{
  int iVar1;
  ulong uVar2;
  int *piVar3;
  msghdr local_40;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(param_1 + 0x68) == 0) {
    iVar1 = *(int *)(param_1 + 0xb0);
    if (iVar1 == -1) {
      uVar2 = FUN_00bf52b8(param_1,*param_4,0);
      if ((int)uVar2 != 0) goto LAB_00bf55e0;
      iVar1 = *(int *)(param_1 + 0xb0);
    }
    local_40.msg_iovlen = (size_t)param_3;
    local_40.msg_flags = 0;
    local_40._52_4_ = 0;
    local_40.msg_control = (void *)0x0;
    local_40.msg_controllen = 0;
    local_40._8_8_ = param_5 & 0xffffffff;
    local_40.msg_name = param_4;
    local_40.msg_iov = param_2;
    uVar2 = sendmsg(iVar1,&local_40,0);
    iVar1 = (int)uVar2;
    while (iVar1 == -1) {
      piVar3 = (int *)__errno();
      if (*piVar3 != 4) {
        if ((*piVar3 == 0xb) || (*piVar3 == 0xb)) goto LAB_00bf5650;
        uVar2 = (ulong)(uint)-*piVar3;
        break;
      }
      uVar2 = sendmsg(*(int *)(param_1 + 0xb0),&local_40,0);
      iVar1 = (int)uVar2;
    }
  }
  else {
LAB_00bf5650:
    uVar2 = 0xfffffff5;
  }
LAB_00bf55e0:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}

