
int uv_cpu_info(undefined8 *param_1,uint *param_2)

{
  bool bVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  FILE *__stream;
  char *pcVar5;
  long *plVar6;
  long lVar7;
  FILE *__stream_00;
  int *piVar8;
  long lVar9;
  ulong uVar10;
  uint uVar11;
  long *plVar12;
  ulong __nmemb;
  uint uVar13;
  ulong uVar14;
  uint local_49c;
  long local_498;
  undefined1 auStack_490 [8];
  long local_488;
  long lStack_480;
  long local_478;
  ulong local_470;
  char acStack_468 [1032];
  
  lVar2 = tpidr_el0;
  lVar9 = *(long *)(lVar2 + 0x28);
  *param_1 = 0;
  *param_2 = 0;
  __stream = (FILE *)FUN_011a2dc8("/proc/stat");
  if (__stream == (FILE *)0x0) {
    piVar8 = (int *)__errno();
    iVar3 = -*piVar8;
    goto LAB_011acebc;
  }
  pcVar5 = fgets(acStack_468,0x400,__stream);
  if ((pcVar5 != (char *)0x0) && (pcVar5 = fgets(acStack_468,0x400,__stream), pcVar5 != (char *)0x0)
     ) {
    uVar13 = 0;
    do {
      iVar3 = strncmp(acStack_468,"cpu",3);
      if (iVar3 != 0) break;
      uVar13 = uVar13 + 1;
      pcVar5 = fgets(acStack_468,0x400,__stream);
    } while (pcVar5 != (char *)0x0);
    if (uVar13 != 0) {
      __nmemb = (ulong)uVar13;
      plVar6 = calloc(__nmemb,0x38);
      if (plVar6 != (long *)0x0) {
        uVar14 = 0;
        plVar12 = plVar6;
LAB_011acc80:
        lVar7 = FUN_0119f218("unknown",7);
        if (lVar7 != 0) goto code_r0x011acc90;
        plVar12 = plVar6;
        if (0 < (int)uVar13) {
          do {
            FUN_0119f27c(*plVar12);
            __nmemb = __nmemb - 1;
            plVar12 = plVar12 + 7;
          } while (__nmemb != 0);
        }
        FUN_0119f27c(plVar6);
        iVar3 = -0xc;
        iVar4 = fclose(__stream);
        goto joined_r0x011ace7c;
      }
      iVar3 = -0xc;
      iVar4 = fclose(__stream);
      goto joined_r0x011ace7c;
    }
  }
  iVar3 = -5;
  iVar4 = fclose(__stream);
  goto joined_r0x011ace7c;
code_r0x011acc90:
  uVar14 = uVar14 + 1;
  *plVar12 = lVar7;
  plVar12 = plVar12 + 7;
  if (__nmemb <= uVar14) goto code_r0x011acca0;
  goto LAB_011acc80;
code_r0x011acca0:
  lVar7 = sysconf(6);
  rewind(__stream);
  pcVar5 = fgets(acStack_468,0x400,__stream);
  if (pcVar5 == (char *)0x0) goto LAB_011aceac;
  pcVar5 = fgets(acStack_468,0x400,__stream);
  if (pcVar5 != (char *)0x0) {
    uVar14 = 0;
    while (iVar3 = strncmp(acStack_468,"cpu",3), iVar3 == 0) {
      sscanf(acStack_468,"cpu%u ",&local_49c);
      uVar10 = 4;
      uVar11 = local_49c;
      do {
        uVar10 = (ulong)((int)uVar10 + 1);
        bVar1 = 9 < uVar11;
        uVar11 = uVar11 / 10;
      } while (bVar1);
      iVar3 = sscanf(acStack_468 + uVar10,"%lu %lu %lu %lu %lu %lu",&local_470,&local_478,
                     &lStack_480,&local_488,auStack_490,&local_498);
      if (iVar3 != 6) goto LAB_011aceac;
      plVar6[uVar14 * 7 + 2] = local_470 * lVar7;
      plVar6[uVar14 * 7 + 3] = local_478 * lVar7;
      plVar6[uVar14 * 7 + 4] = lStack_480 * lVar7;
      plVar6[uVar14 * 7 + 5] = local_488 * lVar7;
      plVar6[uVar14 * 7 + 6] = local_498 * lVar7;
      pcVar5 = fgets(acStack_468,0x400,__stream);
      if ((__nmemb <= uVar14 + 1) || (uVar14 = uVar14 + 1, pcVar5 == (char *)0x0)) break;
    }
  }
  if ((int)plVar6[1] == 0) {
    uVar14 = 0;
    plVar12 = plVar6 + 1;
    do {
      snprintf(acStack_468,0x400,"/sys/devices/system/cpu/cpu%u/cpufreq/scaling_cur_freq",
               uVar14 & 0xffffffff);
      __stream_00 = (FILE *)FUN_011a2dc8(acStack_468);
      if (__stream_00 == (FILE *)0x0) {
        uVar10 = 0;
      }
      else {
        iVar3 = fscanf(__stream_00,"%lu",&local_470);
        if (iVar3 != 1) {
          local_470 = 0;
        }
        fclose(__stream_00);
        uVar10 = local_470;
      }
      uVar14 = uVar14 + 1;
      *(int *)plVar12 = (int)(uVar10 / 1000);
      plVar12 = plVar12 + 7;
    } while (__nmemb != uVar14);
  }
  iVar3 = 0;
  *param_1 = plVar6;
  *param_2 = uVar13;
  iVar4 = fclose(__stream);
joined_r0x011ace7c:
  if (iVar4 != 0) {
    piVar8 = (int *)__errno();
    if ((*piVar8 != 4) && (*piVar8 != 0x73)) {
LAB_011aceac:
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
LAB_011acebc:
  if (*(long *)(lVar2 + 0x28) == lVar9) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

