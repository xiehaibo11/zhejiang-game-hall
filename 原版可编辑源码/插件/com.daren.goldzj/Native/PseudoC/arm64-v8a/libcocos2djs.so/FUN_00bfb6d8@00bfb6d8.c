
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00bfb6d8(long param_1)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  int *piVar4;
  ulong uVar5;
  uint local_30;
  uint local_2c;
  char acStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (DAT_01d3be20 == 0) {
    uVar3 = uv__eventfd2(0,0x80800);
    uVar5 = uVar3 & 0xffffffff;
    if ((int)uVar3 == -1) {
      piVar4 = (int *)__errno();
      if (*piVar4 == 0x26) {
        DAT_01d3be20 = 1;
        goto LAB_00bfb708;
      }
LAB_00bfb734:
      uVar5 = (ulong)(uint)-*piVar4;
    }
    iVar1 = (int)uVar5;
joined_r0x00bfb7c0:
    if (iVar1 < 0) {
      if ((uint)uVar5 != 0xffffffda) goto LAB_00bfb77c;
      goto LAB_00bfb7cc;
    }
    local_2c = 0xffffffff;
    local_30 = (uint)uVar5;
  }
  else {
LAB_00bfb708:
    if (DAT_01d3be24 == 0) {
      uVar3 = uv__eventfd();
      iVar1 = (int)uVar3;
      uVar5 = uVar3 & 0xffffffff;
      if (iVar1 != -1) {
        uv__cloexec_ioctl(uVar3,1);
        uv__nonblock_ioctl(uVar5,1);
        goto joined_r0x00bfb7c0;
      }
      piVar4 = (int *)__errno();
      if (*piVar4 != 0x26) goto LAB_00bfb734;
      DAT_01d3be24 = 1;
    }
LAB_00bfb7cc:
    uVar2 = uv__make_pipe(&local_30,0x800);
    if (uVar2 == 0) {
      snprintf(acStack_28,0x20,"/proc/self/fd/%d",(ulong)local_30);
      uVar2 = uv__open_cloexec(acStack_28,2);
      if (-1 < (int)uVar2) {
        uv__close(local_30);
        uv__close(local_2c);
        uVar5 = (ulong)uVar2;
        local_30 = uVar2;
        local_2c = uVar2;
        goto LAB_00bfb74c;
      }
    }
    else {
      uVar5 = (ulong)uVar2;
      if ((int)uVar2 < 0) goto LAB_00bfb77c;
    }
    uVar5 = (ulong)local_30;
  }
LAB_00bfb74c:
  uv__io_init(param_1 + 0x1c8,FUN_00bfb574,uVar5);
  uv__io_start(param_1,param_1 + 0x1c8,1);
  uVar5 = 0;
  *(uint *)(param_1 + 0x200) = local_2c;
LAB_00bfb77c:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar5);
  }
  return;
}

