
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FT_Bitmap_Blend(undefined8 *param_1,uint *param_2,ulong param_3,ulong param_4,uint *param_5,
                   ulong *param_6,undefined8 param_7)

{
  void *pvVar1;
  byte *pbVar2;
  long lVar3;
  byte *pbVar4;
  long lVar5;
  char cVar6;
  uint uVar7;
  uint6 uVar8;
  undefined3 uVar9;
  undefined3 uVar10;
  uint uVar11;
  bool bVar12;
  bool bVar13;
  undefined1 auVar14 [16];
  long lVar15;
  byte *pbVar16;
  byte *pbVar17;
  uint uVar19;
  uint uVar20;
  byte *pbVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  long lVar26;
  byte *pbVar27;
  uint uVar28;
  undefined8 uVar29;
  void *__src;
  long lVar30;
  void *__dest;
  ulong uVar31;
  ulong uVar32;
  undefined1 auVar33 [16];
  byte bVar34;
  byte bVar35;
  int iVar36;
  uint uVar37;
  int iVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  int iVar45;
  int iVar46;
  int iVar47;
  int iVar48;
  int iVar49;
  int iVar50;
  int iVar51;
  int iVar52;
  int iVar53;
  int iVar54;
  int iVar55;
  int iVar56;
  int iVar57;
  int iVar58;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  int local_64;
  byte *pbVar18;
  
  local_64 = 0;
  if (param_6 == (ulong *)0x0) {
    return 6;
  }
  if (param_2 == (uint *)0x0) {
    return 6;
  }
  if (param_1 == (undefined8 *)0x0) {
    return 6;
  }
  if (param_5 == (uint *)0x0) {
    return 6;
  }
  cVar6 = *(char *)((long)param_5 + 0x1a);
  uVar29 = *param_1;
  if (cVar6 != '\0') {
    if (cVar6 != '\a') {
      return 6;
    }
    if (*(long *)(param_5 + 4) == 0) {
      return 6;
    }
  }
  if (*(char *)((long)param_2 + 0x1a) == '\0') {
    return 0;
  }
  if ((cVar6 == '\a') && ((int)(param_5[2] ^ param_2[2]) < 0)) {
    return 6;
  }
  if (param_2[1] == 0) {
    return 0;
  }
  if (*param_2 == 0) {
    return 0;
  }
  uVar22 = (ulong)(*param_2 << 6);
  param_4 = param_4 & 0xffffffffffffffc0;
  if ((long)param_4 < (long)((uVar22 | 0x8000000000000000) + 0x40)) {
                    /* WARNING: Read-only address (ram,0x0198aee0) is written */
                    /* WARNING: Read-only address (ram,0x0198aee0) is written */
    return 6;
  }
  uVar23 = (ulong)(param_2[1] << 6);
  param_3 = param_3 & 0xffffffffffffffc0;
  if ((long)(0x7fffffffffffffbf - uVar23) < (long)param_3) {
    return 6;
  }
  uVar19 = param_5[1];
  if ((uVar19 == 0) || (*param_5 == 0)) {
    lVar30 = 0x7fffffffffffffff;
    uVar24 = 0x8000000000000000;
    lVar15 = -0x8000000000000000;
    uVar31 = 0x7fffffffffffffff;
  }
  else {
    uVar25 = (ulong)(*param_5 << 6);
    uVar24 = param_6[1] & 0xffffffffffffffc0;
    if ((long)uVar24 < (long)(uVar25 | 0x8000000000000000)) {
      return 6;
    }
    uVar31 = *param_6 & 0xffffffffffffffc0;
    if ((long)((ulong)(uVar19 << 6) ^ 0x7fffffffffffffff) < (long)uVar31) {
      return 6;
    }
    lVar30 = uVar24 - uVar25;
    lVar15 = uVar31 + (uVar19 << 6);
  }
  lVar26 = param_4 - uVar22;
  lVar3 = param_3 + uVar23;
  uVar22 = param_3;
  if ((long)uVar31 <= (long)param_3) {
    uVar22 = uVar31;
  }
  lVar5 = lVar26;
  if (lVar30 <= lVar26) {
    lVar5 = lVar30;
  }
  if (lVar3 <= lVar15) {
    lVar3 = lVar15;
  }
  if ((long)param_4 <= (long)uVar24) {
    param_4 = uVar24;
  }
  uVar23 = lVar3 - uVar22;
  param_4 = param_4 - lVar5;
  uVar24 = uVar23 >> 6;
  uVar25 = param_4 >> 6;
  if ((uVar19 != 0) && (*param_5 != 0)) {
    uVar31 = uVar31 - uVar22;
    lVar30 = lVar30 - lVar5;
  }
  uVar37 = (uint)uVar24;
  uVar20 = (uint)uVar25;
  if (cVar6 == '\0') {
    *param_5 = uVar20;
    param_5[1] = uVar37;
    uVar23 = -(uVar23 >> 0x23 & 1) & 0xffffffff00000000 | (uVar24 & 0x3fffffff) << 2;
    *(undefined1 *)((long)param_5 + 0x1a) = 7;
    lVar15 = 0;
    if (uVar23 != 0) {
      lVar15 = 0x7fffffffffffffff / (long)uVar23;
    }
    param_5[2] = (uint)(uVar24 * 4);
    *(undefined2 *)(param_5 + 6) = 0x100;
    if (lVar15 < (int)uVar20) {
      return 6;
    }
    uVar29 = FUN_00e1388c(uVar29,(long)((uVar25 << 0x20) * uVar24 * 4) >> 0x20,&local_64);
    *(undefined8 *)(param_5 + 4) = uVar29;
    if (local_64 != 0) {
      return local_64;
    }
    bVar13 = true;
    cVar6 = *(char *)((long)param_2 + 0x1a);
    local_64 = 0;
joined_r0x00e863dc:
    if (cVar6 != '\x02') goto LAB_00e863e0;
LAB_00e862ac:
    bVar12 = false;
    uVar19 = param_5[2];
    auVar14 = _DAT_0198aee0;
  }
  else {
    if ((uVar19 != uVar37) || (*param_5 != uVar20)) {
      uVar19 = param_5[2];
      uVar23 = -(uVar23 >> 0x23 & 1) & 0xffffffff00000000 | (uVar24 & 0x3fffffff) << 2;
      lVar15 = 0;
      if (uVar23 != 0) {
        lVar15 = 0x7fffffffffffffff / (long)uVar23;
      }
      uVar7 = -uVar19;
      if (-1 < (int)uVar19) {
        uVar7 = uVar19;
      }
      if (lVar15 < (int)uVar20) {
        return 6;
      }
      lVar15 = FUN_00e1388c(uVar29,(long)((uVar25 << 0x20) * uVar24 * 4) >> 0x20,&local_64);
      if (local_64 != 0) {
        return local_64;
      }
      if (-1 < (int)param_5[2]) {
        iVar49 = *param_5 * uVar7;
        if (0 < iVar49) {
          __src = *(void **)(param_5 + 4);
          pvVar1 = (void *)((long)__src + (long)iVar49);
          __dest = (void *)(lVar15 + (((param_4 >> 6 & 0xffffffff) - (lVar30 >> 6)) -
                                     (ulong)*param_5) * uVar23 + ((long)uVar31 >> 6) * 4);
          do {
            memcpy(__dest,__src,(ulong)uVar7);
            __src = (void *)((long)__src + (ulong)uVar7);
            __dest = (void *)((long)__dest + uVar23);
          } while (__src < pvVar1);
        }
      }
      FUN_00e139fc(uVar29,*(undefined8 *)(param_5 + 4));
      bVar13 = false;
      *param_5 = uVar20;
      uVar20 = (uint)(uVar24 * 4);
      uVar19 = -uVar20;
      if (-1 < (int)param_5[2]) {
        uVar19 = uVar20;
      }
      param_5[1] = uVar37;
      param_5[2] = uVar19;
      *(long *)(param_5 + 4) = lVar15;
      cVar6 = *(char *)((long)param_2 + 0x1a);
      goto joined_r0x00e863dc;
    }
    bVar13 = false;
    if (*(char *)((long)param_2 + 0x1a) == '\x02') goto LAB_00e862ac;
LAB_00e863e0:
    local_70 = 0;
    uStack_88 = 0;
    local_90 = 0;
    uStack_78 = 0;
    local_80 = 0;
    bVar12 = true;
    local_64 = FT_Bitmap_Convert(param_1,param_2,&local_90,1);
    if (local_64 != 0) {
      bVar12 = false;
      goto joined_r0x00e86854;
    }
    param_2 = (uint *)&local_90;
    uVar19 = param_5[2];
    auVar14 = _DAT_0198aee0;
  }
  _DAT_0198aee0 = auVar14;
  if (-1 < (int)uVar19) {
    uVar37 = param_2[2];
    iVar49 = uVar37 * *param_2;
    if (0 < iVar49) {
      pbVar21 = *(byte **)(param_2 + 4);
      uVar11 = (uint)((ulong)param_7 >> 0x18) & 0xff;
      uVar28 = (uint)param_7;
      uVar20 = uVar28 & 0xff;
      uVar7 = uVar28 >> 8 & 0xff;
      uVar28 = uVar28 >> 0x10 & 0xff;
      pbVar2 = pbVar21 + iVar49;
      pbVar27 = (byte *)(*(long *)(param_5 + 4) +
                         (((ulong)*param_5 - (lVar26 - lVar5 >> 6)) - (ulong)*param_2) *
                         (long)(int)uVar19 + ((long)(param_3 - uVar22) >> 6) * 4);
      do {
        if (param_2[1] != 0) {
          pbVar4 = pbVar21 + param_2[1];
          pbVar16 = pbVar4;
          if (pbVar4 <= pbVar21 + 1) {
            pbVar16 = pbVar21 + 1;
          }
          uVar23 = (long)pbVar16 - (long)pbVar21;
          pbVar16 = pbVar27;
          pbVar18 = pbVar21;
          if (uVar23 < 4) {
LAB_00e86750:
            do {
              pbVar17 = pbVar18 + 1;
              uVar19 = (uVar11 * *pbVar18) / 0xff;
              iVar49 = 0xff - uVar19;
              lVar15 = (long)(int)(iVar49 * (uint)*pbVar16) * 0x80808081;
              lVar30 = (long)(int)(iVar49 * (uint)pbVar16[1]) * 0x80808081;
              uVar37 = (uVar11 * *pbVar18) / 0xff;
              lVar3 = (long)(int)(iVar49 * (uint)pbVar16[2]) * 0x80808081;
              lVar26 = (long)(int)(iVar49 * (uint)pbVar16[3]) * 0x80808081;
              *pbVar16 = ((char)(uint)((ulong)lVar15 >> 0x27) - (char)(lVar15 >> 0x3f)) +
                         (char)((uVar19 * uVar20) / 0xff);
              pbVar16[1] = ((char)(uint)((ulong)lVar30 >> 0x27) - (char)(lVar30 >> 0x3f)) +
                           (char)((uVar37 * uVar7) / 0xff);
              pbVar16[2] = ((char)(uint)((ulong)lVar3 >> 0x27) - (char)(lVar3 >> 0x3f)) +
                           (char)((uVar37 * uVar28) / 0xff);
              pbVar16[3] = ((char)(uint)((ulong)lVar26 >> 0x27) - (char)(lVar26 >> 0x3f)) +
                           (char)uVar37;
              pbVar16 = pbVar16 + 4;
              pbVar18 = pbVar17;
            } while (pbVar17 < pbVar4);
          }
          else {
            pbVar17 = pbVar4;
            if (pbVar4 <= pbVar21 + 1) {
              pbVar17 = pbVar21 + 1;
            }
            if ((pbVar27 < pbVar17) && (pbVar21 < pbVar27 + ((long)pbVar17 - (long)pbVar21) * 4))
            goto LAB_00e86750;
            uVar31 = uVar23 & 0xfffffffffffffffc;
            pbVar16 = pbVar27 + uVar31 * 4;
            uVar24 = uVar31;
            pbVar17 = pbVar27;
            do {
              auVar33._0_8_ = CONCAT44(uVar11 * pbVar18[1],uVar11 * *pbVar18);
              auVar33._8_4_ = uVar11 * pbVar18[2];
              auVar33._12_4_ = uVar11 * pbVar18[3];
              uVar32 = auVar33._8_8_ & 0xffffffff;
              uVar25 = auVar33._8_8_ >> 0x20;
              auVar33 = NEON_umull(auVar33._0_8_,0x8080808180808081,4);
              uVar19 = (uint)(CONCAT14((char)(uVar25 / 0x1fe0000),(int)(uVar25 * 0x80808081 >> 0x18)
                                      ) >> 8);
              bVar34 = auVar33[7] >> 7;
              bVar35 = auVar33[0xf] >> 7;
              iVar36 = (int)(uVar32 / 0xff);
              uVar37 = uVar19 >> 7;
              uVar9 = (undefined3)(auVar33._4_4_ >> 7);
              uVar10 = (undefined3)(auVar33._12_4_ >> 7);
              auVar39._0_8_ =
                   CONCAT44(CONCAT13(bVar35,uVar10) * uVar20,CONCAT13(bVar34,uVar9) * uVar20);
              auVar39._8_4_ = iVar36 * uVar20;
              auVar39._12_4_ = uVar37 * uVar20;
              auVar41._0_8_ =
                   CONCAT44(CONCAT13(bVar35,uVar10) * uVar7,CONCAT13(bVar34,uVar9) * uVar7);
              auVar41._8_4_ = iVar36 * uVar7;
              auVar41._12_4_ = uVar37 * uVar7;
              auVar43._0_8_ =
                   CONCAT44(CONCAT13(bVar35,uVar10) * uVar28,CONCAT13(bVar34,uVar9) * uVar28);
              auVar43._8_4_ = iVar36 * uVar28;
              auVar43._12_4_ = uVar37 * uVar28;
              iVar49 = 0xff - CONCAT13(bVar34,uVar9);
              iVar50 = 0xff - CONCAT13(bVar35,uVar10);
              iVar36 = 0xff - iVar36;
              iVar38 = 0xff - uVar37;
              auVar44 = NEON_umull(auVar43._0_8_,0x8080808180808081,4);
              auVar40 = NEON_umull(auVar39._0_8_,0x8080808180808081,4);
              auVar42 = NEON_umull(auVar41._0_8_,0x8080808180808081,4);
              iVar51 = (int)((ulong)((long)(int)(iVar49 * (uint)*pbVar17) * -0x7f7f7f7f) >> 0x20) +
                       iVar49 * (uint)*pbVar17;
              iVar52 = (int)((ulong)((long)(int)(iVar50 * (uint)pbVar17[4]) * -0x7f7f7f7f) >> 0x20)
                       + iVar50 * (uint)pbVar17[4];
              iVar53 = (int)((ulong)((long)(int)(iVar36 * (uint)pbVar17[8]) * -0x7f7f7f7f) >> 0x20)
                       + iVar36 * (uint)pbVar17[8];
              iVar54 = (int)((ulong)((long)(int)(iVar38 * (uint)pbVar17[0xc]) * -0x7f7f7f7f) >> 0x20
                            ) + iVar38 * (uint)pbVar17[0xc];
              iVar55 = (int)((ulong)((long)(int)(iVar49 * (uint)pbVar17[1]) * -0x7f7f7f7f) >> 0x20)
                       + iVar49 * (uint)pbVar17[1];
              iVar56 = (int)((ulong)((long)(int)(iVar50 * (uint)pbVar17[5]) * -0x7f7f7f7f) >> 0x20)
                       + iVar50 * (uint)pbVar17[5];
              iVar57 = (int)((ulong)((long)(int)(iVar36 * (uint)pbVar17[9]) * -0x7f7f7f7f) >> 0x20)
                       + iVar36 * (uint)pbVar17[9];
              iVar58 = (int)((ulong)((long)(int)(iVar38 * (uint)pbVar17[0xd]) * -0x7f7f7f7f) >> 0x20
                            ) + iVar38 * (uint)pbVar17[0xd];
              iVar45 = (int)((ulong)((long)(int)(iVar49 * (uint)pbVar17[2]) * -0x7f7f7f7f) >> 0x20)
                       + iVar49 * (uint)pbVar17[2];
              iVar46 = (int)((ulong)((long)(int)(iVar50 * (uint)pbVar17[6]) * -0x7f7f7f7f) >> 0x20)
                       + iVar50 * (uint)pbVar17[6];
              iVar47 = (int)((ulong)((long)(int)(iVar36 * (uint)pbVar17[10]) * -0x7f7f7f7f) >> 0x20)
                       + iVar36 * (uint)pbVar17[10];
              iVar48 = (int)((ulong)((long)(int)(iVar38 * (uint)pbVar17[0xe]) * -0x7f7f7f7f) >> 0x20
                            ) + iVar38 * (uint)pbVar17[0xe];
              iVar49 = (int)((ulong)((long)(int)(iVar49 * (uint)pbVar17[3]) * -0x7f7f7f7f) >> 0x20)
                       + iVar49 * (uint)pbVar17[3];
              iVar50 = (int)((ulong)((long)(int)(iVar50 * (uint)pbVar17[7]) * -0x7f7f7f7f) >> 0x20)
                       + iVar50 * (uint)pbVar17[7];
              iVar36 = (int)((ulong)((long)(int)(iVar36 * (uint)pbVar17[0xb]) * -0x7f7f7f7f) >> 0x20
                            ) + iVar36 * (uint)pbVar17[0xb];
              iVar38 = (int)((ulong)((long)(int)(iVar38 * (uint)pbVar17[0xf]) * -0x7f7f7f7f) >> 0x20
                            ) + iVar38 * (uint)pbVar17[0xf];
              uVar8 = (uint6)CONCAT14(((char)(iVar56 >> 7) - (char)(iVar56 >> 0x1f)) +
                                      (char)(auVar42._12_4_ >> 7),
                                      ((iVar55 >> 7 & 0xffffU) - (iVar55 >> 0x1f) & 0xffff) +
                                      (auVar42._4_4_ >> 7)) & 0xffff0000ffff;
              auVar42[1] = ((char)(iVar52 >> 7) - (char)(iVar52 >> 0x1f)) +
                           (char)(auVar40._12_4_ >> 7);
              auVar42[0] = ((char)(iVar51 >> 7) - (char)(iVar51 >> 0x1f)) +
                           (char)(auVar40._4_4_ >> 7);
              auVar40[1] = ((char)(iVar46 >> 7) - (char)(iVar46 >> 0x1f)) +
                           (char)(auVar44._12_4_ >> 7);
              auVar40[0] = ((char)(iVar45 >> 7) - (char)(iVar45 >> 0x1f)) +
                           (char)(auVar44._4_4_ >> 7);
              auVar42[2] = ((char)(iVar53 >> 7) - (char)(iVar53 >> 0x1f)) +
                           (char)((auVar39._8_8_ & 0xffffffff) / 0xff);
              auVar42[3] = ((char)(iVar54 >> 7) - (char)(iVar54 >> 0x1f)) +
                           (char)(auVar39._8_8_ / 0xff00000000);
              auVar42[4] = (char)uVar8;
              auVar42[5] = (char)(uVar8 >> 0x20);
              auVar42[6] = ((char)(iVar57 >> 7) - (char)(iVar57 >> 0x1f)) +
                           (char)((auVar41._8_8_ & 0xffffffff) / 0xff);
              auVar42[7] = ((char)(iVar58 >> 7) - (char)(iVar58 >> 0x1f)) +
                           (char)(auVar41._8_8_ / 0xff00000000);
              auVar42._8_8_ = 0;
              auVar40[2] = ((char)(iVar47 >> 7) - (char)(iVar47 >> 0x1f)) +
                           (char)((auVar43._8_8_ & 0xffffffff) / 0xff);
              auVar40[3] = ((char)(iVar48 >> 7) - (char)(iVar48 >> 0x1f)) +
                           (char)(auVar43._8_8_ / 0xff00000000);
              auVar40[4] = ((char)(iVar49 >> 7) - (char)(iVar49 >> 0x1f)) +
                           (char)(auVar33._4_4_ >> 7);
              auVar40[5] = ((char)(iVar50 >> 7) - (char)(iVar50 >> 0x1f)) +
                           (char)(auVar33._12_4_ >> 7);
              auVar40[6] = ((char)(iVar36 >> 7) - (char)(iVar36 >> 0x1f)) + (char)(uVar32 / 0xff);
              auVar40[7] = ((char)(iVar38 >> 7) - (char)(iVar38 >> 0x1f)) + (char)(uVar19 >> 7);
              auVar40._8_8_ = 0;
              auVar42 = a64_TBL(ZEXT816(0),auVar42,auVar40,auVar14);
              uVar24 = uVar24 - 4;
              *(long *)(pbVar17 + 8) = auVar42._8_8_;
              *(long *)pbVar17 = auVar42._0_8_;
              pbVar18 = pbVar18 + 4;
              pbVar17 = pbVar17 + 0x10;
            } while (uVar24 != 0);
            pbVar18 = pbVar21 + uVar31;
            if (uVar23 != uVar31) goto LAB_00e86750;
          }
          uVar37 = param_2[2];
          uVar19 = param_5[2];
        }
        pbVar21 = pbVar21 + (int)uVar37;
        pbVar27 = pbVar27 + (int)uVar19;
      } while (pbVar21 < pbVar2);
    }
  }
  *param_6 = uVar22;
  param_6[1] = (param_4 & 0xffffffc0) + lVar5;
joined_r0x00e86854:
  if ((bVar13) && (local_64 != 0)) {
    FUN_00e139fc(*param_1,*(undefined8 *)(param_5 + 4));
    param_5[8] = 0;
    param_5[9] = 0;
    param_5[2] = 0;
    param_5[3] = 0;
    param_5[0] = 0;
    param_5[1] = 0;
    param_5[6] = 0;
    param_5[7] = 0;
    param_5[4] = 0;
    param_5[5] = 0;
  }
  if (!bVar12) {
    return local_64;
  }
  FUN_00e139fc(*param_1,local_80);
  return local_64;
}

