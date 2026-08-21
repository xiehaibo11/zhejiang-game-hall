
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void uv_udp_set_membership(long param_1,undefined8 param_2,long param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  int *piVar4;
  undefined8 local_78;
  undefined1 auStack_70 [4];
  undefined4 local_6c;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  undefined1 auStack_48 [8];
  undefined8 local_40;
  undefined8 uStack_38;
  undefined1 auStack_28 [24];
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = uv_ip4_addr(param_2,0,auStack_70);
  if (iVar1 == 0) {
    if ((*(int *)(param_1 + 0xb0) == -1) && (uVar3 = FUN_00bf52b8(param_1,2,4), (int)uVar3 != 0))
    goto LAB_00bf58a4;
    local_78 = 0;
    if ((param_3 != 0) && (uVar3 = uv_inet_pton(2,param_3,(long)&local_78 + 4), (int)uVar3 != 0))
    goto LAB_00bf58a4;
    local_78 = CONCAT44(local_78._4_4_,local_6c);
    if (param_4 == 0) {
      iVar1 = 0x24;
    }
    else {
      if (param_4 != 1) goto LAB_00bf5958;
      iVar1 = 0x23;
    }
    uVar2 = setsockopt(*(int *)(param_1 + 0xb0),0,iVar1,&local_78,8);
    uVar3 = (ulong)uVar2;
    if (uVar2 == 0) goto LAB_00bf58a4;
  }
  else {
    iVar1 = uv_ip6_addr(param_2,0,auStack_48);
    if (iVar1 != 0) {
LAB_00bf5958:
      uVar3 = 0xffffffea;
      goto LAB_00bf58a4;
    }
    if ((*(int *)(param_1 + 0xb0) == -1) && (uVar3 = FUN_00bf52b8(param_1,10,4), (int)uVar3 != 0))
    goto LAB_00bf58a4;
    local_60 = 0;
    uStack_58 = 0;
    local_50 = 0;
    if (param_3 != 0) {
      iVar1 = uv_ip6_addr(param_3,0,auStack_28);
      if (iVar1 != 0) goto LAB_00bf5958;
      local_50 = local_10;
    }
    local_60 = local_40;
    uStack_58 = uStack_38;
    if (param_4 == 0) {
      iVar1 = 0x15;
    }
    else {
      if (param_4 != 1) goto LAB_00bf5958;
      iVar1 = 0x14;
    }
    iVar1 = setsockopt(*(int *)(param_1 + 0xb0),0x29,iVar1,&local_60,0x14);
    if (iVar1 == 0) {
      uVar3 = 0;
      goto LAB_00bf58a4;
    }
  }
  piVar4 = (int *)__errno();
  uVar3 = (ulong)(uint)-*piVar4;
LAB_00bf58a4:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}

