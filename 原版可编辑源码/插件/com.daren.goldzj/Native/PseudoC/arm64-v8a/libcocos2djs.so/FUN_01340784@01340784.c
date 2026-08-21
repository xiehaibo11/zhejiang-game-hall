
void FUN_01340784(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  ulong *puVar3;
  long in_x7;
  ulong uVar4;
  ulong uVar5;
  ulong extraout_x8;
  ulong *puVar6;
  ulong *extraout_x9;
  long lVar7;
  long extraout_x10;
  long lVar8;
  long extraout_x11;
  undefined8 uVar9;
  ulong uVar10;
  long unaff_x26;
  
  iVar1 = (int)param_4;
  if (iVar1 == 0) {
    in_x7 = *(long *)(unaff_x26 + 0x168);
  }
  if (*(int *)(in_x7 + -1) == (int)*(undefined8 *)(unaff_x26 + 0x1e8)) {
    lVar2 = (long)iVar1;
    if (lVar2 < 0x7fffffe) {
      puVar3 = *(ulong **)(unaff_x26 + 0x1428);
      uVar4 = *puVar3;
      puVar6 = *(ulong **)(unaff_x26 + 0x1430);
      uVar5 = lVar2 * 4 + 8;
      uVar10 = uVar4 + uVar5;
      if ((uVar10 < *puVar6) && (uVar5 < 0x20000)) {
        *puVar3 = uVar10;
        uVar5 = uVar4 + 1;
      }
      else {
        param_1 = FUN_01348500(param_2,param_1,uVar5);
        puVar3 = *(ulong **)(unaff_x26 + 0x1428);
        puVar6 = *(ulong **)(unaff_x26 + 0x1430);
        uVar5 = param_1;
      }
      *(int *)(uVar5 - 1) = (int)*(undefined8 *)(unaff_x26 + 0xe0);
      lVar8 = lVar2 * 4 + 7;
      *(int *)(uVar5 + 3) = iVar1 * 2;
      if (lVar8 != 7) {
        uVar9 = *(undefined8 *)(unaff_x26 + 0xa8);
        lVar7 = lVar8;
        do {
          lVar7 = lVar7 + -4;
          *(int *)(uVar5 + lVar7) = (int)uVar9;
        } while (lVar7 != 7);
      }
      lVar2 = lVar2 * 8 + 7;
      if (lVar2 != 7) {
        lVar7 = -0x8000000080001;
        while( true ) {
          lVar2 = lVar2 + -8;
          if (*(long *)(in_x7 + lVar2) != lVar7) {
            uVar4 = *puVar3;
            uVar9 = *(undefined8 *)(in_x7 + lVar2);
            uVar10 = uVar4 + 0xc;
            if (uVar10 < *puVar6) {
              *puVar3 = uVar10;
              uVar10 = uVar4 + 1;
            }
            else {
              param_1 = FUN_01348560(param_1,0xc);
              puVar3 = *(ulong **)(unaff_x26 + 0x1428);
              puVar6 = *(ulong **)(unaff_x26 + 0x1430);
              lVar7 = -0x8000000080001;
              uVar10 = param_1;
            }
            *(int *)(uVar10 - 1) = (int)*(undefined8 *)(unaff_x26 + 0x140);
            *(undefined8 *)(uVar10 + 3) = uVar9;
            *(int *)(uVar5 + lVar8 + -4) = (int)uVar10;
            if (((((uint)*(undefined8 *)((uVar5 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
                ((uVar10 & 1) != 0)) &&
               (((uint)*(undefined8 *)((unaff_x26 + (uVar10 & 0xffffffff) & 0xfffffffffffc0000) + 8)
                 >> 1 & 1) != 0)) {
              FUN_0133eb00(uVar5,uVar5 + lVar8 + -4,0,2);
              uVar5 = extraout_x8;
              puVar6 = extraout_x9;
              lVar7 = extraout_x10;
              lVar8 = extraout_x11;
            }
          }
          if (lVar2 == 7) break;
          lVar8 = lVar8 + -4;
        }
      }
      FUN_013400e0(0,param_2,uVar5,param_4,param_4);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_013be7e0(0,*(undefined8 *)(unaff_x26 + 0x1fd0));
  }
  FUN_013400e0(0,param_2,in_x7,param_4,param_4);
  return;
}

