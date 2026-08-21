
/* WARNING: Removing unreachable block (ram,0x01067190) */
/* WARNING: Removing unreachable block (ram,0x01067460) */
/* v8::internal::FastDtoa(double, v8::internal::FastDtoaMode, int, v8::internal::Vector<char>, int*,
   int*) */

void __thiscall
v8::internal::FastDtoa
          (ulong param_1,int param_2,int param_3,char *param_4,undefined8 param_5,int *param_6,
          int *param_7)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  long lVar4;
  bool bVar5;
  undefined8 uVar6;
  int iVar7;
  char *pcVar8;
  ulong uVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  uint uVar15;
  long lVar16;
  int iVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong local_90;
  ulong local_88;
  int local_80;
  int local_7c;
  undefined8 local_78;
  undefined4 local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  uVar15 = (uint)(param_1 >> 0x20);
  if (param_2 != 1) {
    if (param_2 != 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    uVar15 = uVar15 >> 0x14 & 0x7ff;
    bVar5 = (param_1 & 0x7ff0000000000000) != 0;
    uVar23 = param_1 & 0xfffffffffffff;
    if (bVar5) {
      uVar23 = param_1 & 0xfffffffffffff | 0x10000000000000;
    }
    iVar10 = -0x432;
    if (bVar5) {
      iVar10 = uVar15 - 0x433;
    }
    uVar21 = uVar23 >> 0x34;
    uVar24 = uVar23;
    while (uVar21 == 0) {
      iVar10 = iVar10 + -1;
      uVar21 = uVar24 >> 0x33 & 1;
      uVar24 = uVar24 << 1;
    }
    iVar7 = -0x432;
    if ((param_1 & 0x7ff0000000000000) != 0) {
      iVar7 = uVar15 - 0x433;
    }
    uVar21 = uVar23 << 1 | 1;
    iVar17 = iVar7 + -1;
    do {
      uVar9 = uVar21;
      iVar17 = iVar17 + -10;
      uVar21 = uVar9 << 10;
    } while (uVar9 >> 0x2c == 0);
    uVar21 = (uVar9 & 0x3fffffffffffff) >> 0x35;
    uVar9 = uVar9 << 10;
    while (uVar21 == 0) {
      iVar17 = iVar17 + -1;
      uVar21 = (uVar9 & 0x7fffffffffffffff) >> 0x3e;
      uVar9 = uVar9 << 1;
    }
    lVar12 = uVar23 * 2 + -1;
    iVar11 = iVar7 + -1;
    if (uVar23 == 0x10000000000000 && iVar7 != -0x432) {
      lVar12 = 0x3fffffffffffff;
      iVar11 = iVar7 + -2;
    }
    local_78 = 0;
    local_70 = 0;
    PowersOfTenCache::GetCachedPowerForBinaryExponentRange
              (-0x71 - iVar10,-0x55 - iVar10,(DiyFp *)&local_78,&local_80);
    local_90 = uVar24 << 0xb;
    local_88 = (ulong)(iVar10 - 0xb);
    DiyFp::Multiply((DiyFp *)&local_90,(DiyFp *)&local_78);
    uVar24 = local_90;
    iVar10 = (int)local_88;
    local_90 = lVar12 << ((ulong)(uint)(iVar11 - iVar17) & 0x3f);
    local_88._0_4_ = iVar17;
    DiyFp::Multiply((DiyFp *)&local_90,(DiyFp *)&local_78);
    uVar14 = local_90;
    local_88 = CONCAT44(local_88._4_4_,iVar17);
    local_90 = uVar9;
    DiyFp::Multiply((DiyFp *)&local_90,(DiyFp *)&local_78);
    uVar9 = local_90;
    uVar19 = (ulong)(uint)-iVar10;
    uVar22 = 1L << (uVar19 & 0x3f);
    uVar23 = local_90 + 1;
    uVar20 = uVar23 >> (uVar19 & 0x3f);
    uVar25 = uVar23 & uVar22 - 1;
    uVar21 = (uVar23 - uVar14) + 1;
    FUN_0106754c(uVar20 & 0xffffffff,iVar10 + 0x40,&local_90,&local_7c);
    iVar10 = 0;
    *param_6 = 0;
    if (-1 < local_7c) {
      uVar13 = local_90 & 0xffffffff;
      iVar7 = local_7c;
      do {
        cVar2 = '\0';
        uVar15 = (uint)uVar20;
        if ((uint)uVar13 != 0) {
          cVar2 = (char)(uVar15 / (uint)uVar13);
        }
        param_4[iVar10] = cVar2 + '0';
        iVar17 = *param_6;
        iVar10 = iVar17 + 1;
        *param_6 = iVar10;
        uVar3 = 0;
        if ((uint)local_90 != 0) {
          uVar3 = uVar15 / (uint)local_90;
        }
        uVar20 = (ulong)(uVar15 - uVar3 * (uint)local_90);
        uVar13 = (uVar20 << (uVar19 & 0x3f)) + uVar25;
        if (uVar13 < uVar21) {
          uVar9 = (local_90 & 0xffffffff) << (uVar19 & 0x3f);
          uVar19 = (uVar23 - uVar24) - 1;
          bVar5 = uVar21 - uVar13 < uVar9;
          uVar24 = (uVar23 - uVar24) + 1;
          if (uVar19 <= uVar13) goto LAB_01067438;
          uVar20 = uVar13;
          if (uVar21 - uVar13 < uVar9) goto LAB_01067468;
          goto LAB_01067328;
        }
        local_7c = iVar7 + -1;
        uVar13 = (local_90 & 0xffffffff) / 10;
        local_90 = CONCAT44(local_90._4_4_,(uint)local_90 / 10);
        bVar5 = 0 < iVar7;
        iVar7 = local_7c;
      } while (bVar5);
    }
    iVar7 = local_7c + 1;
    lVar12 = 1;
    uVar13 = uVar25;
    do {
      uVar14 = uVar21;
      lVar16 = lVar12;
      param_4[iVar10] = (char)(uVar13 * 10 >> (uVar19 & 0x3f)) + '0';
      iVar17 = *param_6;
      uVar21 = uVar14 * 10;
      uVar13 = uVar13 * 10 & uVar22 - 1;
      lVar12 = lVar16 * 10;
      iVar10 = iVar17 + 1;
      iVar7 = iVar7 + -1;
      *param_6 = iVar10;
    } while (uVar21 < uVar13 || uVar21 - uVar13 == 0);
    bVar5 = uVar21 - uVar13 < uVar22;
    lVar18 = lVar12 * (uVar23 - uVar24);
    uVar23 = lVar18 + lVar12;
    if (bVar5) {
LAB_01067378:
      uVar24 = uVar23 - uVar13;
      if (uVar13 <= uVar23 && uVar24 != 0) {
LAB_01067380:
        if ((!bVar5) && ((uVar13 + uVar22 < uVar23 || ((uVar13 + uVar22) - uVar23 < uVar24))))
        goto LAB_01067490;
      }
    }
    else {
      uVar19 = lVar18 + lVar16 * -10;
      if (uVar13 < uVar19) {
        lVar12 = -uVar13;
        uVar20 = uVar13;
        do {
          uVar13 = uVar20 + uVar22;
          if ((uVar19 <= uVar13) &&
             (uVar19 + lVar12 < uVar22 + (uVar9 * -10 + uVar24 * 10) * lVar16 + uVar20)) {
            bVar5 = false;
            uVar13 = uVar20;
            goto LAB_010673a0;
          }
          uVar25 = (uVar14 * 10 - uVar22) + lVar12;
          bVar5 = uVar25 < uVar22;
          param_4[iVar17] = param_4[iVar17] + -1;
        } while ((uVar13 < uVar19) && (lVar12 = lVar12 - uVar22, uVar20 = uVar13, uVar22 <= uVar25))
        ;
        goto LAB_01067378;
      }
LAB_010673a0:
      uVar24 = uVar23 - uVar13;
      if (uVar13 <= uVar23 && uVar24 != 0) goto LAB_01067380;
    }
    uVar21 = uVar21 + lVar16 * -0x28;
    bVar5 = (ulong)(lVar16 * 0x14) < uVar13 || lVar16 * 0x14 - uVar13 == 0;
    goto LAB_01067480;
  }
  bVar5 = (param_1 & 0x7ff0000000000000) != 0;
  uVar23 = param_1 & 0xfffffffffffff;
  if (bVar5) {
    uVar23 = param_1 & 0xfffffffffffff | 0x10000000000000;
  }
  iVar10 = -0x432;
  if (bVar5) {
    iVar10 = (uVar15 >> 0x14 & 0x7ff) - 0x433;
  }
  uVar21 = uVar23 >> 0x34;
  while (uVar21 == 0) {
    iVar10 = iVar10 + -1;
    uVar21 = uVar23 >> 0x33 & 1;
    uVar23 = uVar23 << 1;
  }
  local_78 = 0;
  local_70 = 0;
  PowersOfTenCache::GetCachedPowerForBinaryExponentRange
            (-0x71 - iVar10,-0x55 - iVar10,(DiyFp *)&local_78,&local_80);
  local_90 = uVar23 << 0xb;
  local_88 = (ulong)(iVar10 - 0xb);
  DiyFp::Multiply((DiyFp *)&local_90,(DiyFp *)&local_78);
  uVar9 = (ulong)(uint)-(int)local_88;
  uVar24 = 1L << (uVar9 & 0x3f);
  uVar21 = local_90 >> (uVar9 & 0x3f);
  uVar23 = uVar24 - 1 & local_90;
  FUN_0106754c(uVar21 & 0xffffffff,(int)local_88 + 0x40,&local_90,&local_7c);
  iVar10 = 0;
  *param_6 = 0;
  if (-1 < local_7c) {
    uVar14 = local_90 & 0xffffffff;
    do {
      iVar7 = local_7c;
      cVar2 = '\0';
      uVar15 = (uint)uVar21;
      if ((uint)uVar14 != 0) {
        cVar2 = (char)(uVar15 / (uint)uVar14);
      }
      param_4[iVar10] = cVar2 + '0';
      param_3 = param_3 + -1;
      iVar10 = *param_6 + 1;
      *param_6 = iVar10;
      uVar3 = 0;
      if ((uint)local_90 != 0) {
        uVar3 = uVar15 / (uint)local_90;
      }
      uVar21 = (ulong)(uVar15 - uVar3 * (uint)local_90);
      if (param_3 == 0) goto LAB_010670d0;
      uVar14 = (local_90 & 0xffffffff) / 10;
      local_90 = CONCAT44(local_90._4_4_,(uint)local_90 / 10);
      local_7c = iVar7 + -1;
    } while (0 < iVar7);
    if (param_3 != 0) goto LAB_0106728c;
LAB_010670cc:
LAB_010670d0:
    uVar24 = (ulong)(uint)local_90 << (uVar9 & 0x3f);
    if (uVar24 < 3) goto LAB_01067490;
    uVar23 = ((uVar21 & 0xffffffff) << (uVar9 & 0x3f)) + uVar23;
    if ((uVar24 - uVar23 <= uVar23) || (uVar24 + uVar23 * -2 < 2)) {
      if ((uVar23 < 2) || (uVar23 - 1 < uVar24 - (uVar23 - 1))) goto LAB_01067490;
      uVar23 = (long)iVar10 - 1;
      param_4[uVar23] = param_4[uVar23] + '\x01';
      if (0 < (int)uVar23) {
        pcVar8 = param_4 + (iVar10 + -2);
        do {
          if (param_4[uVar23 & 0xffffffff] != ':') break;
          param_4[uVar23 & 0xffffffff] = '0';
          uVar15 = (int)uVar23 - 1;
          uVar23 = (ulong)uVar15;
          *pcVar8 = *pcVar8 + '\x01';
          pcVar8 = pcVar8 + -1;
        } while (0 < (int)uVar15);
      }
      if (*param_4 != ':') goto LAB_01067408;
LAB_01067184:
      iVar7 = iVar7 + 1;
      *param_4 = '1';
    }
    goto LAB_01067408;
  }
  iVar7 = local_7c + 1;
  if (param_3 == 0) goto LAB_010670cc;
LAB_0106728c:
  bVar5 = false;
  if ((uVar23 < 2) || (param_3 < 1)) {
LAB_01067404:
    if (bVar5) goto LAB_01067408;
  }
  else {
    uVar21 = 1;
    iVar17 = param_3 + -1;
    do {
      uVar19 = uVar21;
      param_4[iVar10] = (char)(uVar23 * 10 >> (uVar9 & 0x3f)) + '0';
      iVar11 = *param_6;
      uVar14 = (ulong)iVar11;
      iVar1 = iVar17 + -1;
      uVar21 = uVar19 * 10;
      uVar23 = uVar23 * 10 & uVar24 - 1;
      iVar10 = iVar11 + 1;
      iVar7 = iVar7 + -1;
      *param_6 = iVar10;
      if (iVar17 < 1) break;
      iVar17 = iVar1;
    } while (uVar21 < uVar23);
    if (iVar1 == -1) {
      uVar9 = uVar24 + uVar19 * -10;
      bVar5 = false;
      if ((uVar24 < uVar21 || uVar9 == 0) || (uVar9 <= uVar21)) goto LAB_01067404;
      if (uVar23 < uVar24 - uVar23) {
        bVar5 = uVar19 * 0x14 <= uVar24 + uVar23 * -2;
        if ((bVar5) || (uVar23 <= uVar21)) goto LAB_01067404;
      }
      else if (uVar23 <= uVar21) goto LAB_01067490;
      uVar23 = uVar23 + uVar19 * -10;
      if (uVar24 - uVar23 <= uVar23) {
        param_4[uVar14] = param_4[uVar14] + '\x01';
        while ((0 < iVar11 && (param_4[uVar14 & 0xffffffff] == ':'))) {
          param_4[uVar14 & 0xffffffff] = '0';
          param_4[uVar14 - 1] = param_4[uVar14 - 1] + '\x01';
          uVar14 = uVar14 - 1;
          iVar11 = (int)uVar14;
        }
        if (*param_4 == ':') goto LAB_01067184;
        goto LAB_01067408;
      }
    }
  }
  goto LAB_01067490;
LAB_01067328:
  uVar13 = uVar20 + uVar9;
  if ((uVar13 < uVar19) || (uVar13 - uVar19 <= uVar19 - uVar20)) goto LAB_01067340;
  bVar5 = false;
  uVar13 = uVar20;
LAB_01067468:
  uVar21 = uVar24 - uVar13;
  if (uVar13 <= uVar24 && uVar21 != 0) goto LAB_01067440;
  goto LAB_01067474;
LAB_01067340:
  bVar5 = uVar21 - uVar13 < uVar9;
  param_4[iVar17] = param_4[iVar17] + -1;
  if ((uVar19 <= uVar13) || (uVar20 = uVar13, uVar21 - uVar13 < uVar9)) goto LAB_01067438;
  goto LAB_01067328;
LAB_01067438:
  uVar21 = uVar24 - uVar13;
  if (uVar13 <= uVar24 && uVar21 != 0) {
LAB_01067440:
    if ((!bVar5) && ((uVar13 + uVar9 < uVar24 || ((uVar13 + uVar9) - uVar24 < uVar21))))
    goto LAB_01067490;
  }
LAB_01067474:
  uVar21 = (uVar23 - uVar14) - 3;
  bVar5 = 1 < uVar13;
LAB_01067480:
  if ((bool)(uVar13 <= uVar21 & bVar5)) {
LAB_01067408:
    uVar6 = 1;
    *param_7 = *param_6 + (iVar7 - local_80);
    param_4[*param_6] = '\0';
    goto LAB_01067494;
  }
LAB_01067490:
  uVar6 = 0;
LAB_01067494:
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar6);
  }
  return;
}

