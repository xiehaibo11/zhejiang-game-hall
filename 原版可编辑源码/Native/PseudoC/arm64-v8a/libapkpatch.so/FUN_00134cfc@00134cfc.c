
void FUN_00134cfc(char *param_1,undefined4 *param_2,__off_t *param_3,ulong *param_4)

{
  long lVar1;
  int iVar2;
  int *piVar3;
  undefined8 uVar4;
  ulong uVar5;
  stat local_e0;
  
  lVar1 = tpidr_el0;
  local_e0.__unused[2] = *(long *)(lVar1 + 0x28);
  local_e0.st_ctim.tv_sec = 0;
  local_e0.st_mtim.tv_nsec = 0;
  local_e0.__unused[0] = 0;
  local_e0.st_ctim.tv_nsec = 0;
  local_e0.st_atim.tv_sec = 0;
  local_e0.st_blocks = 0;
  local_e0.st_mtim.tv_sec = 0;
  local_e0.st_atim.tv_nsec = 0;
  local_e0.st_rdev = 0;
  local_e0.st_gid = 0;
  local_e0.__pad0 = 0;
  local_e0.st_blksize = 0;
  local_e0.st_size = 0;
  local_e0.st_ino = 0;
  local_e0.st_dev = 0;
  local_e0.st_mode = 0;
  local_e0.st_uid = 0;
  local_e0.st_nlink = 0;
  iVar2 = stat(param_1,&local_e0);
  __android_log_print(3,"apk_diff_native","invoke _hpatch_getPathStat_noEndDirSeparator:");
  __android_log_print(3,"apk_diff_native","_hpatch_getPathStat_noEndDirSeparator file path is: %s\n"
                      ,param_1);
  if (iVar2 == 0) {
    uVar5 = local_e0.st_nlink & 0xffffffff;
    if (((uint)local_e0.st_nlink & 0xf000) == 0x4000) {
      __android_log_print(3,"apk_diff_native",
                          "_hpatch_getPathStat_noEndDirSeparator type is kPathType_dir\n");
      *param_2 = 2;
      if (param_3 != (__off_t *)0x0) {
        *param_3 = 0;
      }
    }
    else {
      if (((uint)local_e0.st_nlink & 0xf000) != 0x8000) {
        __android_log_print(6,"apk_diff_native",
                            "_hpatch_getPathStat_noEndDirSeparator type is unknown\n");
        goto LAB_00134e44;
      }
      __android_log_print(3,"apk_diff_native",
                          "_hpatch_getPathStat_noEndDirSeparator type is kPathType_file\n");
      *param_2 = 1;
      if (param_3 != (__off_t *)0x0) {
        *param_3 = local_e0.st_size;
      }
    }
    if (param_4 != (ulong *)0x0) {
      *param_4 = uVar5;
    }
  }
  else {
    piVar3 = (int *)__errno();
    if (*piVar3 != 2) {
LAB_00134e44:
      uVar4 = 0;
      goto LAB_00134e48;
    }
    __android_log_print(5,"apk_diff_native",
                        "_hpatch_getPathStat_noEndDirSeparator type is kPathType_notExist\n");
    *param_2 = 0;
  }
  uVar4 = 1;
LAB_00134e48:
  if (*(long *)(lVar1 + 0x28) == local_e0.__unused[2]) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}

