
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void uv_udp_set_multicast_interface(long param_1,long param_2)

{
  int iVar1;
  int *piVar2;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_2 == 0) {
    uStack_80 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    uStack_30 = 0;
    local_28 = 0;
    uStack_20 = 0;
    local_18 = 0;
    uStack_10 = 0;
    if ((*(uint *)(param_1 + 0x58) >> 0x10 & 1) != 0) {
      local_88 = 10;
      goto LAB_00bf5b88;
    }
    local_88 = 2;
LAB_00bf5bdc:
    iVar1 = setsockopt(*(int *)(param_1 + 0xb0),0,0x20,(void *)((long)&local_88 + 4),4);
  }
  else {
    iVar1 = uv_ip4_addr(param_2,0,&local_88);
    if ((iVar1 != 0) && (iVar1 = uv_ip6_addr(param_2,0,&local_88), iVar1 != 0)) {
      iVar1 = -0x16;
      goto LAB_00bf5bac;
    }
    if ((short)local_88 == 2) goto LAB_00bf5bdc;
    if ((short)local_88 != 10) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
LAB_00bf5b88:
    iVar1 = setsockopt(*(int *)(param_1 + 0xb0),0x29,0x11,&uStack_70,4);
  }
  if (iVar1 == -1) {
    piVar2 = (int *)__errno();
    iVar1 = -*piVar2;
  }
  else {
    iVar1 = 0;
  }
LAB_00bf5bac:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1);
  }
  return;
}

