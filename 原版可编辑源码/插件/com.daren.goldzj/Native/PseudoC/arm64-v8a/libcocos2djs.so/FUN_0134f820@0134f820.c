
void FUN_0134f820(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  code *pcVar7;
  long lVar8;
  ulong uVar9;
  long unaff_x26;
  long unaff_x27;
  
  lVar2 = unaff_x26 + (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(unaff_x27 + -1) + 0x13);
  if (*(ushort *)(unaff_x26 + (ulong)*(uint *)(param_3 + -1) + 7) < 0x40) {
    lVar3 = unaff_x26 + (ulong)*(uint *)(lVar2 + 0x273);
    if ((long)((ulong)*(uint *)(lVar3 + 3) << 0x20) >> 0x21 == 0) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(0,0x134f934);
      (*pcVar7)();
    }
    lVar8 = -1;
    while (lVar1 = lVar8 + 1,
          lVar1 < (long)(unaff_x26 + (ulong)*(uint *)(lVar3 + 7) << 0x20) >> 0x21) {
      if ((ulong)((long)((ulong)*(uint *)(lVar3 + 3) << 0x20) >> 0x21) <= lVar8 + 2U) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(0,0x134f93c);
        (*pcVar7)();
      }
      lVar4 = unaff_x26 + (ulong)*(uint *)(lVar3 + lVar1 * 4 + 0xb);
      lVar5 = unaff_x26 + (ulong)*(uint *)(lVar4 + 7);
      uVar6 = (long)((ulong)*(uint *)(lVar5 + 3) << 0x20) >> 0x21;
      lVar8 = lVar1;
      if (0 < (long)uVar6) {
        if (uVar6 < 3) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(0,0x134f944);
          (*pcVar7)();
        }
        uVar6 = 2;
        while (uVar9 = uVar6, uVar6 = uVar9 + 1,
              (long)uVar6 < ((long)(unaff_x26 + (ulong)*(uint *)(lVar5 + 0xf) << 0x20) >> 0x21) + 3)
        {
          if ((ulong)((long)((ulong)*(uint *)(lVar5 + 3) << 0x20) >> 0x21) <= uVar6) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(0,0x134f94c);
            (*pcVar7)();
          }
          if (*(int *)(lVar5 + uVar6 * 4 + 7) == (int)param_3) {
            if ((int)unaff_x26 + *(int *)(lVar4 + uVar9 * 4 + 7) !=
                (int)*(undefined8 *)(unaff_x26 + 0xa8)) {
              return;
            }
                    /* WARNING: Subroutine does not return */
            FUN_013be7e0(1,*(undefined8 *)(unaff_x26 + 0x20b8));
          }
        }
      }
    }
  }
  FUN_0134faa0(param_1,unaff_x26 + (ulong)*(uint *)(lVar2 + 0xf));
  return;
}

