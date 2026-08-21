
undefined4 * FUN_01328d00(Zone *param_1,undefined4 *param_2,long param_3,uint param_4)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  ulong uVar13;
  undefined4 *puVar14;
  ulong uVar15;
  long *plVar16;
  ulong uVar17;
  uint *puVar18;
  ulong *puVar19;
  long lVar20;
  undefined8 *puVar21;
  long lVar22;
  long lVar23;
  ulong uVar24;
  undefined8 uVar25;
  ulong uVar26;
  undefined8 uVar27;
  long lVar28;
  undefined8 uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  byte bVar34;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  ulong uVar35;
  byte bVar44;
  ulong uVar36;
  undefined8 uVar37;
  undefined8 uVar45;
  int iVar46;
  int iVar47;
  int iVar48;
  int iVar49;
  byte bVar52;
  ulong uVar50;
  ulong uVar51;
  byte bVar53;
  byte bVar55;
  ulong uVar54;
  byte bVar56;
  ulong uVar57;
  ulong uVar58;
  undefined8 local_b8;
  undefined *local_b0;
  undefined8 local_a8;
  undefined *local_a0;
  int local_98;
  undefined8 local_90;
  undefined *local_88;
  undefined8 local_80;
  undefined *local_78;
  int local_70;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  puVar19 = *(ulong **)(param_2 + 4);
  uVar13 = *puVar19;
  uVar15 = puVar19[1];
  if (uVar15 == 0) {
    uVar35 = 0;
  }
  else {
    lVar20 = param_3 + -1;
    if (uVar15 < 4) {
      uVar26 = 0;
      uVar35 = uVar15;
    }
    else {
      uVar26 = uVar15 & 0xfffffffffffffffc;
      lVar22 = 0;
      uVar17 = CONCAT44(param_4 >> 8,param_4 >> 8) & 0xff000000ff;
      lVar28 = 0;
      lVar23 = 0;
      puVar21 = (undefined8 *)(puVar19[2] + uVar13 * 8 + 0x10);
      uVar24 = CONCAT44(param_4,param_4) & 0xff000000ff;
      uVar35 = uVar26;
      uVar36 = uVar15;
      do {
        puVar1 = puVar21 + -2;
        puVar7 = puVar21 + -1;
        puVar8 = puVar21 + 1;
        uVar29 = *puVar21;
        uVar35 = uVar35 - 4;
        puVar21 = puVar21 + 4;
        uVar30 = (uint)((ulong)*puVar1 >> 0x20);
        uVar32 = (uint)((ulong)*puVar7 >> 0x20);
        uVar31 = (uint)((ulong)uVar29 >> 0x20);
        uVar33 = (uint)((ulong)*puVar8 >> 0x20);
        uVar54 = CONCAT44(uVar32,uVar30) & 0xff000000ff;
        uVar57 = CONCAT44(uVar33,uVar31) & 0xff000000ff;
        uVar50 = CONCAT44(uVar32 >> 8,uVar30 >> 8) & 0xff000000ff;
        uVar51 = CONCAT44(uVar33 >> 8,uVar31 >> 8) & 0xff000000ff;
        iVar46 = (int)uVar24;
        iVar47 = (int)(uVar24 >> 0x20);
        iVar48 = (int)uVar17;
        iVar49 = (int)(uVar17 >> 0x20);
        uVar50 = CONCAT44(-(uint)(iVar47 == (int)(uVar54 >> 0x20)),-(uint)(iVar46 == (int)uVar54)) &
                 CONCAT44(-(uint)(iVar49 == (int)(uVar50 >> 0x20)),-(uint)(iVar48 == (int)uVar50));
        uVar51 = CONCAT44(-(uint)(iVar47 == (int)(uVar57 >> 0x20)),-(uint)(iVar46 == (int)uVar57)) &
                 CONCAT44(-(uint)(iVar49 == (int)(uVar51 >> 0x20)),-(uint)(iVar48 == (int)uVar51));
        bVar34 = (byte)lVar20;
        bVar38 = (byte)((ulong)lVar20 >> 8);
        bVar39 = (byte)((ulong)lVar20 >> 0x10);
        bVar9 = (byte)(uVar50 >> 0x18);
        bVar40 = (byte)((ulong)lVar20 >> 0x18);
        bVar41 = (byte)((ulong)lVar20 >> 0x20);
        bVar52 = (char)bVar9 >> 7;
        bVar42 = (byte)((ulong)lVar20 >> 0x28);
        bVar43 = (byte)((ulong)lVar20 >> 0x30);
        bVar44 = (byte)((ulong)lVar20 >> 0x38);
        bVar10 = (byte)(uVar50 >> 0x38);
        bVar53 = (char)bVar10 >> 7;
        bVar11 = (byte)(uVar51 >> 0x18);
        bVar55 = (char)bVar11 >> 7;
        bVar12 = (byte)(uVar51 >> 0x38);
        bVar56 = (char)bVar12 >> 7;
        uVar36 = uVar36 + CONCAT17(bVar44 & bVar52,
                                   CONCAT16(bVar43 & bVar52,
                                            CONCAT15(bVar42 & bVar52,
                                                     CONCAT14(bVar41 & bVar52,
                                                              CONCAT13(bVar40 & bVar9,
                                                                       CONCAT12(bVar39 & (byte)(
                                                  uVar50 >> 0x10),
                                                  CONCAT11(bVar38 & (byte)(uVar50 >> 8),
                                                           bVar34 & (byte)uVar50)))))));
        lVar22 = lVar22 + CONCAT17(bVar44 & bVar53,
                                   CONCAT16(bVar43 & bVar53,
                                            CONCAT15(bVar42 & bVar53,
                                                     CONCAT14(bVar41 & bVar53,
                                                              CONCAT13(bVar40 & bVar10,
                                                                       CONCAT12(bVar39 & (byte)(
                                                  uVar50 >> 0x30),
                                                  CONCAT11(bVar38 & (byte)(uVar50 >> 0x28),
                                                           bVar34 & (byte)(uVar50 >> 0x20))))))));
        lVar28 = lVar28 + CONCAT17(bVar44 & bVar55,
                                   CONCAT16(bVar43 & bVar55,
                                            CONCAT15(bVar42 & bVar55,
                                                     CONCAT14(bVar41 & bVar55,
                                                              CONCAT13(bVar40 & bVar11,
                                                                       CONCAT12(bVar39 & (byte)(
                                                  uVar51 >> 0x10),
                                                  CONCAT11(bVar38 & (byte)(uVar51 >> 8),
                                                           bVar34 & (byte)uVar51)))))));
        lVar23 = lVar23 + CONCAT17(bVar44 & bVar56,
                                   CONCAT16(bVar43 & bVar56,
                                            CONCAT15(bVar42 & bVar56,
                                                     CONCAT14(bVar41 & bVar56,
                                                              CONCAT13(bVar40 & bVar12,
                                                                       CONCAT12(bVar39 & (byte)(
                                                  uVar51 >> 0x30),
                                                  CONCAT11(bVar38 & (byte)(uVar51 >> 0x28),
                                                           bVar34 & (byte)(uVar51 >> 0x20))))))));
      } while (uVar35 != 0);
      uVar35 = lVar28 + uVar36 + lVar23 + lVar22;
      if (uVar15 == uVar26) goto joined_r0x01328d68;
    }
    lVar28 = uVar15 - uVar26;
    puVar21 = (undefined8 *)(puVar19[2] + (uVar26 + uVar13) * 8);
    do {
      uVar30 = (uint)((ulong)*puVar21 >> 0x20);
      lVar23 = lVar20;
      if ((uVar30 >> 8 & 0xff) != (param_4 & 0xff00) >> 8 || (uVar30 & 0xff) != (param_4 & 0xff)) {
        lVar23 = 0;
      }
      lVar28 = lVar28 + -1;
      uVar35 = uVar35 + lVar23;
      puVar21 = puVar21 + 1;
    } while (lVar28 != 0);
  }
joined_r0x01328d68:
  if (uVar13 == 0) {
    uVar36 = 0;
  }
  else {
    lVar20 = param_3 + -1;
    if (uVar13 < 4) {
      uVar24 = 0;
      uVar36 = uVar13;
    }
    else {
      uVar24 = uVar13 & 0xfffffffffffffffc;
      lVar22 = 0;
      uVar50 = CONCAT44(param_4 >> 8,param_4 >> 8) & 0xff000000ff;
      lVar28 = 0;
      lVar23 = 0;
      puVar21 = (undefined8 *)(puVar19[2] + 0x10);
      uVar17 = CONCAT44(param_4,param_4) & 0xff000000ff;
      uVar36 = uVar24;
      uVar26 = uVar13;
      do {
        puVar1 = puVar21 + -2;
        puVar7 = puVar21 + -1;
        puVar8 = puVar21 + 1;
        uVar29 = *puVar21;
        uVar36 = uVar36 - 4;
        puVar21 = puVar21 + 4;
        uVar30 = (uint)((ulong)*puVar1 >> 0x20);
        uVar32 = (uint)((ulong)*puVar7 >> 0x20);
        uVar31 = (uint)((ulong)uVar29 >> 0x20);
        uVar33 = (uint)((ulong)*puVar8 >> 0x20);
        uVar57 = CONCAT44(uVar32,uVar30) & 0xff000000ff;
        uVar58 = CONCAT44(uVar33,uVar31) & 0xff000000ff;
        uVar51 = CONCAT44(uVar32 >> 8,uVar30 >> 8) & 0xff000000ff;
        uVar54 = CONCAT44(uVar33 >> 8,uVar31 >> 8) & 0xff000000ff;
        iVar46 = (int)uVar17;
        iVar47 = (int)(uVar17 >> 0x20);
        iVar48 = (int)uVar50;
        iVar49 = (int)(uVar50 >> 0x20);
        uVar51 = CONCAT44(-(uint)(iVar47 == (int)(uVar57 >> 0x20)),-(uint)(iVar46 == (int)uVar57)) &
                 CONCAT44(-(uint)(iVar49 == (int)(uVar51 >> 0x20)),-(uint)(iVar48 == (int)uVar51));
        uVar54 = CONCAT44(-(uint)(iVar47 == (int)(uVar58 >> 0x20)),-(uint)(iVar46 == (int)uVar58)) &
                 CONCAT44(-(uint)(iVar49 == (int)(uVar54 >> 0x20)),-(uint)(iVar48 == (int)uVar54));
        bVar34 = (byte)lVar20;
        bVar38 = (byte)((ulong)lVar20 >> 8);
        bVar39 = (byte)((ulong)lVar20 >> 0x10);
        bVar9 = (byte)(uVar51 >> 0x18);
        bVar40 = (byte)((ulong)lVar20 >> 0x18);
        bVar41 = (byte)((ulong)lVar20 >> 0x20);
        bVar52 = (char)bVar9 >> 7;
        bVar42 = (byte)((ulong)lVar20 >> 0x28);
        bVar43 = (byte)((ulong)lVar20 >> 0x30);
        bVar44 = (byte)((ulong)lVar20 >> 0x38);
        bVar10 = (byte)(uVar51 >> 0x38);
        bVar53 = (char)bVar10 >> 7;
        bVar11 = (byte)(uVar54 >> 0x18);
        bVar55 = (char)bVar11 >> 7;
        bVar12 = (byte)(uVar54 >> 0x38);
        bVar56 = (char)bVar12 >> 7;
        uVar26 = uVar26 + CONCAT17(bVar44 & bVar52,
                                   CONCAT16(bVar43 & bVar52,
                                            CONCAT15(bVar42 & bVar52,
                                                     CONCAT14(bVar41 & bVar52,
                                                              CONCAT13(bVar40 & bVar9,
                                                                       CONCAT12(bVar39 & (byte)(
                                                  uVar51 >> 0x10),
                                                  CONCAT11(bVar38 & (byte)(uVar51 >> 8),
                                                           bVar34 & (byte)uVar51)))))));
        lVar22 = lVar22 + CONCAT17(bVar44 & bVar53,
                                   CONCAT16(bVar43 & bVar53,
                                            CONCAT15(bVar42 & bVar53,
                                                     CONCAT14(bVar41 & bVar53,
                                                              CONCAT13(bVar40 & bVar10,
                                                                       CONCAT12(bVar39 & (byte)(
                                                  uVar51 >> 0x30),
                                                  CONCAT11(bVar38 & (byte)(uVar51 >> 0x28),
                                                           bVar34 & (byte)(uVar51 >> 0x20))))))));
        lVar28 = lVar28 + CONCAT17(bVar44 & bVar55,
                                   CONCAT16(bVar43 & bVar55,
                                            CONCAT15(bVar42 & bVar55,
                                                     CONCAT14(bVar41 & bVar55,
                                                              CONCAT13(bVar40 & bVar11,
                                                                       CONCAT12(bVar39 & (byte)(
                                                  uVar54 >> 0x10),
                                                  CONCAT11(bVar38 & (byte)(uVar54 >> 8),
                                                           bVar34 & (byte)uVar54)))))));
        lVar23 = lVar23 + CONCAT17(bVar44 & bVar56,
                                   CONCAT16(bVar43 & bVar56,
                                            CONCAT15(bVar42 & bVar56,
                                                     CONCAT14(bVar41 & bVar56,
                                                              CONCAT13(bVar40 & bVar12,
                                                                       CONCAT12(bVar39 & (byte)(
                                                  uVar54 >> 0x30),
                                                  CONCAT11(bVar38 & (byte)(uVar54 >> 0x28),
                                                           bVar34 & (byte)(uVar54 >> 0x20))))))));
      } while (uVar36 != 0);
      uVar36 = lVar28 + uVar26 + lVar23 + lVar22;
      if (uVar13 == uVar24) goto joined_r0x01328f78;
    }
    lVar28 = uVar13 - uVar24;
    puVar21 = (undefined8 *)(puVar19[2] + uVar24 * 8);
    do {
      uVar30 = (uint)((ulong)*puVar21 >> 0x20);
      lVar23 = lVar20;
      if ((uVar30 >> 8 & 0xff) != (param_4 & 0xff00) >> 8 || (uVar30 & 0xff) != (param_4 & 0xff)) {
        lVar23 = 0;
      }
      lVar28 = lVar28 + -1;
      uVar36 = uVar36 + lVar23;
      puVar21 = puVar21 + 1;
    } while (lVar28 != 0);
  }
joined_r0x01328f78:
  if ((uVar35 != uVar15) || (puVar14 = param_2, uVar36 != uVar13)) {
    uVar13 = *(ulong *)(param_1 + 0x10);
    uVar30 = (int)uVar36 + (int)uVar35;
    uVar15 = -(ulong)(uVar30 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar30 << 3;
    if (*(long *)(param_1 + 0x18) - uVar13 < uVar15) {
      uVar13 = v8::internal::Zone::NewExpand(param_1,uVar15);
    }
    else {
      *(ulong *)(param_1 + 0x10) = uVar13 + uVar15;
    }
    plVar16 = *(long **)(param_2 + 4);
    uVar15 = plVar16[1];
    if (uVar15 == 0) {
      puVar19 = (ulong *)(param_2 + 2);
    }
    else {
      puVar19 = (ulong *)(plVar16[2] + (uVar15 + *plVar16) * 8 + -8);
    }
    uVar26 = *puVar19;
    local_90 = 7;
    local_88 = &DAT_01a0617c;
    uVar24 = (ulong)((uVar26 & 0xffffffffffff) == 0x70700000002);
    local_80 = 8;
    local_78 = &DAT_01a061d0;
    local_70 = 0;
    if (uVar15 == uVar24) {
      lVar20 = 0;
      local_98 = local_70;
    }
    else {
      lVar28 = 0;
      lVar20 = 0;
      while( true ) {
        uVar17 = *(ulong *)(plVar16[2] + (*plVar16 + lVar28) * 8);
        uVar30 = (uint)(uVar17 >> 0x20);
        if (((uVar30 & 0xff) == (param_4 & 0xff)) &&
           ((uVar30 >> 8 & 0xff) == (param_4 & 0xff00) >> 8)) {
          if (param_3 != 0) {
            lVar23 = uVar36 + lVar20;
            lVar20 = lVar20 + param_3;
            puVar18 = (uint *)(uVar13 + lVar23 * 8);
            lVar23 = param_3;
            do {
              lVar22 = (long)local_90._4_4_;
              if (local_90._4_4_ < (int)local_90) {
                local_90 = CONCAT44(local_90._4_4_ + 1,(int)local_90);
                uVar30 = *(int *)(local_88 + lVar22 * 0xc) << 1;
              }
              else {
                uVar30 = local_70 << 1 ^ 0xffffffff;
                local_70 = local_70 + 1;
              }
              *(undefined2 *)(puVar18 + 1) = 0x204;
              *puVar18 = uVar30;
              lVar23 = lVar23 + -1;
              puVar18 = puVar18 + 2;
            } while (lVar23 != 0);
          }
        }
        else {
          uVar29 = FUN_01328b9c(&local_90,uVar17 >> 0x20);
          lVar23 = lVar20 + uVar36;
          lVar20 = lVar20 + 1;
          puVar14 = (undefined4 *)(uVar13 + lVar23 * 8);
          *puVar14 = (int)uVar29;
          *(short *)(puVar14 + 1) = (short)((ulong)uVar29 >> 0x20);
        }
        lVar28 = lVar28 + 1;
        local_98 = local_70;
        if (lVar28 == uVar15 - uVar24) break;
        plVar16 = *(long **)(param_2 + 4);
      }
    }
    if ((uVar26 & 0xffffffffffff) == 0x70700000002) {
      puVar14 = (undefined4 *)(uVar13 + (lVar20 + uVar36) * 8);
      *(undefined2 *)(puVar14 + 1) = 0x707;
      *puVar14 = 2;
    }
    local_b0 = &DAT_01a06250;
    local_a0 = &DAT_01a06268;
    local_b8 = 2;
    local_a8 = 2;
    puVar19 = *(ulong **)(param_2 + 4);
    local_70 = local_98;
    if (*puVar19 != 0) {
      uVar15 = 0;
      lVar20 = 0;
      do {
        uVar26 = *(ulong *)(puVar19[2] + uVar15 * 8);
        uVar30 = (uint)(uVar26 >> 0x20);
        if (((uVar30 & 0xff) == (param_4 & 0xff)) &&
           ((uVar30 >> 8 & 0xff) == (param_4 & 0xff00) >> 8)) {
          lVar28 = lVar20;
          if (param_3 != 0) {
            lVar28 = lVar20 + param_3;
            puVar18 = (uint *)(uVar13 + lVar20 * 8);
            lVar20 = param_3;
            do {
              lVar23 = (long)local_b8._4_4_;
              if (local_b8._4_4_ < (int)local_b8) {
                local_b8 = CONCAT44(local_b8._4_4_ + 1,(int)local_b8);
                uVar30 = *(int *)(local_b0 + lVar23 * 0xc) << 1;
              }
              else {
                uVar30 = local_98 << 1 ^ 0xffffffff;
                local_98 = local_98 + 1;
              }
              *(undefined2 *)(puVar18 + 1) = 0x204;
              *puVar18 = uVar30;
              lVar20 = lVar20 + -1;
              puVar18 = puVar18 + 2;
            } while (lVar20 != 0);
          }
        }
        else {
          uVar29 = FUN_01328b9c(&local_b8,uVar26 >> 0x20);
          puVar14 = (undefined4 *)(uVar13 + lVar20 * 8);
          lVar28 = lVar20 + 1;
          *puVar14 = (int)uVar29;
          *(short *)(puVar14 + 1) = (short)((ulong)uVar29 >> 0x20);
        }
        puVar19 = *(ulong **)(param_2 + 4);
        uVar15 = uVar15 + 1;
        lVar20 = lVar28;
      } while (uVar15 < *puVar19);
    }
    puVar14 = *(undefined4 **)(param_1 + 0x10);
    lVar20 = *(long *)(param_1 + 0x18);
    if ((ulong)(lVar20 - (long)puVar14) < 0x58) {
      puVar14 = (undefined4 *)v8::internal::Zone::NewExpand(param_1,0x58);
      puVar19 = *(ulong **)(param_1 + 0x10);
      lVar20 = *(long *)(param_1 + 0x18);
    }
    else {
      puVar19 = (ulong *)(puVar14 + 0x16);
      *(ulong **)(param_1 + 0x10) = puVar19;
    }
    uVar2 = *param_2;
    uVar5 = *(undefined2 *)(param_2 + 1);
    uVar29 = *(undefined8 *)(param_2 + 2);
    if ((ulong)(lVar20 - (long)puVar19) < 0x18) {
      puVar19 = (ulong *)v8::internal::Zone::NewExpand(param_1,0x18);
    }
    else {
      *(ulong **)(param_1 + 0x10) = puVar19 + 3;
    }
    *puVar19 = uVar36;
    puVar19[1] = uVar35;
    puVar19[2] = uVar13;
    uVar4 = *(undefined1 *)(param_2 + 10);
    uVar45 = *(undefined8 *)(param_2 + 0xe);
    uVar37 = *(undefined8 *)(param_2 + 0xc);
    uVar3 = param_2[0x12];
    uVar25 = *(undefined8 *)(param_2 + 0x14);
    uVar27 = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(puVar14 + 2) = uVar29;
    *(ulong **)(puVar14 + 4) = puVar19;
    *puVar14 = uVar2;
    *(undefined2 *)(puVar14 + 1) = uVar5;
    *(undefined1 *)(puVar14 + 10) = uVar4;
    *(undefined8 *)(puVar14 + 0xe) = uVar45;
    *(undefined8 *)(puVar14 + 0xc) = uVar37;
    *(undefined8 *)(puVar14 + 0x10) = uVar27;
    puVar14[0x12] = uVar3;
    *(long *)(puVar14 + 6) = (long)local_70;
    *(long *)(puVar14 + 8) = (long)local_98 - (long)local_70;
    *(undefined8 *)(puVar14 + 0x14) = uVar25;
  }
  if (*(long *)(lVar6 + 0x28) == local_68) {
    return puVar14;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

