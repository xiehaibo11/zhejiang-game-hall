
void FUN_012fa8a8(uint *param_1)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  uint uVar5;
  long *plVar6;
  long lVar7;
  uint *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  uint local_30;
  
  lVar2 = tpidr_el0;
  lVar4 = *(long *)(lVar2 + 0x28);
  lVar7 = *(long *)(param_1 + 4);
  do {
    if (lVar7 == 0) break;
    if (*(long *)(lVar7 + 0x18) != 0) {
      lVar10 = *(long *)(param_1 + 2);
      plVar3 = *(long **)(lVar10 + 8);
      if (*(long **)(lVar10 + 8) == (long *)0x0) {
        while( true ) {
          plVar6 = *(long **)(lVar10 + 0x10);
          if (*plVar6 == lVar10) break;
          lVar10 = *(long *)(lVar10 + 0x10);
        }
      }
      else {
        do {
          plVar6 = plVar3;
          plVar3 = (long *)*plVar6;
        } while ((long *)*plVar6 != (long *)0x0);
      }
      *(long **)(param_1 + 2) = plVar6;
      if (plVar6 != (long *)(*(long *)(lVar7 + 0x18) + 8)) break;
    }
    uVar5 = *param_1;
    if (uVar5 == 0) {
LAB_012faa08:
      *param_1 = 0;
      param_1[5] = 0;
      param_1[3] = 0;
      param_1[4] = 0;
      *(ulong *)(param_1 + 1) = (ulong)local_30;
      break;
    }
    puVar8 = param_1 + 4 + (long)(int)uVar5 * 2;
    while( true ) {
      uVar1 = uVar5 - 1;
      *param_1 = uVar1;
      if ((-1 < *(int *)(lVar7 + 0x10) << (ulong)(uVar1 & 0x1f)) &&
         (lVar10 = *(long *)puVar8, lVar10 != 0)) break;
      puVar8 = puVar8 + -2;
      uVar5 = uVar1;
      if (uVar1 == 0) goto LAB_012faa08;
    }
    *param_1 = uVar5;
    if ((int)uVar5 < (int)*(char *)(lVar10 + 0xc)) {
      do {
        lVar9 = *(long *)(lVar10 + (long)(int)uVar5 * 8 + 0x20);
        lVar7 = lVar10;
        lVar11 = lVar9;
        if ((*(int *)(lVar10 + 0x10) << (ulong)(uVar5 & 0x1f) < 0) &&
           (lVar7 = lVar9, lVar11 = lVar10, lVar9 == 0)) {
          (param_1 + (long)(int)uVar5 * 2 + 6)[0] = 0;
          (param_1 + (long)(int)uVar5 * 2 + 6)[1] = 0;
        }
        else {
          *(long *)(param_1 + (long)(int)uVar5 * 2 + 6) = lVar11;
          lVar10 = lVar7;
        }
        uVar5 = *param_1 + 1;
        *param_1 = uVar5;
      } while ((int)uVar5 < (int)*(char *)(lVar10 + 0xc));
    }
    *(long *)(param_1 + 4) = lVar10;
    if (*(long **)(lVar10 + 0x18) == (long *)0x0) {
LAB_012fa9f0:
      uVar5 = *(uint *)(lVar10 + 8);
    }
    else {
      lVar7 = **(long **)(lVar10 + 0x18);
      *(long *)(param_1 + 2) = lVar7;
      if (*(long *)(lVar10 + 0x18) == 0) goto LAB_012fa9f0;
      uVar5 = (uint)*(byte *)(lVar7 + 0x24);
    }
    lVar7 = lVar10;
  } while ((uVar5 & 1) == (uint)(byte)param_1[0x46]);
  if (*(long *)(lVar2 + 0x28) != lVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

