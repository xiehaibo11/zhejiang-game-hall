
void FUN_01341500(ulong param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  uint uVar1;
  byte bVar2;
  undefined1 *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  ulong uVar8;
  ulong *puVar9;
  ulong *extraout_x8;
  ulong extraout_x9;
  ulong uVar10;
  uint *puVar11;
  ulong *puVar12;
  ulong *extraout_x10;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  long lVar17;
  long extraout_x11;
  undefined8 *puVar18;
  long lVar19;
  long lVar20;
  long extraout_x12;
  long unaff_x26;
  long unaff_x27;
  
  if (((((param_3 & 1) == 0) ||
       (lVar19 = unaff_x26 + (ulong)*(uint *)(param_3 - 1), *(short *)(lVar19 + 7) != 0x423)) ||
      (*(int *)(lVar19 + 0xf) !=
       *(int *)(unaff_x26 + (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(unaff_x27 + -1) + 0x13) +
               0xe7))) ||
     ((*(int *)(*(long *)(unaff_x26 + 0xea8) + 0xb) == 0 ||
      (*(int *)(*(long *)(unaff_x26 + 0xed8) + 0xb) == 0)))) {
LAB_01341738:
    uVar5 = FUN_013c0ba0(param_3,*(undefined8 *)(unaff_x26 + 0xc18));
    if (((uVar5 & 1) == 0) ||
       ((*(byte *)(unaff_x26 + (ulong)*(uint *)(uVar5 - 1) + 9) >> 1 & 1) == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_013be7e0(1,*(undefined8 *)(unaff_x26 + 0x20e8));
    }
    lVar19 = FUN_0138c280(param_3,uVar5);
    uVar5 = unaff_x26 + (ulong)*(uint *)(lVar19 + 7);
    uVar8 = (ulong)(uint)(*(int *)(lVar19 + 0xb) >> 1);
    uVar4 = uVar5;
    if (*(byte *)(unaff_x26 + (ulong)*(uint *)(lVar19 + -1) + 10) >> 3 < 4) goto LAB_01341400;
  }
  else {
    uVar5 = unaff_x26 + (ulong)*(uint *)(param_3 + 7);
    bVar2 = *(byte *)(lVar19 + 10) >> 3;
    uVar1 = *(int *)(param_3 + 0xb) >> 1;
    if (bVar2 < 4) {
      uVar8 = (ulong)uVar1;
      goto LAB_01341400;
    }
    if (5 < bVar2) {
      if (bVar2 < 0xc) {
        uVar8 = (ulong)uVar1;
        goto LAB_01341400;
      }
      goto LAB_01341738;
    }
    uVar8 = (ulong)uVar1;
    uVar4 = uVar5;
  }
  iVar7 = (int)uVar8;
  uVar5 = uVar4;
  if (iVar7 != 0) {
    lVar19 = (long)iVar7;
    if (0x7fffffd < lVar19) {
                    /* WARNING: Subroutine does not return */
      FUN_013be7e0(0,*(undefined8 *)(unaff_x26 + 0x1fd0));
    }
    puVar9 = *(ulong **)(unaff_x26 + 0x1428);
    puVar12 = *(ulong **)(unaff_x26 + 0x1430);
    uVar5 = lVar19 * 4 + 8;
    uVar10 = *puVar9 + uVar5;
    if ((uVar10 < *puVar12) && (uVar5 < 0x20000)) {
      uVar5 = *puVar9 + 1;
      *puVar9 = uVar10;
    }
    else {
      uVar5 = FUN_01348500(param_1,uVar5);
      puVar9 = *(ulong **)(unaff_x26 + 0x1428);
      puVar12 = *(ulong **)(unaff_x26 + 0x1430);
    }
    *(int *)(uVar5 - 1) = (int)*(undefined8 *)(unaff_x26 + 0xe0);
    lVar20 = lVar19 * 4 + 7;
    *(int *)(uVar5 + 3) = iVar7 * 2;
    if (lVar20 != 7) {
      uVar16 = *(undefined8 *)(unaff_x26 + 0xa8);
      lVar17 = lVar20;
      do {
        lVar17 = lVar17 + -4;
        *(int *)(uVar5 + lVar17) = (int)uVar16;
      } while (lVar17 != 7);
    }
    lVar19 = lVar19 * 8 + 7;
    if (lVar19 != 7) {
      lVar17 = -0x8000000080001;
      while( true ) {
        lVar19 = lVar19 + -8;
        if (*(long *)(uVar4 + lVar19) != lVar17) {
          uVar16 = *(undefined8 *)(uVar4 + lVar19);
          uVar10 = *puVar9 + 0xc;
          if (uVar10 < *puVar12) {
            uVar6 = *puVar9 + 1;
            *puVar9 = uVar10;
          }
          else {
            uVar6 = FUN_01348560(param_1,0xc);
            puVar9 = *(ulong **)(unaff_x26 + 0x1428);
            puVar12 = *(ulong **)(unaff_x26 + 0x1430);
            lVar17 = -0x8000000080001;
          }
          *(int *)(uVar6 - 1) = (int)*(undefined8 *)(unaff_x26 + 0x140);
          *(undefined8 *)(uVar6 + 3) = uVar16;
          *(int *)(uVar5 + lVar20 + -4) = (int)uVar6;
          if (((((uint)*(undefined8 *)((uVar5 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
              ((uVar6 & 1) != 0)) &&
             (((uint)*(undefined8 *)((unaff_x26 + (uVar6 & 0xffffffff) & 0xfffffffffffc0000) + 8) >>
               1 & 1) != 0)) {
            FUN_0133eb00(uVar5,uVar5 + lVar20 + -4,0,2);
            puVar9 = extraout_x8;
            uVar5 = extraout_x9;
            puVar12 = extraout_x10;
            lVar17 = extraout_x11;
            lVar20 = extraout_x12;
          }
        }
        if (lVar19 == 7) break;
        lVar20 = lVar20 + -4;
      }
    }
  }
LAB_01341400:
  if ((long)&stack0x00000000 - *(long *)(unaff_x26 + 0x50) <= (long)(uVar8 * 8)) {
                    /* WARNING: Subroutine does not return */
    FUN_013be7e0(0,*(undefined8 *)(unaff_x26 + 0x20c8),uVar5,param_4);
  }
  uVar4 = param_1;
  if (uVar8 != 0) {
    uVar10 = param_1 + 1;
    uVar4 = param_1 + uVar8;
    if ((uVar8 & 1) == 0) {
      puVar3 = &stack0x00000000 + uVar8 * -8;
    }
    else {
      lVar19 = (uVar8 + 1 + (uVar4 & 1) * -2) * -8;
      puVar3 = &stack0x00000000 + lVar19;
      if ((uVar10 & 1) == 0) {
        puVar14 = (undefined8 *)(&stack0x00000000 + uVar8 * 8 + lVar19);
        puVar15 = (undefined8 *)(&stack0x00000000 + (uVar8 + 1) * 8 + lVar19);
        if ((uVar10 & 1) != 0) {
          *puVar14 = *puVar15;
          uVar10 = param_1;
          puVar15 = puVar15 + 1;
          puVar14 = puVar14 + 1;
        }
        for (; uVar10 != 0; uVar10 = uVar10 - 2) {
          uVar16 = puVar15[1];
          *puVar14 = *puVar15;
          puVar14[1] = uVar16;
          puVar15 = puVar15 + 2;
          puVar14 = puVar14 + 2;
        }
        *(undefined8 *)(&stack0x00000000 + (uVar4 + 1) * 8 + lVar19) = 0;
        puVar3 = &stack0x00000000 + lVar19;
      }
      else {
        puVar14 = (undefined8 *)(&stack0x00000000 + (uVar4 - 1) * 8 + lVar19);
        puVar15 = (undefined8 *)(&stack0x00000000 + uVar4 * 8 + lVar19);
        puVar13 = puVar14;
        puVar18 = puVar15;
        if ((uVar10 & 1) != 0) {
          puVar13 = puVar14 + -1;
          puVar18 = puVar15 + -1;
          *puVar15 = *puVar14;
          uVar10 = param_1;
        }
        puVar14 = puVar13 + -1;
        puVar15 = puVar18 + -1;
        for (; uVar10 != 0; uVar10 = uVar10 - 2) {
          uVar16 = puVar14[1];
          *puVar15 = *puVar14;
          puVar15[1] = uVar16;
          puVar14 = puVar14 + -2;
          puVar15 = puVar15 + -2;
        }
      }
    }
    uVar16 = *(undefined8 *)(unaff_x26 + 0xa8);
    lVar19 = *(long *)(unaff_x26 + 0xa0);
    puVar11 = (uint *)(uVar5 + 7);
    do {
      uVar8 = uVar8 - 1;
      lVar20 = unaff_x26 + (ulong)*puVar11;
      if ((int)(unaff_x26 + (ulong)*puVar11) == (int)uVar16) {
        lVar20 = lVar19;
      }
      *(long *)(puVar3 + uVar8 * 8) = lVar20;
      puVar11 = puVar11 + 1;
    } while (uVar8 != 0);
  }
  FUN_01341380(uVar4,param_2);
  return;
}

