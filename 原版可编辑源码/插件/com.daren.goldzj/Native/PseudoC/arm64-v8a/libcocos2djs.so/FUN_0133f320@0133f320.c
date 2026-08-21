
void FUN_0133f320(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined1 *puVar2;
  long lVar3;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  long unaff_x26;
  long local_30 [4];
  
  lVar3 = param_1;
  if (param_3 != 0xffff) {
    if (((param_1 - param_3 & 1U) != 0) ||
       ((*(uint *)(unaff_x26 + (ulong)*(uint *)(param_2 + 0xb) + 0x1b) >> 0x1e & 1) == 0)) {
      local_30[2] = param_2;
      local_30[3] = 0x26;
      local_30[0] = 0;
      local_30[1] = param_1 << 1;
      if ((param_3 + 1) * 8 < (long)local_30 - *(long *)(unaff_x26 + 0x50)) {
        uVar8 = param_3 + 2U & 0xfffffffffffffffe;
        plVar5 = local_30 + -uVar8;
        lVar3 = param_3;
        lVar1 = param_1 - param_3;
        if (param_1 < param_3) {
          plVar5 = local_30 + (-uVar8 - (param_1 - param_3));
          lVar9 = *(long *)(unaff_x26 + 0xa0);
          plVar4 = local_30 + -uVar8;
          do {
            plVar6 = plVar4 + 2;
            *plVar4 = lVar9;
            plVar4[1] = lVar9;
            plVar4 = plVar6;
            lVar3 = param_1;
            lVar1 = 0;
          } while (plVar6 < plVar5);
        }
        if (lVar3 != 0) {
          plVar4 = (long *)(&stack0x00000000 + lVar1 * 8);
          plVar6 = plVar5;
          do {
            lVar1 = plVar4[1];
            plVar7 = plVar6 + 2;
            *plVar6 = *plVar4;
            plVar6[1] = lVar1;
            plVar4 = plVar4 + 2;
            plVar6 = plVar7;
          } while (plVar7 < plVar5 + lVar3);
        }
        local_30[param_3 - uVar8] = *(long *)(&stack0x00000000 + param_1 * 8);
        lVar3 = unaff_x26 + (ulong)*(uint *)(param_2 + 0x17);
        if (((long)*(int *)(lVar3 + 0x17) & 0x80000000U) == 0) {
          UNRECOVERED_JUMPTABLE = (code *)(lVar3 + 0x3f);
        }
        else {
          UNRECOVERED_JUMPTABLE = *(code **)((long)*(int *)(lVar3 + 0x27) * 8 + unaff_x26 + 0x2c78);
        }
        (*UNRECOVERED_JUMPTABLE)(param_3);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_013be7e0(0,*(undefined8 *)(unaff_x26 + 0x20c8));
    }
    lVar3 = param_3;
    if (param_1 - param_3 < 0) {
      uVar10 = *(undefined8 *)(unaff_x26 + 0xa0);
      puVar2 = (undefined1 *)register0x00000008;
      do {
        param_1 = param_1 + 2;
        *(undefined8 *)(puVar2 + -0x10) = uVar10;
        *(undefined8 *)(puVar2 + -8) = uVar10;
        puVar2 = puVar2 + -0x10;
        lVar3 = param_1;
      } while (param_1 < param_3);
    }
  }
  lVar1 = unaff_x26 + (ulong)*(uint *)(param_2 + 0x17);
  if (((long)*(int *)(lVar1 + 0x17) & 0x80000000U) == 0) {
    UNRECOVERED_JUMPTABLE = (code *)(lVar1 + 0x3f);
  }
  else {
    UNRECOVERED_JUMPTABLE = *(code **)((long)*(int *)(lVar1 + 0x27) * 8 + unaff_x26 + 0x2c78);
  }
                    /* WARNING: Could not recover jumptable at 0x0133f484. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(lVar3);
  return;
}

