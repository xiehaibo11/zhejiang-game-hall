
void FUN_01340280(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,long param_7)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  long lVar5;
  ulong *puVar6;
  ulong extraout_x8;
  ulong *puVar7;
  ulong *extraout_x9;
  long lVar8;
  long extraout_x10;
  long lVar9;
  long extraout_x11;
  undefined8 uVar10;
  long unaff_x26;
  
  iVar4 = (int)param_4;
  if (iVar4 == 0) {
    FUN_013400e0(param_1,param_2,param_7,param_4,param_4);
    return;
  }
  lVar5 = (long)iVar4;
  if (lVar5 < 0x7fffffe) {
    puVar6 = *(ulong **)(unaff_x26 + 0x1428);
    puVar7 = *(ulong **)(unaff_x26 + 0x1430);
    uVar2 = lVar5 * 4 + 8;
    uVar1 = *puVar6 + uVar2;
    if ((uVar1 < *puVar7) && (uVar2 < 0x20000)) {
      uVar2 = *puVar6 + 1;
      *puVar6 = uVar1;
    }
    else {
      uVar2 = FUN_01348500(param_2,param_1,uVar2);
      puVar6 = *(ulong **)(unaff_x26 + 0x1428);
      puVar7 = *(ulong **)(unaff_x26 + 0x1430);
    }
    *(int *)(uVar2 - 1) = (int)*(undefined8 *)(unaff_x26 + 0xe0);
    lVar9 = lVar5 * 4 + 7;
    *(int *)(uVar2 + 3) = iVar4 * 2;
    if (lVar9 != 7) {
      uVar10 = *(undefined8 *)(unaff_x26 + 0xa8);
      lVar8 = lVar9;
      do {
        lVar8 = lVar8 + -4;
        *(int *)(uVar2 + lVar8) = (int)uVar10;
      } while (lVar8 != 7);
    }
    lVar5 = lVar5 * 8 + 7;
    if (lVar5 != 7) {
      lVar8 = -0x8000000080001;
      while( true ) {
        lVar5 = lVar5 + -8;
        if (*(long *)(param_7 + lVar5) != lVar8) {
          uVar10 = *(undefined8 *)(param_7 + lVar5);
          uVar1 = *puVar6 + 0xc;
          if (uVar1 < *puVar7) {
            uVar3 = *puVar6 + 1;
            *puVar6 = uVar1;
          }
          else {
            uVar3 = FUN_01348560(param_1,0xc);
            puVar6 = *(ulong **)(unaff_x26 + 0x1428);
            puVar7 = *(ulong **)(unaff_x26 + 0x1430);
            lVar8 = -0x8000000080001;
          }
          *(int *)(uVar3 - 1) = (int)*(undefined8 *)(unaff_x26 + 0x140);
          *(undefined8 *)(uVar3 + 3) = uVar10;
          *(int *)(uVar2 + lVar9 + -4) = (int)uVar3;
          if (((((uint)*(undefined8 *)((uVar2 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
              ((uVar3 & 1) != 0)) &&
             (((uint)*(undefined8 *)((unaff_x26 + (uVar3 & 0xffffffff) & 0xfffffffffffc0000) + 8) >>
               1 & 1) != 0)) {
            FUN_0133eb00(uVar2,uVar2 + lVar9 + -4,0,2);
            uVar2 = extraout_x8;
            puVar7 = extraout_x9;
            lVar8 = extraout_x10;
            lVar9 = extraout_x11;
          }
        }
        if (lVar5 == 7) break;
        lVar9 = lVar9 + -4;
      }
    }
    FUN_013400e0(param_1,param_2,uVar2,param_4,param_4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_013be7e0(0,*(undefined8 *)(unaff_x26 + 0x1fd0));
}

