
/* WARNING: Removing unreachable block (ram,0x01341478) */
/* WARNING: Removing unreachable block (ram,0x0134148c) */
/* WARNING: Removing unreachable block (ram,0x01341498) */
/* WARNING: Removing unreachable block (ram,0x0134149c) */
/* WARNING: Removing unreachable block (ram,0x013414ac) */

void FUN_01341ad8(ulong param_1,ulong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  ulong uVar4;
  int iVar5;
  ulong in_x5;
  ulong *puVar6;
  ulong extraout_x8;
  ulong uVar7;
  ulong extraout_x9;
  long lVar8;
  uint *puVar9;
  ulong *puVar10;
  ulong *extraout_x10;
  undefined8 uVar11;
  long lVar12;
  long extraout_x11;
  long lVar13;
  long extraout_x12;
  ulong uVar14;
  long unaff_x26;
  
  iVar5 = (int)in_x5;
  if (iVar5 == 0) {
    param_1 = *(ulong *)(unaff_x26 + 0x168);
  }
  uVar4 = param_1;
  if (*(int *)(param_1 - 1) == (int)*(undefined8 *)(unaff_x26 + 0x1e8)) {
    lVar13 = (long)iVar5;
    if (0x7fffffd < lVar13) {
                    /* WARNING: Subroutine does not return */
      FUN_013be7e0(0,*(undefined8 *)(unaff_x26 + 0x1fd0));
    }
    puVar6 = *(ulong **)(unaff_x26 + 0x1428);
    uVar7 = *puVar6;
    puVar10 = *(ulong **)(unaff_x26 + 0x1430);
    uVar4 = lVar13 * 4 + 8;
    uVar14 = uVar7 + uVar4;
    if ((uVar14 < *puVar10) && (uVar4 < 0x20000)) {
      *puVar6 = uVar14;
      uVar4 = uVar7 + 1;
    }
    else {
      param_2 = FUN_01348500(param_2,uVar4);
      puVar6 = *(ulong **)(unaff_x26 + 0x1428);
      puVar10 = *(ulong **)(unaff_x26 + 0x1430);
      uVar4 = param_2;
    }
    *(int *)(uVar4 - 1) = (int)*(undefined8 *)(unaff_x26 + 0xe0);
    lVar8 = lVar13 * 4 + 7;
    *(int *)(uVar4 + 3) = iVar5 * 2;
    if (lVar8 != 7) {
      uVar11 = *(undefined8 *)(unaff_x26 + 0xa8);
      lVar12 = lVar8;
      do {
        lVar12 = lVar12 + -4;
        *(int *)(uVar4 + lVar12) = (int)uVar11;
      } while (lVar12 != 7);
    }
    lVar13 = lVar13 * 8 + 7;
    if (lVar13 != 7) {
      lVar12 = -0x8000000080001;
      while( true ) {
        lVar13 = lVar13 + -8;
        if (*(long *)(param_1 + lVar13) != lVar12) {
          uVar7 = *puVar6;
          uVar11 = *(undefined8 *)(param_1 + lVar13);
          uVar14 = uVar7 + 0xc;
          if (uVar14 < *puVar10) {
            *puVar6 = uVar14;
            uVar14 = uVar7 + 1;
          }
          else {
            param_2 = FUN_01348560(param_2,0xc);
            puVar6 = *(ulong **)(unaff_x26 + 0x1428);
            puVar10 = *(ulong **)(unaff_x26 + 0x1430);
            lVar12 = -0x8000000080001;
            uVar14 = param_2;
          }
          *(int *)(uVar14 - 1) = (int)*(undefined8 *)(unaff_x26 + 0x140);
          *(undefined8 *)(uVar14 + 3) = uVar11;
          *(int *)(uVar4 + lVar8 + -4) = (int)uVar14;
          if (((((uint)*(undefined8 *)((uVar4 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
              ((uVar14 & 1) != 0)) &&
             (((uint)*(undefined8 *)((unaff_x26 + (uVar14 & 0xffffffff) & 0xfffffffffffc0000) + 8)
               >> 1 & 1) != 0)) {
            FUN_0133eb00(uVar4,uVar4 + lVar8 + -4,0,2);
            param_1 = extraout_x8;
            uVar4 = extraout_x9;
            puVar10 = extraout_x10;
            lVar12 = extraout_x11;
            lVar8 = extraout_x12;
          }
        }
        if (lVar13 == 7) break;
        lVar8 = lVar8 + -4;
      }
    }
  }
  if ((long)&stack0x00000000 - *(long *)(unaff_x26 + 0x50) <= (long)(in_x5 * 8)) {
                    /* WARNING: Subroutine does not return */
    FUN_013be7e0(0,*(undefined8 *)(unaff_x26 + 0x20c8));
  }
  if (in_x5 != 0) {
    if ((in_x5 & 1) == 0) {
      puVar3 = &stack0x00000000 + in_x5 * -8;
    }
    else {
      lVar13 = (in_x5 + 1 + (in_x5 & 1) * -2) * -8;
      puVar3 = &stack0x00000000 + lVar13;
      *(undefined8 *)(&stack0x00000000 + in_x5 * 8 + lVar13) =
           *(undefined8 *)(&stack0x00000000 + (in_x5 - 1) * 8 + lVar13);
      lVar8 = 0;
      puVar1 = (undefined8 *)(&stack0x00000000 + (in_x5 - 1) * 8 + lVar13);
      puVar2 = (undefined8 *)(&stack0x00000000 + in_x5 * 8 + lVar13);
      while( true ) {
        if (lVar8 == 0) break;
        uVar11 = puVar1[-1];
        lVar8 = lVar8 + -2;
        puVar2[-2] = puVar1[-2];
        puVar2[-1] = uVar11;
        puVar1 = puVar1 + -2;
        puVar2 = puVar2 + -2;
      }
    }
    uVar11 = *(undefined8 *)(unaff_x26 + 0xa8);
    lVar13 = *(long *)(unaff_x26 + 0xa0);
    puVar9 = (uint *)(uVar4 + 7);
    do {
      in_x5 = in_x5 - 1;
      lVar8 = unaff_x26 + (ulong)*puVar9;
      if ((int)(unaff_x26 + (ulong)*puVar9) == (int)uVar11) {
        lVar8 = lVar13;
      }
      *(long *)(puVar3 + in_x5 * 8) = lVar8;
      puVar9 = puVar9 + 1;
    } while (in_x5 != 0);
  }
  FUN_01341380();
  return;
}

