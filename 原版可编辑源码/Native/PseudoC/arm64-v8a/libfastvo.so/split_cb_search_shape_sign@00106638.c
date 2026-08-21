
void split_cb_search_shape_sign
               (void *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,uint *param_5
               ,undefined4 param_6,ulong param_7,long param_8,long param_9,long param_10,
               undefined8 param_11,int param_12,int param_13)

{
  byte *pbVar1;
  uint uVar2;
  undefined4 uVar3;
  char cVar4;
  uint *puVar5;
  size_t __n;
  undefined4 *puVar6;
  uint uVar7;
  void *pvVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  int iVar13;
  undefined8 *puVar14;
  short *psVar15;
  short *psVar16;
  ulong uVar17;
  ulong uVar18;
  undefined8 *puVar19;
  undefined4 *puVar20;
  int *piVar21;
  undefined2 *puVar22;
  ulong uVar23;
  long lVar24;
  undefined4 *puVar25;
  int *piVar26;
  ulong uVar27;
  long *plVar28;
  long lVar29;
  long lVar30;
  long *plVar31;
  long lVar32;
  long lVar33;
  undefined4 *puVar34;
  char *pcVar35;
  undefined4 *puVar36;
  undefined2 *puVar37;
  long lVar38;
  undefined4 *puVar39;
  uint uVar40;
  long lVar41;
  void *__src;
  ulong uVar42;
  long lVar43;
  uint uVar44;
  long lVar45;
  void *pvVar46;
  ulong uVar47;
  int iVar48;
  uint uVar49;
  int iVar50;
  int iVar51;
  int iVar52;
  int iVar53;
  int iVar54;
  int iVar55;
  int iVar57;
  undefined8 uVar56;
  short sVar59;
  short sVar60;
  undefined8 uVar58;
  short sVar61;
  undefined8 uVar62;
  undefined8 uVar63;
  undefined8 uVar64;
  undefined8 uVar65;
  undefined8 uVar66;
  undefined8 uVar67;
  ulong uVar68;
  ulong uVar69;
  undefined8 uStack_2a0;
  int local_298;
  long local_290;
  uint *local_288;
  void *local_280;
  long local_278;
  undefined8 local_270;
  undefined8 local_268;
  undefined8 local_260;
  undefined4 local_254;
  long local_250;
  int local_244;
  ulong local_240;
  undefined1 *local_238;
  long local_230;
  long local_228;
  undefined4 *local_220;
  int local_214;
  undefined8 *local_210;
  int local_208;
  uint local_204;
  ulong local_200;
  ulong local_1f8;
  ulong local_1f0;
  uint local_1e4;
  size_t local_1e0;
  long local_1d8;
  long local_1d0;
  long local_1c8;
  long local_1c0;
  ulong local_1b8;
  long local_1b0;
  long local_1a8;
  ulong local_1a0;
  undefined8 *local_198;
  long local_190;
  ulong local_188;
  long local_180;
  long local_178;
  long local_170;
  long local_168;
  undefined4 *local_160;
  undefined4 *local_158;
  undefined4 *local_150;
  long local_148;
  ulong local_140;
  uint local_134;
  long local_130;
  long local_128;
  ulong local_120;
  undefined8 *local_118;
  long local_110;
  long local_108;
  undefined8 local_100;
  ulong local_f8;
  long local_f0;
  long local_e8;
  long local_e0;
  long local_d8;
  void *local_d0;
  long local_c8;
  long local_c0;
  ulong local_b8;
  void *local_b0;
  ulong local_a8;
  void *local_a0;
  ulong local_98;
  long local_90;
  long local_88;
  long local_80;
  ulong local_78;
  long local_70;
  
  local_100 = param_11;
  lVar9 = tpidr_el0;
  local_70 = *(long *)(lVar9 + 0x28);
  if (9 < param_12) {
    param_12 = 10;
  }
  if ((param_12 < 3) || (param_12 * 2 - 3U < 3)) {
    local_298 = param_13;
    uStack_2a0 = param_11;
    FUN_00107aa4(param_1);
    lVar9 = *(long *)(lVar9 + 0x28);
    goto LAB_00107a74;
  }
  local_244 = param_13;
  uVar49 = (param_12 * 2) / 3;
  uVar47 = (ulong)uVar49;
  uVar23 = uVar47 * 8 + 0xf & 0xffffffff0;
  lVar43 = (long)&local_290 + -uVar23;
  local_88 = param_9;
  lVar41 = lVar43 - uVar23;
  lVar45 = lVar41 - uVar23;
  local_118 = (undefined8 *)(lVar45 - uVar23);
  uVar2 = *param_5;
  uVar18 = (ulong)uVar2;
  local_f8 = (ulong)param_5[1];
  uVar44 = param_5[5];
  local_b8 = (ulong)(uint)(1 << (ulong)(param_5[4] & 0x1f));
  lVar11 = *(long *)(param_5 + 2);
  local_128 = (long)local_118 -
              ((ulong)(uVar2 << (ulong)(param_5[4] & 0x1f)) * 2 + 0xf & 0x3fffffff0);
  local_130 = local_128 - (local_b8 * 4 + 0xf & 0x7fffffff0);
  local_240 = param_7 & 0xffffffff;
  local_278 = local_240 * 2;
  pvVar46 = (void *)(local_130 - (local_278 + 0xfU & 0x3fffffff0));
  local_228 = (long)pvVar46 - (local_240 * 4 + 0xf & 0x7fffffff0);
  local_1a8 = local_f8 * 4;
  local_220 = (undefined4 *)(local_228 - (local_1a8 + 0xfU & 0x7fffffff0));
  iVar13 = (int)param_7;
  lVar24 = (long)local_220 - ((ulong)(uVar49 * 2 * iVar13) * 2 + 0xf & 0x3fffffff0);
  uVar42 = (ulong)(int)uVar49;
  uVar17 = uVar42;
  if ((long)uVar42 < 2) {
    uVar17 = 1;
  }
  lVar30 = (long)iVar13;
  local_290 = param_10;
  local_288 = param_5;
  local_270 = param_2;
  local_268 = param_3;
  local_260 = param_4;
  local_254 = param_6;
  local_250 = param_8;
  local_230 = lVar9;
  if (uVar17 < 4) {
    uVar27 = 0;
    local_238 = (undefined1 *)&local_290;
LAB_0010698c:
    puVar19 = local_118;
    uVar17 = uVar27 << 1;
    lVar33 = uVar27 * lVar30;
    lVar9 = lVar24;
    do {
      lVar38 = uVar27 * 8;
      uVar27 = uVar27 + 1;
      lVar29 = lVar9 + lVar33 * 4;
      lVar32 = lVar9 + (uVar17 | 1) * lVar30 * 2;
      lVar9 = lVar9 + lVar30 * 4;
      *(long *)(lVar43 + lVar38) = lVar29;
      *(long *)(lVar41 + lVar38) = lVar32;
    } while ((long)uVar27 < (long)uVar42);
  }
  else {
    lVar33 = 1;
    lVar9 = 0;
    uVar27 = uVar17 & 0x7ffffffffffffffc;
    plVar28 = (long *)((long)&local_280 + -uVar23);
    plVar31 = (long *)(lVar41 + 0x10);
    uVar23 = uVar27;
    local_238 = (undefined1 *)&local_290;
    do {
      uVar68 = lVar9 * 2;
      uVar69 = lVar33 * 2;
      plVar28[-1] = lVar24 + uVar69 * lVar30 * 2;
      plVar28[-2] = lVar24 + uVar68 * lVar30 * 2;
      plVar28[1] = lVar24 + (uVar69 + 4) * lVar30 * 2;
      *plVar28 = lVar24 + (uVar68 + 4) * lVar30 * 2;
      lVar9 = lVar9 + 4;
      lVar33 = lVar33 + 4;
      uVar23 = uVar23 - 4;
      plVar31[-1] = lVar24 + (uVar69 | 1) * lVar30 * 2;
      plVar31[-2] = lVar24 + (uVar68 | 1) * lVar30 * 2;
      plVar31[1] = lVar24 + (uVar69 + 4 | 1) * lVar30 * 2;
      *plVar31 = lVar24 + (uVar68 + 4 | 1) * lVar30 * 2;
      plVar28 = plVar28 + 4;
      plVar31 = plVar31 + 4;
    } while (uVar23 != 0);
    puVar19 = local_118;
    if (uVar17 != uVar27) goto LAB_0010698c;
  }
  local_90 = (long)(int)uVar2;
  uVar17 = uVar47 * 4 + 0xf & 0x7fffffff0;
  lVar9 = (long)(int)local_f8;
  local_e0 = lVar24 - uVar17;
  lVar30 = local_e0 - uVar17;
  local_a0 = (void *)(lVar30 - uVar17);
  local_b0 = (void *)((long)local_a0 - uVar17);
  __src = (void *)((long)local_b0 - uVar17);
  local_d0 = (void *)((long)__src - uVar17);
  lVar24 = (long)local_d0 - ((ulong)((int)local_f8 * uVar49 * 2) * 4 + 0xf & 0x7fffffff0);
  uVar17 = uVar42;
  if ((long)uVar42 < 2) {
    uVar17 = 1;
  }
  local_110 = lVar11;
  local_c8 = lVar41;
  if (uVar17 < 4) {
    uVar27 = 0;
LAB_00106b74:
    lVar11 = lVar24;
    uVar17 = uVar27;
    do {
      uVar23 = uVar17 + 1;
      lVar41 = lVar11 + uVar27 * lVar9 * 8;
      lVar33 = lVar11 + (uVar27 << 1 | 1) * lVar9 * 4;
      lVar11 = lVar11 + lVar9 * 8;
      puVar19[uVar17] = lVar41;
      *(long *)(lVar45 + uVar17 * 8) = lVar33;
      uVar17 = uVar23;
    } while ((long)uVar23 < (long)(int)uVar49);
  }
  else {
    lVar41 = 1;
    lVar11 = 0;
    uVar27 = uVar17 & 0x7ffffffffffffffc;
    plVar28 = puVar19 + 2;
    plVar31 = (long *)(lVar45 + 0x10);
    uVar23 = uVar27;
    do {
      uVar68 = lVar11 * 2;
      uVar69 = lVar41 * 2;
      plVar28[-1] = lVar24 + uVar69 * lVar9 * 4;
      plVar28[-2] = lVar24 + uVar68 * lVar9 * 4;
      plVar28[1] = lVar24 + (uVar69 + 4) * lVar9 * 4;
      *plVar28 = lVar24 + (uVar68 + 4) * lVar9 * 4;
      lVar11 = lVar11 + 4;
      lVar41 = lVar41 + 4;
      uVar23 = uVar23 - 4;
      plVar31[-1] = lVar24 + (uVar69 | 1) * lVar9 * 4;
      plVar31[-2] = lVar24 + (uVar68 | 1) * lVar9 * 4;
      plVar31[1] = lVar24 + (uVar69 + 4 | 1) * lVar9 * 4;
      *plVar31 = lVar24 + (uVar68 + 4 | 1) * lVar9 * 4;
      plVar28 = plVar28 + 4;
      plVar31 = plVar31 + 4;
    } while (uVar23 != 0);
    puVar19 = local_118;
    if (uVar17 != uVar27) goto LAB_00106b74;
  }
  local_e8 = (long)iVar13;
  uVar17 = -(param_7 >> 0x1f & 1) & 0xfffffffe00000000 | (param_7 & 0xffffffff) << 1;
  local_280 = param_1;
  local_1b8 = param_7;
  local_134 = uVar44;
  local_108 = lVar9;
  local_d8 = lVar45;
  memcpy(pvVar46,param_1,uVar17);
  lVar9 = 0;
  local_120 = uVar47;
  do {
    memcpy(*(void **)(lVar43 + lVar9 * 8),pvVar46,uVar17);
    lVar11 = local_88;
    lVar9 = lVar9 + 1;
  } while (lVar9 < (int)uVar49);
  FUN_001082ec(local_110,local_88,local_128,local_130,local_b8,uVar18);
  uVar49 = (uint)local_120;
  uVar44 = uVar49;
  if ((int)uVar49 < 2) {
    uVar44 = 1;
  }
  memset(local_d0,0,(ulong)uVar44 << 2);
  uVar44 = (uint)local_1b8;
  lVar9 = local_228;
  if (0 < (int)local_108) {
    local_208 = -uVar2;
    local_188 = uVar18 & 0xfffffff8;
    local_140 = local_f8 & 0xfffffff8;
    local_210 = (undefined8 *)((long)__src + 0x10);
    local_190 = lVar11 + local_90 * 2;
    local_1c0 = 4;
    local_214 = ~uVar2 + uVar44;
    local_1b0 = 0;
    iVar13 = uVar49 - 1;
    local_170 = local_90 + 8;
    lVar41 = (long)(int)uVar49;
    if (iVar13 == 0 || (int)uVar49 < 1) {
      uVar49 = 1;
    }
    uVar40 = (uVar44 - 1) - uVar2;
    local_198 = (undefined8 *)(lVar11 + local_170 * 2);
    local_1e0 = (ulong)uVar49 << 2;
    local_148 = lVar41 + -1;
    if ((long)uVar42 < 2) {
      uVar42 = 1;
    }
    lVar9 = local_148 * 4;
    local_200 = uVar42 & 0x7ffffffffffffff8;
    local_150 = (undefined4 *)((long)__src + lVar9);
    uVar44 = uVar44 - uVar2;
    local_158 = (undefined4 *)((long)local_a0 + lVar9);
    local_160 = (undefined4 *)((long)local_b0 + lVar9);
    local_178 = local_90;
    uVar17 = 0;
    uVar49 = uVar2;
    local_204 = uVar44;
    local_1f8 = uVar42;
    do {
      lVar9 = local_90;
      pvVar46 = local_b0;
      local_78 = (ulong)uVar44;
      local_168 = (long)(int)uVar49;
      local_1d8 = ((ulong)uVar40 + 1) - (local_78 & 0xf);
      iVar48 = (int)uVar17;
      uVar44 = local_204 + iVar48 * local_208;
      uVar47 = (ulong)uVar44;
      local_98 = local_78 & 0xfffffff0;
      local_1c8 = (long)(int)(uVar2 + uVar2 * iVar48);
      uVar23 = (ulong)(uint)(local_214 + iVar48 * local_208);
      lVar11 = local_90 + uVar17 * local_90;
      uVar42 = local_200;
      puVar19 = local_210;
      local_1e4 = uVar40;
      local_c0 = lVar43;
      local_a8 = uVar17;
      if (local_1f8 < 8) {
        uVar17 = 0;
LAB_00106e84:
        do {
          *(undefined4 *)((long)__src + uVar17 * 4) = 0x7fffffff;
          uVar17 = uVar17 + 1;
        } while ((long)uVar17 < lVar41);
      }
      else {
        do {
          puVar19[-1] = 0x7fffffff7fffffff;
          puVar19[-2] = 0x7fffffff7fffffff;
          puVar19[1] = 0x7fffffff7fffffff;
          *puVar19 = 0x7fffffff7fffffff;
          uVar42 = uVar42 - 8;
          puVar19 = puVar19 + 4;
        } while (uVar42 != 0);
        uVar17 = local_200;
        if (local_1f8 != local_200) goto LAB_00106e84;
      }
      __n = local_1e0;
      local_180 = lVar11 + uVar47;
      local_1d0 = local_1c8 + uVar23;
      local_1a0 = uVar23 + 1;
      local_80 = lVar9 + uVar47;
      local_1f0 = uVar23;
      memset(pvVar46,0,local_1e0);
      memset(local_a0,0,__n);
      lVar43 = 0;
      local_f0 = local_a8 * lVar9;
      lVar9 = local_e0;
      do {
        lVar45 = *(long *)(local_c0 + lVar43 * 8);
        lVar11 = lVar45 + local_f0 * 2;
        if ((int)uVar2 < 1) {
          uVar49 = 0;
        }
        else {
          if (uVar2 < 8) {
            uVar49 = 0;
            uVar17 = 0;
          }
          else {
            iVar48 = 0;
            iVar50 = 0;
            iVar51 = 0;
            iVar52 = 0;
            puVar19 = (undefined8 *)(lVar45 + local_1c0 * 2);
            iVar53 = 0;
            iVar54 = 0;
            iVar55 = 0;
            iVar57 = 0;
            uVar17 = local_188;
            do {
              uVar58 = puVar19[-1];
              uVar63 = *puVar19;
              uVar17 = uVar17 - 8;
              puVar19 = puVar19 + 2;
              sVar59 = (short)((ulong)uVar58 >> 0x10);
              sVar60 = (short)((ulong)uVar58 >> 0x20);
              sVar61 = (short)((ulong)uVar58 >> 0x30);
              iVar48 = iVar48 + (int)(short)uVar58 * (int)(short)uVar58;
              iVar50 = iVar50 + (int)sVar59 * (int)sVar59;
              iVar51 = iVar51 + (int)sVar60 * (int)sVar60;
              iVar52 = iVar52 + (int)sVar61 * (int)sVar61;
              sVar59 = (short)((ulong)uVar63 >> 0x10);
              sVar60 = (short)((ulong)uVar63 >> 0x20);
              sVar61 = (short)((ulong)uVar63 >> 0x30);
              iVar53 = iVar53 + (int)(short)uVar63 * (int)(short)uVar63;
              iVar54 = iVar54 + (int)sVar59 * (int)sVar59;
              iVar55 = iVar55 + (int)sVar60 * (int)sVar60;
              iVar57 = iVar57 + (int)sVar61 * (int)sVar61;
            } while (uVar17 != 0);
            uVar49 = iVar53 + iVar48 + iVar54 + iVar50 + iVar55 + iVar51 + iVar57 + iVar52;
            uVar17 = local_188;
            if (local_188 == uVar18) goto LAB_00106fb4;
          }
          lVar33 = uVar18 - uVar17;
          psVar15 = (short *)(lVar45 + local_1b0 * 2 + uVar17 * 2);
          do {
            lVar33 = lVar33 + -1;
            uVar49 = uVar49 + (int)*psVar15 * (int)*psVar15;
            psVar15 = psVar15 + 1;
          } while (lVar33 != 0);
        }
LAB_00106fb4:
        if (local_134 == 0) {
          *(undefined8 *)(lVar24 + -0x10) = local_100;
          vq_nbest(lVar11,local_128,uVar2,local_b8,local_130,local_120,lVar9,lVar30);
        }
        else {
          *(undefined8 *)(lVar24 + -0x10) = local_100;
          vq_nbest_sign(lVar11,local_128,uVar2,local_b8,local_130,local_120,lVar9,lVar30);
        }
        pvVar8 = local_a0;
        pvVar46 = local_b0;
        lVar9 = local_e0;
        lVar33 = local_110;
        lVar45 = local_148;
        puVar6 = local_150;
        puVar25 = local_158;
        puVar20 = local_160;
        iVar48 = *(int *)((long)local_d0 + lVar43 * 4);
        lVar11 = 0;
        do {
          iVar50 = iVar48 + (uVar49 >> 1) + *(int *)(lVar30 + lVar11 * 4);
          if ((iVar50 < *(int *)((long)__src + (long)iVar13 * 4)) && (1 < param_12)) {
            lVar29 = 0;
LAB_0010708c:
            if (*(int *)((long)__src + lVar29 * 4) <= iVar50) goto code_r0x00107098;
            lVar32 = (long)iVar13;
            lVar38 = lVar45;
            puVar34 = puVar6;
            puVar36 = puVar25;
            puVar39 = puVar20;
            if ((int)lVar29 < iVar13) {
              do {
                lVar38 = lVar38 + -1;
                *puVar34 = puVar34[-1];
                *puVar36 = puVar36[-1];
                *puVar39 = puVar39[-1];
                lVar32 = lVar29;
                puVar34 = puVar34 + -1;
                puVar36 = puVar36 + -1;
                puVar39 = puVar39 + -1;
              } while (lVar29 < lVar38);
            }
            uVar3 = *(undefined4 *)(lVar9 + lVar11 * 4);
            *(int *)((long)__src + lVar29 * 4) = iVar50;
            *(int *)((long)pvVar46 + lVar32 * 4) = (int)lVar43;
            *(undefined4 *)((long)pvVar8 + lVar32 * 4) = uVar3;
          }
LAB_00107118:
          uVar42 = local_f8;
          lVar11 = lVar11 + 1;
        } while (lVar11 < lVar41);
      } while ((local_a8 != 0) && (lVar43 = lVar43 + 1, lVar43 < lVar41));
      lVar43 = (local_a8 + 1) * local_90;
      uVar49 = (int)local_1f0 + 1U & 0xf;
      lVar9 = 0;
      do {
        if (lVar43 < local_e8) {
          lVar29 = *(long *)(local_c0 + (long)*(int *)((long)pvVar46 + lVar9 * 4) * 8);
          lVar45 = *(long *)(local_c8 + lVar9 * 8);
          lVar11 = local_168;
          if (0xf < local_1a0) {
            if ((lVar29 + local_1d0 * 2 + 2U <= (ulong)(lVar45 + local_1c8 * 2)) ||
               (lVar45 + local_1d0 * 2 + 2U <= (ulong)(lVar29 + local_1c8 * 2))) {
              puVar19 = (undefined8 *)(lVar29 + local_168 * 2 + 0x10);
              puVar10 = (undefined8 *)(lVar45 + local_168 * 2 + 0x10);
              lVar11 = local_1d8;
              do {
                puVar12 = puVar19 + -1;
                uVar58 = puVar19[-2];
                uVar56 = puVar19[1];
                uVar63 = *puVar19;
                puVar19 = puVar19 + 4;
                lVar11 = lVar11 + -0x10;
                puVar10[-1] = *puVar12;
                puVar10[-2] = uVar58;
                puVar10[1] = uVar56;
                *puVar10 = uVar63;
                puVar10 = puVar10 + 4;
              } while (lVar11 != 0);
              lVar11 = (local_1a0 - uVar49) + local_168;
              if (uVar49 == 0) goto LAB_00107268;
            }
          }
          iVar48 = (int)local_1b8 - (int)lVar11;
          puVar22 = (undefined2 *)(lVar45 + lVar11 * 2);
          puVar37 = (undefined2 *)(lVar29 + lVar11 * 2);
          do {
            iVar48 = iVar48 + -1;
            *puVar22 = *puVar37;
            puVar22 = puVar22 + 1;
            puVar37 = puVar37 + 1;
          } while (iVar48 != 0);
        }
LAB_00107268:
        if (0 < (int)uVar2) {
          iVar50 = *(int *)((long)local_a0 + lVar9 * 4);
          iVar51 = (int)local_b8;
          iVar48 = 0;
          if (iVar51 <= iVar50) {
            iVar48 = iVar51;
          }
          lVar11 = *(long *)(local_c8 + lVar9 * 8);
          puVar19 = (undefined8 *)(lVar11 + local_170 * 2);
          uVar17 = 0;
          iVar52 = -1;
          if (iVar50 < iVar51) {
            iVar52 = 1;
          }
          lVar45 = local_190;
          puVar10 = local_198;
          do {
            if (0 < local_e8 - lVar43) {
              iVar51 = iVar52 * *(char *)(lVar33 + uVar17 + (long)(int)((iVar50 - iVar48) * uVar2));
              if ((uVar44 < 0x10) ||
                 ((puVar12 = puVar10, puVar14 = puVar19, uVar23 = local_98,
                  (ulong)(lVar11 + lVar43 * 2) < local_88 + (local_80 - uVar17) * 2 &&
                  (local_88 + (local_90 - uVar17) * 2 < (ulong)(lVar11 + local_180 * 2))))) {
                uVar23 = 0;
              }
              else {
                do {
                  uVar65 = puVar12[-1];
                  uVar64 = puVar12[-2];
                  uVar67 = puVar12[1];
                  uVar66 = *puVar12;
                  uVar63 = puVar14[-1];
                  uVar58 = puVar14[-2];
                  uVar62 = puVar14[1];
                  uVar56 = *puVar14;
                  uVar23 = uVar23 - 0x10;
                  puVar14[-1] = CONCAT26((short)((ulong)uVar63 >> 0x30) -
                                         (short)(iVar51 * (short)((ulong)uVar65 >> 0x30) + 0x1000U
                                                >> 0xd),
                                         CONCAT24((short)((ulong)uVar63 >> 0x20) -
                                                  (short)(iVar51 * (short)((ulong)uVar65 >> 0x20) +
                                                          0x1000U >> 0xd),
                                                  CONCAT22((short)((ulong)uVar63 >> 0x10) -
                                                           (short)(iVar51 * (short)((ulong)uVar65 >>
                                                                                   0x10) + 0x1000U
                                                                  >> 0xd),
                                                           (short)uVar63 -
                                                           (short)(iVar51 * (short)uVar65 + 0x1000U
                                                                  >> 0xd))));
                  puVar14[-2] = CONCAT26((short)((ulong)uVar58 >> 0x30) -
                                         (short)(iVar51 * (short)((ulong)uVar64 >> 0x30) + 0x1000U
                                                >> 0xd),
                                         CONCAT24((short)((ulong)uVar58 >> 0x20) -
                                                  (short)(iVar51 * (short)((ulong)uVar64 >> 0x20) +
                                                          0x1000U >> 0xd),
                                                  CONCAT22((short)((ulong)uVar58 >> 0x10) -
                                                           (short)(iVar51 * (short)((ulong)uVar64 >>
                                                                                   0x10) + 0x1000U
                                                                  >> 0xd),
                                                           (short)uVar58 -
                                                           (short)(iVar51 * (short)uVar64 + 0x1000U
                                                                  >> 0xd))));
                  puVar14[1] = CONCAT26((short)((ulong)uVar62 >> 0x30) -
                                        (short)(iVar51 * (short)((ulong)uVar67 >> 0x30) + 0x1000U >>
                                               0xd),
                                        CONCAT24((short)((ulong)uVar62 >> 0x20) -
                                                 (short)(iVar51 * (short)((ulong)uVar67 >> 0x20) +
                                                         0x1000U >> 0xd),
                                                 CONCAT22((short)((ulong)uVar62 >> 0x10) -
                                                          (short)(iVar51 * (short)((ulong)uVar67 >>
                                                                                  0x10) + 0x1000U >>
                                                                 0xd),
                                                          (short)uVar62 -
                                                          (short)(iVar51 * (short)uVar67 + 0x1000U
                                                                 >> 0xd))));
                  *puVar14 = CONCAT26((short)((ulong)uVar56 >> 0x30) -
                                      (short)(iVar51 * (short)((ulong)uVar66 >> 0x30) + 0x1000U >>
                                             0xd),
                                      CONCAT24((short)((ulong)uVar56 >> 0x20) -
                                               (short)(iVar51 * (short)((ulong)uVar66 >> 0x20) +
                                                       0x1000U >> 0xd),
                                               CONCAT22((short)((ulong)uVar56 >> 0x10) -
                                                        (short)(iVar51 * (short)((ulong)uVar66 >>
                                                                                0x10) + 0x1000U >>
                                                               0xd),
                                                        (short)uVar56 -
                                                        (short)(iVar51 * (short)uVar66 + 0x1000U >>
                                                               0xd))));
                  puVar12 = puVar12 + 4;
                  puVar14 = puVar14 + 4;
                } while (uVar23 != 0);
                uVar23 = uVar47 & 0xfffffff0;
                if ((uVar47 & 0xfffffff0) == uVar47) goto LAB_001073dc;
              }
              lVar29 = local_78 - uVar23;
              psVar15 = (short *)(lVar45 + uVar23 * 2);
              psVar16 = (short *)(lVar11 + local_178 * 2 + uVar23 * 2);
              do {
                lVar29 = lVar29 + -1;
                *psVar16 = *psVar16 - (short)(iVar51 * *psVar15 + 0x1000U >> 0xd);
                psVar15 = psVar15 + 1;
                psVar16 = psVar16 + 1;
              } while (lVar29 != 0);
            }
LAB_001073dc:
            uVar17 = uVar17 + 1;
            puVar10 = (undefined8 *)((long)puVar10 + -2);
            lVar45 = lVar45 + -2;
          } while (uVar17 != uVar18);
        }
        uVar17 = *(ulong *)(local_d8 + (long)*(int *)((long)local_b0 + lVar9 * 4) * 8);
        uVar23 = local_118[lVar9];
        if ((uint)local_108 < 8) {
          uVar27 = 0;
LAB_00107490:
          lVar11 = local_f8 - uVar27;
          puVar20 = (undefined4 *)(uVar17 + uVar27 * 4);
          puVar25 = (undefined4 *)(uVar23 + uVar27 * 4);
          do {
            lVar11 = lVar11 + -1;
            *puVar25 = *puVar20;
            puVar20 = puVar20 + 1;
            puVar25 = puVar25 + 1;
          } while (lVar11 != 0);
        }
        else {
          if ((uVar23 < uVar17 + local_1a8) && (uVar17 < uVar23 + local_1a8)) {
            uVar27 = 0;
            goto LAB_00107490;
          }
          puVar19 = (undefined8 *)(uVar17 + 0x10);
          puVar10 = (undefined8 *)(uVar23 + 0x10);
          uVar27 = local_140;
          do {
            puVar12 = puVar19 + -1;
            uVar58 = puVar19[-2];
            uVar56 = puVar19[1];
            uVar63 = *puVar19;
            puVar19 = puVar19 + 4;
            uVar27 = uVar27 - 8;
            puVar10[-1] = *puVar12;
            puVar10[-2] = uVar58;
            puVar10[1] = uVar56;
            *puVar10 = uVar63;
            puVar10 = puVar10 + 4;
          } while (uVar27 != 0);
          uVar27 = local_140;
          if (local_140 != local_f8) goto LAB_00107490;
        }
        plVar28 = local_118 + lVar9;
        lVar11 = lVar9 * 4;
        lVar9 = lVar9 + 1;
        *(undefined4 *)(*plVar28 + local_a8 * 4) = *(undefined4 *)((long)local_a0 + lVar11);
        pvVar46 = local_b0;
      } while (lVar9 < lVar41);
      lVar9 = 0;
      do {
        uVar17 = local_118[lVar9];
        uVar23 = *(ulong *)(local_d8 + lVar9 * 8);
        if (((uint)local_f8 < 8) || ((uVar23 < uVar17 + local_1a8 && (uVar17 < uVar23 + local_1a8)))
           ) {
          uVar47 = 0;
LAB_0010754c:
          lVar43 = local_f8 - uVar47;
          puVar20 = (undefined4 *)(uVar17 + uVar47 * 4);
          puVar25 = (undefined4 *)(uVar23 + uVar47 * 4);
          do {
            lVar43 = lVar43 + -1;
            *puVar25 = *puVar20;
            puVar20 = puVar20 + 1;
            puVar25 = puVar25 + 1;
          } while (lVar43 != 0);
        }
        else {
          puVar19 = (undefined8 *)(uVar17 + 0x10);
          puVar10 = (undefined8 *)(uVar23 + 0x10);
          uVar47 = local_140;
          do {
            puVar12 = puVar19 + -1;
            uVar58 = puVar19[-2];
            uVar56 = puVar19[1];
            uVar63 = *puVar19;
            puVar19 = puVar19 + 4;
            uVar47 = uVar47 - 8;
            puVar10[-1] = *puVar12;
            puVar10[-2] = uVar58;
            puVar10[1] = uVar56;
            *puVar10 = uVar63;
            puVar10 = puVar10 + 4;
          } while (uVar47 != 0);
          uVar47 = local_140;
          if (local_140 != local_f8) goto LAB_0010754c;
        }
        lVar9 = lVar9 + 1;
      } while (lVar9 < lVar41);
      memcpy(local_d0,__src,local_1e0);
      lVar43 = local_c8;
      uVar23 = local_f8;
      uVar7 = local_134;
      lVar9 = local_228;
      puVar5 = local_288;
      lVar11 = local_290;
      local_1c0 = local_1c0 + local_90;
      uVar17 = local_a8 + 1;
      local_1b0 = local_1b0 + local_90;
      local_170 = local_170 + local_90;
      local_178 = local_178 + local_90;
      local_c8 = local_c0;
      uVar49 = (int)local_168 + uVar2;
      uVar40 = local_1e4 - uVar2;
      uVar44 = (int)local_78 - uVar2;
    } while (uVar17 != uVar42);
    uVar44 = (uint)local_1b8;
    if (0 < (int)local_108) {
      puVar20 = (undefined4 *)*local_118;
      uVar17 = local_f8;
      puVar25 = local_220;
      do {
        uVar3 = *puVar20;
        *puVar25 = uVar3;
        speex_bits_pack(lVar11,uVar3,puVar5[4] + uVar7);
        uVar17 = uVar17 - 1;
        puVar20 = puVar20 + 1;
        puVar25 = puVar25 + 1;
      } while (uVar17 != 0);
      if (0 < (int)uVar23) {
        lVar43 = 0;
        uVar17 = 0;
        uVar42 = uVar18 & 0xfffffffe;
        piVar21 = (int *)(lVar9 + 4);
        do {
          iVar48 = local_220[uVar17];
          iVar50 = (int)local_b8;
          iVar13 = 0;
          if (iVar50 <= iVar48) {
            iVar13 = iVar50;
          }
          if (iVar48 < iVar50) {
            if (0 < (int)uVar2) {
              lVar11 = (iVar48 - iVar13) * local_90;
              if (uVar2 == 1) {
                uVar23 = 0;
              }
              else {
                pcVar35 = (char *)(local_110 + 1 + lVar11);
                uVar23 = uVar42;
                piVar26 = piVar21;
                do {
                  pbVar1 = (byte *)(pcVar35 + -1);
                  cVar4 = *pcVar35;
                  pcVar35 = pcVar35 + 2;
                  uVar23 = uVar23 - 2;
                  piVar26[-1] = (uint)*pbVar1 << 9;
                  *piVar26 = (int)cVar4 << 9;
                  piVar26 = piVar26 + 2;
                } while (uVar23 != 0);
                uVar23 = uVar42;
                if (uVar42 == uVar18) goto LAB_001077f4;
              }
              lVar41 = uVar18 - uVar23;
              pcVar35 = (char *)(local_110 + uVar23 + lVar11);
              piVar26 = (int *)(lVar9 + (uVar23 + lVar43) * 4);
              do {
                lVar41 = lVar41 + -1;
                *piVar26 = (int)*pcVar35 << 9;
                pcVar35 = pcVar35 + 1;
                piVar26 = piVar26 + 1;
              } while (lVar41 != 0);
            }
          }
          else if (0 < (int)uVar2) {
            lVar11 = (iVar48 - iVar13) * local_90;
            if (uVar2 == 1) {
              uVar23 = 0;
            }
            else {
              pcVar35 = (char *)(local_110 + 1 + lVar11);
              uVar23 = uVar42;
              piVar26 = piVar21;
              do {
                pbVar1 = (byte *)(pcVar35 + -1);
                cVar4 = *pcVar35;
                pcVar35 = pcVar35 + 2;
                uVar23 = uVar23 - 2;
                piVar26[-1] = (uint)*pbVar1 * -0x200;
                *piVar26 = cVar4 * -0x200;
                piVar26 = piVar26 + 2;
              } while (uVar23 != 0);
              uVar23 = uVar42;
              if (uVar42 == uVar18) goto LAB_001077f4;
            }
            lVar41 = uVar18 - uVar23;
            pcVar35 = (char *)(local_110 + uVar23 + lVar11);
            piVar26 = (int *)(lVar9 + (uVar23 + lVar43) * 4);
            do {
              lVar41 = lVar41 + -1;
              *piVar26 = *pcVar35 * -0x200;
              pcVar35 = pcVar35 + 1;
              piVar26 = piVar26 + 1;
            } while (lVar41 != 0);
          }
LAB_001077f4:
          uVar17 = uVar17 + 1;
          piVar21 = piVar21 + local_90;
          lVar43 = lVar43 + local_90;
        } while (uVar17 != local_f8);
      }
    }
  }
  lVar43 = local_230;
  uVar17 = local_240;
  if (0 < (int)uVar44) {
    if (uVar44 < 8) {
      uVar18 = 0;
    }
    else {
      uVar18 = local_240 & 0xfffffff8;
      puVar19 = (undefined8 *)(local_250 + 0x10);
      puVar10 = (undefined8 *)(lVar9 + 0x10);
      uVar42 = uVar18;
      do {
        puVar12 = puVar10 + -1;
        uVar58 = puVar10[-2];
        uVar56 = puVar10[1];
        uVar63 = *puVar10;
        uVar42 = uVar42 - 8;
        puVar10 = puVar10 + 4;
        puVar19[-1] = CONCAT44((int)((ulong)*puVar12 >> 0x20) + (int)((ulong)puVar19[-1] >> 0x20),
                               (int)*puVar12 + (int)puVar19[-1]);
        puVar19[-2] = CONCAT44((int)((ulong)uVar58 >> 0x20) + (int)((ulong)puVar19[-2] >> 0x20),
                               (int)uVar58 + (int)puVar19[-2]);
        puVar19[1] = CONCAT44((int)((ulong)uVar56 >> 0x20) + (int)((ulong)puVar19[1] >> 0x20),
                              (int)uVar56 + (int)puVar19[1]);
        *puVar19 = CONCAT44((int)((ulong)uVar63 >> 0x20) + (int)((ulong)*puVar19 >> 0x20),
                            (int)uVar63 + (int)*puVar19);
        puVar19 = puVar19 + 4;
      } while (uVar42 != 0);
      if (uVar18 == local_240) goto LAB_0010789c;
    }
    lVar11 = local_240 - uVar18;
    piVar21 = (int *)(lVar9 + uVar18 * 4);
    piVar26 = (int *)(local_250 + uVar18 * 4);
    do {
      lVar11 = lVar11 + -1;
      *piVar26 = *piVar21 + *piVar26;
      piVar21 = piVar21 + 1;
      piVar26 = piVar26 + 1;
    } while (lVar11 != 0);
  }
LAB_0010789c:
  if (local_244 != 0) {
    lVar24 = lVar24 - (local_278 + 0xfU & 0x3fffffff0);
    if ((int)uVar44 < 1) {
      syn_percep_zero16(lVar24,local_270,local_268,local_260,lVar24,uVar44,local_254,local_100);
    }
    else {
      if (uVar44 < 8) {
        uVar18 = 0;
LAB_0010795c:
        lVar11 = uVar17 - uVar18;
        puVar22 = (undefined2 *)(lVar24 + uVar18 * 2);
        piVar21 = (int *)(lVar9 + uVar18 * 4);
        do {
          lVar11 = lVar11 + -1;
          *puVar22 = (short)(*piVar21 + 0x20U >> 6);
          puVar22 = puVar22 + 1;
          piVar21 = piVar21 + 1;
        } while (lVar11 != 0);
      }
      else {
        uVar18 = local_240 & 0xfffffff8;
        puVar19 = (undefined8 *)(lVar9 + 0x10);
        puVar10 = (undefined8 *)(lVar24 + 8);
        uVar42 = uVar18;
        do {
          puVar12 = puVar19 + -2;
          puVar14 = puVar19 + -1;
          uVar63 = puVar19[1];
          uVar58 = *puVar19;
          puVar19 = puVar19 + 4;
          uVar42 = uVar42 - 8;
          puVar10[-1] = CONCAT26((short)((int)((ulong)*puVar14 >> 0x20) + 0x20U >> 6),
                                 CONCAT24((short)((int)*puVar14 + 0x20U >> 6),
                                          CONCAT22((short)((int)((ulong)*puVar12 >> 0x20) + 0x20U >>
                                                          6),(short)((int)*puVar12 + 0x20U >> 6))));
          *puVar10 = CONCAT26((short)((int)((ulong)uVar63 >> 0x20) + 0x20U >> 6),
                              CONCAT24((short)((int)uVar63 + 0x20U >> 6),
                                       CONCAT22((short)((int)((ulong)uVar58 >> 0x20) + 0x20U >> 6),
                                                (short)((int)uVar58 + 0x20U >> 6))));
          puVar10 = puVar10 + 2;
        } while (uVar42 != 0);
        if (uVar18 != uVar17) goto LAB_0010795c;
      }
      syn_percep_zero16(lVar24,local_270,local_268,local_260,lVar24,uVar44,local_254,local_100);
      if (0 < (int)uVar44) {
        if (uVar44 < 0x10) {
          uVar18 = 0;
        }
        else {
          uVar18 = uVar17 & 0xfffffff0;
          puVar19 = (undefined8 *)((long)local_280 + 0x10);
          puVar10 = (undefined8 *)(lVar24 + 0x10);
          uVar42 = uVar18;
          do {
            uVar62 = puVar10[-1];
            uVar56 = puVar10[-2];
            uVar67 = puVar10[1];
            uVar66 = *puVar10;
            uVar63 = puVar19[-1];
            uVar58 = puVar19[-2];
            uVar65 = puVar19[1];
            uVar64 = *puVar19;
            uVar42 = uVar42 - 0x10;
            puVar10 = puVar10 + 4;
            puVar19[-1] = CONCAT26((short)((ulong)uVar63 >> 0x30) -
                                   (short)((int)(short)((ulong)uVar62 >> 0x30) + 2U >> 2),
                                   CONCAT24((short)((ulong)uVar63 >> 0x20) -
                                            (short)((int)(short)((ulong)uVar62 >> 0x20) + 2U >> 2),
                                            CONCAT22((short)((ulong)uVar63 >> 0x10) -
                                                     (short)((int)(short)((ulong)uVar62 >> 0x10) +
                                                             2U >> 2),
                                                     (short)uVar63 -
                                                     (short)((int)(short)uVar62 + 2U >> 2))));
            puVar19[-2] = CONCAT26((short)((ulong)uVar58 >> 0x30) -
                                   (short)((int)(short)((ulong)uVar56 >> 0x30) + 2U >> 2),
                                   CONCAT24((short)((ulong)uVar58 >> 0x20) -
                                            (short)((int)(short)((ulong)uVar56 >> 0x20) + 2U >> 2),
                                            CONCAT22((short)((ulong)uVar58 >> 0x10) -
                                                     (short)((int)(short)((ulong)uVar56 >> 0x10) +
                                                             2U >> 2),
                                                     (short)uVar58 -
                                                     (short)((int)(short)uVar56 + 2U >> 2))));
            puVar19[1] = CONCAT26((short)((ulong)uVar65 >> 0x30) -
                                  (short)((int)(short)((ulong)uVar67 >> 0x30) + 2U >> 2),
                                  CONCAT24((short)((ulong)uVar65 >> 0x20) -
                                           (short)((int)(short)((ulong)uVar67 >> 0x20) + 2U >> 2),
                                           CONCAT22((short)((ulong)uVar65 >> 0x10) -
                                                    (short)((int)(short)((ulong)uVar67 >> 0x10) + 2U
                                                           >> 2),
                                                    (short)uVar65 -
                                                    (short)((int)(short)uVar67 + 2U >> 2))));
            *puVar19 = CONCAT26((short)((ulong)uVar64 >> 0x30) -
                                (short)((int)(short)((ulong)uVar66 >> 0x30) + 2U >> 2),
                                CONCAT24((short)((ulong)uVar64 >> 0x20) -
                                         (short)((int)(short)((ulong)uVar66 >> 0x20) + 2U >> 2),
                                         CONCAT22((short)((ulong)uVar64 >> 0x10) -
                                                  (short)((int)(short)((ulong)uVar66 >> 0x10) + 2U
                                                         >> 2),
                                                  (short)uVar64 -
                                                  (short)((int)(short)uVar66 + 2U >> 2))));
            puVar19 = puVar19 + 4;
          } while (uVar42 != 0);
          if (uVar18 == uVar17) goto LAB_00107a64;
        }
        lVar9 = uVar17 - uVar18;
        psVar15 = (short *)(lVar24 + uVar18 * 2);
        psVar16 = (short *)((long)local_280 + uVar18 * 2);
        do {
          lVar9 = lVar9 + -1;
          *psVar16 = *psVar16 - (short)((int)*psVar15 + 2U >> 2);
          psVar15 = psVar15 + 1;
          psVar16 = psVar16 + 1;
        } while (lVar9 != 0);
      }
    }
  }
LAB_00107a64:
  lVar9 = *(long *)(lVar43 + 0x28);
LAB_00107a74:
  if (lVar9 != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
code_r0x00107098:
  lVar29 = lVar29 + 1;
  if (lVar41 <= lVar29) goto LAB_00107118;
  goto LAB_0010708c;
}

