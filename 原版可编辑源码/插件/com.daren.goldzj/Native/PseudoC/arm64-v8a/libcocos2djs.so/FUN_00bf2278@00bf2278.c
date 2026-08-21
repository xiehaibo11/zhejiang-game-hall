
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00bf2278(long param_1)

{
  uint uVar1;
  cmsghdr *pcVar2;
  size_t sVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  long lVar8;
  cmsghdr *__cmsg;
  uint *puVar9;
  uint uVar10;
  ulong uVar11;
  cmsghdr *pcVar12;
  size_t sVar13;
  iovec iVar14;
  iovec local_160;
  msghdr local_150;
  cmsghdr local_118 [17];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(uint *)(param_1 + 0x58) = *(uint *)(param_1 + 0x58) & 0xfffffeff;
  bVar4 = false;
  if (*(int *)(param_1 + 0x10) == 7) {
    bVar4 = *(int *)(param_1 + 0xf8) != 0;
  }
  iVar6 = 0x21;
  do {
    if (((*(long *)(param_1 + 0x70) == 0) || ((*(uint *)(param_1 + 0x58) >> 2 & 1) == 0)) ||
       (iVar6 = iVar6 + -1, iVar6 == 0)) goto LAB_00bf24f4;
    iVar14 = (iovec)uv_buf_init(0,0);
    local_160 = iVar14;
    (**(code **)(param_1 + 0x68))(param_1,0x10000,&local_160);
    if ((local_160.iov_base == (void *)0x0) || (local_160.iov_len == 0)) {
      (**(code **)(param_1 + 0x70))(param_1,0xffffffffffffff97,&local_160);
      goto LAB_00bf24f4;
    }
    if (bVar4) {
      local_150.msg_flags = 0;
      local_150.msg_iovlen = 1;
      local_150.msg_name = (void *)0x0;
      local_150.msg_namelen = 0;
      local_150.msg_controllen = 0x110;
      local_150.msg_iov = &local_160;
      local_150.msg_control = local_118;
      while( true ) {
        lVar8 = uv__recvmsg(*(undefined4 *)(param_1 + 0xb8),&local_150,0);
        sVar13 = local_160.iov_len;
        if (-1 < lVar8) break;
        piVar7 = (int *)__errno();
        if (*piVar7 != 4) goto LAB_00bf259c;
      }
      if (lVar8 == 0) {
LAB_00bf2678:
        FUN_00bf1d90(param_1,&local_160);
        goto LAB_00bf24f4;
      }
      __cmsg = local_150.msg_control;
      if (0xf < local_150.msg_controllen) {
        while (__cmsg != (cmsghdr *)0x0) {
          if (__cmsg->cmsg_type == 1) {
            pcVar2 = __cmsg + 1;
            uVar11 = 0;
            pcVar12 = (cmsghdr *)((long)&__cmsg->cmsg_len + __cmsg->cmsg_len);
            if (pcVar2 < pcVar12) {
              do {
                uVar1 = (int)uVar11 + 1;
                uVar11 = (ulong)uVar1;
              } while ((cmsghdr *)((long)&__cmsg[1].cmsg_len + uVar11 * 4) < pcVar12);
              if (uVar1 != 0) {
                uVar10 = 0;
                pcVar12 = pcVar2;
                if (*(int *)(param_1 + 0xec) == -1) goto LAB_00bf2488;
                do {
                  puVar9 = *(uint **)(param_1 + 0xf0);
                  sVar3 = pcVar12->cmsg_len;
                  if (puVar9 == (uint *)0x0) {
                    puVar9 = (uint *)uv__malloc(0x28);
                    if (puVar9 == (uint *)0x0) goto joined_r0x00bf268c;
                    puVar9[1] = 0;
                    *puVar9 = 8;
                    uVar11 = 0;
                    uVar5 = 1;
                    *(uint **)(param_1 + 0xf0) = puVar9;
                  }
                  else {
                    uVar5 = puVar9[1];
                    if (*puVar9 == uVar5) {
                      puVar9 = (uint *)uv__realloc(puVar9,((ulong)(uVar5 + 7) + 3) * 4);
                      if (puVar9 == (uint *)0x0) goto joined_r0x00bf268c;
                      *puVar9 = uVar5 + 8;
                      uVar5 = puVar9[1];
                      *(uint **)(param_1 + 0xf0) = puVar9;
                    }
                    uVar11 = (ulong)uVar5;
                    uVar5 = uVar5 + 1;
                  }
                  puVar9[1] = uVar5;
                  puVar9[uVar11 + 2] = (uint)sVar3;
                  while( true ) {
                    uVar10 = uVar10 + 1;
                    pcVar12 = (cmsghdr *)((long)&pcVar12->cmsg_len + 4);
                    if (uVar10 == uVar1) goto LAB_00bf23d8;
                    if (*(int *)(param_1 + 0xec) != -1) break;
LAB_00bf2488:
                    *(int *)(param_1 + 0xec) = (int)pcVar12->cmsg_len;
                  }
                } while( true );
              }
            }
          }
          else {
            fprintf((FILE *)__cxa_thread_atexit_impl,"ignoring non-SCM_RIGHTS ancillary data: %d\n")
            ;
          }
LAB_00bf23d8:
          __cmsg = __cmsg_nxthdr(&local_150,__cmsg);
        }
      }
    }
    else {
      while( true ) {
        lVar8 = read(*(int *)(param_1 + 0xb8),local_160.iov_base,local_160.iov_len);
        if (-1 < lVar8) break;
        piVar7 = (int *)__errno();
        if (*piVar7 != 4) goto LAB_00bf259c;
      }
      sVar13 = local_160.iov_len;
      if (lVar8 == 0) goto LAB_00bf2678;
    }
    (**(code **)(param_1 + 0x70))(param_1,lVar8,&local_160);
  } while ((long)sVar13 <= lVar8);
  *(uint *)(param_1 + 0x58) = *(uint *)(param_1 + 0x58) | 0x100;
LAB_00bf24f4:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
joined_r0x00bf268c:
  for (; uVar10 < uVar1; uVar10 = uVar10 + 1) {
    uv__close(*(undefined4 *)((long)&pcVar2->cmsg_len + (ulong)uVar10 * 4));
  }
  (**(code **)(param_1 + 0x70))(param_1,0xfffffffffffffff4,&local_160);
  goto LAB_00bf24f4;
LAB_00bf259c:
  if ((*piVar7 == 0xb) || (*piVar7 == 0xb)) {
    if ((*(uint *)(param_1 + 0x58) >> 2 & 1) != 0) {
      uv__io_start(*(undefined8 *)(param_1 + 8),param_1 + 0x88,1);
    }
    (**(code **)(param_1 + 0x70))(param_1,0,&local_160);
  }
  else {
    (**(code **)(param_1 + 0x70))(param_1,(long)-*piVar7,&local_160);
    if ((*(uint *)(param_1 + 0x58) >> 2 & 1) != 0) {
      *(uint *)(param_1 + 0x58) = *(uint *)(param_1 + 0x58) & 0xfffffffb;
      uv__io_stop(*(undefined8 *)(param_1 + 8),param_1 + 0x88,1);
      iVar6 = uv__io_active(param_1 + 0x88,4);
      if (((iVar6 == 0) && (uVar1 = *(uint *)(param_1 + 0x58), (uVar1 >> 0xe & 1) != 0)) &&
         (*(uint *)(param_1 + 0x58) = uVar1 & 0xffffbfff, (uVar1 >> 0xd & 1) != 0)) {
        *(int *)(*(long *)(param_1 + 8) + 8) = *(int *)(*(long *)(param_1 + 8) + 8) + -1;
      }
    }
  }
  goto LAB_00bf24f4;
}

