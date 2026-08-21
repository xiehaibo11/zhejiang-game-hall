
void _lws_plat_service_tsi(long param_1,int param_2,int param_3)

{
  long *plVar1;
  long lVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  ssize_t sVar6;
  int *piVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  undefined1 auStack_378 [544];
  long local_158;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if ((param_1 == 0) || (*(long *)(param_1 + 0x830) == 0)) {
    iVar5 = 1;
    if (*(long *)(lVar2 + 0x28) == local_68) {
      return;
    }
    goto LAB_00aaf484;
  }
  lVar8 = (long)param_3;
  plVar1 = (long *)(param_1 + (long)param_3 * 0x6f8 + 0xe0);
  if (param_2 < 0) {
    iVar5 = -1;
    iVar4 = FUN_00aa28d4(param_1,param_3);
    if (iVar4 == 0) goto LAB_00aaf49c;
LAB_00aaf3b0:
    iVar5 = -1;
LAB_00aaf3bc:
    lVar10 = param_1 + lVar8 * 0x6f8;
    if (*(int *)(lVar10 + 0x7c8) != 0) {
      uVar9 = 0;
      do {
        piVar7 = (int *)(*plVar1 + (long)(int)uVar9 * 8);
        if (*(short *)((long)piVar7 + 6) != 0) {
          iVar5 = iVar5 + -1;
          if (*piVar7 == *(int *)(param_1 + lVar8 * 0x6f8 + 0x7c0)) {
            sVar6 = read(*piVar7,auStack_378,1);
            if (sVar6 != 1) {
              _lws_log(1,"Cannot read from dummy pipe.");
            }
          }
          else {
            iVar4 = lws_service_fd_tsi(param_1,piVar7,param_3);
            if (iVar4 < 0) {
              iVar5 = -1;
              if (*(long *)(lVar2 + 0x28) == local_68) {
                return;
              }
              goto LAB_00aaf484;
            }
            uVar9 = uVar9 - (iVar4 != 0);
          }
        }
      } while ((iVar5 != 0) && (uVar9 = uVar9 + 1, uVar9 < *(uint *)(lVar10 + 0x7c8)));
    }
  }
  else {
    lws_libuv_run(param_1,param_3);
    if (*(int *)(param_1 + 0xca0) == 0) {
      memset(auStack_378,0,0x310);
                    /* catch() { ... } // from try @ 00aaf244 with catch @ 00aaf30c */
      local_158 = param_1;
      uVar3 = (**(code **)(*(long *)(*(long *)(param_1 + 0x830) + 0x188) + 8))
                        (auStack_378,0x1f,0,0,0);
      *(undefined4 *)(param_1 + 0xc9c) = uVar3;
      *(undefined4 *)(param_1 + 0xca0) = 1;
    }
    iVar4 = lws_service_adjust_timeout(param_1,1,param_3);
    iVar5 = param_2;
    if (iVar4 == 0) {
      lVar10 = param_1 + lVar8 * 0x6f8;
      _lws_plat_service_tsi(param_1,0xffffffff,*(undefined1 *)(lVar10 + 0x7d2));
      iVar4 = lws_service_adjust_timeout(param_1,1,*(undefined1 *)(lVar10 + 0x7d2));
      iVar5 = 0;
      if (iVar4 != 0) {
        iVar5 = param_2;
      }
    }
    iVar5 = poll((pollfd *)*plVar1,(ulong)*(uint *)(param_1 + lVar8 * 0x6f8 + 0x7c8),iVar5);
    if (iVar5 == 0) {
      if ((*(long *)(param_1 + lVar8 * 0x6f8 + 0xe8) == 0) &&
         (iVar5 = FUN_00aacbf0(param_1,param_3), iVar5 == 0)) {
        lws_service_fd_tsi(param_1,0,param_3);
        iVar5 = 0;
        if (*(long *)(lVar2 + 0x28) == local_68) {
          return;
        }
        goto LAB_00aaf484;
      }
      iVar5 = 0;
      iVar4 = FUN_00aa28d4(param_1,param_3);
    }
    else {
      iVar4 = FUN_00aa28d4(param_1,param_3);
    }
    if (iVar4 != 0) goto LAB_00aaf3b0;
LAB_00aaf49c:
    if (iVar5 < 0) {
      piVar7 = (int *)__errno();
      iVar5 = -(uint)(*piVar7 != 4);
      if (*(long *)(lVar2 + 0x28) == local_68) {
        return;
      }
      goto LAB_00aaf484;
    }
    if (iVar5 != 0) goto LAB_00aaf3bc;
  }
  iVar5 = 0;
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
LAB_00aaf484:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar5);
}

