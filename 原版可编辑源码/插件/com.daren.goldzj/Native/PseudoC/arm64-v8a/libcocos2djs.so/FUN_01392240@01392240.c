
long FUN_01392240(ulong param_1,ulong param_2)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  int iVar6;
  long unaff_x26;
  double dVar7;
  double dVar8;
  
  do {
    while( true ) {
      iVar6 = (int)*(undefined8 *)(unaff_x26 + 0x140);
      iVar2 = (int)(uint)param_1 >> 1;
      if ((param_2 & 1) == 0) break;
      lVar4 = unaff_x26 + (ulong)*(uint *)(param_2 - 1);
      if ((int)lVar4 == iVar6) {
        if ((param_1 & 1) == 0) {
          dVar7 = *(double *)(param_2 + 3);
          dVar8 = (double)iVar2;
LAB_01392378:
          uVar5 = **(ulong **)(unaff_x26 + 0x1428);
          uVar1 = uVar5 + 0xc;
          if (uVar1 < **(ulong **)(unaff_x26 + 0x1430)) {
            lVar4 = uVar5 + 1;
            **(ulong **)(unaff_x26 + 0x1428) = uVar1;
          }
          else {
            lVar4 = FUN_01348560();
            iVar6 = (int)*(undefined8 *)(unaff_x26 + 0x140);
          }
          *(int *)(lVar4 + -1) = iVar6;
          *(double *)(lVar4 + 3) = dVar7 * dVar8;
          return lVar4;
        }
        if (*(int *)(param_1 - 1) == iVar6) {
          dVar7 = *(double *)(param_2 + 3);
          dVar8 = *(double *)(param_1 + 3);
          goto LAB_01392378;
        }
        goto LAB_01392300;
      }
      if (*(short *)(lVar4 + 7) == 0x41) {
        if ((((param_1 & 1) == 0) ||
            (lVar4 = unaff_x26 + (ulong)*(uint *)(param_1 - 1), *(short *)(lVar4 + 7) == 0x41)) ||
           ((int)lVar4 == iVar6)) goto LAB_0139233c;
        param_1 = thunk_FUN_01349d90();
      }
      else {
        param_2 = thunk_FUN_01349d90(param_2);
      }
    }
    iVar3 = (int)(uint)param_2 >> 1;
    if ((param_1 & 1) == 0) {
      iVar6 = (int)((long)iVar3 * (long)iVar2);
      if ((long)iVar3 * (long)iVar2 - (long)iVar6 != 0) {
        uVar5 = **(ulong **)(unaff_x26 + 0x1428);
        uVar1 = uVar5 + 0xc;
        if (uVar1 < **(ulong **)(unaff_x26 + 0x1430)) {
          lVar4 = uVar5 + 1;
          **(ulong **)(unaff_x26 + 0x1428) = uVar1;
        }
        else {
          lVar4 = FUN_01348560(param_1,0xc);
        }
        *(int *)(lVar4 + -1) = (int)*(undefined8 *)(unaff_x26 + 0x140);
        *(double *)(lVar4 + 3) = (double)iVar3 * (double)iVar2;
        return lVar4;
      }
      if (iVar6 != 0) {
        if (!SCARRY4(iVar6,iVar6)) {
          return (long)(iVar6 * 2);
        }
        uVar5 = **(ulong **)(unaff_x26 + 0x1428);
        uVar1 = uVar5 + 0xc;
        if (uVar1 < **(ulong **)(unaff_x26 + 0x1430)) {
          lVar4 = uVar5 + 1;
          **(ulong **)(unaff_x26 + 0x1428) = uVar1;
        }
        else {
          lVar4 = FUN_01348560(param_1,0xc);
        }
        *(int *)(lVar4 + -1) = (int)*(undefined8 *)(unaff_x26 + 0x140);
        *(double *)(lVar4 + 3) = (double)iVar6;
        return lVar4;
      }
      if (-1 < (int)((uint)param_2 | (uint)param_1) >> 1) {
        return 0;
      }
      return *(long *)(unaff_x26 + 0x448);
    }
    if (*(int *)(param_1 - 1) == iVar6) {
      dVar8 = *(double *)(param_1 + 3);
      dVar7 = (double)iVar3;
      goto LAB_01392378;
    }
LAB_01392300:
    if (*(short *)(unaff_x26 + (ulong)*(uint *)(param_1 - 1) + 7) == 0x41) {
LAB_0139233c:
                    /* WARNING: Subroutine does not return */
      FUN_013be7e0(3,*(undefined8 *)(unaff_x26 + 0x1bf0));
    }
    param_1 = thunk_FUN_01349d90();
  } while( true );
}

