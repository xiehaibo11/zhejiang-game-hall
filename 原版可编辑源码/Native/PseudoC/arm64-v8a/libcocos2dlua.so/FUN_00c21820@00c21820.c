
/* WARNING: Type propagation algorithm not settling */

void FUN_00c21820(long *param_1,uint *param_2,uint *param_3,float *param_4,double *******param_5,
                 uint param_6)

{
  ulong uVar1;
  ushort uVar2;
  bool bVar4;
  float fVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  float *pfVar9;
  double ******ppppppdVar10;
  long lVar11;
  uint uVar12;
  undefined *puVar13;
  double *******pppppppdVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  byte bVar18;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  undefined8 uVar19;
  byte bVar26;
  byte bVar27;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  undefined8 uVar28;
  byte bVar35;
  double ******ppppppdVar36;
  double *******local_8;
  ushort uVar3;
  
  uVar15 = *param_2;
  uVar16 = param_2[1];
  uVar17 = param_3[1];
  uVar6 = *param_3;
  if ((3 < uVar15 >> 0x1c) || (3 < uVar6 >> 0x1c)) goto switchD_00c21940_caseD_3;
  uVar2 = (ushort)uVar6;
  uVar3 = (ushort)uVar15;
  pppppppdVar14 = param_5;
  switch(((uint)(0xf436fff5fff7f021 >> ((ulong)((uVar15 >> 0x1a) << 2) & 0x3f)) & 0xf) * 8 +
         ((uint)(0xf436fff5fff7f021 >> ((ulong)((uVar6 >> 0x1a) << 2) & 0x3f)) & 0xf)) {
  case 0:
    ppppppdVar10 = (double ******)(ulong)*(byte *)param_5;
    fVar5 = (float)(uint)*(byte *)param_5;
    if (uVar16 != 1) goto LAB_00c21c74;
    goto LAB_00c21b08;
  case 1:
    bVar4 = false;
    ppppppdVar10 = (double ******)0x0;
    if (uVar17 != 0) {
      uVar15 = (uVar17 - 0x10 >> 4) + 1;
      uVar6 = uVar15 * 0x10;
      if (uVar17 - 1 < 0x19) {
        bVar35 = 0;
        uVar6 = 0;
LAB_00c21d64:
        do {
          uVar1 = (ulong)uVar6;
          uVar6 = uVar6 + 1;
          bVar35 = *(byte *)((long)param_5 + uVar1) | bVar35;
        } while (uVar6 < uVar17);
      }
      else {
        uVar19 = 0;
        uVar28 = 0;
        uVar12 = 0;
        do {
          ppppppdVar36 = pppppppdVar14[1];
          ppppppdVar10 = *pppppppdVar14;
          uVar12 = uVar12 + 1;
          bVar18 = (byte)uVar19 | (byte)ppppppdVar10;
          bVar20 = (byte)((ulong)uVar19 >> 8) | (byte)((ulong)ppppppdVar10 >> 8);
          bVar21 = (byte)((ulong)uVar19 >> 0x10) | (byte)((ulong)ppppppdVar10 >> 0x10);
          bVar22 = (byte)((ulong)uVar19 >> 0x18) | (byte)((ulong)ppppppdVar10 >> 0x18);
          bVar23 = (byte)((ulong)uVar19 >> 0x20) | (byte)((ulong)ppppppdVar10 >> 0x20);
          bVar24 = (byte)((ulong)uVar19 >> 0x28) | (byte)((ulong)ppppppdVar10 >> 0x28);
          bVar25 = (byte)((ulong)uVar19 >> 0x30) | (byte)((ulong)ppppppdVar10 >> 0x30);
          bVar26 = (byte)((ulong)uVar19 >> 0x38) | (byte)((ulong)ppppppdVar10 >> 0x38);
          uVar19 = CONCAT17(bVar26,CONCAT16(bVar25,CONCAT15(bVar24,CONCAT14(bVar23,CONCAT13(bVar22,
                                                  CONCAT12(bVar21,CONCAT11(bVar20,bVar18)))))));
          bVar27 = (byte)uVar28 | (byte)ppppppdVar36;
          bVar29 = (byte)((ulong)uVar28 >> 8) | (byte)((ulong)ppppppdVar36 >> 8);
          bVar30 = (byte)((ulong)uVar28 >> 0x10) | (byte)((ulong)ppppppdVar36 >> 0x10);
          bVar31 = (byte)((ulong)uVar28 >> 0x18) | (byte)((ulong)ppppppdVar36 >> 0x18);
          bVar32 = (byte)((ulong)uVar28 >> 0x20) | (byte)((ulong)ppppppdVar36 >> 0x20);
          bVar33 = (byte)((ulong)uVar28 >> 0x28) | (byte)((ulong)ppppppdVar36 >> 0x28);
          bVar34 = (byte)((ulong)uVar28 >> 0x30) | (byte)((ulong)ppppppdVar36 >> 0x30);
          bVar35 = (byte)((ulong)uVar28 >> 0x38) | (byte)((ulong)ppppppdVar36 >> 0x38);
          uVar28 = CONCAT17(bVar35,CONCAT16(bVar34,CONCAT15(bVar33,CONCAT14(bVar32,CONCAT13(bVar31,
                                                  CONCAT12(bVar30,CONCAT11(bVar29,bVar27)))))));
          pppppppdVar14 = pppppppdVar14 + 2;
        } while (uVar12 < uVar15);
        bVar35 = bVar20 | bVar18 | bVar21 | bVar22 | bVar23 | bVar24 | bVar25 | bVar26 | bVar27 |
                 bVar29 | bVar30 | bVar31 | bVar32 | bVar33 | bVar34 | bVar35;
        if (uVar17 != uVar6) goto LAB_00c21d64;
      }
      bVar4 = bVar35 != 0;
      ppppppdVar10 = (double ******)(ulong)bVar4;
    }
    if (uVar16 == 1) {
      *(bool *)param_4 = bVar4;
      return;
    }
LAB_00c21c74:
    *param_4 = SUB84(ppppppdVar10,0);
    return;
  case 2:
    if (uVar17 == 8) {
      bVar4 = (double)*param_5 == 0.0;
    }
    else {
      if (uVar17 != 4) break;
      bVar4 = *(float *)param_5 == 0.0;
    }
    fVar5 = (float)(uint)!bVar4;
    if (uVar16 != 1) {
      *param_4 = fVar5;
      return;
    }
    goto LAB_00c21b08;
  case 8:
  case 9:
    goto switchD_00c21940_caseD_8;
  case 10:
    goto switchD_00c21940_caseD_a;
  case 0xb:
    param_3 = (uint *)(*param_1 + (ulong)uVar2 * 0x18);
    uVar17 = param_3[1];
    goto switchD_00c21940_caseD_a;
  case 0xd:
    if ((param_6 & 1) == 0) break;
    goto LAB_00c21b1c;
  case 0xe:
    if ((param_6 & 1) == 0) break;
    uVar17 = 8;
    pppppppdVar14 = (double *******)&local_8;
    local_8 = param_5;
LAB_00c21b1c:
    iVar7 = 0;
    param_5 = pppppppdVar14;
    if (uVar16 <= uVar17) goto LAB_00c21b28;
    goto LAB_00c2196c;
  case 0x10:
  case 0x11:
    goto switchD_00c21940_caseD_10;
  case 0x12:
    goto switchD_00c21940_caseD_12;
  case 0x13:
    param_3 = (uint *)(*param_1 + (ulong)uVar2 * 0x18);
    uVar17 = param_3[1];
    goto switchD_00c21940_caseD_12;
  case 0x19:
    param_2 = (uint *)(*param_1 + (ulong)uVar3 * 0x18);
    uVar16 = param_2[1];
    memset((void *)((long)param_4 + (ulong)uVar16),0,(ulong)uVar16);
switchD_00c21940_caseD_10:
    if (uVar17 < 4) {
      if ((uVar6 >> 0x17 & 1) == 0) {
        if (uVar17 == 2) {
          ppppppdVar10 = (double ******)(double)(int)*(short *)param_5;
        }
        else {
          ppppppdVar10 = (double ******)(double)(int)*(char *)param_5;
        }
      }
      else if (uVar17 == 2) {
        ppppppdVar10 = (double ******)(double)*(ushort *)param_5;
      }
      else {
        ppppppdVar10 = (double ******)(double)*(byte *)param_5;
      }
    }
    else if (uVar17 == 4) {
      if ((uVar6 >> 0x17 & 1) == 0) {
        ppppppdVar10 = (double ******)(double)(int)*(uint *)param_5;
      }
      else {
        ppppppdVar10 = (double ******)(double)*(uint *)param_5;
      }
    }
    else {
      if (uVar17 != 8) break;
      if ((uVar6 >> 0x17 & 1) == 0) {
        ppppppdVar10 = (double ******)(double)(long)*param_5;
      }
      else {
        ppppppdVar10 = (double ******)(double)*param_5;
      }
    }
    goto LAB_00c21a3c;
  case 0x1a:
    param_2 = (uint *)(*param_1 + (ulong)uVar3 * 0x18);
    uVar16 = param_2[1];
    memset((void *)((long)param_4 + (ulong)uVar16),0,(ulong)uVar16);
switchD_00c21940_caseD_12:
    if (uVar17 == uVar16) {
LAB_00c21ad4:
      memcpy(param_4,param_5,(ulong)uVar17);
      return;
    }
    if (uVar17 == 8) {
      ppppppdVar10 = *param_5;
    }
    else {
      if (uVar17 != 4) break;
      ppppppdVar10 = (double ******)(double)*(float *)param_5;
    }
LAB_00c21a3c:
    if (uVar16 == 8) {
      *(double *******)param_4 = ppppppdVar10;
      return;
    }
    if (uVar16 == 4) {
      *param_4 = (float)(double)ppppppdVar10;
      return;
    }
    break;
  case 0x1b:
    if (uVar16 != uVar17) {
      lVar8 = *param_1 + (ulong)uVar3 * 0x18;
      lVar11 = *param_1 + (ulong)uVar2 * 0x18;
      FUN_00c21820(param_1,lVar8,lVar11,param_4,param_5,param_6);
      FUN_00c21820(param_1,lVar8,lVar11,(long)param_4 + (ulong)*(uint *)(lVar8 + 4),
                   (long)param_5 + (ulong)*(uint *)(lVar11 + 4),param_6);
      return;
    }
    goto LAB_00c21ad4;
  case 0x21:
  case 0x22:
  case 0x23:
    lVar8 = *param_1 + (ulong)uVar3 * 0x18;
    FUN_00c21820(param_1,lVar8,param_3,param_4,param_5,param_6);
    uVar15 = *(uint *)(lVar8 + 4);
    if (uVar16 <= uVar15) {
      return;
    }
    pfVar9 = param_4;
    do {
      uVar16 = uVar16 - uVar15;
      pfVar9 = memcpy((void *)((long)pfVar9 + (ulong)uVar15),param_4,(ulong)uVar15);
    } while (uVar15 < uVar16);
    return;
  case 0x24:
    if (uVar16 == uVar17) goto LAB_00c21ad4;
    break;
  case 0x29:
    if ((param_6 & 1) == 0) break;
switchD_00c21940_caseD_8:
    if (uVar16 <= uVar17) {
LAB_00c21b28:
      memcpy(param_4,pppppppdVar14,(ulong)uVar16);
      return;
    }
    iVar7 = 0;
    if (((uVar6 >> 0x17 & 1) == 0) &&
       (iVar7 = 0, *(char *)((long)param_5 + (ulong)(uVar17 - 1)) < '\0')) {
      iVar7 = 0xff;
    }
LAB_00c2196c:
    memcpy(param_4,param_5,(ulong)uVar17);
    memset((void *)((long)param_4 + (ulong)uVar17),iVar7,(ulong)(uVar16 - uVar17));
    return;
  case 0x2a:
    if ((param_6 & 3) != 3) break;
    uVar15 = 0;
    if (uVar16 != 8) {
      uVar15 = 0x800000;
    }
switchD_00c21940_caseD_a:
    if (uVar17 == 8) {
      ppppppdVar10 = *param_5;
    }
    else {
      if (uVar17 != 4) break;
      ppppppdVar10 = (double ******)(double)*(float *)param_5;
    }
    if (uVar16 < 4) {
      fVar5 = (float)(int)(double)ppppppdVar10;
      if (uVar16 == 2) {
        *(short *)param_4 = SUB42(fVar5,0);
      }
      else {
LAB_00c21b08:
        *(char *)param_4 = SUB41(fVar5,0);
      }
    }
    else if (uVar16 == 4) {
      if ((uVar15 >> 0x17 & 1) == 0) {
        *param_4 = (float)(int)(double)ppppppdVar10;
      }
      else {
        *param_4 = (float)(int)(double)ppppppdVar10;
      }
    }
    else {
      if (uVar16 != 8) break;
      if ((uVar15 >> 0x17 & 1) == 0) {
        *(long *)param_4 = (long)(double)ppppppdVar10;
      }
      else {
        *(long *)param_4 = (long)(double)ppppppdVar10;
      }
    }
    return;
  case 0x2d:
    if (((param_2 == param_3) || ((param_6 & 1) != 0)) ||
       (iVar7 = FUN_00c216e0(param_1,param_2,param_3,param_6), iVar7 != 0)) {
      if (uVar17 == 4) {
        ppppppdVar10 = (double ******)(ulong)*(uint *)param_5;
      }
      else {
        ppppppdVar10 = *param_5;
      }
      if (uVar16 != 4) {
        *(double *******)param_4 = ppppppdVar10;
        return;
      }
      goto LAB_00c21c74;
    }
    break;
  case 0x2e:
  case 0x2f:
    if ((param_2 == param_3) ||
       (((param_6 & 1) != 0 || (iVar7 = FUN_00c216e0(param_1,param_2,param_3,param_6), iVar7 != 0)))
       ) {
      if (uVar16 != 4) {
        *(double ********)param_4 = param_5;
        return;
      }
      *param_4 = SUB84(param_5,0);
      return;
    }
    break;
  case 0x36:
    if ((((param_6 & 1) == 0) && (uVar16 != 0xffffffff)) &&
       ((uVar16 == uVar17 && (uVar15 >> 0x14 & 1) == 0 &&
        ((uVar17 = uVar16, param_2 == param_3 ||
         (iVar7 = FUN_00c216e0(param_1,param_2,param_3,param_6), iVar7 != 0)))))) goto LAB_00c21ad4;
    break;
  case 0x3f:
    if ((((param_6 & 1) == 0) && (param_2 == param_3)) &&
       (uVar17 = uVar16, (uVar15 >> 0x14 & 1) == 0)) goto LAB_00c21ad4;
  }
switchD_00c21940_caseD_3:
  lVar8 = FUN_00c0ee70(param_1[2],(int)((long)param_2 - *param_1 >> 3) * -0x55555555,0);
  if ((param_6 >> 1 & 1) == 0) {
    lVar11 = FUN_00c0ee70(param_1[2],(int)((long)param_3 - *param_1 >> 3) * -0x55555555,0);
    puVar13 = (undefined *)(lVar11 + 0x18);
  }
  else {
    iVar7 = 4;
    if ((*param_3 >> 0x1c != 0) && (iVar7 = 5, *param_3 >> 0x1c != 3)) {
      iVar7 = 1;
    }
    puVar13 = (&PTR_s_no_value_01697180)[iVar7];
  }
  if (param_6 >> 8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00bfb308(param_1[2],0xc62,puVar13,lVar8 + 0x18);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00bfb3b8(param_1[2],param_6 >> 8,0xc62);
}

