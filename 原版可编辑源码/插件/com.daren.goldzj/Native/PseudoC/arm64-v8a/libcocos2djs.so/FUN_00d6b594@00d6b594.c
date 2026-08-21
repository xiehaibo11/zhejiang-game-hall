
void FUN_00d6b594(undefined8 *param_1,uint param_2,uint param_3,uint param_4,uint param_5,
                 uint param_6,int param_7)

{
  long lVar1;
  int iVar2;
  bool bVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  undefined4 uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  ulong uVar15;
  ulong uVar16;
  uint uVar17;
  ulong uVar18;
  undefined8 *puVar19;
  
  puVar19 = (undefined8 *)*param_1;
  uVar16 = (ulong)param_5;
  uVar15 = (ulong)param_4;
  uVar5 = *(uint *)((long)puVar19 + 0x14);
  uVar18 = (ulong)param_3;
  bVar3 = (uVar5 >> 1 & 1) == 0;
  bVar8 = param_3 != param_4;
  bVar9 = param_4 != param_5;
  bVar7 = bVar3 && (bVar8 || bVar9);
  if (0xff < param_2) {
                    /* WARNING: Subroutine does not return */
    png_error(*(undefined8 *)*puVar19,&DAT_0194b98c);
  }
  uVar13 = uVar5 >> 2 & 1;
  uVar5 = uVar5 & 4;
  iVar2 = uVar13 + 1;
  if ((param_7 == 3) && (param_7 = *(int *)(param_1 + 8), param_7 == 0)) {
    iVar6 = *(int *)(*(long *)*puVar19 + 0x510);
    iVar10 = png_gamma_significant(iVar6);
    if (iVar10 != 0) {
      if ((99999 < iVar6) ||
         ((iVar6 != 0 && (iVar10 = png_gamma_significant((iVar6 * 0xb + 2) / 5), iVar10 != 0)))) {
        *(undefined4 *)(param_1 + 8) = 3;
        uVar11 = png_reciprocal(iVar6);
        *(undefined4 *)((long)param_1 + 0x44) = uVar11;
        param_7 = *(int *)(param_1 + 8);
        goto LAB_00d6b6a8;
      }
      *(undefined4 *)(param_1 + 8) = 1;
      goto switchD_00d6b6c4_caseD_1;
    }
    *(undefined4 *)(param_1 + 8) = 4;
switchD_00d6b6c4_caseD_4:
    param_6 = param_6 * 0x101;
    bVar3 = !bVar3 || !bVar8 && !bVar9;
    uVar17 = param_3 * 0x101;
    uVar14 = param_4 * 0x101;
    uVar12 = param_5 * 0x101;
joined_r0x00d6b9b0:
    param_5 = uVar12;
    param_4 = uVar14;
    param_3 = uVar17;
    if (bVar3) {
LAB_00d6b9b4:
      if (uVar13 == 0) {
        uVar13 = param_3 * 0xff >> 0xf;
        uVar17 = param_4 * 0xff >> 0xf;
        uVar14 = param_5 * 0xff >> 0xf;
        uVar13 = (uint)*(ushort *)(png_sRGB_base + (ulong)uVar13 * 2) +
                 ((param_3 * 0xff & 0x7fff) * (uint)(byte)png_sRGB_delta[uVar13] >> 0xc);
        uVar17 = (uint)*(ushort *)(png_sRGB_base + (ulong)uVar17 * 2) +
                 ((param_4 * 0xff & 0x7fff) * (uint)(byte)png_sRGB_delta[uVar17] >> 0xc);
        uVar14 = (uint)*(ushort *)(png_sRGB_base + (ulong)uVar14 * 2) +
                 ((param_5 * 0xff & 0x7fff) * (uint)(byte)png_sRGB_delta[uVar14] >> 0xc);
        param_6 = param_6 * 0xff + 0x807f >> 0x10;
        goto LAB_00d6ba5c;
      }
      if (iVar2 != 2) goto LAB_00d6b9c4;
    }
    else {
LAB_00d6b760:
      iVar6 = uVar17 * 0x1b38 + uVar14 * 0x5b8a + uVar12 * 0x93e;
      if (uVar5 == 0) {
        uVar13 = (iVar6 + 0x80U >> 8) * 0xff + 0x40;
        uVar17 = uVar13 >> 0x16;
        param_7 = 1;
        param_5 = (uint)*(ushort *)(png_sRGB_base + (ulong)uVar17 * 2) +
                  ((uVar13 >> 7 & 0x7fff) * (uint)(byte)png_sRGB_delta[uVar17] >> 0xc) >> 8 & 0xff;
        param_4 = param_5;
        param_3 = param_5;
      }
      else {
        param_5 = iVar6 + 0x4000U >> 0xf;
        param_7 = 2;
        param_4 = param_5;
        param_3 = param_5;
      }
switchD_00d6b6c4_default:
      if (param_7 != iVar2) goto LAB_00d6b9c4;
    }
  }
  else {
LAB_00d6b6a8:
    switch(param_7) {
    case 1:
switchD_00d6b6c4_caseD_1:
      if (uVar5 != 0 || bVar3 && (bVar8 || bVar9)) {
        param_3 = (uint)(ushort)(&png_sRGB_table)[uVar18];
        uVar17 = (uint)(ushort)(&png_sRGB_table)[uVar18];
        param_4 = (uint)(ushort)(&png_sRGB_table)[uVar15];
        uVar14 = (uint)(ushort)(&png_sRGB_table)[uVar15];
        param_5 = (uint)(ushort)(&png_sRGB_table)[uVar16];
        uVar12 = (uint)(ushort)(&png_sRGB_table)[uVar16];
        param_6 = param_6 * 0x101;
        if (bVar7) goto LAB_00d6b760;
        goto LAB_00d6b9b4;
      }
      break;
    case 2:
switchD_00d6b6c4_caseD_2:
      bVar3 = !bVar3 || !bVar8 && !bVar9;
      uVar17 = param_3;
      uVar14 = param_4;
      uVar12 = param_5;
      goto joined_r0x00d6b9b0;
    case 3:
      uVar11 = *(undefined4 *)((long)param_1 + 0x44);
      param_3 = png_gamma_16bit_correct(param_3 * 0x101,uVar11);
      param_3 = param_3 & 0xffff;
      param_4 = png_gamma_16bit_correct(param_4 * 0x101,uVar11);
      param_4 = param_4 & 0xffff;
      param_5 = png_gamma_16bit_correct(param_5 * 0x101,uVar11);
      param_5 = param_5 & 0xffff;
      if (uVar5 != 0 || bVar7) {
        param_6 = param_6 * 0x101;
        goto switchD_00d6b6c4_caseD_2;
      }
      uVar13 = param_3 * 0xff >> 0xf;
      uVar17 = param_4 * 0xff >> 0xf;
      uVar14 = param_5 * 0xff >> 0xf;
      uVar13 = (uint)*(ushort *)(png_sRGB_base + (ulong)uVar13 * 2) +
               ((uint)(byte)png_sRGB_delta[uVar13] * (param_3 * 0xff & 0x7fff) >> 0xc);
      uVar17 = (uint)*(ushort *)(png_sRGB_base + (ulong)uVar17 * 2) +
               ((uint)(byte)png_sRGB_delta[uVar17] * (param_4 * 0xff & 0x7fff) >> 0xc);
      uVar14 = (uint)*(ushort *)(png_sRGB_base + (ulong)uVar14 * 2) +
               ((uint)(byte)png_sRGB_delta[uVar14] * (param_5 * 0xff & 0x7fff) >> 0xc);
LAB_00d6ba5c:
      param_3 = uVar13 >> 8 & 0xff;
      param_4 = uVar17 >> 8 & 0xff;
      param_5 = uVar14 >> 8 & 0xff;
      break;
    case 4:
      goto switchD_00d6b6c4_caseD_4;
    default:
      goto switchD_00d6b6c4_default;
    }
    if (iVar2 != 1) {
LAB_00d6b9c4:
                    /* WARNING: Subroutine does not return */
      png_error(*(undefined8 *)*puVar19,"bad encoding (internal error)");
    }
  }
  uVar17 = *(uint *)((long)puVar19 + 0x14);
  uVar14 = uVar17 & 0x21;
  uVar12 = (uint)(uVar14 == 0x21);
  uVar13 = uVar17 >> 3 & 2;
  if (uVar5 == 0) {
    uVar17 = uVar17 & 3;
    lVar1 = param_1[3] + (ulong)((uVar17 + 1) * param_2);
    if (uVar17 != 0) {
      if (uVar17 == 1) {
        uVar15 = (ulong)(uVar12 ^ 1);
        param_3 = param_4;
      }
      else {
        if (uVar17 != 2) {
          lVar4 = 0;
          if (uVar14 != 0x21) {
            lVar4 = 3;
          }
          *(char *)(lVar1 + lVar4) = (char)param_6;
        }
        uVar12 = uVar13 | uVar12;
        *(char *)(lVar1 + (ulong)(uVar12 ^ 2)) = (char)param_5;
        uVar15 = 1;
        param_6 = param_4;
        if (uVar14 == 0x21) {
          uVar15 = 2;
        }
      }
      param_4 = param_3;
      *(char *)(lVar1 + uVar15) = (char)param_6;
    }
    *(char *)(lVar1 + (int)uVar12) = (char)param_4;
    return;
  }
  uVar17 = uVar17 & 3;
  lVar1 = param_1[3] + (ulong)((uVar17 + 1) * param_2) * 2;
  if (uVar17 != 0) {
    if (uVar17 != 1) {
      if (uVar17 != 2) {
        lVar4 = 0;
        if (uVar14 != 0x21) {
          lVar4 = 6;
        }
        *(short *)(lVar1 + lVar4) = (short)param_6;
      }
      if (param_6 < 0xffff) {
        if (param_6 == 0) {
          param_5 = 0;
          param_4 = 0;
          param_3 = 0;
        }
        else {
          param_5 = (param_5 * param_6 + 0x7fff) / 0xffff;
          param_4 = (param_4 * param_6 + 0x7fff) / 0xffff;
          param_3 = (param_3 * param_6 + 0x7fff) / 0xffff;
        }
      }
      uVar12 = uVar13 | uVar12;
      lVar4 = 4;
      if (uVar14 != 0x21) {
        lVar4 = 2;
      }
      *(short *)(lVar1 + (ulong)(uVar12 ^ 2) * 2) = (short)param_5;
      *(short *)(lVar1 + lVar4) = (short)param_4;
      param_4 = param_3;
      goto LAB_00d6baa8;
    }
    *(short *)(lVar1 + (ulong)(uVar12 ^ 1) * 2) = (short)param_6;
  }
  if (param_6 < 0xffff) {
    if (param_6 == 0) {
      param_4 = 0;
    }
    else {
      param_4 = (param_4 * param_6 + 0x7fff) / 0xffff;
    }
  }
LAB_00d6baa8:
  *(short *)(lVar1 + (long)(int)uVar12 * 2) = (short)param_4;
  return;
}

