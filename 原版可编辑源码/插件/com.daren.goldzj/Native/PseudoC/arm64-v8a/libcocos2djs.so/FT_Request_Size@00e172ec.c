
ulong FT_Request_Size(long param_1,uint *param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  code *UNRECOVERED_JUMPTABLE;
  long lVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  
  if (param_1 == 0) {
    return 0x23;
  }
  if (param_2 == (uint *)0x0) {
    return 6;
  }
  lVar7 = *(long *)(param_2 + 2);
  if (lVar7 < 0) {
    return 6;
  }
  lVar9 = *(long *)(param_2 + 4);
  if (lVar9 < 0) {
    uVar6 = 6;
  }
  else {
    uVar6 = *param_2;
    if (4 < uVar6) {
      return 6;
    }
    lVar5 = *(long *)(param_1 + 0xa0);
    *(undefined8 *)(*(long *)(lVar5 + 0x50) + 0x18) = 0;
    lVar8 = *(long *)(*(long *)(param_1 + 0xb0) + 0x18);
    UNRECOVERED_JUMPTABLE = *(code **)(lVar8 + 0xb0);
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
LAB_00e17384:
                    /* WARNING: Could not recover jumptable at 0x00e1738c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (*UNRECOVERED_JUMPTABLE)(lVar5);
      return uVar4;
    }
    if (((*(ulong *)(param_1 + 0x10) & 1) != 0) ||
       (((uint)*(ulong *)(param_1 + 0x10) >> 1 & 1) == 0)) {
      FUN_00e16f28();
      return 0;
    }
    if (uVar6 != 0) {
      return 7;
    }
    if (param_2[6] == 0) {
      uVar6 = param_2[7];
      lVar3 = lVar7;
    }
    else {
      lVar3 = (long)(lVar7 * (ulong)param_2[6] + 0x24) / 0x48;
      uVar6 = param_2[7];
    }
    lVar10 = lVar9;
    if (uVar6 != 0) {
      lVar10 = (long)(lVar9 * (ulong)uVar6 + 0x24) / 0x48;
    }
    lVar1 = lVar3;
    if (lVar9 != 0) {
      lVar1 = lVar10;
    }
    lVar9 = lVar1;
    if (lVar7 != 0) {
      lVar9 = lVar3;
    }
    if (lVar7 != 0) {
      lVar10 = lVar1;
    }
    uVar4 = lVar9 + 0x20U & 0xffffffffffffffc0;
    uVar6 = 0x17;
    if ((uVar4 != 0) && (uVar11 = lVar10 + 0x20U & 0xffffffffffffffc0, uVar11 != 0)) {
      iVar2 = *(int *)(param_1 + 0x38);
      if (iVar2 < 1) {
        return 0x17;
      }
      lVar7 = 0;
      plVar12 = (long *)(*(long *)(param_1 + 0x40) + 0x18);
      do {
        if ((uVar11 == (*plVar12 + 0x20U & 0xffffffffffffffc0)) &&
           (uVar4 == (plVar12[-1] + 0x20U & 0xffffffffffffffc0))) {
          uVar6 = 6;
          if ((-1 < (int)lVar7) && (uVar6 = 6, (int)lVar7 < iVar2)) {
            UNRECOVERED_JUMPTABLE = *(code **)(lVar8 + 0xb8);
            if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
              FUN_00e16df4();
              return 0;
            }
            goto LAB_00e17384;
          }
          break;
        }
        lVar7 = lVar7 + 1;
        plVar12 = plVar12 + 4;
        uVar6 = 0x17;
      } while (lVar7 < iVar2);
    }
  }
  return (ulong)uVar6;
}

