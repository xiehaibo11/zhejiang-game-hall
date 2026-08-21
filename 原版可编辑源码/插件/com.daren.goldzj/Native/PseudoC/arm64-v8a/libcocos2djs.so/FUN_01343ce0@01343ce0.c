
void FUN_01343ce0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  long lVar11;
  ulong uVar12;
  long unaff_x26;
  long unaff_x27;
  
  lVar5 = unaff_x26 + (ulong)*(uint *)(param_2 + 0xb);
  if (*(ushort *)(unaff_x26 + (ulong)*(uint *)(lVar5 + -1) + 7) < 0xa9) {
                    /* WARNING: Subroutine does not return */
    FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x20e8));
  }
  uVar3 = *(uint *)(param_2 + 7);
  uVar4 = FUN_013c0ba0(lVar5,*(undefined8 *)(unaff_x26 + 0x5c8));
  uVar7 = *(undefined8 *)(unaff_x26 + 0xa0);
  if (((int)uVar4 == (int)uVar7) ||
     (uVar7 = *(undefined8 *)(unaff_x26 + 0xb0), (int)uVar4 == (int)uVar7)) {
    FUN_01341380(param_1,unaff_x26 + (ulong)uVar3,uVar7,param_4);
    return;
  }
  iVar6 = (int)param_1;
  uVar8 = (ulong)iVar6;
  if (uVar8 == 0) {
    lVar5 = *(long *)(unaff_x26 + 0x168);
  }
  else {
    if (0x7fffffd < (long)uVar8) {
                    /* WARNING: Subroutine does not return */
      FUN_013be7e0(0,*(undefined8 *)(unaff_x26 + 0x1fd0));
    }
    uVar12 = uVar8 * 4 + 8;
    uVar1 = **(long **)(unaff_x26 + 0x1428) + uVar12;
    if ((uVar1 < **(ulong **)(unaff_x26 + 0x1430)) && (uVar12 < 0x20000)) {
      lVar5 = **(long **)(unaff_x26 + 0x1428) + 1;
      **(ulong **)(unaff_x26 + 0x1428) = uVar1;
    }
    else {
      lVar5 = FUN_01348500();
    }
    *(int *)(lVar5 + -1) = (int)*(undefined8 *)(unaff_x26 + 0xe0);
    puVar10 = (undefined4 *)(&stack0xfffffffffffffff8 + uVar8 * 8);
    *(int *)(lVar5 + 3) = iVar6 * 2;
    puVar9 = puVar10 + uVar8 * -2;
    if (uVar8 < 0x7fff) {
      if (puVar10 != puVar9) {
        lVar11 = 7;
        while( true ) {
          uVar2 = *puVar10;
          puVar10 = puVar10 + -2;
          *(undefined4 *)(lVar5 + lVar11) = uVar2;
          if (puVar10 == puVar9) break;
          lVar11 = lVar11 + 4;
        }
      }
    }
    else if (puVar10 != puVar9) {
      lVar11 = 7;
      while( true ) {
        uVar2 = *puVar10;
        puVar10 = puVar10 + -2;
        *(undefined4 *)(lVar5 + lVar11) = uVar2;
        if (puVar10 == puVar9) break;
        lVar11 = lVar11 + 4;
      }
    }
  }
  uVar12 = **(ulong **)(unaff_x26 + 0x1428);
  uVar8 = uVar12 + 0x10;
  uVar2 = *(undefined4 *)
           (unaff_x26 + (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(unaff_x27 + -1) + 0x13) +
           0x167);
  if (uVar8 < **(ulong **)(unaff_x26 + 0x1430)) {
    lVar11 = uVar12 + 1;
    **(ulong **)(unaff_x26 + 0x1428) = uVar8;
  }
  else {
    lVar11 = FUN_01348560(uVar4,0x10);
  }
  *(undefined4 *)(lVar11 + -1) = uVar2;
  *(int *)(lVar11 + 0xb) = iVar6 * 2;
  *(int *)(lVar11 + 3) = (int)*(undefined8 *)(unaff_x26 + 0x168);
  *(int *)(lVar11 + 7) = (int)lVar5;
  uVar8 = FUN_0133fcc0(3,uVar4,3);
  if (((uVar8 & 1) != 0) && (0xa8 < *(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar8 - 1) + 7))) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x20e8));
}

