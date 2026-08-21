
ulong FUN_013a2f40(long param_1,ulong param_2,uint param_3,ulong param_4)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  ushort uVar4;
  bool bVar5;
  code *pcVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  long extraout_x8;
  long extraout_x8_00;
  long lVar11;
  long lVar12;
  long lVar13;
  long unaff_x26;
  
  uVar4 = *(ushort *)(unaff_x26 + (ulong)*(uint *)(param_2 - 1) + 7);
  uVar8 = (uint)uVar4;
  if (((param_3 & 1) == 0) && ((ulong)(long)((int)param_3 >> 1) <= (ulong)*(uint *)(param_2 + 7))) {
    lVar10 = unaff_x26 + (ulong)*(uint *)(param_1 + 0xb);
    iVar3 = *(int *)(lVar10 + 7) >> 1;
    if (iVar3 != 0) {
      if (iVar3 == 1) {
        uVar9 = FUN_013a2de0();
        return uVar9;
      }
      if (iVar3 != 2) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(0,0x13a3278);
        (*pcVar6)();
      }
      iVar3 = (int)unaff_x26;
      if ((uint)(iVar3 + *(int *)(lVar10 + 0x27)) < 0x7f) {
        uVar9 = param_2;
        uVar2 = (uint)uVar4;
        if ((uVar4 & 7) == 0) {
          bVar5 = false;
LAB_013a30c8:
          if ((!bVar5) || ((uVar8 >> 4 & 1) == 0)) {
            if ((uVar8 >> 3 & 1) == 0) {
              uVar8 = *(uint *)(lVar10 + 0x17);
            }
            else {
              uVar8 = *(uint *)(lVar10 + 0x13);
            }
            uVar9 = unaff_x26 + (ulong)uVar8;
            if ((uVar9 & 1) != 0) {
              if (*(int *)(uVar9 + 0x27) == -1) {
                pcVar6 = (code *)(uVar9 + 0x3f);
              }
              else {
                pcVar6 = *(code **)(unaff_x26 + (long)(*(int *)(uVar9 + 0x27) << 3) + 0x2c78);
              }
              *(undefined8 *)(unaff_x26 + 0x40) = 0x13a3180;
              *(undefined1 **)(unaff_x26 + 0x38) = &stack0xfffffffffffffff0;
              iVar7 = (*pcVar6)(param_2,(int)param_3 >> 1);
              *(undefined8 *)(unaff_x26 + 0x38) = 0;
              if (iVar7 == 1) {
                iVar7 = (iVar3 + *(int *)(lVar10 + 0x27) + 2) * 2;
                if (iVar7 <= iVar3 + *(int *)(param_4 + 3) + -6) {
                  *(int *)(param_4 + 7) = iVar7;
                  lVar10 = (long)iVar7;
                  *(int *)(param_4 + 0xb) = (int)param_2;
                  if (((((uint)*(undefined8 *)((param_4 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0)
                      && ((param_2 & 1) != 0)) &&
                     (param_2 = unaff_x26 + (param_2 & 0xffffffff),
                     ((uint)*(undefined8 *)((param_2 & 0xfffffffffffc0000) + 8) >> 1 & 1) != 0)) {
                    FUN_0133eb00(param_4,param_4 + 0xb,0,2);
                    lVar10 = extraout_x8_00;
                  }
                  lVar10 = lVar10 << 1;
                  *(int *)(param_4 + 0xf) = (int)param_2;
                  if (((((uint)*(undefined8 *)((param_4 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0)
                      && ((param_2 & 1) != 0)) &&
                     (((uint)*(undefined8 *)
                              ((unaff_x26 + (param_2 & 0xffffffff) & 0xfffffffffffc0000) + 8) >> 1 &
                      1) != 0)) {
                    FUN_0133eb00(param_4,param_4 + 0xf,0,2);
                    lVar10 = extraout_x8;
                  }
                  if (lVar10 == 0) {
                    return param_4;
                  }
                  lVar11 = 0x13;
                  lVar13 = 0;
                  lVar12 = *(long *)(unaff_x26 + 0x14f0);
                  while( true ) {
                    piVar1 = (int *)(lVar12 + lVar13);
                    lVar13 = lVar13 + 4;
                    *(int *)(param_4 + lVar11) = *piVar1 * 2;
                    if (lVar13 == lVar10) break;
                    lVar11 = lVar11 + 4;
                  }
                  return param_4;
                }
              }
              else {
                if (iVar7 == 0) goto LAB_013a326c;
                if (iVar7 == -1) {
                    /* WARNING: Subroutine does not return */
                  FUN_013be7e0(0,*(undefined8 *)(unaff_x26 + 0x20c8));
                }
              }
            }
          }
        }
        else {
          while( true ) {
            while( true ) {
              uVar8 = uVar2;
              uVar2 = uVar8 & 7;
              if (uVar2 < 2) break;
              if (uVar2 == 2) {
                bVar5 = true;
                goto LAB_013a30c8;
              }
              if (uVar2 == 3) {
                uVar9 = unaff_x26 + (ulong)*(uint *)(uVar9 + 0xb);
                uVar2 = (uint)*(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar9 - 1) + 7);
              }
              else {
                if (uVar2 != 5) goto LAB_013a32e8;
                uVar9 = unaff_x26 + (ulong)*(uint *)(uVar9 + 0xb);
                uVar2 = (uint)*(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar9 - 1) + 7);
              }
            }
            if ((uVar8 & 7) == 0) {
              bVar5 = false;
              goto LAB_013a30c8;
            }
            if ((uVar2 != 1) || (*(int *)(uVar9 + 0xf) != (int)*(undefined8 *)(unaff_x26 + 200)))
            break;
            uVar9 = unaff_x26 + (ulong)*(uint *)(uVar9 + 0xb);
            uVar2 = (uint)*(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar9 - 1) + 7);
          }
        }
      }
    }
LAB_013a32e8:
                    /* WARNING: Subroutine does not return */
    FUN_013be7e0(4,*(undefined8 *)(unaff_x26 + 0x2460));
  }
LAB_013a326c:
  return *(ulong *)(unaff_x26 + 0xb0);
}

