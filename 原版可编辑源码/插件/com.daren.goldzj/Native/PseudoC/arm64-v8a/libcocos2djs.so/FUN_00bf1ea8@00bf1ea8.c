
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00bf1ea8(long param_1)

{
  iovec *__iovec;
  long *plVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  ssize_t sVar6;
  ulong uVar7;
  int *piVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  msghdr local_80;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  ulong local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
LAB_00bf1ee8:
  lVar12 = *(long *)(param_1 + 0xc0);
  if (lVar12 != param_1 + 0xc0) {
    __iovec = (iovec *)(*(long *)(lVar12 + 0x18) + (ulong)*(uint *)(lVar12 + 0x10) * 0x10);
    iVar3 = *(int *)(lVar12 + 0x20) - *(uint *)(lVar12 + 0x10);
    iVar4 = uv__getiovmax();
    lVar9 = *(long *)(lVar12 + -0x10);
    if (iVar3 < iVar4) {
      iVar4 = iVar3;
    }
    if (lVar9 == 0) {
      if (iVar4 == 1) {
        do {
          uVar7 = write(*(int *)(param_1 + 0xb8),__iovec->iov_base,__iovec->iov_len);
          if (uVar7 != 0xffffffffffffffff) goto LAB_00bf1fc4;
          piVar8 = (int *)__errno();
        } while (*piVar8 == 4);
      }
      else {
        do {
          sVar6 = writev(*(int *)(param_1 + 0xb8),__iovec,iVar4);
          uVar7 = (ulong)(int)sVar6;
          if (uVar7 != 0xffffffffffffffff) goto LAB_00bf1fc4;
          piVar8 = (int *)__errno();
        } while (*piVar8 == 4);
      }
      goto LAB_00bf2098;
    }
    if ((*(uint *)(lVar9 + 0x58) & 3) == 0) {
      iVar3 = *(int *)(lVar9 + 0x10);
      if (iVar3 == 0xc) {
LAB_00bf2058:
        uVar5 = *(uint *)(lVar9 + 0xb8);
      }
      else if (iVar3 == 0xf) {
        uVar5 = *(uint *)(lVar9 + 0xb0);
      }
      else {
        if (iVar3 == 7) goto LAB_00bf2058;
        uVar5 = 0xffffffff;
      }
      local_80.msg_iovlen = (size_t)iVar4;
      uStack_30 = 0;
      local_80.msg_controllen = 0x18;
      local_28 = 0;
      uStack_20 = 0;
      local_18 = 0;
      uStack_10 = 0;
      local_80.msg_name = (void *)0x0;
      local_80.msg_namelen = 0;
      local_80.msg_flags = 0;
      local_40 = 1;
      local_3c = 1;
      local_48 = 0x14;
      local_38 = (ulong)uVar5;
      local_80.msg_iov = __iovec;
      local_80.msg_control = &local_48;
      do {
        sVar6 = sendmsg(*(int *)(param_1 + 0xb8),&local_80,0);
        uVar7 = (ulong)(int)sVar6;
        if (uVar7 != 0xffffffffffffffff) goto LAB_00bf1fc4;
        piVar8 = (int *)__errno();
      } while (*piVar8 == 4);
      goto LAB_00bf2094;
    }
    iVar4 = -9;
    goto LAB_00bf2128;
  }
  goto LAB_00bf201c;
LAB_00bf1fc4:
  if ((long)uVar7 < 0) {
LAB_00bf2094:
    piVar8 = (int *)__errno();
LAB_00bf2098:
    if ((*piVar8 != 0xb) && (*piVar8 != 0xb)) {
      iVar4 = -*piVar8;
LAB_00bf2128:
      *(int *)(lVar12 + 0x24) = iVar4;
      FUN_00bf1e28(lVar12 + -0x58);
      uv__io_stop(*(undefined8 *)(param_1 + 8),param_1 + 0x88,4);
      iVar4 = uv__io_active(param_1 + 0x88,1);
      if (((iVar4 == 0) && (uVar5 = *(uint *)(param_1 + 0x58), (uVar5 >> 0xe & 1) != 0)) &&
         (*(uint *)(param_1 + 0x58) = uVar5 & 0xffffbfff, (uVar5 >> 0xd & 1) != 0)) {
        *(int *)(*(long *)(param_1 + 8) + 8) = *(int *)(*(long *)(param_1 + 8) + 8) + -1;
      }
      goto LAB_00bf201c;
    }
    uVar5 = *(uint *)(param_1 + 0x58);
  }
  else {
    lVar11 = *(long *)(lVar12 + 0x18);
    uVar5 = *(uint *)(lVar12 + 0x10);
    lVar9 = *(long *)(param_1 + 0x60);
    while( true ) {
      plVar1 = (long *)(lVar11 + (ulong)uVar5 * 0x10);
      uVar10 = plVar1[1];
      if (uVar7 < uVar10) break;
      uVar2 = *(uint *)(lVar12 + 0x20);
      uVar5 = uVar5 + 1;
      *(uint *)(lVar12 + 0x10) = uVar5;
      lVar9 = lVar9 - uVar10;
      *(long *)(param_1 + 0x60) = lVar9;
      uVar7 = uVar7 - uVar10;
      if (uVar5 == uVar2) {
        FUN_00bf1e28(lVar12 + -0x58);
        goto LAB_00bf201c;
      }
      if ((long)uVar7 < 0) goto LAB_00bf200c;
    }
    uVar5 = *(uint *)(param_1 + 0x58);
    plVar1[1] = uVar10 - uVar7;
    *plVar1 = *plVar1 + uVar7;
    *(ulong *)(param_1 + 0x60) = lVar9 - uVar7;
  }
  if ((uVar5 >> 7 & 1) == 0) {
LAB_00bf200c:
    uv__io_start(*(undefined8 *)(param_1 + 8),param_1 + 0x88,4);
LAB_00bf201c:
    if (local_8 == ___stack_chk_guard) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  goto LAB_00bf1ee8;
}

