
ulong FUN_01392780(ulong param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  long unaff_x26;
  undefined8 uVar7;
  double dVar8;
  double dVar9;
  
  do {
    while( true ) {
      iVar5 = (int)*(undefined8 *)(unaff_x26 + 0x140);
      iVar3 = (int)param_1 >> 1;
      if ((param_2 & 1) == 0) break;
      lVar2 = unaff_x26 + (ulong)*(uint *)(param_2 - 1);
      if ((int)lVar2 == iVar5) {
        if ((param_1 & 1) == 0) {
          dVar8 = *(double *)(param_2 + 3);
          dVar9 = (double)iVar3;
LAB_013928b8:
          uVar6 = **(ulong **)(unaff_x26 + 0x1428);
          uVar1 = uVar6 + 0xc;
          if (uVar1 < **(ulong **)(unaff_x26 + 0x1430)) {
            uVar6 = uVar6 + 1;
            **(ulong **)(unaff_x26 + 0x1428) = uVar1;
          }
          else {
            uVar6 = FUN_01348560();
            iVar5 = (int)*(undefined8 *)(unaff_x26 + 0x140);
          }
          *(int *)(uVar6 - 1) = iVar5;
          *(undefined8 *)(unaff_x26 + 0x40) = 0x13928f4;
          *(undefined1 **)(unaff_x26 + 0x38) = &stack0xfffffffffffffff0;
          uVar7 = (**(code **)(unaff_x26 + 0x11e8))(dVar8,dVar9);
          *(undefined8 *)(unaff_x26 + 0x38) = 0;
          *(undefined8 *)(uVar6 + 3) = uVar7;
          return uVar6;
        }
        if (*(int *)(param_1 - 1) == iVar5) {
          dVar8 = *(double *)(param_2 + 3);
          dVar9 = *(double *)(param_1 + 3);
          goto LAB_013928b8;
        }
        goto LAB_01392840;
      }
      if (*(short *)(lVar2 + 7) == 0x41) {
        if ((((param_1 & 1) == 0) ||
            (lVar2 = unaff_x26 + (ulong)*(uint *)(param_1 - 1), *(short *)(lVar2 + 7) == 0x41)) ||
           ((int)lVar2 == iVar5)) goto LAB_0139287c;
        param_1 = thunk_FUN_01349d90();
      }
      else {
        param_2 = thunk_FUN_01349d90(param_2);
      }
    }
    iVar4 = (int)param_2 >> 1;
    if ((param_1 & 1) == 0) {
      if (iVar3 == 0) {
        return *(ulong *)(unaff_x26 + 0x430);
      }
      if (-1 < iVar4) {
        iVar5 = 0;
        if (iVar3 != 0) {
          iVar5 = iVar4 / iVar3;
        }
        return (ulong)(uint)((iVar4 - iVar5 * iVar3) * 2);
      }
      iVar5 = 0;
      if (iVar3 != 0) {
        iVar5 = iVar4 / iVar3;
      }
      iVar4 = iVar4 - iVar5 * iVar3;
      if (iVar4 != 0) {
        if (!SCARRY4(iVar4,iVar4)) {
          return (long)(iVar4 * 2);
        }
        uVar6 = **(ulong **)(unaff_x26 + 0x1428);
        uVar1 = uVar6 + 0xc;
        if (uVar1 < **(ulong **)(unaff_x26 + 0x1430)) {
          uVar6 = uVar6 + 1;
          **(ulong **)(unaff_x26 + 0x1428) = uVar1;
        }
        else {
          uVar6 = FUN_01348560(param_1,0xc);
        }
        *(int *)(uVar6 - 1) = (int)*(undefined8 *)(unaff_x26 + 0x140);
        *(double *)(uVar6 + 3) = (double)iVar4;
        return uVar6;
      }
      return *(ulong *)(unaff_x26 + 0x448);
    }
    if (*(int *)(param_1 - 1) == iVar5) {
      dVar9 = *(double *)(param_1 + 3);
      dVar8 = (double)iVar4;
      goto LAB_013928b8;
    }
LAB_01392840:
    if (*(short *)(unaff_x26 + (ulong)*(uint *)(param_1 - 1) + 7) == 0x41) {
LAB_0139287c:
                    /* WARNING: Subroutine does not return */
      FUN_013be7e0(3,*(undefined8 *)(unaff_x26 + 0x1bf0));
    }
    param_1 = thunk_FUN_01349d90();
  } while( true );
}

