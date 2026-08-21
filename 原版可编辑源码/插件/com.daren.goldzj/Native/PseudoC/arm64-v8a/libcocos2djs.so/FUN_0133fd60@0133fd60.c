
void FUN_0133fd60(undefined8 param_1,long param_2)

{
  ulong uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  ulong uVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  uint uVar11;
  long lVar12;
  long unaff_x26;
  long unaff_x27;
  undefined1 auStack_70 [8];
  ulong local_68;
  ulong local_60;
  undefined4 *local_58;
  undefined8 local_50;
  long local_48;
  undefined8 local_40;
  ulong local_38;
  
  if (auStack_70 <= *(undefined1 **)(unaff_x26 + 0x60)) {
                    /* WARNING: Subroutine does not return */
    FUN_013be7e0(0,*(undefined8 *)(unaff_x26 + 0x2048));
  }
  local_48 = unaff_x26 + (ulong)*(uint *)(param_2 + 0xb);
  if (*(ushort *)(unaff_x26 + (ulong)*(uint *)(local_48 + -1) + 7) < 0xa9) {
                    /* WARNING: Subroutine does not return */
    FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x20e8));
  }
  uVar11 = *(uint *)(param_2 + 7);
  uVar3 = FUN_013c0ba0(local_48,*(undefined8 *)(unaff_x26 + 0x4b8));
  if (((int)uVar3 != (int)*(undefined8 *)(unaff_x26 + 0xa0)) &&
     ((int)uVar3 != (int)*(undefined8 *)(unaff_x26 + 0xb0))) {
    iVar5 = (int)param_1;
    local_38 = (ulong)iVar5;
    uVar7 = local_38 * 8;
    uVar9 = *(undefined8 *)(&stack0x00000000 + uVar7);
    if (local_38 == 0) {
      puVar4 = *(undefined4 **)(unaff_x26 + 0x168);
    }
    else {
      if (0x7fffffd < (long)local_38) {
                    /* WARNING: Subroutine does not return */
        FUN_013be7e0(0,*(undefined8 *)(unaff_x26 + 0x1fd0));
      }
      uVar10 = local_38 * 4 + 8;
      uVar11 = iVar5 * 2;
      uVar1 = **(long **)(unaff_x26 + 0x1428) + uVar10;
      if ((uVar1 < **(ulong **)(unaff_x26 + 0x1430)) && (uVar10 < 0x20000)) {
        puVar4 = (undefined4 *)(**(long **)(unaff_x26 + 0x1428) + 1);
        **(ulong **)(unaff_x26 + 0x1428) = uVar1;
        puVar6 = (undefined4 *)(&stack0xfffffffffffffff8 + uVar7);
      }
      else {
        local_68 = (ulong)uVar11;
        local_60 = uVar7;
        local_58 = (undefined4 *)(&stack0xfffffffffffffff8 + uVar7);
        local_50 = uVar9;
        local_40 = uVar3;
        puVar4 = (undefined4 *)FUN_01348500();
        uVar11 = (uint)local_68;
        uVar3 = local_40;
        puVar6 = local_58;
        uVar7 = local_60;
        uVar9 = local_50;
      }
      puVar8 = (undefined4 *)((long)puVar6 - uVar7);
      *(int *)((long)puVar4 + -1) = (int)*(undefined8 *)(unaff_x26 + 0xe0);
      *(uint *)((long)puVar4 + 3) = uVar11;
      if (local_38 < 0x7fff) {
        if (puVar6 != puVar8) {
          lVar12 = 7;
          while( true ) {
            uVar2 = *puVar6;
            puVar6 = puVar6 + -2;
            *(undefined4 *)((long)puVar4 + lVar12) = uVar2;
            if (puVar6 == puVar8) break;
            lVar12 = lVar12 + 4;
          }
        }
      }
      else if (puVar6 != puVar8) {
        lVar12 = 7;
        while( true ) {
          uVar2 = *puVar6;
          puVar6 = puVar6 + -2;
          *(undefined4 *)((long)puVar4 + lVar12) = uVar2;
          if (puVar6 == puVar8) break;
          lVar12 = lVar12 + 4;
        }
      }
    }
    uVar10 = **(ulong **)(unaff_x26 + 0x1428);
    uVar11 = iVar5 * 2;
    uVar7 = uVar10 + 0x10;
    uVar2 = *(undefined4 *)
             (unaff_x26 + (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(unaff_x27 + -1) + 0x13) +
             0x167);
    if (uVar7 < **(ulong **)(unaff_x26 + 0x1430)) {
      lVar12 = uVar10 + 1;
      **(ulong **)(unaff_x26 + 0x1428) = uVar7;
    }
    else {
      local_60 = (ulong)uVar11;
      local_58 = puVar4;
      local_50 = uVar9;
      local_40 = uVar3;
      lVar12 = FUN_01348560(uVar3,0x10);
      uVar11 = (uint)local_60;
      uVar3 = local_40;
      puVar4 = local_58;
    }
    *(undefined4 *)(lVar12 + -1) = uVar2;
    *(uint *)(lVar12 + 0xb) = uVar11;
    *(int *)(lVar12 + 3) = (int)*(undefined8 *)(unaff_x26 + 0x168);
    *(int *)(lVar12 + 7) = (int)puVar4;
    FUN_0133fcc0(3,uVar3,3);
    return;
  }
  FUN_0133fcc0(param_1,unaff_x26 + (ulong)uVar11);
  return;
}

