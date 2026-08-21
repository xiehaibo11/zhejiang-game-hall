
long FUN_0137aba0(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined4 uVar7;
  ulong *puVar8;
  ulong *puVar9;
  undefined8 uVar10;
  long lVar11;
  long unaff_x26;
  undefined8 unaff_x27;
  
  if ((-1 < *(char *)(unaff_x26 + (ulong)*(uint *)(param_1 + -1) + 9)) ||
     (lVar1 = unaff_x26 + (ulong)*(uint *)(param_1 + 0x1b),
     *(short *)(unaff_x26 + (ulong)*(uint *)(lVar1 + -1) + 7) != 0xa2)) {
                    /* WARNING: Subroutine does not return */
    FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x1eb0));
  }
  lVar6 = unaff_x26 + (ulong)*(uint *)(param_1 + 0xb);
  lVar4 = unaff_x26 + (ulong)*(uint *)(lVar6 + 3);
  if (*(short *)(unaff_x26 + (ulong)*(uint *)(lVar4 + -1) + 7) == 0x61) {
    lVar4 = unaff_x26 + (ulong)*(uint *)(lVar4 + 3);
  }
  lVar6 = (ulong)*(ushort *)(lVar6 + 0x15) + ((long)*(int *)(lVar4 + 0x13) >> 2);
  if (lVar6 < 0x7fffffe) {
    puVar8 = *(ulong **)(unaff_x26 + 0x1428);
    puVar9 = *(ulong **)(unaff_x26 + 0x1430);
    lVar4 = lVar6 * 4 + 8;
    uVar2 = *puVar8 + lVar4;
    if (uVar2 < *puVar9) {
      lVar4 = *puVar8 + 1;
      *puVar8 = uVar2;
    }
    else {
      lVar4 = FUN_01348560(param_1,lVar4);
      puVar8 = *(ulong **)(unaff_x26 + 0x1428);
      puVar9 = *(ulong **)(unaff_x26 + 0x1430);
    }
    *(int *)(lVar4 + -1) = (int)*(undefined8 *)(unaff_x26 + 0xe0);
    *(int *)(lVar4 + 3) = (int)lVar6 * 2;
    lVar6 = lVar6 * 4 + 7;
    if (lVar6 != 7) {
      uVar10 = *(undefined8 *)(unaff_x26 + 0xa0);
      do {
        lVar6 = lVar6 + -4;
        *(int *)(lVar4 + lVar6) = (int)uVar10;
      } while (lVar6 != 7);
    }
    lVar6 = (ulong)*(byte *)(lVar1 + 3) * 4;
    uVar2 = *puVar8 + lVar6;
    if (uVar2 < *puVar9) {
      lVar5 = *puVar8 + 1;
      *puVar8 = uVar2;
    }
    else {
      lVar5 = FUN_01348560(param_1,lVar6,lVar1,lVar6,param_2);
    }
    *(int *)(lVar5 + -1) = (int)lVar1;
    lVar6 = lVar6 + -1;
    uVar7 = (undefined4)*(undefined8 *)(unaff_x26 + 0x168);
    *(undefined4 *)(lVar5 + 3) = uVar7;
    *(undefined4 *)(lVar5 + 7) = uVar7;
    uVar3 = *(uint *)(lVar1 + 0xb);
    if ((uVar3 & 0xe0000000) == 0) {
      if (lVar6 != 0xb) {
        uVar10 = *(undefined8 *)(unaff_x26 + 0xa0);
        do {
          lVar6 = lVar6 + -4;
          *(int *)(lVar5 + lVar6) = (int)uVar10;
        } while (lVar6 != 0xb);
      }
    }
    else {
      *(uint *)(lVar1 + 0xb) = uVar3 + 0xe0000000;
      lVar11 = (ulong)*(byte *)(lVar1 + 5) * 4 + -1;
      if (lVar6 != lVar11) {
        uVar10 = *(undefined8 *)(unaff_x26 + 0x88);
        do {
          lVar6 = lVar6 + -4;
          *(int *)(lVar5 + lVar6) = (int)uVar10;
        } while (lVar6 != lVar11);
      }
      if (lVar11 != 0xb) {
        uVar10 = *(undefined8 *)(unaff_x26 + 0xa0);
        do {
          lVar11 = lVar11 + -4;
          *(int *)(lVar5 + lVar11) = (int)uVar10;
        } while (lVar11 != 0xb);
      }
      if ((uVar3 & 0xe0000000) == 0x20000000) {
                    /* WARNING: Subroutine does not return */
        FUN_013be7e0(1,*(undefined8 *)(unaff_x26 + 0x21d0),lVar1,param_1,param_2,lVar4,lVar5,
                     unaff_x27,lVar1,0);
      }
    }
    *(int *)(lVar5 + 0xb) = (int)param_1;
    *(int *)(lVar5 + 0xf) = (int)unaff_x27;
    *(int *)(lVar5 + 0x13) = (int)param_2;
    *(int *)(lVar5 + 0x23) = (int)lVar4;
    *(undefined4 *)(lVar5 + 0x1b) = 0;
    *(undefined4 *)(lVar5 + 0x1f) = 0xfffffffc;
    if (*(short *)(lVar1 + 7) == 0x419) {
      *(undefined4 *)(lVar5 + 0x2b) = 0;
    }
    return lVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_013be7e0(0,*(undefined8 *)(unaff_x26 + 0x1fd0));
}

