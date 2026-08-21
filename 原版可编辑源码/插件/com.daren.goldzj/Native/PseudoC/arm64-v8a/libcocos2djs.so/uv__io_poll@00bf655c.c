
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void uv__io_poll(long param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  long *plVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  undefined8 uVar9;
  undefined4 *puVar10;
  ulong uVar11;
  long lVar12;
  undefined8 *puVar13;
  int iVar14;
  long *plVar15;
  ulong *puVar16;
  ulong *puVar17;
  undefined4 uVar18;
  ulong uVar19;
  int iVar20;
  bool bVar21;
  sigset_t asStack_4020 [128];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(param_1 + 0x74) != 0) {
    plVar3 = *(long **)(param_1 + 0x58);
    while ((long *)(param_1 + 0x58) != plVar3) {
      iVar5 = *(int *)((long)plVar3 + 0x14);
      *(long *)plVar3[1] = *plVar3;
      asStack_4020[0].__val[2] = (ulong)(int)plVar3[3];
      uVar18 = 3;
      if (iVar5 == 0) {
        uVar18 = 1;
      }
      lVar4 = plVar3[3];
      uVar2 = *(undefined4 *)(param_1 + 0x40);
      *(long *)(*plVar3 + 8) = plVar3[1];
      *plVar3 = (long)plVar3;
      plVar3[1] = (long)plVar3;
      asStack_4020[0].__val[1]._0_4_ = (undefined4)plVar3[2];
      iVar5 = uv__epoll_ctl(uVar2,uVar18,(int)lVar4,asStack_4020[0].__val + 1);
      if ((iVar5 != 0) &&
         ((piVar8 = (int *)__errno(), *piVar8 != 0x11 ||
          (iVar5 = uv__epoll_ctl(*(undefined4 *)(param_1 + 0x40),3,(int)plVar3[3],
                                 asStack_4020[0].__val + 1), iVar5 != 0)))) goto LAB_00bf6924;
      plVar15 = *(long **)(param_1 + 0x58);
      *(int *)((long)plVar3 + 0x14) = (int)plVar3[2];
      plVar3 = plVar15;
    }
    uVar19 = *(ulong *)(param_1 + 0x38) & 1;
    if ((*(ulong *)(param_1 + 0x38) & 1) != 0) {
      uVar19 = 0x4000000;
      sigemptyset(asStack_4020);
      sigaddset(asStack_4020,0x1b);
    }
    uVar9 = *(undefined8 *)(param_1 + 0x220);
    iVar5 = 0x30;
    puVar17 = asStack_4020[0].__val + 3;
    iVar20 = param_2;
joined_r0x00bf668c:
    do {
      if (uVar19 == 0) {
        if (DAT_01d3bca4 == 0) {
          iVar6 = uv__epoll_wait(*(undefined4 *)(param_1 + 0x40),puVar17,0x400,param_2);
          if (iVar6 == -1) {
            piVar8 = (int *)__errno();
            iVar6 = *piVar8;
joined_r0x00bf6830:
            if (iVar6 == 0x26) {
              DAT_01d3bca4 = 1;
            }
            goto LAB_00bf6834;
          }
          goto LAB_00bf66c4;
        }
        iVar6 = uv__epoll_pwait(*(undefined4 *)(param_1 + 0x40),puVar17,0x400,param_2,0);
        if (iVar6 != -1) goto LAB_00bf66c4;
LAB_00bf68f4:
        piVar8 = (int *)__errno();
        if (*piVar8 == 0x26) {
          DAT_01d3bca0 = 1;
          if (uVar19 != 0) {
LAB_00bf6910:
            iVar6 = uv__pthread_sigmask(1,asStack_4020,0);
            if (iVar6 != 0) goto LAB_00bf6924;
          }
        }
        else {
LAB_00bf6834:
          if ((uVar19 != 0) && (DAT_01d3bca0 != 0)) goto LAB_00bf6910;
        }
        piVar8 = (int *)__errno();
        iVar6 = *piVar8;
        uVar11 = uv__hrtime(1);
        *(ulong *)(param_1 + 0x220) = uVar11 / 1000000;
        *piVar8 = iVar6;
        if (*piVar8 == 0x26) goto joined_r0x00bf668c;
        if (*piVar8 != 4) goto LAB_00bf6924;
        if (param_2 == -1) goto joined_r0x00bf668c;
        if (param_2 == 0) break;
        uVar11 = *(ulong *)(param_1 + 0x220);
      }
      else {
        if (DAT_01d3bca0 == 0) {
LAB_00bf6698:
          iVar6 = uv__epoll_pwait(*(undefined4 *)(param_1 + 0x40),puVar17,0x400,param_2,uVar19);
          if (iVar6 == -1) goto LAB_00bf68f4;
        }
        else {
          iVar6 = uv__pthread_sigmask(0,asStack_4020,0);
          if (iVar6 != 0) {
LAB_00bf6924:
                    /* WARNING: Subroutine does not return */
            abort();
          }
          if ((DAT_01d3bca4 != 0) || (DAT_01d3bca0 == 0)) goto LAB_00bf6698;
          iVar6 = uv__epoll_wait(*(undefined4 *)(param_1 + 0x40),puVar17,0x400,param_2);
          if (iVar6 == -1) {
            piVar8 = (int *)__errno();
            iVar6 = *piVar8;
            goto joined_r0x00bf6830;
          }
        }
        if ((DAT_01d3bca0 != 0) && (iVar7 = uv__pthread_sigmask(1,asStack_4020,0), iVar7 != 0)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
LAB_00bf66c4:
        puVar10 = (undefined4 *)__errno();
        uVar18 = *puVar10;
        uVar11 = uv__hrtime(1);
        uVar11 = uVar11 / 1000000;
        *(ulong *)(param_1 + 0x220) = uVar11;
        *puVar10 = uVar18;
        if (iVar6 == 0) {
          if (param_2 == 0) break;
        }
        else {
          lVar4 = (ulong)*(uint *)(param_1 + 0x70) * 8;
          lVar12 = (ulong)(*(uint *)(param_1 + 0x70) + 1) * 8;
          *(ulong **)(*(long *)(param_1 + 0x68) + lVar4) = puVar17;
          *(long *)(*(long *)(param_1 + 0x68) + lVar12) = (long)iVar6;
          if (iVar6 < 1) {
            *(undefined8 *)(*(long *)(param_1 + 0x68) + lVar4) = 0;
            *(undefined8 *)(*(long *)(param_1 + 0x68) + lVar12) = 0;
          }
          else {
            iVar7 = 0;
            bVar21 = false;
            puVar16 = puVar17;
            do {
              iVar14 = (int)puVar16[1];
              if (iVar14 != -1) {
                puVar13 = *(undefined8 **)(*(long *)(param_1 + 0x68) + (long)iVar14 * 8);
                if (puVar13 == (undefined8 *)0x0) {
                  uv__epoll_ctl(*(undefined4 *)(param_1 + 0x40),2,puVar16[1],puVar16);
                }
                else {
                  uVar1 = (*(uint *)(puVar13 + 5) | 0x18) & (uint)*puVar16;
                  *(uint *)puVar16 = uVar1;
                  if ((uVar1 - 8 & 0xfffffff7) == 0) {
                    uVar1 = uVar1 | *(uint *)(puVar13 + 5) & 5;
                    *(uint *)puVar16 = uVar1;
                  }
                  if (uVar1 != 0) {
                    if (puVar13 == (undefined8 *)(param_1 + 0x230)) {
                      bVar21 = true;
                    }
                    else {
                      (*(code *)*puVar13)(param_1);
                    }
                    iVar7 = iVar7 + 1;
                  }
                }
              }
              puVar16 = puVar16 + 2;
            } while (puVar16 != puVar17 + ((ulong)(iVar6 - 1) + 1) * 2);
            if (bVar21) {
              (**(code **)(param_1 + 0x230))(param_1,param_1 + 0x230,1);
              uVar1 = *(uint *)(param_1 + 0x70);
              *(undefined8 *)(*(long *)(param_1 + 0x68) + (ulong)uVar1 * 8) = 0;
              *(undefined8 *)(*(long *)(param_1 + 0x68) + (ulong)(uVar1 + 1) * 8) = 0;
              break;
            }
            uVar1 = *(uint *)(param_1 + 0x70);
            *(undefined8 *)(*(long *)(param_1 + 0x68) + (ulong)uVar1 * 8) = 0;
            *(undefined8 *)(*(long *)(param_1 + 0x68) + (ulong)(uVar1 + 1) * 8) = 0;
            if (iVar7 != 0) {
              if ((iVar6 != 0x400) || (iVar5 = iVar5 + -1, iVar5 == 0)) break;
              param_2 = 0;
              goto joined_r0x00bf668c;
            }
          }
          if (param_2 == 0) break;
          if (param_2 == -1) goto joined_r0x00bf668c;
          uVar11 = *(ulong *)(param_1 + 0x220);
        }
      }
      param_2 = (iVar20 + (int)uVar9) - (int)uVar11;
      iVar20 = param_2;
    } while (0 < param_2);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

