
/* WARNING: Removing unreachable block (ram,0x0136abc4) */
/* WARNING: Removing unreachable block (ram,0x0136abb0) */

undefined8 FUN_0136a720(ulong param_1,ulong param_2,undefined8 param_3)

{
  int iVar1;
  ushort uVar2;
  code *pcVar3;
  undefined8 uVar4;
  ulong uVar5;
  int iVar6;
  long lVar7;
  undefined4 uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long unaff_x26;
  
  if ((param_1 & 1) != 0) {
    lVar10 = unaff_x26 + (ulong)*(uint *)(param_1 - 1);
    if (*(ushort *)(lVar10 + 7) == 0xa9) {
      lVar10 = thunk_FUN_01349b90(param_2,param_2,param_3,param_1);
      if ((*(int *)(lVar10 + -1) != (int)*(undefined8 *)(unaff_x26 + 0xf8)) ||
         ((*(uint *)(lVar10 + 7) & 1) == 0)) {
        uVar4 = FUN_013fb960(param_1,lVar10,param_3);
        return uVar4;
      }
      goto LAB_0136ab50;
    }
    if (((*(ushort *)(lVar10 + 7) < 0x412) || ((param_2 & 1) == 0)) ||
       ((uVar2 = *(ushort *)(unaff_x26 + (ulong)*(uint *)(param_2 - 1) + 7), uVar2 == 0x42 &&
        ((lVar7 = (long)*(double *)(param_2 + 3), *(double *)(param_2 + 3) == (double)lVar7 &&
         (lVar7 + 0x1fffffffffffffU < 0x3fffffffffffff)))))) goto LAB_0136ab50;
    uVar9 = param_2;
    if (uVar2 != 0x40) {
      if (uVar2 < 0x40) {
        if (((*(uint *)(param_2 + 3) & 0xc0000002) == 0) || ((*(uint *)(param_2 + 3) >> 1 & 1) == 0)
           ) goto LAB_0136ab50;
        if ((uVar2 == 0x25) || (uVar2 == 0x2d)) {
          uVar9 = unaff_x26 + (ulong)*(uint *)(param_2 + 0xb);
        }
        else if ((uVar2 >> 5 & 1) != 0) {
          *(undefined8 *)(unaff_x26 + 0x40) = 0x136a800;
          *(undefined1 **)(unaff_x26 + 0x38) = &stack0xfffffffffffffff0;
          uVar9 = (**(code **)(unaff_x26 + 0x1258))();
          *(undefined8 *)(unaff_x26 + 0x38) = 0;
          if ((uVar9 & 1) == 0) {
            if ((long)(uVar9 << 0x20) >> 0x21 != -1) goto LAB_0136ab50;
            goto LAB_0136aaec;
          }
        }
      }
      else {
        if (uVar2 != 0x43) goto LAB_0136ab50;
        uVar9 = unaff_x26 + (ulong)*(uint *)(param_2 + 0xb);
      }
    }
    iVar6 = (int)uVar9;
    if (((((iVar6 != (int)*(undefined8 *)(unaff_x26 + 0x5d0)) &&
          (iVar6 != (int)*(undefined8 *)(unaff_x26 + 0xc18))) &&
         (iVar6 != (int)*(undefined8 *)(unaff_x26 + 0x848))) &&
        ((iVar6 != (int)*(undefined8 *)(unaff_x26 + 0xc48) &&
         (iVar6 != (int)*(undefined8 *)(unaff_x26 + 0xc70))))) &&
       ((iVar6 != (int)*(undefined8 *)(unaff_x26 + 0x960) &&
        ((iVar6 != (int)*(undefined8 *)(unaff_x26 + 0xa38) &&
         ((*(uint *)(lVar10 + 0xb) >> 0x15 & 1) != 0)))))) {
      if (((*(uint *)(lVar10 + 0xb) >> 0x14 & 1) != 0) &&
         (uVar5 = unaff_x26 + (ulong)*(uint *)(lVar10 + 0x23), (uVar5 & 1) != 0)) {
        *(undefined8 *)(unaff_x26 + 0x40) = 0x136a930;
        *(undefined1 **)(unaff_x26 + 0x38) = &stack0xfffffffffffffff0;
        (**(code **)(unaff_x26 + 0x11a0))(lVar10,param_2,param_3,param_1,uVar9,uVar5);
        *(undefined8 *)(unaff_x26 + 0x38) = 0;
      }
      uVar5 = unaff_x26 + (ulong)*(uint *)(param_1 + 3);
      if ((uVar5 & 1) == 0) {
        uVar5 = *(ulong *)(unaff_x26 + 0x410);
      }
      uVar9 = (ulong)(*(uint *)(uVar9 + 3) >> 3);
      lVar10 = 0;
      while( true ) {
        uVar9 = uVar9 & ((long)(unaff_x26 + (ulong)*(uint *)(uVar5 + 0xf) << 0x20) >> 0x21) - 1U;
        lVar7 = uVar9 * 3;
        lVar11 = (lVar7 + 5U) * 4;
        iVar1 = *(int *)(uVar5 + lVar11 + 7);
        if (iVar1 == (int)*(undefined8 *)(unaff_x26 + 0xa0)) break;
        if (iVar1 == iVar6) {
          if (((uint)(*(int *)(uVar5 + lVar11 + 0xf) >> 1) >> 5 & 1) == 0) {
            if ((ulong)((long)((ulong)*(uint *)(uVar5 + 3) << 0x20) >> 0x21) <= lVar7 + 5U) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(0,0x136ab90);
              (*pcVar3)();
            }
            uVar8 = (undefined4)*(undefined8 *)(unaff_x26 + 0xa8);
            *(undefined4 *)(uVar5 + lVar11 + 7) = uVar8;
            if ((ulong)((long)((ulong)*(uint *)(uVar5 + 3) << 0x20) >> 0x21) <= lVar7 + 6U) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(0,0x136ab98);
              (*pcVar3)();
            }
            *(undefined4 *)(uVar5 + lVar11 + 0xb) = uVar8;
            if ((ulong)((long)((ulong)*(uint *)(uVar5 + 3) << 0x20) >> 0x21) <= lVar7 + 7U) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(0,0x136aba0);
              (*pcVar3)();
            }
            *(undefined4 *)(uVar5 + lVar11 + 0xf) = 0;
            if ((long)((ulong)*(uint *)(uVar5 + 3) << 0x20) >> 0x21 != 0) {
              iVar6 = (int)unaff_x26 + *(int *)(uVar5 + 7) + -2;
              *(int *)(uVar5 + 7) = iVar6;
              if ((ulong)((long)((ulong)*(uint *)(uVar5 + 3) << 0x20) >> 0x21) < 2) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(0,0x136abbc);
                (*pcVar3)();
              }
              *(int *)(uVar5 + 0xb) = (int)unaff_x26 + *(int *)(uVar5 + 0xb) + 2;
              if ((iVar6 <= (int)((uint)(unaff_x26 + (ulong)*(uint *)(uVar5 + 0xf) >> 2) &
                                 0x3ffffffe)) && (0x1f < iVar6)) {
                    /* WARNING: Subroutine does not return */
                FUN_013be7e0(1,*(undefined8 *)(unaff_x26 + 0x2330));
              }
              return *(undefined8 *)(unaff_x26 + 0xb8);
            }
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(0,0x136aba8);
            (*pcVar3)();
          }
          if ((int)param_3 == 0) {
            return *(undefined8 *)(unaff_x26 + 0xc0);
          }
          goto LAB_0136ab50;
        }
        lVar10 = lVar10 + 1;
        uVar9 = uVar9 + lVar10;
      }
LAB_0136aaec:
      return *(undefined8 *)(unaff_x26 + 0xb8);
    }
  }
LAB_0136ab50:
                    /* WARNING: Subroutine does not return */
  FUN_013be7e0(3,*(undefined8 *)(unaff_x26 + 0x2220));
}

