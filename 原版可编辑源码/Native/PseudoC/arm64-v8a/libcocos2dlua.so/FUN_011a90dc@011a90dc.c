
void FUN_011a90dc(long param_1)

{
  iovec *__iovec;
  byte bVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  uint *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  ulong *puVar12;
  long *plVar13;
  long *plVar14;
  msghdr local_e0;
  undefined8 local_a8;
  undefined8 local_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  plVar14 = (long *)(param_1 + 0xc0);
  plVar13 = (long *)*plVar14;
  if (plVar14 != plVar13) {
    do {
      __iovec = (iovec *)(plVar13[3] + (ulong)*(uint *)(plVar13 + 2) * 0x10);
      iVar7 = (int)plVar13[4] - *(uint *)(plVar13 + 2);
      iVar3 = FUN_011a2798();
      lVar8 = plVar13[-2];
      if (iVar7 <= iVar3) {
        iVar3 = iVar7;
      }
      if (lVar8 == 0) {
        if (iVar3 == 1) {
          do {
            uVar4 = write(*(int *)(param_1 + 0xb8),__iovec->iov_base,__iovec->iov_len);
            if (uVar4 != 0xffffffffffffffff) goto LAB_011a926c;
            piVar5 = (int *)__errno();
            iVar7 = *piVar5;
          } while (iVar7 == 4);
        }
        else {
          do {
            uVar4 = writev(*(int *)(param_1 + 0xb8),__iovec,iVar3);
            if (uVar4 != 0xffffffffffffffff) goto LAB_011a926c;
            piVar5 = (int *)__errno();
            iVar7 = *piVar5;
          } while (iVar7 == 4);
        }
joined_r0x011a91ec:
        if ((iVar7 != 0xb) && (iVar7 != 0x69)) {
          iVar7 = -iVar7;
LAB_011a93c8:
          *(int *)((long)plVar13 + 0x24) = iVar7;
          lVar8 = plVar13[-1];
          *(long *)plVar13[1] = *plVar13;
          *(long *)(*plVar13 + 8) = plVar13[1];
          if (iVar7 == 0) {
            if ((long *)plVar13[3] != plVar13 + 5) {
              FUN_0119f27c();
            }
            plVar13[3] = 0;
          }
          *plVar13 = lVar8 + 0xd0;
          puVar10 = *(undefined8 **)(lVar8 + 0xd8);
          plVar13[1] = (long)puVar10;
          *puVar10 = plVar13;
          *(long **)(lVar8 + 0xd8) = plVar13;
          FUN_011a390c(*(undefined8 *)(lVar8 + 8),lVar8 + 0x88);
          FUN_011a37d8(*(undefined8 *)(param_1 + 8),param_1 + 0x88,4);
          iVar3 = FUN_011a393c(param_1 + 0x88,1);
          if (((iVar3 == 0) && (uVar6 = *(uint *)(param_1 + 0x58), (uVar6 >> 2 & 1) != 0)) &&
             (*(uint *)(param_1 + 0x58) = uVar6 & 0xfffffffb, (uVar6 >> 3 & 1) != 0)) {
            *(int *)(*(long *)(param_1 + 8) + 8) = *(int *)(*(long *)(param_1 + 8) + 8) + -1;
            if (*(long *)(lVar2 + 0x28) == local_68) {
              return;
            }
            goto LAB_011a9478;
          }
          break;
        }
        bVar1 = *(byte *)(param_1 + 0x5a);
      }
      else {
        if ((*(byte *)(lVar8 + 0x58) & 3) != 0) {
          iVar7 = -9;
          goto LAB_011a93c8;
        }
        iVar7 = *(int *)(lVar8 + 0x10);
        if (iVar7 == 7) {
LAB_011a9180:
          puVar9 = (uint *)(lVar8 + 0xb8);
LAB_011a9200:
          uVar6 = *puVar9;
        }
        else {
          if (iVar7 == 0xf) {
            puVar9 = (uint *)(lVar8 + 0xb0);
            goto LAB_011a9200;
          }
          if (iVar7 == 0xc) goto LAB_011a9180;
          uVar6 = 0xffffffff;
        }
        local_e0.msg_iovlen = (size_t)iVar3;
        uStack_88 = 0;
        uStack_90 = 0;
        local_70 = 0;
        uStack_78 = 0;
        local_80 = 0;
        local_e0.msg_name = (void *)0x0;
        local_e0.msg_namelen = 0;
        local_a0 = 0x100000001;
        local_a8 = 0x14;
        local_e0.msg_flags = 0;
        local_e0.msg_controllen = 0x18;
        uStack_98 = (ulong)uVar6;
        local_e0.msg_iov = __iovec;
        local_e0.msg_control = &local_a8;
        do {
          uVar4 = sendmsg(*(int *)(param_1 + 0xb8),&local_e0,0);
          if (uVar4 != 0xffffffffffffffff) goto LAB_011a926c;
          piVar5 = (int *)__errno();
        } while (*piVar5 == 4);
        uVar4 = 0xffffffffffffffff;
LAB_011a926c:
        if ((long)uVar4 < 0) {
          piVar5 = (int *)__errno();
          iVar7 = *piVar5;
          goto joined_r0x011a91ec;
        }
        lVar8 = plVar13[3];
        uVar6 = *(uint *)(plVar13 + 2);
        while( true ) {
          puVar12 = (ulong *)(lVar8 + (ulong)uVar6 * 0x10 + 8);
          uVar11 = *puVar12;
          if (uVar4 < uVar11) break;
          uVar6 = uVar6 + 1;
          *(uint *)(plVar13 + 2) = uVar6;
          *(ulong *)(param_1 + 0x60) = *(long *)(param_1 + 0x60) - uVar11;
          if (uVar6 == *(uint *)(plVar13 + 4)) {
            lVar8 = plVar13[-1];
            *(long *)plVar13[1] = *plVar13;
            *(long *)(*plVar13 + 8) = plVar13[1];
            if (*(int *)((long)plVar13 + 0x24) == 0) {
              if ((long *)plVar13[3] != plVar13 + 5) {
                FUN_0119f27c();
              }
              plVar13[3] = 0;
            }
            *plVar13 = lVar8 + 0xd0;
            puVar10 = *(undefined8 **)(lVar8 + 0xd8);
            plVar13[1] = (long)puVar10;
            *puVar10 = plVar13;
            *(long **)(lVar8 + 0xd8) = plVar13;
            FUN_011a390c(*(undefined8 *)(lVar8 + 8),lVar8 + 0x88);
            goto LAB_011a9388;
          }
          uVar4 = uVar4 - uVar11;
          if ((long)uVar4 < 0) goto LAB_011a930c;
        }
        *(ulong *)(lVar8 + (ulong)uVar6 * 0x10) = *(long *)(lVar8 + (ulong)uVar6 * 0x10) + uVar4;
        *puVar12 = uVar11 - uVar4;
        bVar1 = *(byte *)(param_1 + 0x5a);
        *(ulong *)(param_1 + 0x60) = *(long *)(param_1 + 0x60) - uVar4;
      }
      if ((bVar1 >> 4 & 1) == 0) {
LAB_011a930c:
        FUN_011a3688(*(undefined8 *)(param_1 + 8),param_1 + 0x88,4);
        if (*(long *)(lVar2 + 0x28) == local_68) {
          return;
        }
        goto LAB_011a9478;
      }
      plVar13 = (long *)*plVar14;
    } while (plVar14 != plVar13);
  }
LAB_011a9388:
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
LAB_011a9478:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

