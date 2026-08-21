
ulong FUN_00de5130(long param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  byte bVar8;
  undefined1 uVar9;
  byte bVar10;
  ulong uVar11;
  int iVar12;
  long lVar13;
  size_t __n;
  size_t __n_00;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  uint uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  uint uVar22;
  int iVar23;
  int iVar24;
  long lVar25;
  long lVar26;
  int iVar27;
  
  iVar7 = *(int *)(param_1 + 0xd8);
  lVar15 = *(long *)(param_1 + 0xb28);
  iVar23 = *(int *)(param_1 + 0xb40);
  iVar12 = *(int *)(param_1 + 0xb44);
  lVar16 = *(long *)(param_1 + 0xb30);
  lVar17 = *(long *)(param_1 + 0xb38);
  iVar2 = *(int *)(param_1 + 0xdc);
  iVar3 = *(int *)(param_1 + 0x1ac);
  bVar10 = (&DAT_0196fa1c)[*(int *)(param_1 + 0xb68)];
  uVar18 = (uint)bVar10;
  if (*(int *)(param_1 + 200) == 2) {
    FUN_00de485c(param_1);
  }
  __n = (size_t)(int)(iVar23 * uVar18);
  __n_00 = (size_t)(int)(iVar12 * (uint)(bVar10 >> 1));
  if (*(int *)(param_1 + 0xe0) != 0) {
    iVar24 = *(int *)(param_1 + 0x1a0);
    lVar20 = (long)iVar24;
    if (iVar24 < *(int *)(param_1 + 0x1a8)) {
      iVar4 = *(int *)(param_1 + 0xdc);
      lVar19 = lVar20 << 2;
      iVar27 = iVar24 << 3;
      iVar24 = iVar24 << 4;
      do {
        lVar21 = *(long *)(param_1 + 0xe8);
        bVar10 = *(byte *)(lVar21 + lVar19);
        if (bVar10 != 0) {
          iVar5 = *(int *)(param_1 + 0xb40);
          lVar26 = *(long *)(param_1 + 0xb28) + (long)(*(int *)(param_1 + 0xd8) * iVar5 * 0x10) +
                   (long)iVar24;
          uVar22 = (uint)bVar10;
          if (*(int *)(param_1 + 0xb68) == 1) {
            if (0 < lVar20) {
              (*DAT_01d54528)(lVar26,iVar5,uVar22 + 4);
            }
            if (*(char *)(lVar21 + lVar19 + 2) != '\0') {
              (*DAT_01d54628)(lVar26,iVar5,uVar22);
            }
            if (0 < iVar4) {
              (*DAT_01d545b8)(lVar26,iVar5,uVar22 + 4);
            }
            if (*(char *)(lVar21 + lVar19 + 2) != '\0') {
              (*DAT_01d545e8)(lVar26,iVar5,bVar10);
            }
          }
          else {
            iVar6 = *(int *)(param_1 + 0xb44);
            bVar8 = ((byte *)(lVar21 + lVar19))[1];
            lVar21 = lVar21 + lVar19;
            uVar9 = *(undefined1 *)(lVar21 + 3);
            lVar13 = (long)(*(int *)(param_1 + 0xd8) * iVar6 * 8);
            lVar25 = *(long *)(param_1 + 0xb30) + lVar13 + (long)iVar27;
            lVar13 = *(long *)(param_1 + 0xb38) + lVar13 + (long)iVar27;
            if (0 < lVar20) {
              iVar1 = bVar10 + 4;
              (*DAT_01d544f8)(lVar26,iVar5,iVar1,bVar8,uVar9);
              (*DAT_01d54630)(lVar25,lVar13,iVar6,iVar1,bVar8,uVar9);
            }
            if (*(char *)(lVar21 + 2) != '\0') {
              (*DAT_01d545c0)(lVar26,iVar5,bVar10,bVar8,uVar9);
              (*DAT_01d544e8)(lVar25,lVar13,iVar6,bVar10,bVar8,uVar9);
            }
            if (0 < iVar4) {
              (*DAT_01d545c8)(lVar26,iVar5,uVar22 + 4,bVar8,uVar9);
              (*DAT_01d54500)(lVar25,lVar13,iVar6,uVar22 + 4,bVar8,uVar9);
            }
            if (*(char *)(lVar21 + 2) != '\0') {
              (*DAT_01d54508)(lVar26,iVar5,uVar22,bVar8,uVar9);
              (*DAT_01d54520)(lVar25,lVar13,iVar6,uVar22,bVar8,uVar9);
            }
          }
        }
        lVar20 = lVar20 + 1;
        lVar19 = lVar19 + 4;
        iVar27 = iVar27 + 8;
        iVar24 = iVar24 + 0x10;
      } while (lVar20 < *(int *)(param_1 + 0x1a8));
    }
  }
  lVar20 = (long)(iVar7 * iVar23 * 0x10);
  lVar19 = (long)(iVar7 * iVar12 * 8);
  if (*(int *)(param_1 + 0x338) != 0) {
    iVar23 = *(int *)(param_1 + 0x1a0);
    lVar21 = (long)iVar23;
    iVar12 = *(int *)(param_1 + 0x1a8);
    if (iVar23 < iVar12) {
      iVar23 = iVar23 << 3;
      lVar26 = lVar21 * 800 + 0x31c;
      do {
        lVar25 = *(long *)(param_1 + 0xf0);
        if (3 < *(byte *)(lVar25 + lVar26)) {
          iVar12 = *(int *)(param_1 + 0xb44);
          lVar14 = *(long *)(param_1 + 0xb38);
          lVar13 = (long)(iVar12 * *(int *)(param_1 + 0xd8) * 8);
          FUN_00de5e28(param_1 + 0x33c,*(long *)(param_1 + 0xb30) + lVar13 + (long)iVar23,iVar12);
          FUN_00de5e28(param_1 + 0x33c,lVar14 + lVar13 + (long)iVar23,iVar12,
                       *(undefined1 *)(lVar25 + lVar26));
          iVar12 = *(int *)(param_1 + 0x1a8);
        }
        lVar21 = lVar21 + 1;
        iVar23 = iVar23 + 8;
        lVar26 = lVar26 + 800;
      } while (lVar21 < iVar12);
    }
  }
  lVar15 = (lVar15 - __n) + lVar20;
  lVar16 = (lVar16 - __n_00) + lVar19;
  lVar17 = (lVar17 - __n_00) + lVar19;
  iVar3 = iVar3 + -1;
  if (*(long *)(param_2 + 0x10) != 0) {
    if (iVar2 == 0) {
      lVar20 = *(long *)(param_1 + 0xb28) + lVar20;
      lVar21 = *(long *)(param_1 + 0xb30) + lVar19;
      lVar19 = *(long *)(param_1 + 0xb38) + lVar19;
      iVar23 = 0;
    }
    else {
      iVar23 = iVar2 * 0x10 - uVar18;
      lVar20 = lVar15;
      lVar21 = lVar16;
      lVar19 = lVar17;
    }
    *(long *)(param_2 + 6) = lVar20;
    *(long *)(param_2 + 8) = lVar21;
    *(long *)(param_2 + 10) = lVar19;
    param_2[0x26] = 0;
    param_2[0x27] = 0;
    iVar12 = 0;
    if (iVar2 < iVar3) {
      iVar12 = -uVar18;
    }
    iVar12 = iVar2 * 0x10 + 0x10 + iVar12;
    lVar20 = 0;
    iVar24 = param_2[0x21];
    if (iVar12 <= param_2[0x21]) {
      iVar24 = iVar12;
    }
    if ((*(long *)(param_1 + 0xb98) != 0) && (iVar24 - iVar23 != 0 && iVar23 <= iVar24)) {
      lVar20 = FUN_00e03c28(param_1,iVar23,iVar24 - iVar23);
      *(long *)(param_2 + 0x26) = lVar20;
      if (lVar20 == 0) {
        uVar11 = FUN_00de77ec(param_1,3,"Could not decode alpha data.");
        return uVar11;
      }
    }
    iVar12 = param_2[0x20];
    uVar18 = iVar12 - iVar23;
    if (uVar18 != 0 && iVar23 <= iVar12) {
      *(long *)(param_2 + 6) =
           *(long *)(param_2 + 6) + (long)*(int *)(param_1 + 0xb40) * (long)(int)uVar18;
      lVar19 = (long)*(int *)(param_1 + 0xb44) * ((long)((ulong)uVar18 << 0x20) >> 0x21);
      *(long *)(param_2 + 8) = *(long *)(param_2 + 8) + lVar19;
      *(long *)(param_2 + 10) = *(long *)(param_2 + 10) + lVar19;
      iVar23 = iVar12;
      if (lVar20 != 0) {
        lVar20 = lVar20 + (long)*param_2 * (long)(int)uVar18;
        *(long *)(param_2 + 0x26) = lVar20;
      }
    }
    if (iVar24 - iVar23 != 0 && iVar23 <= iVar24) {
      lVar21 = (long)param_2[0x1e];
      lVar19 = (lVar21 << 0x20) >> 0x21;
      *(long *)(param_2 + 6) = *(long *)(param_2 + 6) + lVar21;
      *(long *)(param_2 + 8) = *(long *)(param_2 + 8) + lVar19;
      *(long *)(param_2 + 10) = *(long *)(param_2 + 10) + lVar19;
      if (lVar20 != 0) {
        *(long *)(param_2 + 0x26) = lVar20 + lVar21;
      }
      param_2[2] = iVar23 - iVar12;
      param_2[3] = param_2[0x1f] - param_2[0x1e];
      param_2[4] = iVar24 - iVar23;
      uVar11 = (**(code **)(param_2 + 0x10))(param_2);
      uVar11 = uVar11 & 0xffffffff;
      goto joined_r0x00de5730;
    }
  }
  uVar11 = 1;
joined_r0x00de5730:
  if ((iVar2 < iVar3) && (iVar7 + 1 == *(int *)(param_1 + 0xd0))) {
    memcpy((void *)(*(long *)(param_1 + 0xb28) - __n),
           (void *)(lVar15 + (long)*(int *)(param_1 + 0xb40) * 0x10),__n);
    memcpy((void *)(*(long *)(param_1 + 0xb30) + -__n_00),
           (void *)(lVar16 + (long)*(int *)(param_1 + 0xb44) * 8),__n_00);
    memcpy((void *)(*(long *)(param_1 + 0xb38) + -__n_00),
           (void *)(lVar17 + (long)*(int *)(param_1 + 0xb44) * 8),__n_00);
  }
  return uVar11;
}

