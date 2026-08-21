
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_011a6744(long param_1,uint param_2,long param_3,undefined4 param_4)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  uint __fd;
  int iVar4;
  undefined4 *puVar5;
  __sighandler_t p_Var6;
  int *piVar7;
  long lVar8;
  ulong uVar9;
  uint *puVar10;
  
  if ((*(byte *)(param_1 + 0x28) >> 3 & 1) != 0) {
    setsid();
  }
  if (0 < (int)param_2) {
    lVar8 = 0;
    puVar10 = (uint *)(param_3 + 4);
    do {
      uVar3 = *puVar10;
      if ((-1 < (int)uVar3) && ((int)uVar3 < lVar8)) {
        uVar3 = fcntl(uVar3,0,(ulong)param_2);
        p_Var6 = (__sighandler_t)(ulong)uVar3;
        *puVar10 = uVar3;
        if (uVar3 == 0xffffffff) goto LAB_011a6b90;
      }
      lVar8 = lVar8 + 1;
      puVar10 = puVar10 + 2;
    } while (lVar8 < (int)param_2);
    if (0 < (int)param_2) {
      uVar3 = 0;
      do {
        puVar10 = (uint *)(param_3 + (long)(int)uVar3 * 8);
        __fd = puVar10[1];
        if ((int)__fd < 0) {
          if ((int)uVar3 < 3) {
            iVar4 = 0;
            if (uVar3 != 0) {
              iVar4 = 2;
            }
            __fd = open("/dev/null",iVar4);
            p_Var6 = (__sighandler_t)(ulong)__fd;
            uVar2 = __fd;
            if (__fd != 0xffffffff) goto joined_r0x011a6828;
            goto LAB_011a6b90;
          }
        }
        else {
          uVar2 = *puVar10;
joined_r0x011a6828:
          if (uVar3 == __fd) {
            p_Var6 = (__sighandler_t)FUN_011a31e8(uVar3,0);
          }
          else {
            uVar3 = dup2(__fd,uVar3);
            p_Var6 = (__sighandler_t)(ulong)uVar3;
          }
          if (uVar3 == 0xffffffff) goto LAB_011a6b90;
          if ((int)uVar3 < 3) {
            FUN_011a3130(uVar3,0);
          }
          if ((int)param_2 <= (int)uVar2) {
            FUN_011a2d5c(uVar2);
          }
        }
        uVar3 = uVar3 + 1;
      } while ((int)uVar3 < (int)param_2);
      if (0 < (int)param_2) {
        uVar9 = (ulong)param_2;
        piVar7 = (int *)(param_3 + 4);
        do {
          if ((int)param_2 <= *piVar7) {
            FUN_011a2d5c();
          }
          uVar9 = uVar9 - 1;
          piVar7 = piVar7 + 2;
        } while (uVar9 != 0);
      }
    }
  }
  if (*(char **)(param_1 + 0x20) != (char *)0x0) {
    uVar3 = chdir(*(char **)(param_1 + 0x20));
    p_Var6 = (__sighandler_t)(ulong)uVar3;
    if (uVar3 != 0) goto LAB_011a6b90;
  }
  uVar3 = *(uint *)(param_1 + 0x28);
  if ((uVar3 & 3) != 0) {
    puVar5 = (undefined4 *)__errno();
    uVar1 = *puVar5;
    setgroups(0,(__gid_t *)0x0);
    *puVar5 = uVar1;
    uVar3 = *(uint *)(param_1 + 0x28);
  }
  if ((uVar3 >> 1 & 1) != 0) {
    uVar3 = setgid(*(__gid_t *)(param_1 + 0x3c));
    p_Var6 = (__sighandler_t)(ulong)uVar3;
    if (uVar3 != 0) goto LAB_011a6b90;
    uVar3 = *(uint *)(param_1 + 0x28);
  }
  if ((uVar3 & 1) != 0) {
    uVar3 = setuid(*(__uid_t *)(param_1 + 0x38));
    p_Var6 = (__sighandler_t)(ulong)uVar3;
    if (uVar3 != 0) goto LAB_011a6b90;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    _environ = *(long *)(param_1 + 0x18);
  }
  p_Var6 = signal(1,(__sighandler_t)0x0);
  if (((((((p_Var6 != (__sighandler_t)0xffffffffffffffff) &&
          (p_Var6 = signal(2,(__sighandler_t)0x0), p_Var6 != (__sighandler_t)0xffffffffffffffff)) &&
         (p_Var6 = signal(3,(__sighandler_t)0x0), p_Var6 != (__sighandler_t)0xffffffffffffffff)) &&
        ((p_Var6 = signal(4,(__sighandler_t)0x0), p_Var6 != (__sighandler_t)0xffffffffffffffff &&
         (p_Var6 = signal(5,(__sighandler_t)0x0), p_Var6 != (__sighandler_t)0xffffffffffffffff))))
       && (p_Var6 = signal(6,(__sighandler_t)0x0), p_Var6 != (__sighandler_t)0xffffffffffffffff)) &&
      (((((p_Var6 = signal(7,(__sighandler_t)0x0), p_Var6 != (__sighandler_t)0xffffffffffffffff &&
          (p_Var6 = signal(8,(__sighandler_t)0x0), p_Var6 != (__sighandler_t)0xffffffffffffffff)) &&
         ((p_Var6 = signal(10,(__sighandler_t)0x0), p_Var6 != (__sighandler_t)0xffffffffffffffff &&
          (((p_Var6 = signal(0xb,(__sighandler_t)0x0), p_Var6 != (__sighandler_t)0xffffffffffffffff
            && (p_Var6 = signal(0xc,(__sighandler_t)0x0),
               p_Var6 != (__sighandler_t)0xffffffffffffffff)) &&
           (p_Var6 = signal(0xd,(__sighandler_t)0x0), p_Var6 != (__sighandler_t)0xffffffffffffffff))
          )))) && ((p_Var6 = signal(0xe,(__sighandler_t)0x0),
                   p_Var6 != (__sighandler_t)0xffffffffffffffff &&
                   (p_Var6 = signal(0xf,(__sighandler_t)0x0),
                   p_Var6 != (__sighandler_t)0xffffffffffffffff)))) &&
       (p_Var6 = signal(0x10,(__sighandler_t)0x0), p_Var6 != (__sighandler_t)0xffffffffffffffff))))
     && ((((p_Var6 = signal(0x11,(__sighandler_t)0x0), p_Var6 != (__sighandler_t)0xffffffffffffffff
           && (p_Var6 = signal(0x12,(__sighandler_t)0x0),
              p_Var6 != (__sighandler_t)0xffffffffffffffff)) &&
          ((p_Var6 = signal(0x14,(__sighandler_t)0x0), p_Var6 != (__sighandler_t)0xffffffffffffffff
           && (((p_Var6 = signal(0x15,(__sighandler_t)0x0),
                p_Var6 != (__sighandler_t)0xffffffffffffffff &&
                (p_Var6 = signal(0x16,(__sighandler_t)0x0),
                p_Var6 != (__sighandler_t)0xffffffffffffffff)) &&
               (p_Var6 = signal(0x17,(__sighandler_t)0x0),
               p_Var6 != (__sighandler_t)0xffffffffffffffff)))))) &&
         (((p_Var6 = signal(0x18,(__sighandler_t)0x0), p_Var6 != (__sighandler_t)0xffffffffffffffff
           && (p_Var6 = signal(0x19,(__sighandler_t)0x0),
              p_Var6 != (__sighandler_t)0xffffffffffffffff)) &&
          ((p_Var6 = signal(0x1a,(__sighandler_t)0x0), p_Var6 != (__sighandler_t)0xffffffffffffffff
           && (((p_Var6 = signal(0x1b,(__sighandler_t)0x0),
                p_Var6 != (__sighandler_t)0xffffffffffffffff &&
                (p_Var6 = signal(0x1c,(__sighandler_t)0x0),
                p_Var6 != (__sighandler_t)0xffffffffffffffff)) &&
               ((p_Var6 = signal(0x1d,(__sighandler_t)0x0),
                p_Var6 != (__sighandler_t)0xffffffffffffffff &&
                ((p_Var6 = signal(0x1e,(__sighandler_t)0x0),
                 p_Var6 != (__sighandler_t)0xffffffffffffffff &&
                 (p_Var6 = signal(0x1f,(__sighandler_t)0x0),
                 p_Var6 != (__sighandler_t)0xffffffffffffffff)))))))))))))) {
    sigemptyset((sigset_t *)&stack0xffffffffffffffa8);
    iVar4 = FUN_011ae428(2,&stack0xffffffffffffffa8,0);
    if (iVar4 != 0) {
      FUN_011a6c60(param_4,-iVar4);
                    /* WARNING: Subroutine does not return */
      _exit(0x7f);
    }
    uVar3 = execvp(*(char **)(param_1 + 8),*(char ***)(param_1 + 0x10));
    p_Var6 = (__sighandler_t)(ulong)uVar3;
  }
LAB_011a6b90:
  piVar7 = (int *)__errno(p_Var6);
  FUN_011a6c60(param_4,-*piVar7);
                    /* WARNING: Subroutine does not return */
  _exit(0x7f);
}

