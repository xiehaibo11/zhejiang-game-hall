
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void uv_try_write(long param_1,undefined8 param_2,undefined4 param_3)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined1 auStack_c8 [16];
  long local_b8;
  long *local_b0;
  long local_70;
  long *local_68;
  uint local_60;
  undefined1 *local_58;
  int local_50;
  undefined1 auStack_48 [64];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((*(long *)(param_1 + 0x78) == 0) && (*(long *)(param_1 + 0x60) == 0)) {
    iVar2 = uv__io_active(param_1 + 0x88,4);
    uVar3 = uv_write(auStack_c8,param_1,param_2,param_3,uv_try_write_cb);
    if ((int)uVar3 != 0) goto LAB_00bf332c;
    uVar3 = uv__count_bufs(param_2,param_3);
    if (local_58 == (undefined1 *)0x0) {
      bVar1 = false;
      lVar4 = 0;
    }
    else {
      lVar4 = uv__count_bufs(local_58 + (ulong)local_60 * 0x10,local_50 - local_60);
      uVar3 = uVar3 - lVar4;
      bVar1 = uVar3 == 0 && lVar4 != 0;
    }
    *(long *)(param_1 + 0x60) = *(long *)(param_1 + 0x60) - lVar4;
    *local_68 = local_70;
    *(long **)(local_70 + 8) = local_68;
    *local_b0 = local_b8;
    *(long **)(local_b8 + 8) = local_b0;
    if (local_58 != auStack_48) {
      uv__free();
    }
    local_58 = (undefined1 *)0x0;
    if (iVar2 == 0) {
      uv__io_stop(*(undefined8 *)(param_1 + 8),param_1 + 0x88,4);
    }
    if (!bVar1) {
      uVar3 = uVar3 & 0xffffffff;
      goto LAB_00bf332c;
    }
  }
  uVar3 = 0xfffffff5;
LAB_00bf332c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}

