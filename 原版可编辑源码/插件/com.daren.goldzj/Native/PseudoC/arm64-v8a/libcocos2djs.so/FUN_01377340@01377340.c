
long FUN_01377340(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong *puVar6;
  ulong *puVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  long unaff_x26;
  long unaff_x27;
  
  lVar5 = unaff_x26 + (ulong)*(uint *)(param_1 + 0xb);
  lVar4 = unaff_x26 + (ulong)*(uint *)(lVar5 + 3);
  if (*(short *)(unaff_x26 + (ulong)*(uint *)(lVar4 + -1) + 7) == 0x61) {
    lVar4 = unaff_x26 + (ulong)*(uint *)(lVar4 + 3);
  }
  lVar5 = (long)(int)(uint)*(ushort *)(lVar5 + 0x15) + ((long)*(int *)(lVar4 + 0x13) >> 2);
  if (0x7fffffd < lVar5) {
                    /* WARNING: Subroutine does not return */
    FUN_013be7e0(0,*(undefined8 *)(unaff_x26 + 0x1fd0));
  }
  puVar6 = *(ulong **)(unaff_x26 + 0x1428);
  puVar7 = *(ulong **)(unaff_x26 + 0x1430);
  uVar1 = lVar5 * 4 + 8;
  uVar2 = *puVar6 + uVar1;
  if ((uVar2 < *puVar7) && (uVar1 < 0x20000)) {
    lVar4 = *puVar6 + 1;
    *puVar6 = uVar2;
  }
  else {
    lVar4 = FUN_01348500(param_1,uVar1,lVar5,puVar6,param_2);
    puVar6 = *(ulong **)(unaff_x26 + 0x1428);
    puVar7 = *(ulong **)(unaff_x26 + 0x1430);
  }
  *(int *)(lVar4 + -1) = (int)*(undefined8 *)(unaff_x26 + 0xe0);
  *(int *)(lVar4 + 3) = (int)lVar5 * 2;
  lVar5 = lVar5 * 4 + 7;
  if (lVar5 != 7) {
    uVar9 = *(undefined8 *)(unaff_x26 + 0xa0);
    do {
      lVar5 = lVar5 + -4;
      *(int *)(lVar4 + lVar5) = (int)uVar9;
    } while (lVar5 != 7);
  }
  uVar1 = *puVar6 + 0x40;
  if (uVar1 < *puVar7) {
    lVar5 = *puVar6 + 1;
    *puVar6 = uVar1;
  }
  else {
    lVar5 = FUN_01348560(param_1,0x40,param_2);
  }
  lVar3 = unaff_x26 + (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(unaff_x27 + -1) + 0x13);
  *(undefined4 *)(lVar5 + 0x2b) =
       *(undefined4 *)(unaff_x26 + (ulong)*(uint *)(lVar3 + 0x393) + 0x1b);
  uVar8 = (undefined4)*(undefined8 *)(unaff_x26 + 0x168);
  *(undefined4 *)(lVar5 + 0x2f) = uVar8;
  *(undefined4 *)(lVar5 + 0x33) = uVar8;
  *(undefined4 *)(lVar5 + 0x37) = 0;
  *(undefined4 *)(lVar5 + 0x3b) = 0;
  *(undefined4 *)(lVar5 + -1) = *(undefined4 *)(lVar3 + 0x47);
  *(undefined4 *)(lVar5 + 3) = uVar8;
  *(undefined4 *)(lVar5 + 7) = uVar8;
  *(int *)(lVar5 + 0xb) = (int)param_1;
  *(int *)(lVar5 + 0xf) = (int)unaff_x27;
  *(int *)(lVar5 + 0x13) = (int)param_2;
  *(undefined4 *)(lVar5 + 0x17) = 0;
  *(undefined4 *)(lVar5 + 0x1b) = 0;
  *(undefined4 *)(lVar5 + 0x1f) = 0xfffffffc;
  *(int *)(lVar5 + 0x23) = (int)lVar4;
  *(int *)(lVar5 + 0x27) = (int)lVar5 + 0x2c;
  if (**(char **)(unaff_x26 + 0x1488) != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_013be7e0(1,*(undefined8 *)(unaff_x26 + 0x1d40));
  }
  return lVar5;
}

