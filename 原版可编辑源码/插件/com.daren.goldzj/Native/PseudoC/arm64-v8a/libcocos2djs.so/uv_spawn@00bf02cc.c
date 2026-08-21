
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void uv_spawn(long param_1,long param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  __pid_t __pid;
  int iVar4;
  __pid_t _Var5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  ulong uVar9;
  ssize_t sVar10;
  long lVar11;
  int *piVar12;
  undefined4 *puVar13;
  __sighandler_t p_Var14;
  undefined4 uVar15;
  long *plVar16;
  undefined8 uVar17;
  uint __fd2;
  long lVar18;
  long lVar19;
  ulong uVar20;
  int iVar21;
  uint *puVar22;
  uint local_20;
  int iStack_1c;
  int local_18;
  undefined4 local_14;
  ulong local_8;
  
  *(long *)(param_2 + 0x20) = param_1 + 0x10;
  lVar19 = param_2 + 0x70;
  plVar16 = *(long **)(param_1 + 0x18);
  *(long *)(param_2 + 8) = param_1;
  *(undefined4 *)(param_2 + 0x10) = 10;
  *(long **)(param_2 + 0x28) = plVar16;
  *(undefined4 *)(param_2 + 0x58) = 0x2000;
  local_18 = -1;
  local_14 = 0xffffffff;
  uVar7 = *(uint *)((long)param_3 + 0x2c);
  local_8 = ___stack_chk_guard;
  *plVar16 = param_2 + 0x20;
  *(long *)(param_1 + 0x18) = param_2 + 0x20;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(long *)(param_2 + 0x70) = lVar19;
  *(long *)(param_2 + 0x78) = lVar19;
  if ((int)uVar7 < 3) {
    piVar8 = (int *)uv__malloc(0x18);
    if (piVar8 == (int *)0x0) {
LAB_00bf056c:
      uVar3 = 0xfffffff4;
      goto LAB_00bf048c;
    }
    uVar9 = 2;
    uVar3 = 1;
    uVar7 = 3;
  }
  else {
    piVar8 = (int *)uv__malloc(-(ulong)(uVar7 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar7 << 3);
    if (piVar8 == (int *)0x0) goto LAB_00bf056c;
    uVar3 = (uVar7 - 2 >> 1) + 1;
    uVar9 = (ulong)(uVar3 * 2);
  }
  uVar6 = 0;
  piVar12 = piVar8;
  do {
    piVar12[2] = -1;
    piVar12[3] = -1;
    piVar12[0] = -1;
    piVar12[1] = -1;
    uVar6 = uVar6 + 1;
    piVar12 = piVar12 + 4;
  } while (uVar6 < uVar3);
  if (uVar7 != (uint)uVar9) {
    uVar9 = -(uVar9 >> 0x1f) & 0xfffffff800000000 | uVar9 << 3;
    *(undefined4 *)((long)piVar8 + uVar9) = 0xffffffff;
    *(undefined4 *)((long)piVar8 + uVar9 + 4) = 0xffffffff;
  }
  iVar4 = *(int *)((long)param_3 + 0x2c);
  if (0 < iVar4) {
    lVar18 = 0;
    iVar21 = 0;
    piVar12 = piVar8;
LAB_00bf0408:
    lVar11 = param_3[6] + lVar18;
    uVar3 = *(uint *)(param_3[6] + lVar18);
    switch(uVar3 & 7) {
    case 0:
      goto switchD_00bf04d4_caseD_0;
    case 1:
      if (*(int *)(*(long *)(lVar11 + 8) + 0x10) != 7) goto switchD_00bf04d4_caseD_3;
      uVar3 = uv__make_socketpair(piVar12,0);
      iVar4 = *(int *)((long)param_3 + 0x2c);
      if (uVar3 == 0) goto code_r0x00bf0548;
      goto LAB_00bf0424;
    case 2:
    case 4:
      goto switchD_00bf04d4_caseD_2;
    default:
switchD_00bf04d4_caseD_3:
      uVar3 = 0xffffffea;
      goto LAB_00bf0424;
    }
  }
LAB_00bf0504:
  uVar3 = uv__make_pipe(&local_18,0);
  if (uVar3 == 0) {
    lVar18 = param_1 + 0x130;
    uv_signal_start(param_1 + 0x268,FUN_00beff90,0x11);
    uv_rwlock_wrlock(lVar18);
    __pid = fork();
    uVar15 = local_14;
    if (__pid != -1) {
      if (__pid == 0) {
        if ((*(uint *)(param_3 + 5) >> 3 & 1) != 0) {
          setsid();
        }
        puVar22 = (uint *)(piVar8 + 1);
        uVar3 = 0;
        do {
          uVar6 = *puVar22;
          if (((int)uVar6 < (int)uVar3) && (-1 < (int)uVar6)) {
            uVar6 = fcntl(uVar6,0,(ulong)uVar7);
            uVar9 = (ulong)uVar6;
            *puVar22 = uVar6;
            if (uVar6 == 0xffffffff) goto LAB_00bf0850;
          }
          uVar3 = uVar3 + 1;
          puVar22 = puVar22 + 2;
        } while (uVar3 != uVar7);
        uVar20 = 0;
        do {
          uVar9 = -(uVar20 >> 0x1f) & 0xfffffff800000000 | uVar20 << 3;
          uVar3 = *(uint *)((long)piVar8 + uVar9 + 4);
          __fd2 = (uint)uVar20;
          uVar6 = *(uint *)((long)piVar8 + uVar9);
          if ((int)uVar3 < 0) {
            if ((int)__fd2 < 3) {
              iVar4 = 2;
              if (__fd2 == 0) {
                iVar4 = 0;
              }
              uVar3 = open("/dev/null",iVar4);
              uVar9 = (ulong)uVar3;
              uVar6 = uVar3;
              if (uVar3 != 0xffffffff) goto LAB_00bf0884;
              goto LAB_00bf0850;
            }
          }
          else {
LAB_00bf0884:
            if (__fd2 == uVar3) {
              uv__cloexec_fcntl(uVar20,0);
            }
            else {
              uVar3 = dup2(uVar3,__fd2);
              uVar9 = (ulong)uVar3;
              uVar20 = (ulong)uVar3;
              if (uVar3 == 0xffffffff) goto LAB_00bf0850;
            }
            if ((int)uVar20 < 3) {
              uv__nonblock_fcntl(uVar20,0);
            }
            if ((int)uVar7 <= (int)uVar6) {
              uv__close(uVar6);
            }
          }
          uVar3 = (int)uVar20 + 1;
          uVar20 = (ulong)uVar3;
        } while ((int)uVar3 < (int)uVar7);
        lVar19 = 0;
        do {
          if ((int)uVar7 <= piVar8[lVar19 * 2 + 1]) {
            uv__close();
          }
          lVar19 = lVar19 + 1;
        } while ((int)lVar19 < (int)uVar7);
        if ((char *)param_3[4] != (char *)0x0) {
          uVar7 = chdir((char *)param_3[4]);
          uVar9 = (ulong)uVar7;
          if (uVar7 != 0) goto LAB_00bf0850;
        }
        uVar7 = *(uint *)(param_3 + 5);
        if ((uVar7 & 3) != 0) {
          puVar13 = (undefined4 *)__errno();
          uVar1 = *puVar13;
          setgroups(0,(__gid_t *)0x0);
          *puVar13 = uVar1;
          uVar7 = *(uint *)(param_3 + 5);
        }
        if ((uVar7 >> 1 & 1) != 0) {
          uVar7 = setgid(*(__gid_t *)((long)param_3 + 0x3c));
          uVar9 = (ulong)uVar7;
          if (uVar7 != 0) goto LAB_00bf0850;
          uVar7 = *(uint *)(param_3 + 5);
        }
        if ((uVar7 & 1) != 0) {
          uVar7 = setuid(*(__uid_t *)(param_3 + 7));
          uVar9 = (ulong)uVar7;
          if (uVar7 != 0) goto LAB_00bf0850;
        }
        if (param_3[3] != 0) {
          _environ = param_3[3];
        }
        iVar4 = 1;
        do {
          if (((iVar4 != 0x13) && (iVar4 != 9)) &&
             (p_Var14 = signal(iVar4,(__sighandler_t)0x0),
             p_Var14 == (__sighandler_t)0xffffffffffffffff)) {
            uVar9 = 0xffffffffffffffff;
            goto LAB_00bf0850;
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 != 0x20);
        sigemptyset((sigset_t *)&stack0xfffffffffffffff0);
        iVar4 = uv__pthread_sigmask(2,(sigset_t *)&stack0xfffffffffffffff0,0);
        if (iVar4 != 0) {
          entry(uVar15,-iVar4);
                    /* WARNING: Subroutine does not return */
          _exit(0x7f);
        }
        uVar7 = execvp((char *)param_3[1],(char **)param_3[2]);
        uVar9 = (ulong)uVar7;
LAB_00bf0850:
        piVar8 = (int *)__errno(uVar9);
        entry(uVar15,-*piVar8);
                    /* WARNING: Subroutine does not return */
        _exit(0x7f);
      }
      uv_rwlock_wrunlock(lVar18);
      uv__close(local_14);
      *(undefined4 *)(param_2 + 0x80) = 0;
      local_20 = 0;
      do {
        sVar10 = read(local_18,&local_20,4);
        if (sVar10 != -1) {
          if (sVar10 == 0) goto LAB_00bf05f8;
          if (sVar10 != 4) goto LAB_00bf0788;
          goto LAB_00bf079c;
        }
        piVar12 = (int *)__errno();
      } while (*piVar12 == 4);
      if (*piVar12 != 0x20) {
LAB_00bf0788:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      do {
        _Var5 = waitpid(__pid,&iStack_1c,0);
        if (_Var5 != -1) break;
      } while (*piVar12 == 4);
      goto LAB_00bf05f8;
    }
    piVar12 = (int *)__errno();
    iVar4 = *piVar12;
    uv_rwlock_wrunlock(lVar18);
    uVar3 = -iVar4;
    uv__close(local_18);
    uv__close(local_14);
    iVar4 = *(int *)((long)param_3 + 0x2c);
  }
  else {
LAB_00bf0518:
    iVar4 = *(int *)((long)param_3 + 0x2c);
  }
LAB_00bf0424:
  piVar12 = piVar8 + 1;
  lVar19 = 0;
  while( true ) {
    if ((iVar4 <= (int)lVar19) || ((*(uint *)(param_3[6] + lVar19 * 0x10) & 6) == 0)) {
      if (piVar12[-1] != -1) {
        uv__close_nocheckstdio();
      }
      if (*piVar12 != -1) {
        uv__close_nocheckstdio();
      }
    }
    lVar19 = lVar19 + 1;
    piVar12 = piVar12 + 2;
    if ((int)uVar7 <= (int)lVar19) break;
    iVar4 = *(int *)((long)param_3 + 0x2c);
  }
  uv__free(piVar8);
  goto LAB_00bf048c;
switchD_00bf04d4_caseD_2:
  if ((uVar3 >> 1 & 1) == 0) {
    iVar2 = *(int *)(*(long *)(lVar11 + 8) + 0xb8);
  }
  else {
    iVar2 = *(int *)(lVar11 + 8);
  }
  if (iVar2 == -1) goto switchD_00bf04d4_caseD_3;
  piVar12[1] = iVar2;
  iVar4 = *(int *)((long)param_3 + 0x2c);
switchD_00bf04d4_caseD_0:
  iVar21 = iVar21 + 1;
  lVar18 = lVar18 + 0x10;
  piVar12 = piVar12 + 2;
  if (iVar4 <= iVar21) goto LAB_00bf0504;
  goto LAB_00bf0408;
code_r0x00bf0548:
  iVar21 = iVar21 + 1;
  lVar18 = lVar18 + 0x10;
  piVar12 = piVar12 + 2;
  if (iVar4 <= iVar21) goto LAB_00bf0504;
  goto LAB_00bf0408;
LAB_00bf06cc:
  uVar9 = (ulong)(iVar21 + 1U);
  lVar18 = lVar18 + 0x10;
  piVar12 = piVar12 + 2;
  if (iVar4 <= (int)(iVar21 + 1U)) goto LAB_00bf06e0;
  goto LAB_00bf0618;
  while (piVar12 = (int *)__errno(), *piVar12 == 4) {
LAB_00bf079c:
    _Var5 = waitpid(__pid,&iStack_1c,0);
    if (_Var5 != -1) break;
  }
LAB_00bf05f8:
  uv__close_nocheckstdio(local_18);
  iVar4 = *(int *)((long)param_3 + 0x2c);
  if (0 < iVar4) {
    lVar18 = 0;
    uVar9 = 0;
    piVar12 = piVar8;
LAB_00bf0618:
    lVar11 = param_3[6];
    iVar21 = (int)uVar9;
    if (((*(uint *)(lVar11 + lVar18) & 1) == 0) || (*piVar12 < 0)) goto LAB_00bf06cc;
    iVar4 = uv__close(piVar12[1]);
    if (iVar4 == 0) {
      piVar12[1] = -1;
      uv__nonblock_ioctl(*piVar12,1);
      lVar11 = *(long *)(lVar11 + lVar18 + 8);
      if (((*(int *)(lVar11 + 0x10) != 7) || (uVar15 = 0x60, *(int *)(lVar11 + 0xf8) == 0)) &&
         (uVar15 = 0x40, iVar21 != 0)) {
        uVar15 = 0x20;
      }
      uVar3 = uv__stream_open(lVar11,*piVar12,uVar15);
      if (uVar3 == 0) {
        iVar4 = *(int *)((long)param_3 + 0x2c);
        goto LAB_00bf06cc;
      }
      lVar19 = (long)iVar21 * 0x10 + -0x10;
      while (lVar19 != ((long)iVar21 - uVar9) * 0x10 + -0x10) {
        lVar18 = param_3[6] + lVar19;
        if ((*(uint *)(param_3[6] + lVar19) & 1) == 0) {
          lVar19 = lVar19 + -0x10;
        }
        else {
          lVar19 = lVar19 + -0x10;
          uv__stream_close(*(undefined8 *)(lVar18 + 8));
        }
      }
      goto LAB_00bf0518;
    }
    goto LAB_00bf0788;
  }
LAB_00bf06e0:
  if (local_20 == 0) {
    *(long *)(param_2 + 0x70) = param_1 + 0x170;
    uVar7 = *(uint *)(param_2 + 0x58);
    plVar16 = *(long **)(param_1 + 0x178);
    *(long **)(param_2 + 0x78) = plVar16;
    *plVar16 = lVar19;
    *(long *)(param_1 + 0x178) = lVar19;
    if (((uVar7 >> 0xe & 1) == 0) &&
       (*(uint *)(param_2 + 0x58) = uVar7 | 0x4000, (uVar7 >> 0xd & 1) != 0)) {
      *(int *)(*(long *)(param_2 + 8) + 8) = *(int *)(*(long *)(param_2 + 8) + 8) + 1;
    }
  }
  uVar17 = *param_3;
  *(__pid_t *)(param_2 + 0x68) = __pid;
  *(undefined8 *)(param_2 + 0x60) = uVar17;
  uv__free(piVar8);
  uVar3 = local_20;
LAB_00bf048c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}

