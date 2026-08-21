
long FUN_01342620(undefined8 param_1,int param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong *puVar8;
  long lVar9;
  ulong *puVar10;
  undefined4 *puVar11;
  long unaff_x26;
  
  if ((((-1 < *(char *)(unaff_x26 + (ulong)*(uint *)(param_4 + -1) + 9)) ||
       (uVar1 = unaff_x26 + (ulong)*(uint *)(param_4 + 0x1b), (uVar1 & 1) == 0)) ||
      (*(short *)(unaff_x26 + (ulong)*(uint *)(uVar1 - 1) + 7) != 0xa2)) ||
     (param_2 != *(int *)(uVar1 + 0x13))) {
                    /* WARNING: Subroutine does not return */
    FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x22b0));
  }
  if ((*(uint *)(uVar1 + 0xb) >> 0x15 & 1) == 0) {
    puVar10 = *(ulong **)(unaff_x26 + 0x1430);
    lVar9 = *(long *)(unaff_x26 + 0x168);
    puVar8 = *(ulong **)(unaff_x26 + 0x1428);
  }
  else {
    puVar8 = *(ulong **)(unaff_x26 + 0x1428);
    puVar10 = *(ulong **)(unaff_x26 + 0x1430);
    uVar2 = *puVar8 + 0x4c;
    if (uVar2 < *puVar10) {
      lVar9 = *puVar8 + 1;
      *puVar8 = uVar2;
    }
    else {
      lVar9 = FUN_01348560(param_1,0x4c);
      puVar8 = *(ulong **)(unaff_x26 + 0x1428);
      puVar10 = *(ulong **)(unaff_x26 + 0x1430);
    }
    *(int *)(lVar9 + -1) = (int)*(undefined8 *)(unaff_x26 + 0x208);
    *(undefined4 *)(lVar9 + 3) = 0x22;
    if ((long)((ulong)*(uint *)(lVar9 + 3) << 0x20) >> 0x21 == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(0,0x134285c);
      (*pcVar4)();
    }
    *(undefined4 *)(lVar9 + 7) = 0;
    if ((ulong)((long)((ulong)*(uint *)(lVar9 + 3) << 0x20) >> 0x21) < 2) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(0,0x1342864);
      (*pcVar4)();
    }
    *(undefined4 *)(lVar9 + 0xb) = 0;
    if ((ulong)((long)((ulong)*(uint *)(lVar9 + 3) << 0x20) >> 0x21) < 3) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(0,0x134286c);
      (*pcVar4)();
    }
    *(undefined4 *)(lVar9 + 0xf) = 8;
    if ((ulong)((long)((ulong)*(uint *)(lVar9 + 3) << 0x20) >> 0x21) < 4) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(0,0x1342874);
      (*pcVar4)();
    }
    *(undefined4 *)(lVar9 + 0x13) = 2;
    if ((ulong)((long)((ulong)*(uint *)(lVar9 + 3) << 0x20) >> 0x21) < 5) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(0,0x134287c);
      (*pcVar4)();
    }
    *(undefined4 *)(lVar9 + 0x17) = 0;
    puVar11 = (undefined4 *)(lVar9 + 0x1b);
    if (puVar11 != (undefined4 *)(lVar9 + 0x4b)) {
      uVar7 = *(undefined8 *)(unaff_x26 + 0xa0);
      do {
        *puVar11 = (int)uVar7;
        puVar11 = puVar11 + 1;
      } while (puVar11 != (undefined4 *)(lVar9 + 0x4b));
    }
  }
  lVar6 = (ulong)*(byte *)(uVar1 + 3) * 4;
  uVar2 = *puVar8 + lVar6;
  if (uVar2 < *puVar10) {
    lVar5 = *puVar8 + 1;
    *puVar8 = uVar2;
  }
  else {
    lVar5 = FUN_01348560();
  }
  *(int *)(lVar5 + -1) = (int)uVar1;
  lVar6 = lVar6 + -1;
  *(int *)(lVar5 + 3) = (int)lVar9;
  *(int *)(lVar5 + 7) = (int)*(undefined8 *)(unaff_x26 + 0x168);
  uVar3 = *(uint *)(uVar1 + 0xb);
  if ((uVar3 & 0xe0000000) == 0) {
    if (lVar6 != 0xb) {
      uVar7 = *(undefined8 *)(unaff_x26 + 0xa0);
      do {
        lVar6 = lVar6 + -4;
        *(int *)(lVar5 + lVar6) = (int)uVar7;
      } while (lVar6 != 0xb);
    }
  }
  else {
    *(uint *)(uVar1 + 0xb) = uVar3 + 0xe0000000;
    lVar9 = (ulong)*(byte *)(uVar1 + 5) * 4 + -1;
    if (lVar6 != lVar9) {
      uVar7 = *(undefined8 *)(unaff_x26 + 0x88);
      do {
        lVar6 = lVar6 + -4;
        *(int *)(lVar5 + lVar6) = (int)uVar7;
      } while (lVar6 != lVar9);
    }
    if (lVar9 != 0xb) {
      uVar7 = *(undefined8 *)(unaff_x26 + 0xa0);
      do {
        lVar9 = lVar9 + -4;
        *(int *)(lVar5 + lVar9) = (int)uVar7;
      } while (lVar9 != 0xb);
    }
    if ((uVar3 & 0xe0000000) == 0x20000000) {
                    /* WARNING: Subroutine does not return */
      FUN_013be7e0(1,*(undefined8 *)(unaff_x26 + 0x21d0));
    }
  }
  return lVar5;
}

