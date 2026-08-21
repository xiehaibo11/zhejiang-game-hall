
/* WARNING: Type propagation algorithm not settling */

uint uv_spawn(long param_1,long param_2,undefined8 *param_3)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  bool bVar4;
  uint uVar5;
  __pid_t __pid;
  __pid_t _Var6;
  int iVar7;
  int *__s;
  ssize_t sVar8;
  int *piVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  int iStack_b0;
  uint local_ac;
  int local_a8 [16];
  undefined8 local_68;
  
  local_68 = 0xffffffffffffffff;
  plVar11 = (long *)(param_2 + 0x20);
  *plVar11 = param_1 + 0x10;
  *(long *)(param_2 + 8) = param_1;
  *(undefined4 *)(param_2 + 0x10) = 10;
  *(undefined4 *)(param_2 + 0x58) = 8;
  puVar10 = *(undefined8 **)(param_1 + 0x18);
  lVar12 = param_2 + 0x70;
  *(undefined8 **)(param_2 + 0x28) = puVar10;
  *puVar10 = plVar11;
  *(long **)(param_1 + 0x18) = plVar11;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(long *)(param_2 + 0x70) = lVar12;
  *(long *)(param_2 + 0x78) = lVar12;
  uVar3 = *(uint *)((long)param_3 + 0x2c);
  if ((int)uVar3 < 4) {
    uVar3 = 3;
  }
  if ((int)uVar3 < 9) {
    __s = local_a8;
    if (0 < (int)uVar3) goto LAB_011a61ec;
    bVar4 = false;
    iVar7 = *(int *)((long)param_3 + 0x2c);
  }
  else {
    __s = malloc((ulong)uVar3 << 3);
    if (__s == (int *)0x0) {
      return -0xc;
    }
LAB_011a61ec:
    memset(__s,0xff,(ulong)uVar3 << 3);
    bVar4 = true;
    iVar7 = *(int *)((long)param_3 + 0x2c);
  }
  if (0 < iVar7) {
    lVar15 = 0;
    lVar16 = 0;
    piVar9 = __s;
    do {
      lVar14 = param_3[6];
      uVar5 = 0xffffffea;
      switch(*(uint *)(lVar14 + lVar15) & 7) {
      case 0:
        break;
      case 1:
        if (*(int *)(*(long *)(lVar14 + lVar15 + 8) + 0x10) != 7) {
          uVar5 = 0xffffffea;
          goto switchD_011a6260_caseD_3;
        }
        uVar5 = FUN_011a5f7c(piVar9,0);
        if (uVar5 != 0) goto switchD_011a6260_caseD_3;
        break;
      case 2:
      case 4:
        if ((*(uint *)(lVar14 + lVar15) >> 1 & 1) == 0) {
          iVar7 = *(int *)(*(long *)(lVar14 + lVar15 + 8) + 0xb8);
        }
        else {
          iVar7 = *(int *)(lVar14 + lVar15 + 8);
        }
        if (iVar7 == -1) {
          uVar5 = 0xffffffea;
          goto joined_r0x011a63d8;
        }
        piVar9[1] = iVar7;
        break;
      default:
        goto switchD_011a6260_caseD_3;
      }
      lVar16 = lVar16 + 1;
      piVar9 = piVar9 + 2;
      lVar15 = lVar15 + 0x10;
    } while (lVar16 < *(int *)((long)param_3 + 0x2c));
  }
  uVar5 = FUN_011a6068(&local_68,0);
  if (uVar5 == 0) {
    uv_signal_start(param_1 + 0x268,FUN_011a65fc,0x11);
    lVar16 = param_1 + 0x130;
    uv_rwlock_wrlock(lVar16);
    __pid = fork();
    if (__pid != -1) {
      if (__pid == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_011a6744(param_3,uVar3,__s,local_68._4_4_);
      }
      uv_rwlock_wrunlock(lVar16);
      FUN_011a2d5c(local_68._4_4_);
      *(undefined4 *)(param_2 + 0x80) = 0;
      local_ac = 0;
      do {
        sVar8 = read((int)local_68,&local_ac,4);
        if (sVar8 != -1) {
          if (sVar8 == 0) goto LAB_011a6414;
          if (sVar8 != 4) goto LAB_011a65e4;
          goto LAB_011a63ec;
        }
        piVar9 = (int *)__errno();
      } while (*piVar9 == 4);
      if (*piVar9 != 0x20) {
LAB_011a65e4:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      do {
        _Var6 = waitpid(__pid,&iStack_b0,0);
        if (_Var6 != -1) break;
      } while (*piVar9 == 4);
      goto LAB_011a6414;
    }
    piVar9 = (int *)__errno();
    uVar5 = -*piVar9;
    uv_rwlock_wrunlock(lVar16);
    FUN_011a2d5c(local_68 & 0xffffffff);
    FUN_011a2d5c(local_68._4_4_);
  }
  else {
switchD_011a6260_caseD_3:
  }
joined_r0x011a63d8:
  if (bVar4) {
    lVar12 = 0;
    uVar13 = 0;
    piVar9 = __s + 1;
    do {
      if (((long)*(int *)((long)param_3 + 0x2c) <= (long)uVar13) ||
         ((*(byte *)(param_3[6] + lVar12) & 6) == 0)) {
        if (piVar9[-1] != -1) {
          FUN_011a30c4();
        }
        if (*piVar9 != -1) {
          FUN_011a30c4();
        }
      }
      uVar13 = uVar13 + 1;
      lVar12 = lVar12 + 0x10;
      piVar9 = piVar9 + 2;
    } while (uVar13 < uVar3);
  }
  goto joined_r0x011a6508;
  while (piVar9 = (int *)__errno(), *piVar9 == 4) {
LAB_011a63ec:
    _Var6 = waitpid(__pid,&iStack_b0,0);
    if (_Var6 != -1) break;
  }
LAB_011a6414:
  FUN_011a30c4(local_68 & 0xffffffff);
  iVar7 = *(int *)((long)param_3 + 0x2c);
  if (0 < iVar7) {
    lVar15 = 0;
    lVar16 = 0;
    piVar9 = __s;
    do {
      lVar14 = param_3[6];
      if (((*(byte *)(lVar14 + lVar15) & 1) != 0) && (-1 < *piVar9)) {
        iVar7 = FUN_011a2d5c(piVar9[1]);
        if (iVar7 != 0) goto LAB_011a65e4;
        piVar9[1] = -1;
        FUN_011a2ca0(*piVar9,1);
        puVar2 = (uint *)(lVar14 + lVar15);
        uVar5 = *puVar2;
        uVar5 = FUN_011a8740(*(undefined8 *)(puVar2 + 2),*piVar9,
                             (uVar5 & 0x20) << 9 | (uVar5 >> 4 & 1) << 0xf);
        if (uVar5 != 0) {
          if ((int)lVar16 != 0) {
            uVar13 = -lVar16;
            do {
              if ((*(byte *)(param_3[6] + lVar15 + -0x10) & 1) != 0) {
                FUN_011a97d8(*(undefined8 *)(param_3[6] + lVar15 + -8));
              }
              uVar1 = (int)uVar13 + 1;
              uVar13 = (ulong)uVar1;
              lVar15 = lVar15 + -0x10;
            } while (uVar1 != 0);
          }
          goto switchD_011a6260_caseD_3;
        }
        iVar7 = *(int *)((long)param_3 + 0x2c);
      }
      lVar16 = lVar16 + 1;
      lVar15 = lVar15 + 0x10;
      piVar9 = piVar9 + 2;
    } while (lVar16 < iVar7);
  }
  if (local_ac == 0) {
    *(long *)(param_2 + 0x70) = param_1 + 0x170;
    plVar11 = *(long **)(param_1 + 0x178);
    *(long **)(param_2 + 0x78) = plVar11;
    *plVar11 = lVar12;
    *(long *)(param_1 + 0x178) = lVar12;
    uVar3 = *(uint *)(param_2 + 0x58);
    if (((uVar3 >> 2 & 1) == 0) && (*(uint *)(param_2 + 0x58) = uVar3 | 4, (uVar3 >> 3 & 1) != 0)) {
      *(int *)(*(long *)(param_2 + 8) + 8) = *(int *)(*(long *)(param_2 + 8) + 8) + 1;
    }
  }
  *(__pid_t *)(param_2 + 0x68) = __pid;
  *(undefined8 *)(param_2 + 0x60) = *param_3;
  uVar5 = local_ac;
joined_r0x011a6508:
  if (__s != local_a8) {
    FUN_0119f27c(__s);
  }
  return uVar5;
}

