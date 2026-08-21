
ulong FUN_01392540(ulong param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  long unaff_x26;
  double dVar8;
  double dVar9;
  
  do {
    while( true ) {
      iVar6 = (int)*(undefined8 *)(unaff_x26 + 0x140);
      iVar5 = (int)param_1;
      iVar3 = iVar5 >> 1;
      if ((param_2 & 1) == 0) break;
      lVar2 = unaff_x26 + (ulong)*(uint *)(param_2 - 1);
      if ((int)lVar2 == iVar6) {
        if ((param_1 & 1) == 0) {
          dVar8 = *(double *)(param_2 + 3);
          dVar9 = (double)iVar3;
          goto LAB_013926c8;
        }
        if (*(int *)(param_1 - 1) == iVar6) {
          dVar8 = *(double *)(param_2 + 3);
          dVar9 = *(double *)(param_1 + 3);
          goto LAB_013926c8;
        }
        goto LAB_01392600;
      }
      if (*(short *)(lVar2 + 7) == 0x41) {
        if ((((param_1 & 1) == 0) ||
            (lVar2 = unaff_x26 + (ulong)*(uint *)(param_1 - 1), *(short *)(lVar2 + 7) == 0x41)) ||
           ((int)lVar2 == iVar6)) goto LAB_0139263c;
        param_1 = thunk_FUN_01349d90();
      }
      else {
        param_2 = thunk_FUN_01349d90(param_2);
      }
    }
    iVar4 = (int)param_2 >> 1;
    if ((param_1 & 1) == 0) {
      if (((iVar5 != 0) && (((int)param_2 != 0 || (-1 < iVar5)))) &&
         ((iVar3 != -1 || (iVar4 != -0x40000000)))) {
        iVar5 = 0;
        if (iVar3 != 0) {
          iVar5 = iVar4 / iVar3;
        }
        if (iVar4 == iVar5 * iVar3) {
          return (ulong)(uint)(iVar5 * 2);
        }
      }
      dVar9 = (double)iVar3;
      dVar8 = (double)iVar4;
LAB_013926c8:
      uVar7 = **(ulong **)(unaff_x26 + 0x1428);
      uVar1 = uVar7 + 0xc;
      if (uVar1 < **(ulong **)(unaff_x26 + 0x1430)) {
        uVar7 = uVar7 + 1;
        **(ulong **)(unaff_x26 + 0x1428) = uVar1;
      }
      else {
        uVar7 = FUN_01348560(param_1,0xc);
        iVar6 = (int)*(undefined8 *)(unaff_x26 + 0x140);
      }
      *(int *)(uVar7 - 1) = iVar6;
      *(double *)(uVar7 + 3) = dVar8 / dVar9;
      return uVar7;
    }
    if (*(int *)(param_1 - 1) == iVar6) {
      dVar9 = *(double *)(param_1 + 3);
      dVar8 = (double)iVar4;
      goto LAB_013926c8;
    }
LAB_01392600:
    if (*(short *)(unaff_x26 + (ulong)*(uint *)(param_1 - 1) + 7) == 0x41) {
LAB_0139263c:
                    /* WARNING: Subroutine does not return */
      FUN_013be7e0(3,*(undefined8 *)(unaff_x26 + 0x1bf0));
    }
    param_1 = thunk_FUN_01349d90();
  } while( true );
}

