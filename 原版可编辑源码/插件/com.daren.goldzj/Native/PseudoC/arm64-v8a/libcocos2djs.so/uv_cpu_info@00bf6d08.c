
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void uv_cpu_info(long *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  FILE *__stream;
  long *plVar5;
  long lVar6;
  int *piVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  uint uVar11;
  uint local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *param_1 = 0;
  *param_2 = 0;
  __stream = (FILE *)uv__open_file("/proc/stat");
  if (__stream == (FILE *)0x0) {
    piVar7 = (int *)__errno();
    iVar3 = -*piVar7;
    goto LAB_00bf6dfc;
  }
  iVar3 = FUN_00bf5e3c(__stream,&local_c);
  if (iVar3 < 0) {
LAB_00bf6dd0:
    iVar4 = fclose(__stream);
  }
  else {
    plVar5 = (long *)uv__calloc(local_c,0x38);
    if (plVar5 == (long *)0x0) {
      iVar3 = -0xc;
      iVar4 = fclose(__stream);
    }
    else {
      if (local_c != 0) {
        uVar2 = local_c - 1;
        plVar10 = plVar5;
        do {
          lVar6 = uv__strndup("unknown",7);
          if (lVar6 == 0) {
            iVar3 = -0xc;
            goto LAB_00bf6dc4;
          }
          plVar9 = plVar10 + 7;
          *plVar10 = lVar6;
          plVar10 = plVar9;
        } while (plVar9 != plVar5 + ((ulong)uVar2 + 1) * 7);
      }
      iVar3 = FUN_00bf5f08(__stream,local_c,plVar5);
      uVar2 = local_c;
      if (iVar3 != 0) {
LAB_00bf6dc4:
        uv_free_cpu_info(plVar5,local_c);
        goto LAB_00bf6dd0;
      }
      if (((int)plVar5[1] == 0) && (local_c != 0)) {
        plVar10 = plVar5 + 1;
        uVar11 = 0;
        do {
          uVar1 = uVar11 + 1;
          uVar8 = FUN_00bf6128(uVar11);
          *(int *)plVar10 = (int)(uVar8 / 1000);
          plVar10 = plVar10 + 7;
          uVar11 = uVar1;
        } while (uVar1 != uVar2);
      }
      *param_1 = (long)plVar5;
      *param_2 = local_c;
      iVar4 = fclose(__stream);
    }
  }
  if (((iVar4 != 0) && (piVar7 = (int *)__errno(), *piVar7 != 4)) && (*piVar7 != 0x73)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
LAB_00bf6dfc:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar3);
}

