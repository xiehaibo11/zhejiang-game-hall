
undefined8 FUN_013fa780(ulong param_1,ulong param_2,ulong param_3,undefined8 param_4)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  bool bVar4;
  long lVar5;
  undefined4 uVar6;
  ulong uVar7;
  ulong uVar8;
  bool bVar9;
  long unaff_x26;
  int unaff_w27;
  
  uVar1 = (int)*(uint *)(param_1 + 0xf) >> 1 & 3;
  if (uVar1 != 0) {
    iVar3 = (int)unaff_x26;
    uVar7 = param_2;
    uVar8 = param_3;
    if (uVar1 != 1) {
LAB_013fa99c:
      do {
        bVar4 = (uVar8 & 1) == 0;
        if (bVar4) {
          bVar9 = true;
        }
        else {
          if (*(short *)(unaff_x26 + (ulong)*(uint *)(uVar8 - 1) + 7) == 0x438) {
            uVar8 = unaff_x26 + (ulong)*(uint *)(uVar8 + 0xb);
            goto LAB_013fa99c;
          }
          bVar9 = false;
        }
        if ((bVar9) || (*(short *)(unaff_x26 + (ulong)*(uint *)(uVar8 - 1) + 7) != 0xa9))
        goto LAB_013fa9f8;
        uVar8 = unaff_x26 + (ulong)*(uint *)(uVar8 + 7);
      } while( true );
    }
    do {
      for (; bVar4 = (uVar7 & 1) == 0, !bVar4; uVar7 = unaff_x26 + (ulong)*(uint *)(uVar7 + 0xb)) {
        if (*(short *)(unaff_x26 + (ulong)*(uint *)(uVar7 - 1) + 7) != 0x438) {
          bVar9 = false;
          goto LAB_013fa7f0;
        }
      }
      bVar9 = true;
LAB_013fa7f0:
      if ((bVar9) || (*(short *)(unaff_x26 + (ulong)*(uint *)(uVar7 - 1) + 7) != 0xa9))
      goto LAB_013fa814;
      uVar7 = unaff_x26 + (ulong)*(uint *)(uVar7 + 7);
    } while( true );
  }
  uVar8 = **(ulong **)(unaff_x26 + 0x1428);
  uVar6 = *(undefined4 *)(param_1 + 0xb);
  uVar7 = uVar8 + 0x14;
  if (uVar7 < **(ulong **)(unaff_x26 + 0x1430)) {
    uVar8 = uVar8 + 1;
    **(ulong **)(unaff_x26 + 0x1428) = uVar7;
  }
  else {
    uVar8 = FUN_01348560(param_1,0x14,param_3,param_4,param_2);
  }
  *(int *)(uVar8 - 1) = (int)*(undefined8 *)(unaff_x26 + 0xd30);
  *(undefined4 *)(uVar8 + 3) = uVar6;
  *(int *)(uVar8 + 0xf) = (int)param_4;
  *(int *)(uVar8 + 0xb) = (int)param_2;
  *(int *)(uVar8 + 7) = (int)param_3;
  *(int *)(param_1 + 0xb) = (int)uVar8;
  if (((((uint)*(undefined8 *)((param_1 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
      ((uVar8 & 1) != 0)) &&
     (((uint)*(undefined8 *)((unaff_x26 + (uVar8 & 0xffffffff) & 0xfffffffffffc0000) + 8) >> 1 & 1)
      != 0)) {
    FUN_0133eb00(param_1,param_1 + 0xb,0,2);
  }
  goto LAB_013fa970;
LAB_013fa9f8:
  if ((bVar4) || (*(short *)(unaff_x26 + (ulong)*(uint *)(uVar8 - 1) + 7) != 0x439)) {
    do {
      bVar4 = (param_2 & 1) == 0;
      if (bVar4) {
        bVar9 = true;
LAB_013faa54:
        if ((bVar9) || (*(short *)(unaff_x26 + (ulong)*(uint *)(param_2 - 1) + 7) != 0xa9))
        goto LAB_013faa7c;
        uVar1 = *(uint *)(param_2 + 7);
      }
      else {
        if (*(short *)(unaff_x26 + (ulong)*(uint *)(param_2 - 1) + 7) != 0x438) {
          bVar9 = false;
          goto LAB_013faa54;
        }
        uVar1 = *(uint *)(param_2 + 0xb);
      }
      param_2 = unaff_x26 + (ulong)uVar1;
    } while( true );
  }
  unaff_w27 = iVar3 + *(int *)(uVar8 + 0xf);
LAB_013faaa4:
  if ((*(uint *)(param_1 + 0xf) >> 3 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_013be7e0(1,*(undefined8 *)(unaff_x26 + 0x2400),param_3,param_4,param_1);
  }
  uVar6 = (undefined4)*(undefined8 *)(unaff_x26 + 0xc88);
  goto LAB_013fa8c0;
LAB_013faa7c:
  if ((!bVar4) && (*(short *)(unaff_x26 + (ulong)*(uint *)(param_2 - 1) + 7) == 0x439)) {
    unaff_w27 = iVar3 + *(int *)(param_2 + 0xf);
  }
  goto LAB_013faaa4;
LAB_013fa898:
  if ((bVar4) && (*(short *)(unaff_x26 + (ulong)*(uint *)(param_3 - 1) + 7) == 0x439)) {
    unaff_w27 = iVar3 + *(int *)(param_3 + 0xf);
  }
  goto LAB_013fa8bc;
LAB_013fa814:
  if ((bVar4) || (*(short *)(unaff_x26 + (ulong)*(uint *)(uVar7 - 1) + 7) != 0x439)) {
    do {
      for (; bVar4 = (param_3 & 1) != 0, bVar4;
          param_3 = unaff_x26 + (ulong)*(uint *)(param_3 + 0xb)) {
        if (*(short *)(unaff_x26 + (ulong)*(uint *)(param_3 - 1) + 7) != 0x438) {
          bVar9 = false;
          goto LAB_013fa874;
        }
      }
      bVar9 = true;
LAB_013fa874:
      if ((bVar9) || (*(short *)(unaff_x26 + (ulong)*(uint *)(param_3 - 1) + 7) != 0xa9))
      goto LAB_013fa898;
      param_3 = unaff_x26 + (ulong)*(uint *)(param_3 + 7);
    } while( true );
  }
  unaff_w27 = iVar3 + *(int *)(uVar7 + 0xf);
LAB_013fa8bc:
  uVar6 = (undefined4)*(undefined8 *)(unaff_x26 + 0xc80);
  param_3 = param_2;
LAB_013fa8c0:
  uVar8 = **(ulong **)(unaff_x26 + 0x1428);
  uVar2 = *(undefined4 *)(param_1 + 0xb);
  uVar7 = uVar8 + 0x14;
  if (uVar7 < **(ulong **)(unaff_x26 + 0x1430)) {
    lVar5 = uVar8 + 1;
    **(ulong **)(unaff_x26 + 0x1428) = uVar7;
  }
  else {
    lVar5 = FUN_01348560(param_1,0x14,param_3);
  }
  *(undefined4 *)(lVar5 + -1) = uVar6;
  *(undefined4 *)(lVar5 + 3) = uVar2;
  *(int *)(lVar5 + 7) = unaff_w27;
  *(int *)(lVar5 + 0xb) = (int)param_3;
  *(int *)(lVar5 + 0xf) = (int)param_4;
  FUN_01369320(lVar5,param_3,param_1);
LAB_013fa970:
  *(uint *)(param_1 + 0xf) = *(uint *)(param_1 + 0xf) | 8;
  return param_4;
}

