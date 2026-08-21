
undefined8 FUN_013f9920(ulong param_1,ulong param_2)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  ulong extraout_x8;
  long unaff_x26;
  ulong unaff_x27;
  
  if ((**(char **)(unaff_x26 + 0x1488) != '\0') ||
     (uVar1 = *(uint *)(param_1 + 0xf), (uVar1 >> 3 & 1) == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_013be7e0(3,*(undefined8 *)(unaff_x26 + 0x2410));
  }
  uVar8 = *(uint *)(param_1 + 0xb);
  *(int *)(param_1 + 0xb) = (int)param_2;
  uVar4 = param_2;
  if (((((uint)*(undefined8 *)((param_1 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
      ((param_2 & 1) != 0)) &&
     (uVar4 = unaff_x26 + (param_2 & 0xffffffff),
     ((uint)*(undefined8 *)((uVar4 & 0xfffffffffffc0000) + 8) >> 1 & 1) != 0)) {
    FUN_0133eb00(param_1,param_1 + 0xb,0,2);
  }
  *(uint *)(param_1 + 0xf) = uVar1 | 4;
  uVar9 = 0;
  uVar7 = unaff_x26 + (ulong)uVar8;
  while (uVar6 = uVar7, uVar5 = uVar9, (int)uVar6 != 0) {
    uVar7 = unaff_x26 + (ulong)*(uint *)(uVar6 + 3);
    *(int *)(uVar6 + 3) = (int)uVar5;
    uVar9 = uVar6;
    if (((((uint)*(undefined8 *)((uVar6 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
        ((uVar5 & 1) != 0)) &&
       (((uint)*(undefined8 *)((unaff_x26 + (uVar5 & 0xffffffff) & 0xfffffffffffc0000) + 8) >> 1 & 1
        ) != 0)) {
      FUN_0133eb00(uVar6,uVar6 + 3,0,2);
      uVar9 = uVar6;
    }
  }
LAB_013f9a08:
  if ((int)uVar5 == 0) {
    return *(undefined8 *)(unaff_x26 + 0xa0);
  }
  uVar1 = *(uint *)(uVar5 + 3);
  uVar7 = unaff_x26 + (ulong)*(uint *)(uVar5 + 7);
  uVar9 = unaff_x26 + (ulong)*(uint *)(uVar5 + 0xb);
  uVar6 = uVar7;
  do {
    for (; bVar3 = (uVar6 & 1) == 0, !bVar3; uVar6 = unaff_x26 + (ulong)*(uint *)(uVar6 + 0xb)) {
      if (*(short *)(unaff_x26 + (ulong)*(uint *)(uVar6 - 1) + 7) != 0x438) {
        bVar2 = false;
        goto LAB_013f9a70;
      }
    }
    bVar2 = true;
LAB_013f9a70:
    if ((bVar2) || (*(short *)(unaff_x26 + (ulong)*(uint *)(uVar6 - 1) + 7) != 0xa9)) break;
    uVar6 = unaff_x26 + (ulong)*(uint *)(uVar6 + 7);
  } while( true );
  if ((bVar3) || (*(short *)(unaff_x26 + (ulong)*(uint *)(uVar6 - 1) + 7) != 0x439)) {
    do {
      for (; bVar3 = (uVar9 & 1) != 0, bVar3; uVar9 = unaff_x26 + (ulong)*(uint *)(uVar9 + 0xb)) {
        if (*(short *)(unaff_x26 + (ulong)*(uint *)(uVar9 - 1) + 7) != 0x438) {
          bVar2 = false;
          goto LAB_013f9af0;
        }
      }
      bVar2 = true;
LAB_013f9af0:
      if ((bVar2) || (*(short *)(unaff_x26 + (ulong)*(uint *)(uVar9 - 1) + 7) != 0xa9))
      goto LAB_013f9b14;
      uVar9 = unaff_x26 + (ulong)*(uint *)(uVar9 + 7);
    } while( true );
  }
  uVar6 = unaff_x26 + (ulong)*(uint *)(uVar6 + 0xf);
LAB_013f99b4:
  *(int *)(uVar5 - 1) = (int)*(undefined8 *)(unaff_x26 + 0xc88);
  *(int *)(uVar5 + 3) = (int)uVar4;
  if (((((uint)*(undefined8 *)((uVar5 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
      ((uVar4 & 1) != 0)) &&
     (uVar4 = unaff_x26 + (uVar4 & 0xffffffff),
     ((uint)*(undefined8 *)((uVar4 & 0xfffffffffffc0000) + 8) >> 1 & 1) != 0)) {
    FUN_0133eb00(uVar5,uVar5 + 3,0,2);
    uVar6 = extraout_x8;
  }
  uVar8 = (uint)uVar7;
  *(int *)(uVar5 + 7) = (int)uVar6;
  if (((((uint)*(undefined8 *)((uVar5 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
      ((uVar6 & 1) != 0)) &&
     (((uint)*(undefined8 *)((unaff_x26 + (uVar6 & 0xffffffff) & 0xfffffffffffc0000) + 8) >> 1 & 1)
      != 0)) {
    FUN_0133eb00(uVar5,uVar5 + 7,0,2);
  }
  *(uint *)(uVar5 + 0xb) = uVar8;
  if (((((uint)*(undefined8 *)((uVar5 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
      ((uVar8 & 1) != 0)) &&
     (((uint)*(undefined8 *)((unaff_x26 + (ulong)uVar8 & 0xfffffffffffc0000) + 8) >> 1 & 1) != 0)) {
    FUN_0133eb00(uVar5,uVar5 + 0xb,0,2);
  }
  FUN_01369320(uVar5,uVar4);
  uVar4 = param_2;
  uVar5 = unaff_x26 + (ulong)uVar1;
  goto LAB_013f9a08;
LAB_013f9b14:
  uVar6 = unaff_x27;
  if ((bVar3) && (*(short *)(unaff_x26 + (ulong)*(uint *)(uVar9 - 1) + 7) == 0x439)) {
    uVar6 = unaff_x26 + (ulong)*(uint *)(uVar9 + 0xf);
  }
  goto LAB_013f99b4;
}

