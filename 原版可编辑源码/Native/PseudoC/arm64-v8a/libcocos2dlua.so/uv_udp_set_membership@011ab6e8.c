
void uv_udp_set_membership(long param_1,undefined8 param_2,long param_3,int param_4)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined1 auStack_b0 [8];
  undefined8 local_a8;
  undefined8 uStack_a0;
  ulong local_90 [3];
  undefined4 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  undefined1 auStack_58 [4];
  uint local_54;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  iVar2 = uv_ip4_addr(param_2,0,auStack_58);
  if (iVar2 == 0) {
    if (*(int *)(param_1 + 0xb0) == -1) {
      local_90[1] = 0;
      local_90[0] = 2;
      uVar4 = FUN_011aacf8(param_1,local_90,0x10,4);
      if ((int)uVar4 != 0) goto LAB_011ab8b4;
    }
    local_90[0] = 0;
    if (param_3 == 0) {
      local_90[0] = (ulong)local_54;
      if (param_4 != 1) goto LAB_011ab798;
LAB_011ab818:
      iVar2 = 0x23;
    }
    else {
      uVar4 = uv_inet_pton(2,param_3,(ulong)local_90 | 4);
      if ((int)uVar4 != 0) goto LAB_011ab8b4;
      local_90[0] = CONCAT44(local_90[0]._4_4_,local_54);
      if (param_4 == 1) goto LAB_011ab818;
LAB_011ab798:
      if (param_4 != 0) goto LAB_011ab744;
      iVar2 = 0x24;
    }
    iVar2 = setsockopt(*(int *)(param_1 + 0xb0),0,iVar2,local_90,8);
    if (iVar2 == 0) {
      uVar4 = 0;
    }
    else {
LAB_011ab8a8:
      piVar5 = (int *)__errno();
      uVar4 = (ulong)(uint)-*piVar5;
    }
  }
  else {
    iVar2 = uv_ip6_addr(param_2,0,auStack_b0);
    if (iVar2 != 0) {
LAB_011ab744:
      uVar4 = 0xffffffea;
      if (*(long *)(lVar1 + 0x28) == local_48) {
        return;
      }
      goto LAB_011ab758;
    }
    if (*(int *)(param_1 + 0xb0) == -1) {
      local_90[1] = 0;
      local_78 = 0;
      local_90[2] = 0;
      local_90[0] = 10;
      uVar4 = FUN_011aacf8(param_1,local_90,0x1c,4);
      if ((int)uVar4 != 0) goto LAB_011ab8b4;
    }
    local_70 = 0;
    uStack_68 = 0;
    local_60 = 0;
    if (param_3 == 0) {
      uVar6 = 0;
    }
    else {
      iVar2 = uv_ip6_addr(param_3,0,local_90);
      uVar6 = local_78;
      if (iVar2 != 0) goto LAB_011ab744;
    }
    uStack_68 = uStack_a0;
    local_70 = local_a8;
    local_60 = uVar6;
    if (param_4 == 1) {
      iVar2 = 0x14;
    }
    else {
      if (param_4 != 0) goto LAB_011ab744;
      iVar2 = 0x15;
    }
    uVar3 = setsockopt(*(int *)(param_1 + 0xb0),0x29,iVar2,&local_70,0x14);
    uVar4 = (ulong)uVar3;
    if (uVar3 != 0) goto LAB_011ab8a8;
  }
LAB_011ab8b4:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
LAB_011ab758:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}

