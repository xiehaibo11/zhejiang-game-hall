
/* double v8::internal::InternalStringToDouble<unsigned short const*, unsigned short
   const*>(unsigned short const*, unsigned short const*, int, double) */

double v8::internal::InternalStringToDouble<unsigned_short_const*,unsigned_short_const*>
                 (ushort *param_1,ushort *param_2,int param_3,double param_4)

{
  bool bVar1;
  byte *pbVar2;
  int iVar3;
  long lVar4;
  ushort uVar5;
  long lVar6;
  ushort *puVar7;
  ushort *puVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  ulong uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  double dVar17;
  int local_394;
  internal local_390 [784];
  long local_80;
  
  lVar4 = tpidr_el0;
  local_80 = *(long *)(lVar4 + 0x28);
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    uVar5 = *param_1;
    uVar12 = (ulong)uVar5;
    if (uVar12 < 0x80) {
      if (((byte)(&DAT_019d520f)[uVar12] >> 3 & 1) == 0) goto LAB_01063214;
    }
    else {
      uVar12 = unibrow::WhiteSpace::Is((uint)uVar5);
      if (((uVar5 & 0xfffe) != 0x2028) && ((uVar12 & 1) == 0)) {
        uVar12 = (ulong)*param_1;
LAB_01063214:
        iVar10 = (int)uVar12;
        if (iVar10 == 0x2b) {
          if (param_2 + -1 == param_1) goto LAB_01063800;
          local_394 = 2;
LAB_01063250:
          param_1 = param_1 + 1;
          uVar12 = (ulong)*param_1;
          puVar7 = param_1;
          if (*param_1 == 0x30) {
LAB_010632b0:
            puVar7 = param_1 + 1;
            if (puVar7 == param_2) goto LAB_01063614;
            if (((param_3 & 1U) == 0) || ((*puVar7 | 0x20) != 0x78)) {
              if ((((uint)param_3 >> 1 & 1) == 0) || ((*puVar7 | 0x20) != 0x6f)) {
                if ((((uint)param_3 >> 3 & 1) == 0) || ((*puVar7 | 0x20) != 0x62))
                goto LAB_010635f8;
                puVar7 = param_1 + 2;
                if (puVar7 == param_2) goto LAB_01063800;
                param_4 = NAN;
                if ((local_394 == 0) && ((*puVar7 | 1) == 0x31)) {
                  param_4 = InternalStringToIntDouble<1,unsigned_short_const*,unsigned_short_const*>
                                      (puVar7,param_2,false,(bool)((byte)((uint)param_3 >> 4) & 1));
                }
              }
              else {
                puVar7 = param_1 + 2;
                if (puVar7 == param_2) goto LAB_01063800;
                param_4 = NAN;
                if (((local_394 == 0) && (*puVar7 < 0x38)) && (*puVar7 - 0x30 < 10)) {
                  param_4 = InternalStringToIntDouble<3,unsigned_short_const*,unsigned_short_const*>
                                      (puVar7,param_2,false,(bool)((byte)((uint)param_3 >> 4) & 1));
                }
              }
            }
            else {
              puVar7 = param_1 + 2;
              if (puVar7 == param_2) goto LAB_01063800;
              uVar5 = *puVar7;
              uVar9 = (uint)uVar5;
              bVar1 = false;
              if ((5 < uVar9 - 0x61) && (0x3f < uVar5 || 9 < uVar5 - 0x30)) {
                if (uVar9 < 0x41) goto LAB_01063800;
                bVar1 = 0x46 < uVar9;
              }
              param_4 = NAN;
              if ((local_394 == 0) && (!bVar1)) {
                param_4 = InternalStringToIntDouble<4,unsigned_short_const*,unsigned_short_const*>
                                    (puVar7,param_2,false,(bool)((byte)((uint)param_3 >> 4) & 1));
              }
            }
            break;
          }
        }
        else {
          if (iVar10 == 0x2d) {
            if (param_2 + -1 != param_1) {
              local_394 = 1;
              goto LAB_01063250;
            }
            goto LAB_01063800;
          }
          local_394 = 0;
          puVar7 = param_1;
          if (iVar10 == 0x30) goto LAB_010632b0;
        }
        if ((int)uVar12 != 0x49) {
          uVar9 = 0;
          goto LAB_0106334c;
        }
        puVar8 = puVar7 + 8;
        lVar6 = 1;
        goto LAB_0106327c;
      }
    }
  }
  goto LAB_01063808;
code_r0x01063604:
  puVar7 = puVar7 + 1;
  if (param_2 == puVar7) goto LAB_01063614;
  goto LAB_010635f8;
  while ((param_2 != puVar7 &&
         (pbVar2 = (byte *)("Infinity" + lVar6), lVar6 = lVar6 + 1, *puVar7 == (ushort)*pbVar2))) {
LAB_0106327c:
    puVar7 = puVar7 + 1;
    if (lVar6 == 8) {
      if ((((uint)param_3 >> 4 & 1) != 0) || (param_2 == puVar7)) goto LAB_01063628;
      goto LAB_01063578;
    }
  }
  goto LAB_01063800;
LAB_01063578:
  do {
    uVar5 = *puVar8;
    if (uVar5 < 0x80) {
      if (((byte)(&DAT_019d520f)[uVar5] >> 3 & 1) == 0) goto LAB_01063800;
    }
    else {
      uVar12 = unibrow::WhiteSpace::Is((uint)uVar5);
      if (((uVar5 & 0xfffe) != 0x2028) && ((uVar12 & 1) == 0)) goto LAB_01063800;
    }
    puVar8 = puVar8 + 1;
  } while (param_2 != puVar8);
LAB_01063628:
  param_4 = -INFINITY;
  if (local_394 != 1) {
    param_4 = INFINITY;
  }
  goto LAB_01063808;
LAB_010635f8:
  uVar12 = (ulong)*puVar7;
  if (*puVar7 == 0x30) goto code_r0x01063604;
  uVar9 = 1;
LAB_0106334c:
  uVar11 = (uint)uVar12;
  uVar13 = uVar9 & (uint)param_3 >> 2;
  if (uVar11 - 0x30 < 10) {
    bVar1 = false;
    iVar16 = 0;
    iVar10 = 0;
    iVar14 = 0;
LAB_010633b8:
    iVar15 = iVar14 + 1;
    local_390[iVar14] = SUB81(uVar12,0);
    iVar10 = iVar10 + 1;
    if (uVar13 != 0) goto LAB_01063384;
    do {
      uVar13 = 0;
      while( true ) {
        if (param_2 + -1 == puVar7) {
          iVar14 = 0;
          goto joined_r0x010633f8;
        }
        uVar5 = puVar7[1];
        uVar12 = (ulong)uVar5;
        uVar11 = (uint)uVar5;
        puVar7 = puVar7 + 1;
        if (9 < uVar5 - 0x30) goto LAB_01063454;
        iVar14 = iVar15;
        if (iVar10 < 0x304) goto LAB_010633b8;
        iVar16 = iVar16 + 1;
        bVar1 = (bool)(bVar1 | uVar5 != 0x30);
        if (uVar13 == 0) break;
LAB_01063384:
        uVar13 = (uint)(*puVar7 < 0x38);
      }
    } while( true );
  }
  iVar10 = 0;
  iVar16 = 0;
  bVar1 = false;
  iVar15 = 0;
LAB_01063454:
  uVar13 = uVar13 & iVar10 != 0;
  if (uVar11 == 0x2e) {
    if ((((uint)param_3 >> 4 & 1) != 0) || (uVar13 != 1)) {
      if (uVar13 != 0) {
LAB_01063478:
        param_4 = InternalStringToIntDouble<3,char*,char*>
                            ((char *)local_390,(char *)(local_390 + iVar15),local_394 == 1,
                             (bool)((byte)((uint)param_3 >> 4) & 1));
        goto LAB_01063808;
      }
      puVar8 = puVar7 + 1;
      if (puVar8 == param_2) {
        if (uVar9 == 0 && (iVar10 != 0) == 0) goto LAB_01063800;
        if (bVar1) goto LAB_01063404;
LAB_0106341c:
        local_390[iVar15] = (internal)0x0;
        dVar17 = (double)Strtod(local_390,(long)iVar15,iVar16);
        param_4 = -dVar17;
        if (local_394 != 1) {
          param_4 = dVar17;
        }
        goto LAB_01063808;
      }
      if ((iVar10 == 0) && (*puVar8 == 0x30)) {
        iVar14 = 0;
        puVar7 = puVar7 + 2;
        do {
          puVar8 = puVar7;
          if (param_2 == puVar8) {
LAB_01063614:
            param_4 = -0.0;
            if (local_394 != 1) {
              param_4 = 0.0;
            }
            goto LAB_01063808;
          }
          iVar14 = iVar14 + -1;
          puVar7 = puVar8 + 1;
        } while (*puVar8 == 0x30);
      }
      else {
        iVar14 = 0;
      }
      do {
        uVar11 = (uint)*puVar8;
        puVar7 = puVar8;
        if (9 < uVar11 - 0x30) goto LAB_01063500;
        if (iVar10 < 0x304) {
          local_390[iVar15] = SUB21(*puVar8,0);
          iVar10 = iVar10 + 1;
          iVar14 = iVar14 + -1;
          iVar15 = iVar15 + 1;
        }
        else {
          bVar1 = (bool)(bVar1 | uVar11 != 0x30);
        }
        puVar8 = puVar8 + 1;
      } while (param_2 != puVar8);
      goto LAB_010633fc;
    }
  }
  else {
    iVar14 = 0;
LAB_01063500:
    if ((iVar14 == 0 && iVar10 == 0) && (uVar9 != 1)) goto LAB_01063800;
    if ((uVar11 | 0x20) != 0x65) {
LAB_010637b0:
      if (((uint)param_3 >> 4 & 1) == 0) {
        for (; puVar7 != param_2; puVar7 = puVar7 + 1) {
          uVar5 = *puVar7;
          if (uVar5 < 0x80) {
            if (((byte)(&DAT_019d520f)[uVar5] >> 3 & 1) != 0) goto LAB_010637cc;
            goto LAB_01063800;
          }
          uVar12 = unibrow::WhiteSpace::Is((uint)uVar5);
          if (((uVar5 & 0xfffe) != 0x2028) && ((uVar12 & 1) == 0)) goto LAB_01063800;
LAB_010637cc:
        }
      }
joined_r0x010633f8:
      if (uVar13 != 0) goto LAB_01063478;
LAB_010633fc:
      iVar16 = iVar14 + iVar16;
      if (bVar1) {
LAB_01063404:
        local_390[iVar15] = (internal)0x31;
        iVar15 = iVar15 + 1;
        iVar16 = iVar16 + -1;
      }
      goto LAB_0106341c;
    }
    if (uVar13 == 0) {
      puVar8 = puVar7 + 1;
      if (puVar8 != param_2) {
        uVar5 = *puVar8;
        if ((uVar5 == 0x2d) || (uVar5 == 0x2b)) {
          puVar8 = puVar7 + 2;
          if (puVar8 == param_2) goto LAB_01063724;
        }
        else {
          uVar5 = 0x2b;
        }
        if ((puVar8 != param_2) && (uVar9 = (uint)*puVar8, *puVar8 - 0x30 < 10)) {
          iVar10 = 0;
          do {
            puVar8 = puVar8 + 1;
            if ((iVar10 < 0x6666666) ||
               ((iVar3 = 0x3fffffff, iVar10 == 0x6666666 && ((int)(uVar9 - 0x30) < 4)))) {
              iVar3 = (uVar9 - 0x30) + iVar10 * 10;
            }
            iVar10 = iVar3;
            puVar7 = param_2;
          } while ((param_2 != puVar8) &&
                  (uVar9 = (uint)*puVar8, puVar7 = puVar8, uVar9 - 0x30 < 10));
          iVar3 = -iVar10;
          if ((uVar5 & 0xff) != 0x2d) {
            iVar3 = iVar10;
          }
          iVar14 = iVar3 + iVar14;
          goto LAB_010637b0;
        }
      }
LAB_01063724:
      if (((uint)param_3 >> 4 & 1) != 0) goto LAB_010633fc;
    }
  }
LAB_01063800:
  param_4 = NAN;
LAB_01063808:
  if (*(long *)(lVar4 + 0x28) != local_80) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_4;
}

