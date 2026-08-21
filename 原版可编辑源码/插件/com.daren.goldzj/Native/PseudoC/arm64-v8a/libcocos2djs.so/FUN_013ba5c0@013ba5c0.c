
undefined1  [16] FUN_013ba5c0(long param_1,ulong param_2,uint param_3)

{
  long lVar1;
  ulong uVar2;
  short sVar3;
  long lVar4;
  code *pcVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long unaff_x26;
  undefined1 auVar10 [16];
  
  uVar2 = unaff_x26 + (ulong)*(uint *)(param_1 + 0xb);
  uVar8 = unaff_x26 + (ulong)*(uint *)(param_2 + 3);
  if ((uVar8 & 1) == 0) {
    uVar8 = (long)(uVar8 << 0x20) >> 0x21;
  }
  else {
    sVar3 = *(short *)(unaff_x26 + (ulong)*(uint *)(uVar8 - 1) + 7);
    if (sVar3 == 0xa4) {
      uVar8 = (ulong)((long)((ulong)*(uint *)(uVar8 + 3) << 0x20) >> 0x21) >> 10 & 0xfffff;
    }
    else if (sVar3 == 0x7a) {
      if ((ulong)((long)((ulong)*(uint *)(uVar8 + 3) << 0x20) >> 0x21) < 5) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(0,0x13ba864);
        (*pcVar5)();
      }
      uVar8 = (long)(unaff_x26 + (ulong)*(uint *)(uVar8 + 0x17) << 0x20) >> 0x21;
    }
    else {
      uVar8 = 0;
    }
  }
  lVar4 = (long)(unaff_x26 + (ulong)*(uint *)(uVar2 + 0xf) << 0x20) >> 0x21;
  if (uVar8 == 0) {
    *(undefined8 *)(unaff_x26 + 0x40) = 0x13ba70c;
    *(undefined1 **)(unaff_x26 + 0x38) = &stack0xfffffffffffffff0;
    lVar9 = (**(code **)(unaff_x26 + 0x11c0))();
    *(undefined8 *)(unaff_x26 + 0x38) = 0;
    uVar8 = (lVar9 << 0x20) >> 0x21;
  }
  else {
    uVar7 = uVar8 & lVar4 - 1U;
    lVar9 = 0;
    while( true ) {
      iVar6 = *(int *)(uVar2 + (uVar7 * 2 + 3) * 4 + 7);
      if (iVar6 == (int)*(undefined8 *)(unaff_x26 + 0xa0)) break;
      if (iVar6 == (int)param_2) {
        uVar8 = uVar7 * 2 + 4;
        if ((ulong)((long)((ulong)*(uint *)(uVar2 + 3) << 0x20) >> 0x21) <= uVar8) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(0,0x13ba86c);
          (*pcVar5)();
        }
        lVar4 = uVar8 * 4 + 7;
        *(uint *)(uVar2 + lVar4) = param_3;
        if (((((uint)*(undefined8 *)((uVar2 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
            ((param_3 & 1) != 0)) &&
           (((uint)*(undefined8 *)((unaff_x26 + (ulong)param_3 & 0xfffffffffffc0000) + 8) >> 1 & 1)
            != 0)) {
          FUN_0133eb00(uVar2,uVar2 + lVar4,0,2);
        }
        goto LAB_013ba6e8;
      }
      lVar9 = lVar9 + 1;
      uVar7 = uVar7 + lVar9 & lVar4 - 1U;
    }
  }
  uVar7 = ((long)(unaff_x26 + (ulong)*(uint *)(uVar2 + 7) << 0x20) >> 0x21) + 1;
  lVar9 = (long)(unaff_x26 + (ulong)*(uint *)(uVar2 + 0xb) << 0x20) >> 0x21;
  if ((long)uVar7 <= lVar9 * 2 ||
      ((long)(lVar4 - uVar7 >> 1) < lVar9 || lVar4 < (long)(uVar7 + (uVar7 >> 1)))) {
                    /* WARNING: Subroutine does not return */
    FUN_013be7e0(4,*(undefined8 *)(unaff_x26 + 0x1cd8),param_1);
  }
  uVar8 = uVar8 & lVar4 - 1U;
  lVar9 = 0;
  while( true ) {
    lVar1 = (uVar8 * 2 + 3) * 4 + 7;
    if (*(int *)(uVar2 + lVar1) == (int)*(undefined8 *)(unaff_x26 + 0xa8) ||
        *(int *)(uVar2 + lVar1) == (int)*(undefined8 *)(unaff_x26 + 0xa0)) break;
    lVar9 = lVar9 + 1;
    uVar8 = uVar8 + lVar9 & lVar4 - 1U;
  }
  *(int *)(uVar2 + lVar1) = (int)param_2;
  if (((((uint)*(undefined8 *)((uVar2 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
      ((param_2 & 1) != 0)) &&
     (((uint)*(undefined8 *)((unaff_x26 + (param_2 & 0xffffffff) & 0xfffffffffffc0000) + 8) >> 1 & 1
      ) != 0)) {
    FUN_0133f120(uVar2,uVar2 + lVar1,2);
  }
  iVar6 = (int)uVar7;
  lVar4 = (uVar8 * 2 + 4) * 4 + 7;
  *(uint *)(uVar2 + lVar4) = param_3;
  if (((((uint)*(undefined8 *)((uVar2 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
      ((param_3 & 1) != 0)) &&
     (((uint)*(undefined8 *)((unaff_x26 + (ulong)param_3 & 0xfffffffffffc0000) + 8) >> 1 & 1) != 0))
  {
    FUN_0133eb00(uVar2,uVar2 + lVar4,0,2);
  }
  *(int *)(uVar2 + 7) = iVar6 * 2;
LAB_013ba6e8:
  auVar10._8_8_ = param_2;
  auVar10._0_8_ = param_1;
  return auVar10;
}

