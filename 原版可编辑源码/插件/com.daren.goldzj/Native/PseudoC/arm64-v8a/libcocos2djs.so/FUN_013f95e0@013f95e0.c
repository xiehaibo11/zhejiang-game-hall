
undefined8 FUN_013f95e0(ulong param_1,ulong param_2)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long unaff_x26;
  ulong unaff_x27;
  
  uVar1 = *(uint *)(param_1 + 0xb);
  *(int *)(param_1 + 0xb) = (int)param_2;
  if (((((uint)*(undefined8 *)((param_1 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
      ((param_2 & 1) != 0)) &&
     (param_2 = unaff_x26 + (param_2 & 0xffffffff),
     ((uint)*(undefined8 *)((param_2 & 0xfffffffffffc0000) + 8) >> 1 & 1) != 0)) {
    FUN_0133eb00(param_1,param_1 + 0xb,0,2);
  }
  *(uint *)(param_1 + 0xf) = *(uint *)(param_1 + 0xf) | 2;
  uVar8 = 0;
  uVar7 = unaff_x26 + (ulong)uVar1;
  while (uVar6 = uVar7, uVar5 = uVar8, (int)uVar6 != 0) {
    uVar7 = unaff_x26 + (ulong)*(uint *)(uVar6 + 3);
    *(int *)(uVar6 + 3) = (int)uVar5;
    uVar8 = uVar6;
    if (((((uint)*(undefined8 *)((uVar6 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
        ((uVar5 & 1) != 0)) &&
       (((uint)*(undefined8 *)((unaff_x26 + (uVar5 & 0xffffffff) & 0xfffffffffffc0000) + 8) >> 1 & 1
        ) != 0)) {
      FUN_0133eb00(uVar6,uVar6 + 3,0,2);
      uVar8 = uVar6;
    }
  }
LAB_013f96a8:
  if ((int)uVar5 == 0) {
    return *(undefined8 *)(unaff_x26 + 0xa0);
  }
  uVar1 = *(uint *)(uVar5 + 3);
  uVar7 = unaff_x26 + (ulong)*(uint *)(uVar5 + 0xb);
  uVar8 = unaff_x26 + (ulong)*(uint *)(uVar5 + 7);
  do {
    for (; bVar4 = (uVar7 & 1) == 0, !bVar4; uVar7 = unaff_x26 + (ulong)*(uint *)(uVar7 + 0xb)) {
      if (*(short *)(unaff_x26 + (ulong)*(uint *)(uVar7 - 1) + 7) != 0x438) {
        bVar3 = false;
        goto LAB_013f970c;
      }
    }
    bVar3 = true;
LAB_013f970c:
    if ((bVar3) || (*(short *)(unaff_x26 + (ulong)*(uint *)(uVar7 - 1) + 7) != 0xa9)) break;
    uVar7 = unaff_x26 + (ulong)*(uint *)(uVar7 + 7);
  } while( true );
  if ((bVar4) || (*(short *)(unaff_x26 + (ulong)*(uint *)(uVar7 - 1) + 7) != 0x439)) {
    do {
      bVar4 = (uVar8 & 1) == 0;
      if (bVar4) {
        bVar3 = true;
LAB_013f9790:
        if ((bVar3) || (*(short *)(unaff_x26 + (ulong)*(uint *)(uVar8 - 1) + 7) != 0xa9))
        goto LAB_013f97b4;
        uVar2 = *(uint *)(uVar8 + 7);
      }
      else {
        if (*(short *)(unaff_x26 + (ulong)*(uint *)(uVar8 - 1) + 7) != 0x438) {
          bVar3 = false;
          goto LAB_013f9790;
        }
        uVar2 = *(uint *)(uVar8 + 0xb);
      }
      uVar8 = unaff_x26 + (ulong)uVar2;
    } while( true );
  }
  uVar7 = unaff_x26 + (ulong)*(uint *)(uVar7 + 0xf);
LAB_013f9664:
  *(int *)(uVar5 - 1) = (int)*(undefined8 *)(unaff_x26 + 0xc80);
  *(int *)(uVar5 + 3) = (int)param_2;
  uVar8 = param_2;
  if (((((uint)*(undefined8 *)((uVar5 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
      ((param_2 & 1) != 0)) &&
     (uVar8 = unaff_x26 + (param_2 & 0xffffffff),
     ((uint)*(undefined8 *)((uVar8 & 0xfffffffffffc0000) + 8) >> 1 & 1) != 0)) {
    FUN_0133eb00(uVar5,uVar5 + 3,0,2);
  }
  *(int *)(uVar5 + 7) = (int)uVar7;
  if (((((uint)*(undefined8 *)((uVar5 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
      ((uVar7 & 1) != 0)) &&
     (((uint)*(undefined8 *)((unaff_x26 + (uVar7 & 0xffffffff) & 0xfffffffffffc0000) + 8) >> 1 & 1)
      != 0)) {
    FUN_0133eb00(uVar5,uVar5 + 7,0,2);
  }
  FUN_01369320(uVar5,uVar8);
  uVar5 = unaff_x26 + (ulong)uVar1;
  goto LAB_013f96a8;
LAB_013f97b4:
  uVar7 = unaff_x27;
  if ((!bVar4) && (*(short *)(unaff_x26 + (ulong)*(uint *)(uVar8 - 1) + 7) == 0x439)) {
    uVar7 = unaff_x26 + (ulong)*(uint *)(uVar8 + 0xf);
  }
  goto LAB_013f9664;
}

