
ulong FUN_01370d60(long param_1,ulong param_2,long param_3,long param_4)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ulong uVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long unaff_x26;
  double dVar13;
  double dVar14;
  
  iVar7 = (int)param_2;
  if ((param_2 & 1) == 0) {
    dVar13 = (double)(iVar7 >> 1);
  }
  else {
    lVar11 = unaff_x26 + (ulong)*(uint *)(param_2 - 1);
    if ((int)lVar11 != (int)*(undefined8 *)(unaff_x26 + 0x140)) {
      uVar1 = *(ushort *)(lVar11 + 7);
      uVar4 = (param_3 << 0x20) >> 0x21;
      uVar8 = (param_4 << 0x20) >> 0x21;
      if (uVar1 < 0x40) {
        uVar9 = (ulong)*(uint *)(param_2 + 7);
        do {
          if (uVar4 <= uVar8) {
            return 0xfffffffffffffffe;
          }
          uVar12 = unaff_x26 + (ulong)*(uint *)(param_1 + uVar8 * 4 + 7);
          if ((uVar12 & 1) != 0) {
            if (iVar7 == (int)uVar12) goto LAB_013710b8;
            uVar2 = *(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar12 - 1) + 7);
            if (((uVar2 < 0x40) && (uVar9 == *(uint *)(uVar12 + 7))) &&
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
                  lVar11 = param_2 + 0xb;
                }
                else {
                  lVar11 = *(long *)(param_2 + 0x13);
                }
                if (bVar5) {
                  lVar10 = uVar12 + 0xb;
                }
                else {
                  lVar10 = *(long *)(uVar12 + 0x13);
                }
                uVar12 = 0;
                while( true ) {
                  if (uVar12 == uVar9) goto LAB_013710b8;
                  if (*(char *)(lVar11 + uVar12) != *(char *)(lVar10 + uVar12)) break;
                  uVar12 = uVar12 + 1;
                }
              }
              else if (uVar3 == 0) {
                if (bVar6) {
                  lVar11 = param_2 + 0xb;
                }
                else {
                  lVar11 = *(long *)(param_2 + 0x13);
                }
                if (bVar5) {
                  lVar10 = uVar12 + 0xb;
                }
                else {
                  lVar10 = *(long *)(uVar12 + 0x13);
                }
                uVar12 = 0;
                while( true ) {
                  if (uVar12 == uVar9) goto LAB_013710b8;
                  if (*(short *)(lVar11 + uVar12 * 2) != *(short *)(lVar10 + uVar12 * 2)) break;
                  uVar12 = uVar12 + 1;
                }
              }
              else if (uVar3 == 8) {
                if (bVar6) {
                  lVar11 = param_2 + 0xb;
                }
                else {
                  lVar11 = *(long *)(param_2 + 0x13);
                }
                if (bVar5) {
                  lVar10 = uVar12 + 0xb;
                }
                else {
                  lVar10 = *(long *)(uVar12 + 0x13);
                }
                uVar12 = 0;
                while( true ) {
                  if (uVar12 == uVar9) goto LAB_013710b8;
                  if ((ushort)*(byte *)(lVar11 + uVar12) != *(ushort *)(lVar10 + uVar12 * 2)) break;
                  uVar12 = uVar12 + 1;
                }
              }
              else {
                if (bVar6) {
                  lVar11 = param_2 + 0xb;
                }
                else {
                  lVar11 = *(long *)(param_2 + 0x13);
                }
                if (bVar5) {
                  lVar10 = uVar12 + 0xb;
                }
                else {
                  lVar10 = *(long *)(uVar12 + 0x13);
                }
                uVar12 = 0;
                while( true ) {
                  if (uVar12 == uVar9) goto LAB_013710b8;
                  if (*(ushort *)(lVar11 + uVar12 * 2) != (ushort)*(byte *)(lVar10 + uVar12)) break;
                  uVar12 = uVar12 + 1;
                }
              }
            }
          }
          uVar8 = uVar8 + 1;
        } while( true );
      }
      if (uVar1 == 0x41) {
        while( true ) {
          if (uVar4 <= uVar8) {
            return 0xfffffffffffffffe;
          }
          uVar9 = unaff_x26 + (ulong)*(uint *)(param_1 + uVar8 * 4 + 7);
          if (((uVar9 & 1) != 0) &&
             (*(short *)(unaff_x26 + (ulong)*(uint *)(uVar9 - 1) + 7) == 0x41)) break;
          uVar8 = uVar8 + 1;
        }
                    /* WARNING: Subroutine does not return */
        FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x1c10));
      }
      while( true ) {
        if (uVar4 <= uVar8) {
          return 0xfffffffffffffffe;
        }
        if (*(int *)(param_1 + uVar8 * 4 + 7) == iVar7) break;
        uVar8 = uVar8 + 1;
      }
LAB_013710b8:
      return (ulong)(uint)((int)uVar8 * 2);
    }
    dVar13 = *(double *)(param_2 + 3);
  }
  if (!NAN(dVar13)) {
    for (uVar8 = (param_4 << 0x20) >> 0x21; uVar8 < (ulong)((param_3 << 0x20) >> 0x21);
        uVar8 = uVar8 + 1) {
      uVar4 = unaff_x26 + (ulong)*(uint *)(param_1 + uVar8 * 4 + 7);
      if ((uVar4 & 1) == 0) {
        dVar14 = (double)((int)uVar4 >> 1);
joined_r0x013710a0:
        if (dVar13 == dVar14) goto LAB_013710b8;
      }
      else if (*(int *)(uVar4 - 1) == (int)*(undefined8 *)(unaff_x26 + 0x140)) {
        dVar14 = *(double *)(uVar4 + 3);
        goto joined_r0x013710a0;
      }
    }
  }
  return 0xfffffffffffffffe;
}

