
undefined8 FUN_013704a0(long param_1,ulong param_2,long param_3,long param_4)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ulong uVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  ulong uVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long unaff_x26;
  double dVar14;
  double dVar15;
  
  uVar4 = (param_3 << 0x20) >> 0x21;
  uVar8 = (param_4 << 0x20) >> 0x21;
  iVar7 = (int)param_2;
  if ((param_2 & 1) == 0) {
    dVar14 = (double)(iVar7 >> 1);
  }
  else {
    iVar9 = (int)*(undefined8 *)(unaff_x26 + 0xa0);
    if (iVar7 == iVar9) {
      for (; uVar8 < uVar4; uVar8 = uVar8 + 1) {
        iVar7 = *(int *)(param_1 + uVar8 * 4 + 7);
        if ((iVar7 == iVar9) || (iVar7 == (int)*(undefined8 *)(unaff_x26 + 0xa8)))
        goto LAB_01370868;
      }
      goto LAB_01370858;
    }
    lVar12 = unaff_x26 + (ulong)*(uint *)(param_2 - 1);
    if ((int)lVar12 != (int)*(undefined8 *)(unaff_x26 + 0x140)) {
      uVar1 = *(ushort *)(lVar12 + 7);
      if (uVar1 < 0x40) {
        uVar10 = (ulong)*(uint *)(param_2 + 7);
        for (; uVar8 < uVar4; uVar8 = uVar8 + 1) {
          uVar13 = unaff_x26 + (ulong)*(uint *)(param_1 + uVar8 * 4 + 7);
          if ((uVar13 & 1) != 0) {
            if (iVar7 == (int)uVar13) goto LAB_01370868;
            uVar2 = *(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar13 - 1) + 7);
            if (((uVar2 < 0x40) && (uVar10 == *(uint *)(uVar13 + 7))) &&
               (uVar3 = uVar1 | uVar2 << 8, (uVar3 & 0x2020) != 0)) {
              if ((uVar3 & 0x1111) != 0) {
                    /* WARNING: Subroutine does not return */
                FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x2588));
              }
              bVar5 = (uVar2 & 7) == 0;
              bVar6 = (uVar1 & 7) == 0;
              uVar3 = uVar3 & 0x808;
              if (uVar3 == 0x808) {
                if (bVar6) {
                  lVar12 = param_2 + 0xb;
                }
                else {
                  lVar12 = *(long *)(param_2 + 0x13);
                }
                if (bVar5) {
                  lVar11 = uVar13 + 0xb;
                }
                else {
                  lVar11 = *(long *)(uVar13 + 0x13);
                }
                uVar13 = 0;
                while( true ) {
                  if (uVar13 == uVar10) goto LAB_01370868;
                  if (*(char *)(lVar12 + uVar13) != *(char *)(lVar11 + uVar13)) break;
                  uVar13 = uVar13 + 1;
                }
              }
              else if (uVar3 == 0) {
                if (bVar6) {
                  lVar12 = param_2 + 0xb;
                }
                else {
                  lVar12 = *(long *)(param_2 + 0x13);
                }
                if (bVar5) {
                  lVar11 = uVar13 + 0xb;
                }
                else {
                  lVar11 = *(long *)(uVar13 + 0x13);
                }
                uVar13 = 0;
                while( true ) {
                  if (uVar13 == uVar10) goto LAB_01370868;
                  if (*(short *)(lVar12 + uVar13 * 2) != *(short *)(lVar11 + uVar13 * 2)) break;
                  uVar13 = uVar13 + 1;
                }
              }
              else if (uVar3 == 8) {
                if (bVar6) {
                  lVar12 = param_2 + 0xb;
                }
                else {
                  lVar12 = *(long *)(param_2 + 0x13);
                }
                if (bVar5) {
                  lVar11 = uVar13 + 0xb;
                }
                else {
                  lVar11 = *(long *)(uVar13 + 0x13);
                }
                uVar13 = 0;
                while( true ) {
                  if (uVar13 == uVar10) goto LAB_01370868;
                  if ((ushort)*(byte *)(lVar12 + uVar13) != *(ushort *)(lVar11 + uVar13 * 2)) break;
                  uVar13 = uVar13 + 1;
                }
              }
              else {
                if (bVar6) {
                  lVar12 = param_2 + 0xb;
                }
                else {
                  lVar12 = *(long *)(param_2 + 0x13);
                }
                if (bVar5) {
                  lVar11 = uVar13 + 0xb;
                }
                else {
                  lVar11 = *(long *)(uVar13 + 0x13);
                }
                uVar13 = 0;
                while( true ) {
                  if (uVar13 == uVar10) goto LAB_01370868;
                  if (*(ushort *)(lVar12 + uVar13 * 2) != (ushort)*(byte *)(lVar11 + uVar13)) break;
                  uVar13 = uVar13 + 1;
                }
              }
            }
          }
        }
      }
      else if (uVar1 == 0x41) {
        for (; uVar8 < uVar4; uVar8 = uVar8 + 1) {
          uVar10 = unaff_x26 + (ulong)*(uint *)(param_1 + uVar8 * 4 + 7);
          if (((uVar10 & 1) != 0) &&
             (*(short *)(unaff_x26 + (ulong)*(uint *)(uVar10 - 1) + 7) == 0x41)) {
                    /* WARNING: Subroutine does not return */
            FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x1c10));
          }
        }
      }
      else {
        for (; uVar8 < uVar4; uVar8 = uVar8 + 1) {
          if (*(int *)(param_1 + uVar8 * 4 + 7) == iVar7) {
LAB_01370868:
            return *(undefined8 *)(unaff_x26 + 0xb8);
          }
        }
      }
      goto LAB_01370858;
    }
    dVar14 = *(double *)(param_2 + 3);
  }
  if (NAN(dVar14)) {
    for (; uVar8 < uVar4; uVar8 = uVar8 + 1) {
      uVar10 = unaff_x26 + (ulong)*(uint *)(param_1 + uVar8 * 4 + 7);
      if ((((uVar10 & 1) != 0) && (*(int *)(uVar10 - 1) == (int)*(undefined8 *)(unaff_x26 + 0x140)))
         && (NAN(*(double *)(uVar10 + 3)))) goto LAB_01370868;
    }
  }
  else {
    for (; uVar8 < uVar4; uVar8 = uVar8 + 1) {
      uVar10 = unaff_x26 + (ulong)*(uint *)(param_1 + uVar8 * 4 + 7);
      if ((uVar10 & 1) == 0) {
        dVar15 = (double)((int)uVar10 >> 1);
joined_r0x01370850:
        if (dVar14 == dVar15) goto LAB_01370868;
      }
      else if (*(int *)(uVar10 - 1) == (int)*(undefined8 *)(unaff_x26 + 0x140)) {
        dVar15 = *(double *)(uVar10 + 3);
        goto joined_r0x01370850;
      }
    }
  }
LAB_01370858:
  return *(undefined8 *)(unaff_x26 + 0xc0);
}

