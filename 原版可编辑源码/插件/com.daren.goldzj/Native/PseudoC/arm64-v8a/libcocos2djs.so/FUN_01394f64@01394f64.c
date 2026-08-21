
undefined8 FUN_01394f64(ulong param_1,ulong param_2,int param_3)

{
  long lVar1;
  long lVar2;
  ushort uVar3;
  ushort uVar4;
  bool bVar5;
  bool bVar6;
  undefined8 uVar7;
  ulong uVar8;
  int iVar9;
  long unaff_x26;
  double dVar10;
  double dVar11;
  
  while( true ) {
    while( true ) {
      uVar8 = param_2;
      param_2 = param_1;
      bVar5 = (uVar8 & 1) != 0;
      if ((int)uVar8 == (int)param_2) {
        if (((bVar5) && (*(int *)(uVar8 - 1) == param_3)) && (NAN(*(double *)(uVar8 + 3)))) {
          uVar7 = FUN_013950fc();
          return uVar7;
        }
        goto LAB_013950f4;
      }
      bVar6 = (param_2 & 1) == 0;
      if (!bVar5) break;
      param_1 = uVar8;
      if (!bVar6) {
        lVar1 = unaff_x26 + (ulong)*(uint *)(uVar8 - 1);
        lVar2 = unaff_x26 + (ulong)*(uint *)(param_2 - 1);
        uVar3 = *(ushort *)(lVar1 + 7);
        uVar4 = *(ushort *)(lVar2 + 7);
        if (uVar3 < 0x40) {
          if (uVar4 < 0x40) {
            uVar7 = FUN_01345360();
            return uVar7;
          }
        }
        else if (uVar3 == 0x40) {
          if (uVar4 < 0xa9) goto code_r0x013950fc;
        }
        else {
          iVar9 = (int)lVar2;
          if (uVar3 == 0x42) {
            if (uVar4 == 0x42) {
              dVar10 = *(double *)(uVar8 + 3);
              dVar11 = *(double *)(param_2 + 3);
              goto LAB_013950ec;
            }
            if (uVar4 < 0x40) goto LAB_013951fc;
            if (iVar9 == (int)*(undefined8 *)(unaff_x26 + 0x370)) {
              param_1 = unaff_x26 + (ulong)*(uint *)(param_2 + 0xf);
              param_2 = uVar8;
            }
            else if ((uVar4 != 0x41) && (uVar4 < 0xa9)) {
              uVar7 = FUN_013950fc();
              return uVar7;
            }
          }
          else if (uVar3 == 0x43) {
            if ((int)lVar1 != (int)*(undefined8 *)(unaff_x26 + 0x370)) {
              if ((*(byte *)(lVar2 + 9) >> 4 & 1) == 0) {
                uVar7 = FUN_013950fc();
                return uVar7;
              }
              goto LAB_013950f4;
            }
            if (iVar9 == (int)lVar1) goto code_r0x013950fc;
            param_1 = param_2;
            param_2 = unaff_x26 + (ulong)*(uint *)(uVar8 + 0xf);
          }
          else {
            if (uVar3 != 0x41) {
              if (uVar4 < 0xa9) {
                if ((*(byte *)(lVar2 + 9) >> 4 & 1) == 0) {
                  uVar7 = FUN_01395104();
                  return uVar7;
                }
                if ((*(byte *)(lVar1 + 9) >> 4 & 1) == 0) {
                  uVar7 = FUN_013950fc();
                  return uVar7;
                }
                goto LAB_013950f4;
              }
              goto code_r0x013950fc;
            }
            if (iVar9 == param_3) {
                    /* WARNING: Subroutine does not return */
              FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x1c18));
            }
            if (uVar4 == 0x41) {
                    /* WARNING: Subroutine does not return */
              FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x1c10));
            }
            if (uVar4 < 0x40) {
                    /* WARNING: Subroutine does not return */
              FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x1c20));
            }
            if (iVar9 == (int)*(undefined8 *)(unaff_x26 + 0x370)) {
              uVar7 = FUN_01394f64(unaff_x26 + (ulong)*(uint *)(param_2 + 0xf));
              return uVar7;
            }
            if (uVar4 < 0xa9) {
              uVar7 = FUN_013950fc();
              return uVar7;
            }
          }
        }
      }
    }
    if (bVar6) goto code_r0x013950fc;
    lVar1 = unaff_x26 + (ulong)*(uint *)(param_2 - 1);
    iVar9 = (int)lVar1;
    if (iVar9 == param_3) break;
    if (iVar9 != (int)*(undefined8 *)(unaff_x26 + 0x370)) {
      uVar3 = *(ushort *)(lVar1 + 7);
      if (0x3f < uVar3) {
        if (uVar3 == 0x41) {
                    /* WARNING: Subroutine does not return */
          FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x1c18));
        }
        if (0xa8 < uVar3) {
          uVar7 = FUN_01349780();
          uVar7 = FUN_01394f64(uVar7,uVar8,*(undefined8 *)(unaff_x26 + 0x140));
          return uVar7;
        }
        uVar7 = FUN_013950fc();
        return uVar7;
      }
LAB_013951fc:
      uVar7 = FUN_01349ae0();
      uVar7 = FUN_01394f64(uVar7,uVar8,*(undefined8 *)(unaff_x26 + 0x140));
      return uVar7;
    }
    param_1 = unaff_x26 + (ulong)*(uint *)(param_2 + 0xf);
    param_2 = uVar8;
  }
  dVar11 = *(double *)(param_2 + 3);
  dVar10 = (double)((int)uVar8 >> 1);
LAB_013950ec:
  if (dVar10 == dVar11) {
LAB_013950f4:
    return *(undefined8 *)(unaff_x26 + 0xb8);
  }
code_r0x013950fc:
  return *(undefined8 *)(unaff_x26 + 0xc0);
}

