
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00bfc728(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  size_t __len;
  ssize_t sVar5;
  long lVar6;
  char *pcVar7;
  char *pcVar8;
  long lVar9;
  long lVar10;
  long local_8;
  
  lVar9 = param_1 + -0x150;
  local_8 = ___stack_chk_guard;
  iVar1 = *(int *)(param_1 + -0x110);
  piVar4 = (int *)__errno();
  iVar2 = iVar1;
  do {
    *piVar4 = 0;
    switch(iVar2) {
    case 1:
      if (DAT_01d3be34 == 0) {
        iVar2 = open(*(char **)(param_1 + -0xe8),*(uint *)(param_1 + -0x34) | 0x80000,
                     (ulong)*(uint *)(param_1 + -0x30));
        if (-1 < iVar2) {
          lVar10 = (long)iVar2;
          goto LAB_00bfc848;
        }
        if (*piVar4 != 0x16) goto LAB_00bfc928;
        DAT_01d3be34 = 1;
      }
      if (*(long *)(param_1 + -0x100) != 0) {
        uv_rwlock_rdlock(*(long *)(param_1 + -0x108) + 0x130);
      }
      iVar2 = open(*(char **)(param_1 + -0xe8),*(int *)(param_1 + -0x34),
                   (ulong)*(uint *)(param_1 + -0x30));
      lVar10 = (long)iVar2;
      if ((-1 < iVar2) && (iVar3 = uv__cloexec_ioctl(iVar2,1), iVar3 != 0)) {
        iVar2 = uv__close(iVar2);
        if (iVar2 != 0) goto switchD_00bfc7a4_default;
        lVar10 = -1;
      }
      if (*(long *)(param_1 + -0x100) != 0) {
        uv_rwlock_rdunlock(*(long *)(param_1 + -0x108) + 0x130);
      }
      break;
    case 2:
      iVar2 = close(*(int *)(param_1 + -0x38));
      lVar10 = (long)iVar2;
      break;
    case 3:
      lVar10 = FUN_00bfc354(lVar9,FUN_00bfc5d8);
      break;
    case 4:
      lVar10 = FUN_00bfc354(lVar9,FUN_00bfc45c);
      break;
    case 5:
      lVar10 = FUN_00bfc1a4(lVar9);
      break;
    case 6:
      iVar2 = FUN_00bfc280(*(undefined8 *)(param_1 + -0xe8),param_1 + -0xe0);
      lVar10 = (long)iVar2;
      break;
    case 7:
      iVar2 = lstat(*(char **)(param_1 + -0xe8),(stat *)&stack0xffffffffffffff78);
      lVar10 = (long)iVar2;
      if (iVar2 == 0) {
        FUN_00bfbafc((stat *)&stack0xffffffffffffff78,param_1 + -0xe0);
      }
      break;
    case 8:
      iVar2 = fstat(*(int *)(param_1 + -0x38),(stat *)&stack0xffffffffffffff78);
      lVar10 = (long)iVar2;
      if (iVar2 == 0) {
        FUN_00bfbafc((stat *)&stack0xffffffffffffff78,param_1 + -0xe0);
      }
      break;
    case 9:
      iVar2 = ftruncate(*(int *)(param_1 + -0x38),*(__off_t *)(param_1 + -0x20));
      lVar10 = (long)iVar2;
      break;
    case 10:
      lVar10 = FUN_00bfc2f4(lVar9);
      break;
    case 0xb:
      lVar10 = FUN_00bfbbe8(lVar9);
      break;
    case 0xc:
      iVar2 = access(*(char **)(param_1 + -0xe8),*(int *)(param_1 + -0x34));
      lVar10 = (long)iVar2;
      break;
    case 0xd:
      iVar2 = chmod(*(char **)(param_1 + -0xe8),*(__mode_t *)(param_1 + -0x30));
      lVar10 = (long)iVar2;
      break;
    case 0xe:
      iVar2 = fchmod(*(int *)(param_1 + -0x38),*(__mode_t *)(param_1 + -0x30));
      lVar10 = (long)iVar2;
      break;
    case 0xf:
      iVar2 = fsync(*(int *)(param_1 + -0x38));
      lVar10 = (long)iVar2;
      break;
    case 0x10:
      iVar2 = fdatasync(*(int *)(param_1 + -0x38));
      lVar10 = (long)iVar2;
      break;
    case 0x11:
      iVar2 = unlink(*(char **)(param_1 + -0xe8));
LAB_00bfc928:
      lVar10 = (long)iVar2;
      break;
    case 0x12:
      iVar2 = rmdir(*(char **)(param_1 + -0xe8));
      lVar10 = (long)iVar2;
      break;
    case 0x13:
      iVar2 = mkdir(*(char **)(param_1 + -0xe8),*(__mode_t *)(param_1 + -0x30));
      lVar10 = (long)iVar2;
      break;
    case 0x14:
      pcVar7 = mkdtemp(*(char **)(param_1 + -0xe8));
      if (pcVar7 == (char *)0x0) goto LAB_00bfc7c4;
      lVar10 = 0;
      goto LAB_00bfc848;
    case 0x15:
      iVar2 = rename(*(char **)(param_1 + -0xe8),*(char **)(param_1 + -0x40));
      lVar10 = (long)iVar2;
      break;
    case 0x16:
      lVar10 = FUN_00bfbe20(lVar9);
      break;
    case 0x17:
      iVar2 = link(*(char **)(param_1 + -0xe8),*(char **)(param_1 + -0x40));
      lVar10 = (long)iVar2;
      break;
    case 0x18:
      iVar2 = symlink(*(char **)(param_1 + -0xe8),*(char **)(param_1 + -0x40));
      lVar10 = (long)iVar2;
      break;
    case 0x19:
      __len = pathconf(*(char **)(param_1 + -0xe8),5);
      if (__len == 0xffffffffffffffff) {
        lVar10 = 0x1001;
        __len = 0x1000;
      }
      else {
        lVar10 = __len + 1;
      }
      pcVar7 = (char *)uv__malloc(lVar10);
      if (pcVar7 == (char *)0x0) {
LAB_00bfcb78:
        *piVar4 = 0xc;
      }
      else {
        sVar5 = readlink(*(char **)(param_1 + -0xe8),pcVar7,__len);
        if (sVar5 != -1) {
          pcVar7[sVar5] = '\0';
          lVar10 = 0;
          *(char **)(param_1 + -0xf0) = pcVar7;
          goto LAB_00bfc848;
        }
        uv__free(pcVar7);
      }
      goto LAB_00bfc7c4;
    case 0x1a:
      iVar2 = chown(*(char **)(param_1 + -0xe8),*(__uid_t *)(param_1 + -0x18),
                    *(__gid_t *)(param_1 + -0x14));
      lVar10 = (long)iVar2;
      break;
    case 0x1b:
      iVar2 = fchown(*(int *)(param_1 + -0x38),*(__uid_t *)(param_1 + -0x18),
                     *(__gid_t *)(param_1 + -0x14));
      lVar10 = (long)iVar2;
      break;
    case 0x1c:
      lVar6 = pathconf(*(char **)(param_1 + -0xe8),5);
      lVar10 = 0x1001;
      if (lVar6 != -1) {
        lVar10 = lVar6 + 1;
      }
      pcVar7 = (char *)uv__malloc(lVar10);
      if (pcVar7 == (char *)0x0) goto LAB_00bfcb78;
      pcVar8 = realpath(*(char **)(param_1 + -0xe8),pcVar7);
      if (pcVar8 != (char *)0x0) {
        *(char **)(param_1 + -0xf0) = pcVar7;
        lVar10 = 0;
        goto LAB_00bfc848;
      }
      uv__free(pcVar7);
      goto LAB_00bfc7c4;
    default:
switchD_00bfc7a4_default:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (lVar10 != -1) {
LAB_00bfc848:
      *(long *)(param_1 + -0xf8) = lVar10;
      if ((lVar10 == 0) && (*(int *)(param_1 + -0x110) - 6U < 3)) {
        *(long *)(param_1 + -0xf0) = param_1 + -0xe0;
      }
LAB_00bfc868:
      if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
LAB_00bfc7c4:
    if ((*piVar4 != 4) || (iVar1 == 2)) {
      *(long *)(param_1 + -0xf8) = (long)-*piVar4;
      goto LAB_00bfc868;
    }
    iVar2 = *(int *)(param_1 + -0x110);
  } while( true );
}

