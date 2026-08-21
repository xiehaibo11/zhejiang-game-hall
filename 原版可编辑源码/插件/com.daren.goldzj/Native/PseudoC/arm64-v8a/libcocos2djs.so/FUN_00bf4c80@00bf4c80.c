
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00bf4c80(long param_1)

{
  int *piVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  msghdr local_40;
  long local_8;
  
  plVar5 = *(long **)(param_1 + 0xb8);
  local_8 = ___stack_chk_guard;
  if ((long *)(param_1 + 0xb8) != plVar5) {
    do {
      local_40.msg_flags = 0;
      local_40._52_4_ = 0;
      local_40.msg_control = (void *)0x0;
      local_40.msg_controllen = 0;
      local_40.msg_name = plVar5 + 2;
      local_40.msg_iov = (iovec *)plVar5[0x13];
      local_40.msg_iovlen = (size_t)*(uint *)(plVar5 + 0x12);
      local_40.msg_namelen = 0x1c;
      if ((short)plVar5[2] != 10) {
        local_40.msg_namelen = 0x10;
      }
      local_40._12_4_ = 0;
      do {
        sVar2 = sendmsg(*(int *)(param_1 + 0xb0),&local_40,0);
        lVar3 = (long)(int)sVar2;
        if (lVar3 != -1) goto LAB_00bf4d40;
        piVar1 = (int *)__errno();
      } while (*piVar1 == 4);
      if ((*piVar1 == 0xb) || (*piVar1 == 0xb)) break;
      lVar3 = (long)-*piVar1;
LAB_00bf4d40:
      plVar5[0x14] = lVar3;
      *(long *)plVar5[1] = *plVar5;
      *(long *)(*plVar5 + 8) = plVar5[1];
      *plVar5 = param_1 + 200;
      puVar4 = *(undefined8 **)(param_1 + 0xd0);
      plVar5[1] = (long)puVar4;
      *puVar4 = plVar5;
      *(long **)(param_1 + 0xd0) = plVar5;
      uv__io_feed(*(undefined8 *)(param_1 + 8),param_1 + 0x80);
      plVar5 = *(long **)(param_1 + 0xb8);
    } while (plVar5 != (long *)(param_1 + 0xb8));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

