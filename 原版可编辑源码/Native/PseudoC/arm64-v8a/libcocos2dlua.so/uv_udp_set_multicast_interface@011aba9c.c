
void uv_udp_set_multicast_interface(long param_1,long param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  short local_b8 [12];
  undefined4 local_a0 [26];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_2 == 0) {
    memset(local_b8,0,0x80);
    if ((*(byte *)(param_1 + 0x5a) >> 6 & 1) == 0) {
      local_b8[0] = 2;
      puVar5 = (undefined4 *)((ulong)local_b8 | 4);
    }
    else {
      local_b8[0] = 10;
      puVar5 = local_a0;
    }
    *puVar5 = 0;
  }
  else {
    iVar2 = uv_ip4_addr(param_2,0,local_b8);
    if ((iVar2 != 0) && (iVar2 = uv_ip6_addr(param_2,0,local_b8), iVar2 != 0)) {
      iVar2 = -0x16;
      if (*(long *)(lVar1 + 0x28) == local_38) {
        return;
      }
      goto LAB_011abbec;
    }
  }
  if (local_b8[0] == 10) {
    iVar2 = setsockopt(*(int *)(param_1 + 0xb0),0x29,0x11,local_a0,4);
    if (iVar2 != -1) {
      iVar2 = 0;
      if (*(long *)(lVar1 + 0x28) == local_38) {
        return;
      }
      goto LAB_011abbec;
    }
LAB_011abbbc:
    piVar4 = (int *)__errno(iVar2);
    iVar2 = -*piVar4;
  }
  else {
    if (local_b8[0] != 2) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    iVar3 = setsockopt(*(int *)(param_1 + 0xb0),0,0x20,(void *)((ulong)local_b8 | 4),4);
    iVar2 = 0;
    if (iVar3 == -1) goto LAB_011abbbc;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
LAB_011abbec:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2);
}

