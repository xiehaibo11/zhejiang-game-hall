
long FUN_01391c34(ulong param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  ushort uVar3;
  ushort uVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  ulong uVar12;
  long unaff_x26;
  undefined8 unaff_x27;
  double dVar13;
  double dVar14;
  
code_r0x01391c34:
  while( true ) {
    while( true ) {
      iVar7 = (int)param_1;
      bVar5 = (param_1 & 1) == 0;
      uVar11 = *(undefined8 *)(unaff_x26 + 0x140);
      iVar9 = (int)param_2;
      iVar10 = (int)uVar11;
      if ((param_2 & 1) != 0) break;
      if (bVar5) {
        if (!SCARRY4(iVar9,iVar7)) {
          return (long)(iVar9 + iVar7);
        }
        dVar14 = (double)(iVar7 >> 1);
        dVar13 = (double)(iVar9 >> 1);
        goto LAB_01391cdc;
      }
      lVar8 = unaff_x26 + (ulong)*(uint *)(param_1 - 1);
      if ((int)lVar8 == iVar10) {
        dVar14 = *(double *)(param_1 + 3);
        dVar13 = (double)(iVar9 >> 1);
        goto LAB_01391cdc;
      }
      uVar4 = *(ushort *)(lVar8 + 7);
      if (uVar4 < 0x40) goto LAB_01391f20;
      if (uVar4 == 0x41) goto LAB_01391f04;
      if (uVar4 < 0xa9) {
        param_1 = thunk_FUN_01349d90();
      }
      else {
        param_1 = FUN_01349780();
      }
    }
    lVar8 = unaff_x26 + (ulong)*(uint *)(param_2 - 1);
    bVar6 = (int)lVar8 == iVar10;
    if (!bVar5) break;
    if (bVar6) {
      dVar13 = *(double *)(param_2 + 3);
      dVar14 = (double)(iVar7 >> 1);
LAB_01391cdc:
      uVar12 = **(ulong **)(unaff_x26 + 0x1428);
      uVar1 = uVar12 + 0xc;
      if (uVar1 < **(ulong **)(unaff_x26 + 0x1430)) {
        lVar8 = uVar12 + 1;
        **(ulong **)(unaff_x26 + 0x1428) = uVar1;
      }
      else {
        lVar8 = FUN_01348560(param_1,0xc);
        uVar11 = *(undefined8 *)(unaff_x26 + 0x140);
      }
      *(int *)(lVar8 + -1) = (int)uVar11;
      *(double *)(lVar8 + 3) = dVar13 + dVar14;
      return lVar8;
    }
    uVar4 = *(ushort *)(lVar8 + 7);
    if (uVar4 < 0x40) {
LAB_01391ee8:
      lVar8 = FUN_013edce0(param_2,param_1);
      return lVar8;
    }
    if (uVar4 == 0x41) goto LAB_01391f04;
    if (uVar4 < 0xa9) {
      param_2 = thunk_FUN_01349d90(param_2,param_2,uVar11,param_1,unaff_x27);
    }
    else {
      param_2 = FUN_01349780(param_2,param_2,uVar11,param_1,unaff_x27);
    }
  }
  lVar2 = unaff_x26 + (ulong)*(uint *)(param_1 - 1);
  if (bVar6) {
    if ((int)lVar2 == iVar10) {
      dVar13 = *(double *)(param_2 + 3);
      dVar14 = *(double *)(param_1 + 3);
      goto LAB_01391cdc;
    }
    uVar4 = *(ushort *)(lVar2 + 7);
    if (0x3f < uVar4) {
      if (uVar4 == 0x41) {
LAB_01391f04:
        lVar8 = FUN_013ea020(param_2,param_1);
        return lVar8;
      }
      if (uVar4 < 0xa9) {
        param_1 = thunk_FUN_01349d90();
      }
      else {
        param_1 = FUN_01349780();
      }
      goto code_r0x01391c34;
    }
  }
  else {
    uVar4 = *(ushort *)(lVar8 + 7);
    if (uVar4 < 0x40) goto LAB_01391ee8;
    uVar3 = *(ushort *)(lVar2 + 7);
    if (0x3f < uVar3) {
      if (uVar4 == 0x41) {
        if ((uVar3 == 0x41) || ((int)lVar2 == iVar10)) goto LAB_01391f04;
        if (uVar3 < 0xa9) {
          param_1 = thunk_FUN_01349d90();
        }
        else {
          param_1 = FUN_01349780();
        }
      }
      else if (uVar4 < 0xa9) {
        if (uVar3 < 0xa9) {
          param_2 = thunk_FUN_01349d90(param_2,param_2,uVar11,param_1,unaff_x27);
        }
        else {
          param_1 = FUN_01349780();
        }
      }
      else {
        param_2 = FUN_01349780(param_2,param_2,uVar11,param_1,unaff_x27);
      }
      goto code_r0x01391c34;
    }
  }
LAB_01391f20:
  lVar8 = FUN_013eda40(param_2,param_1);
  return lVar8;
}

