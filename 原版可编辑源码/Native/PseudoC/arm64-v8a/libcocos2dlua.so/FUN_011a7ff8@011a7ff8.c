
void FUN_011a7ff8(int *param_1,long param_2,uint param_3)

{
  long lVar1;
  size_t sVar2;
  size_t sVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  uint *puVar8;
  cmsghdr *__cmsg;
  uint uVar9;
  int iVar10;
  uint *puVar11;
  long *plVar12;
  code *pcVar13;
  uint *puVar14;
  long *plVar15;
  uint uVar16;
  undefined8 *puVar17;
  long lVar18;
  long lVar19;
  cmsghdr *pcVar20;
  ulong uVar21;
  ulong uVar22;
  iovec iVar23;
  msghdr local_1c0;
  iovec local_188;
  cmsghdr local_178 [17];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  lVar18 = param_2 + -0x88;
  lVar19 = *(long *)(param_2 + -0x10);
  if (lVar19 == 0) {
    if ((param_3 & 0x19) != 0) {
      uVar5 = *(uint *)(param_2 + -0x30);
      *(uint *)(param_2 + -0x30) = uVar5 & 0xfffffbff;
      if (*(int *)(param_2 + -0x78) == 7) {
        bVar4 = *(int *)(param_2 + 0x70) != 0;
        lVar19 = *(long *)(param_2 + -0x18);
      }
      else {
        bVar4 = false;
        lVar19 = *(long *)(param_2 + -0x18);
      }
      if ((lVar19 != 0) && ((uVar5 >> 0xc & 1) != 0)) {
        iVar6 = 0x20;
        while (iVar6 != 0) {
          iVar23 = (iovec)uv_buf_init(0,0);
          local_188 = iVar23;
          (**(code **)(param_2 + -0x20))(lVar18,0x10000,&local_188);
          if ((local_188.iov_base == (void *)0x0) || (local_188.iov_len == 0)) {
            param_1 = (int *)(**(code **)(param_2 + -0x18))(lVar18,0xffffffffffffff97,&local_188);
            iVar6 = *(int *)(param_2 + 0x30);
            goto joined_r0x011a86a4;
          }
          if (bVar4) {
            local_1c0.msg_control = local_178;
            local_1c0.msg_flags = 0;
            local_1c0.msg_iovlen = 1;
            local_1c0.msg_name = (void *)0x0;
            local_1c0.msg_namelen = 0;
            local_1c0.msg_controllen = 0x110;
            local_1c0.msg_iov = &local_188;
            while( true ) {
              lVar19 = FUN_011a334c(*(undefined4 *)(param_2 + 0x30),&local_1c0,0);
              if (-1 < lVar19) break;
              piVar7 = (int *)__errno();
              iVar10 = *piVar7;
              if (iVar10 != 4) goto LAB_011a8404;
            }
          }
          else {
            lVar19 = read(*(int *)(param_2 + 0x30),local_188.iov_base,local_188.iov_len);
            if (lVar19 < 0) {
              piVar7 = (int *)__errno();
              do {
                iVar10 = *piVar7;
                if (iVar10 != 4) goto LAB_011a8404;
                lVar19 = read(*(int *)(param_2 + 0x30),local_188.iov_base,local_188.iov_len);
              } while (lVar19 < 0);
            }
          }
          sVar3 = local_188.iov_len;
          if (lVar19 == 0) {
            *(uint *)(param_2 + -0x30) = *(uint *)(param_2 + -0x30) | 0x800;
            FUN_011a37d8(*(undefined8 *)(param_2 + -0x80),param_2,1);
            iVar6 = FUN_011a393c(param_2,4);
            if (((iVar6 == 0) && (uVar5 = *(uint *)(param_2 + -0x30), (uVar5 >> 2 & 1) != 0)) &&
               (*(uint *)(param_2 + -0x30) = uVar5 & 0xfffffffb, (uVar5 >> 3 & 1) != 0)) {
              *(int *)(*(long *)(param_2 + -0x80) + 8) =
                   *(int *)(*(long *)(param_2 + -0x80) + 8) + -1;
            }
            param_1 = (int *)(**(code **)(param_2 + -0x18))(lVar18,0xfffffffffffff001,&local_188);
            *(uint *)(param_2 + -0x30) = *(uint *)(param_2 + -0x30) & 0xffffefff;
            iVar6 = *(int *)(param_2 + 0x30);
            goto joined_r0x011a86a4;
          }
          __cmsg = local_1c0.msg_control;
          if ((bool)(bVar4 & 0xf < local_1c0.msg_controllen)) {
            while (__cmsg != (cmsghdr *)0x0) {
              if (__cmsg->cmsg_type == 1) {
                uVar22 = 0xffffffff;
                do {
                  uVar5 = (int)uVar22 + 1;
                  uVar22 = (ulong)uVar5;
                } while ((long)(uVar22 * 4 + 0x10) < (long)__cmsg->cmsg_len);
                if (uVar5 != 0) {
                  uVar21 = 0;
                  pcVar20 = __cmsg + 1;
LAB_011a81e0:
                  sVar2 = pcVar20->cmsg_len;
                  puVar8 = (uint *)(param_2 + 100);
                  if (*(uint *)(param_2 + 100) == 0xffffffff) goto LAB_011a8274;
                  puVar8 = *(uint **)(param_2 + 0x68);
                  if (puVar8 == (uint *)0x0) {
                    puVar8 = malloc(0x28);
                    if (puVar8 != (uint *)0x0) {
                      puVar11 = puVar8 + 1;
                      *puVar8 = 8;
                      uVar16 = 0;
                      puVar14 = puVar11;
LAB_011a8258:
                      *puVar11 = uVar16;
                      *(uint **)(param_2 + 0x68) = puVar8;
                      uVar9 = *puVar14;
LAB_011a8264:
                      puVar8 = puVar8 + (ulong)uVar9 + 2;
                      *puVar14 = uVar9 + 1;
                      goto LAB_011a8274;
                    }
                  }
                  else {
                    uVar16 = *puVar8;
                    puVar14 = puVar8 + 1;
                    uVar9 = *puVar14;
                    if (uVar16 != uVar9) goto LAB_011a8264;
                    puVar8 = realloc(puVar8,(ulong)(uVar16 + 7) * 4 + 0xc);
                    if (puVar8 != (uint *)0x0) {
                      uVar16 = uVar16 + 8;
                      puVar11 = puVar8;
                      puVar14 = puVar8 + 1;
                      goto LAB_011a8258;
                    }
                  }
                  if ((uint)uVar21 < uVar5) {
                    lVar19 = uVar5 - uVar21;
                    do {
                      FUN_011a2d5c((int)pcVar20->cmsg_len);
                      lVar19 = lVar19 + -1;
                      pcVar20 = (cmsghdr *)((long)&pcVar20->cmsg_len + 4);
                    } while (lVar19 != 0);
                  }
                  param_1 = (int *)(**(code **)(param_2 + -0x18))
                                             (lVar18,0xfffffffffffffff4,&local_188);
                  goto LAB_011a8500;
                }
              }
              else {
                fprintf((FILE *)pthread_rwlock_tryrdlock,
                        "ignoring non-SCM_RIGHTS ancillary data: %d\n");
              }
LAB_011a829c:
              __cmsg = __cmsg_nxthdr(&local_1c0,__cmsg);
            }
          }
          param_1 = (int *)(**(code **)(param_2 + -0x18))(lVar18,lVar19,&local_188);
          if (lVar19 < (long)sVar3) {
            *(uint *)(param_2 + -0x30) = *(uint *)(param_2 + -0x30) | 0x400;
            break;
          }
          if ((*(long *)(param_2 + -0x18) == 0) ||
             (iVar6 = iVar6 + -1, (*(byte *)(param_2 + -0x2f) >> 4 & 1) == 0)) break;
        }
      }
    }
    goto LAB_011a8500;
  }
  local_1c0.msg_name = (void *)CONCAT44(local_1c0.msg_name._4_4_,4);
  iVar6 = *(int *)(param_2 + 0x60);
  if (iVar6 == 0) {
    uVar5 = getsockopt(*(int *)(param_2 + 0x30),1,4,local_178,(socklen_t *)&local_1c0);
    param_1 = (int *)(ulong)uVar5;
    iVar10 = (int)local_178[0].cmsg_len;
    iVar6 = -(int)local_178[0].cmsg_len;
    local_178[0].cmsg_len = CONCAT44(local_178[0].cmsg_len._4_4_,iVar6);
    if (iVar10 != 0x73) goto LAB_011a832c;
  }
  else {
    local_178[0].cmsg_len = CONCAT44(local_178[0].cmsg_len._4_4_,iVar6);
    *(undefined4 *)(param_2 + 0x60) = 0;
    if (iVar6 != -0x73) {
LAB_011a832c:
      *(undefined8 *)(param_2 + -0x10) = 0;
      *(int *)(*(long *)(param_2 + -0x80) + 0x20) = *(int *)(*(long *)(param_2 + -0x80) + 0x20) + -1
      ;
      if ((iVar6 < 0) || (*(long **)(param_2 + 0x38) == (long *)(param_2 + 0x38))) {
        param_1 = (int *)FUN_011a37d8(*(undefined8 *)(param_2 + -0x80),param_2,4);
      }
      if (*(code **)(lVar19 + 0x40) != (code *)0x0) {
        param_1 = (int *)(**(code **)(lVar19 + 0x40))(lVar19,local_178[0].cmsg_len & 0xffffffff);
      }
      iVar23.iov_len = local_188.iov_len;
      iVar23.iov_base = local_188.iov_base;
      if ((*(int *)(param_2 + 0x30) != -1) && (local_188 = iVar23, (int)local_178[0].cmsg_len < 0))
      {
        plVar12 = (long *)(param_2 + 0x38);
        plVar15 = (long *)*plVar12;
        if (plVar15 != plVar12) {
          do {
            *(long *)plVar15[1] = *plVar15;
            *(long *)(*plVar15 + 8) = plVar15[1];
            *(undefined4 *)((long)plVar15 + 0x24) = 0xffffff83;
            *plVar15 = param_2 + 0x48;
            puVar17 = *(undefined8 **)(param_2 + 0x50);
            plVar15[1] = (long)puVar17;
            *puVar17 = plVar15;
            *(long **)(param_2 + 0x50) = plVar15;
            plVar15 = *(long **)(param_2 + 0x38);
          } while (plVar15 != plVar12);
        }
        param_1 = (int *)FUN_011a8900(lVar18);
        if (*(long *)(lVar1 + 0x28) == local_68) {
          return;
        }
        goto LAB_011a873c;
      }
    }
  }
  goto LAB_011a8658;
LAB_011a8274:
  uVar21 = uVar21 + 1;
  pcVar20 = (cmsghdr *)((long)&pcVar20->cmsg_len + 4);
  *puVar8 = (uint)sVar2;
  if (uVar22 <= uVar21) goto LAB_011a829c;
  goto LAB_011a81e0;
LAB_011a8404:
  if (iVar10 == 0xb) {
    if ((*(byte *)(param_2 + -0x2f) >> 4 & 1) != 0) {
      FUN_011a3688(*(undefined8 *)(param_2 + -0x80),param_2,1);
    }
    param_1 = (int *)(**(code **)(param_2 + -0x18))(lVar18,0,&local_188);
    iVar6 = *(int *)(param_2 + 0x30);
    goto joined_r0x011a86a4;
  }
  param_1 = (int *)(**(code **)(param_2 + -0x18))(lVar18,(long)-iVar10,&local_188);
  if ((*(uint *)(param_2 + -0x30) >> 0xc & 1) != 0) {
    *(uint *)(param_2 + -0x30) = *(uint *)(param_2 + -0x30) & 0xffffefff;
    FUN_011a37d8(*(undefined8 *)(param_2 + -0x80),param_2,1);
    param_1 = (int *)FUN_011a393c(param_2,4);
    if ((((int)param_1 == 0) && (uVar5 = *(uint *)(param_2 + -0x30), (uVar5 >> 2 & 1) != 0)) &&
       (*(uint *)(param_2 + -0x30) = uVar5 & 0xfffffffb, (uVar5 >> 3 & 1) != 0)) {
      *(int *)(*(long *)(param_2 + -0x80) + 8) = *(int *)(*(long *)(param_2 + -0x80) + 8) + -1;
      iVar6 = *(int *)(param_2 + 0x30);
      goto joined_r0x011a86a4;
    }
  }
LAB_011a8500:
  iVar6 = *(int *)(param_2 + 0x30);
joined_r0x011a86a4:
  if (iVar6 != -1) {
    if (((param_3 >> 4 & 1) != 0) && ((*(uint *)(param_2 + -0x30) & 0x1c00) == 0x1400)) {
      local_178[0].cmsg_len = 0;
      local_178[0].cmsg_level = 0;
      local_178[0].cmsg_type = 0;
      *(uint *)(param_2 + -0x30) = *(uint *)(param_2 + -0x30) | 0x800;
      FUN_011a37d8(*(undefined8 *)(param_2 + -0x80),param_2,1);
      iVar6 = FUN_011a393c(param_2,4);
      if ((iVar6 == 0) &&
         ((uVar5 = *(uint *)(param_2 + -0x30), (uVar5 >> 2 & 1) != 0 &&
          (*(uint *)(param_2 + -0x30) = uVar5 & 0xfffffffb, (uVar5 >> 3 & 1) != 0)))) {
        *(int *)(*(long *)(param_2 + -0x80) + 8) = *(int *)(*(long *)(param_2 + -0x80) + 8) + -1;
      }
      param_1 = (int *)(**(code **)(param_2 + -0x18))(lVar18,0xfffffffffffff001,local_178);
      iVar6 = *(int *)(param_2 + 0x30);
      *(uint *)(param_2 + -0x30) = *(uint *)(param_2 + -0x30) & 0xffffefff;
    }
    if (((param_3 & 0x1c) != 0) && (iVar6 != -1)) {
      FUN_011a90dc(lVar18);
      param_1 = (int *)FUN_011a8900(lVar18);
      if (*(long **)(param_2 + 0x38) == (long *)(param_2 + 0x38)) {
        param_1 = (int *)FUN_011a37d8(*(undefined8 *)(param_2 + -0x80),param_2,4);
        if ((*(uint *)(param_2 + -0x30) & 0x301) == 0x100) {
          lVar18 = *(long *)(param_2 + -8);
          *(undefined8 *)(param_2 + -8) = 0;
          *(uint *)(param_2 + -0x30) = *(uint *)(param_2 + -0x30) & 0xfffffeff;
          *(int *)(*(long *)(param_2 + -0x80) + 0x20) =
               *(int *)(*(long *)(param_2 + -0x80) + 0x20) + -1;
          uVar5 = shutdown(*(int *)(param_2 + 0x30),1);
          param_1 = (int *)(ulong)uVar5;
          if (uVar5 == 0) {
LAB_011a8638:
            iVar6 = 0;
            *(uint *)(param_2 + -0x30) = *(uint *)(param_2 + -0x30) | 0x200;
            pcVar13 = *(code **)(lVar18 + 0x48);
          }
          else {
            param_1 = (int *)__errno();
            if (*param_1 == 0) goto LAB_011a8638;
            iVar6 = -*param_1;
            pcVar13 = *(code **)(lVar18 + 0x48);
          }
          if (pcVar13 != (code *)0x0) {
            param_1 = (int *)(*pcVar13)(lVar18,iVar6);
          }
        }
      }
    }
  }
LAB_011a8658:
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
LAB_011a873c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}

