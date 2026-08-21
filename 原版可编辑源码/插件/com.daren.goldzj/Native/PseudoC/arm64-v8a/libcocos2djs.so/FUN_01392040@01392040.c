
long FUN_01392040(ulong param_1,ulong param_2)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  long unaff_x26;
  double dVar7;
  double dVar8;
  
  do {
    while( true ) {
      iVar4 = (int)param_2;
      iVar5 = (int)*(undefined8 *)(unaff_x26 + 0x140);
      iVar2 = (int)param_1;
      if ((param_2 & 1) == 0) break;
      lVar3 = unaff_x26 + (ulong)*(uint *)(param_2 - 1);
      if ((int)lVar3 == iVar5) {
        if ((param_1 & 1) == 0) {
          dVar7 = *(double *)(param_2 + 3);
          dVar8 = (double)(iVar2 >> 1);
          goto LAB_01392198;
        }
        if (*(int *)(param_1 - 1) == iVar5) {
          dVar7 = *(double *)(param_2 + 3);
          dVar8 = *(double *)(param_1 + 3);
          goto LAB_01392198;
        }
        goto LAB_01392100;
      }
      if (*(short *)(lVar3 + 7) == 0x41) {
        if ((((param_1 & 1) == 0) ||
            (lVar3 = unaff_x26 + (ulong)*(uint *)(param_1 - 1), *(short *)(lVar3 + 7) == 0x41)) ||
           ((int)lVar3 == iVar5)) goto LAB_01392140;
        param_1 = thunk_FUN_01349d90();
      }
      else {
        param_2 = thunk_FUN_01349d90(param_2);
      }
    }
    if ((param_1 & 1) == 0) {
      if (!SBORROW4(iVar4,iVar2)) {
        return (long)(iVar4 - iVar2);
      }
      dVar8 = (double)(iVar2 >> 1);
      dVar7 = (double)(iVar4 >> 1);
LAB_01392198:
      uVar6 = **(ulong **)(unaff_x26 + 0x1428);
      uVar1 = uVar6 + 0xc;
      if (uVar1 < **(ulong **)(unaff_x26 + 0x1430)) {
        lVar3 = uVar6 + 1;
        **(ulong **)(unaff_x26 + 0x1428) = uVar1;
      }
      else {
        lVar3 = FUN_01348560(param_1,0xc);
        iVar5 = (int)*(undefined8 *)(unaff_x26 + 0x140);
      }
      *(int *)(lVar3 + -1) = iVar5;
      *(double *)(lVar3 + 3) = dVar7 - dVar8;
      return lVar3;
    }
    if (*(int *)(param_1 - 1) == iVar5) {
      dVar8 = *(double *)(param_1 + 3);
      dVar7 = (double)(iVar4 >> 1);
      goto LAB_01392198;
    }
LAB_01392100:
    if (*(short *)(unaff_x26 + (ulong)*(uint *)(param_1 - 1) + 7) == 0x41) {
LAB_01392140:
      lVar3 = FUN_013eab20(param_2,param_1);
      return lVar3;
    }
    param_1 = thunk_FUN_01349d90();
  } while( true );
}

