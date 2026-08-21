
/* WARNING: Type propagation algorithm not settling */

void FUN_0011265c(short *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 void *param_5,long param_6,uint param_7,uint param_8,uint param_9,uint param_10,
                 undefined8 param_11,long param_12,short *param_13,short *param_14,
                 undefined4 *param_15,int param_16,int param_17,int param_18)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined2 uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  short sVar17;
  short sVar18;
  short *psVar19;
  short *psVar34;
  short *psVar49;
  undefined8 *puVar50;
  long lVar51;
  short *psVar52;
  short *psVar53;
  short *psVar54;
  ulong uVar55;
  long lVar56;
  uint uVar57;
  ulong uVar58;
  short *psVar59;
  undefined2 *puVar60;
  short *psVar61;
  uint uVar62;
  long lVar63;
  uint uVar64;
  ulong uVar65;
  short *psVar66;
  undefined2 uVar67;
  ulong uVar68;
  undefined2 uVar69;
  long lVar70;
  uint uVar71;
  short *psVar72;
  ulong uVar73;
  void *__s;
  uint uVar74;
  void *__src;
  size_t __n;
  int iVar75;
  int iVar76;
  int iVar77;
  int iVar78;
  int iVar79;
  undefined8 uVar80;
  undefined8 uVar81;
  int iVar82;
  int iVar83;
  undefined8 uVar84;
  int iVar85;
  short sVar86;
  undefined8 uVar87;
  undefined8 uVar88;
  undefined8 uVar89;
  undefined8 uVar90;
  undefined8 uVar91;
  undefined4 local_170;
  int local_16c;
  undefined4 *local_168;
  undefined8 uStack_160;
  long local_158;
  undefined1 *local_150;
  size_t local_148;
  long local_140;
  short *local_138;
  ulong local_130;
  short *local_128;
  undefined8 *local_120;
  ulong local_118;
  short *local_110;
  short *local_108;
  uint local_fc;
  void *local_f8;
  short local_ec [4];
  short local_e4;
  short local_e2;
  short local_e0;
  short local_de;
  short local_dc;
  short local_da;
  short local_d8;
  short local_d6;
  short local_d4;
  int local_d0;
  int iStack_cc;
  int local_c8;
  int local_c4;
  undefined8 local_c0;
  undefined8 local_b8;
  int local_b0;
  uint local_ac;
  undefined8 local_a8;
  int local_a0 [6];
  short *local_88 [3];
  long local_70;
  short *psVar20;
  short *psVar21;
  short *psVar22;
  short *psVar23;
  short *psVar24;
  short *psVar25;
  short *psVar26;
  short *psVar27;
  short *psVar28;
  short *psVar29;
  short *psVar30;
  short *psVar31;
  short *psVar32;
  short *psVar33;
  short *psVar35;
  short *psVar36;
  short *psVar37;
  short *psVar38;
  short *psVar39;
  short *psVar40;
  short *psVar41;
  short *psVar42;
  short *psVar43;
  short *psVar44;
  short *psVar45;
  short *psVar46;
  short *psVar47;
  short *psVar48;
  
  local_118 = param_4;
  local_fc = param_8;
  local_140 = param_3;
  local_158 = tpidr_el0;
  uVar73 = (ulong)param_10;
  local_70 = *(long *)(local_158 + 0x28);
  psVar54 = (short *)((long)&local_170 - ((ulong)(param_10 * 3) * 2 + 0xf & 0x3fffffff0));
  __n = uVar73 * 2;
  __src = (void *)((long)psVar54 - (__n + 0xf & 0x3fffffff0));
  local_130 = -(ulong)(param_10 >> 0x1f) & 0xfffffffe00000000 | uVar73 << 1;
  local_108 = (short *)((long)psVar54 + local_130);
  local_88[0] = psVar54;
  local_88[1] = local_108;
  local_150 = (undefined1 *)&local_170;
  psVar53 = psVar54 + (long)(int)param_10 * 2;
  local_88[2] = psVar53;
  uStack_160._4_4_ = param_7;
  if ((int)param_10 < 1) {
    local_f8 = __src;
    __s = (void *)((long)__src - ((ulong)param_9 * 4 + 0xf & 0x7fffffff0));
  }
  else {
    if ((param_10 < 0x10) || ((param_14 < param_1 + uVar73 && (param_1 < param_14 + uVar73)))) {
      uVar55 = 0;
LAB_00112754:
      lVar56 = uVar73 - uVar55;
      psVar59 = param_14 + uVar55;
      psVar49 = param_1 + uVar55;
      do {
        lVar56 = lVar56 + -1;
        *psVar59 = *psVar49;
        psVar59 = psVar59 + 1;
        psVar49 = psVar49 + 1;
      } while (lVar56 != 0);
    }
    else {
      uVar55 = uVar73 & 0xfffffff0;
      psVar59 = param_1 + 8;
      psVar49 = param_14 + 8;
      uVar58 = uVar55;
      do {
        psVar52 = psVar59 + -4;
        uVar81 = *(undefined8 *)(psVar59 + -8);
        uVar80 = *(undefined8 *)(psVar59 + 4);
        uVar90 = *(undefined8 *)psVar59;
        psVar59 = psVar59 + 0x10;
        uVar58 = uVar58 - 0x10;
        *(undefined8 *)(psVar49 + -4) = *(undefined8 *)psVar52;
        *(undefined8 *)(psVar49 + -8) = uVar81;
        *(undefined8 *)(psVar49 + 4) = uVar80;
        *(undefined8 *)psVar49 = uVar90;
        psVar49 = psVar49 + 0x10;
      } while (uVar58 != 0);
      if (uVar55 != uVar73) goto LAB_00112754;
    }
    local_f8 = __src;
    __s = (void *)((long)__src - ((ulong)param_9 * 4 + 0xf & 0x7fffffff0));
    if (0 < (int)param_10) {
      iVar75 = 1 - param_8;
      if (param_10 == 1) {
        uVar55 = 0;
      }
      else {
        uVar55 = 0;
        if ((iVar75 <= iVar75 + (int)(uVar73 - 1)) && (uVar73 - 1 >> 0x20 == 0)) {
          uVar55 = uVar73 & 0xfffffffe;
          puVar60 = (undefined2 *)((long)__src + 2);
          uVar58 = uVar55;
          uVar74 = -param_8;
          uVar57 = param_8 * -2;
          do {
            uVar64 = uVar57 + 2;
            uVar62 = uVar74 + 2;
            uVar74 = uVar74 + 1;
            uVar57 = uVar57 + 1;
            uVar71 = uVar74 >> 0x1f ^ 1;
            if ((-1 < (int)uVar57) && (uVar71 != 0)) {
              puVar60[-1] = 0;
            }
            uVar12 = uVar62 >> 0x1f ^ 1;
            uVar67 = (undefined2)uVar12;
            if (-1 < (int)(uVar64 | uVar62)) {
              *puVar60 = 0;
            }
            uVar71 = (int)uVar57 < 0 & uVar71;
            uVar12 = (int)uVar64 < 0 & uVar12;
            uVar11 = (undefined2)uVar12;
            if (uVar71 == 1) {
              uVar67 = *(undefined2 *)(param_12 + (long)(int)uVar57 * 2);
              if (uVar12 == 0) goto LAB_0011298c;
LAB_001128f8:
              uVar57 = (uint)*(ushort *)(param_12 + (long)(int)uVar64 * 2);
              if (uVar71 == 0) goto LAB_00112900;
LAB_00112990:
              uVar69 = (undefined2)uVar57;
              puVar60[-1] = uVar67;
            }
            else {
              if (uVar12 != 0) goto LAB_001128f8;
LAB_0011298c:
              if (uVar71 != 0) goto LAB_00112990;
LAB_00112900:
              uVar69 = (undefined2)uVar57;
            }
            if (uVar12 != 0) {
              *puVar60 = uVar69;
            }
            if ((int)uVar74 < 0) {
              uVar69 = *(undefined2 *)(param_12 + (long)(int)uVar74 * 2);
            }
            if ((int)uVar62 < 0) {
              uVar11 = *(undefined2 *)(param_12 + (long)(int)uVar62 * 2);
            }
            if ((int)uVar74 < 0) {
              puVar60[-1] = uVar69;
            }
            if ((int)uVar62 < 0) {
              *puVar60 = uVar11;
            }
            uVar58 = uVar58 - 2;
            puVar60 = puVar60 + 2;
            uVar74 = uVar62;
            uVar57 = uVar64;
          } while (uVar58 != 0);
          if (uVar55 == uVar73) goto LAB_00112834;
        }
      }
      uVar74 = local_fc;
      iVar77 = (int)uVar55 + 1;
      iVar76 = iVar77 - local_fc;
      iVar77 = iVar77 + local_fc * -2;
      lVar56 = uVar73 - uVar55;
      puVar60 = (undefined2 *)((long)__src + uVar55 * 2);
      do {
        iVar78 = iVar76;
        if (iVar76 < 0) {
LAB_001127f0:
          uVar67 = *(undefined2 *)(param_12 + (long)iVar78 * 2);
        }
        else {
          if (iVar77 < 0) {
            iVar78 = (iVar75 + (int)uVar55) - uVar74;
            goto LAB_001127f0;
          }
          uVar67 = 0;
        }
        *puVar60 = uVar67;
        uVar55 = uVar55 + 1;
        iVar76 = iVar76 + 1;
        lVar56 = lVar56 + -1;
        iVar77 = iVar77 + 1;
        puVar60 = puVar60 + 1;
      } while (lVar56 != 0);
    }
  }
LAB_00112834:
  if ((param_18 != 0) && (0 < (int)param_10)) {
    if (param_10 < 0x10) {
      uVar58 = 0;
LAB_00112884:
      lVar56 = uVar73 - uVar58;
      psVar59 = (short *)((long)__src + uVar58 * 2);
      do {
        lVar56 = lVar56 + -1;
        *psVar59 = (short)((ulong)(long)*psVar59 >> 1);
        psVar59 = psVar59 + 1;
      } while (lVar56 != 0);
    }
    else {
      uVar58 = uVar73 & 0xfffffff0;
      puVar50 = (undefined8 *)((long)__src + 0x10);
      uVar55 = uVar58;
      do {
        uVar90 = puVar50[-1];
        uVar81 = puVar50[-2];
        uVar84 = puVar50[1];
        uVar80 = *puVar50;
        uVar55 = uVar55 - 0x10;
        puVar50[-1] = CONCAT26((short)((long)uVar90 >> 0x31),
                               CONCAT24((short)((ulong)uVar90 >> 0x20) >> 1,
                                        CONCAT22((short)((ulong)uVar90 >> 0x10) >> 1,
                                                 (short)uVar90 >> 1)));
        puVar50[-2] = CONCAT26((short)((long)uVar81 >> 0x31),
                               CONCAT24((short)((ulong)uVar81 >> 0x20) >> 1,
                                        CONCAT22((short)((ulong)uVar81 >> 0x10) >> 1,
                                                 (short)uVar81 >> 1)));
        puVar50[1] = CONCAT26((short)((long)uVar84 >> 0x31),
                              CONCAT24((short)((ulong)uVar84 >> 0x20) >> 1,
                                       CONCAT22((short)((ulong)uVar84 >> 0x10) >> 1,
                                                (short)uVar84 >> 1)));
        *puVar50 = CONCAT26((short)((long)uVar80 >> 0x31),
                            CONCAT24((short)((ulong)uVar80 >> 0x20) >> 1,
                                     CONCAT22((short)((ulong)uVar80 >> 0x10) >> 1,(short)uVar80 >> 1
                                             )));
        puVar50 = puVar50 + 4;
      } while (uVar55 != 0);
      if (uVar58 != uVar73) goto LAB_00112884;
    }
    if (0 < (int)param_10) {
      if (param_10 < 0x10) {
        uVar58 = 0;
      }
      else {
        uVar58 = uVar73 & 0xfffffff0;
        psVar59 = param_14 + 8;
        uVar55 = uVar58;
        do {
          uVar90 = *(undefined8 *)(psVar59 + -4);
          uVar81 = *(undefined8 *)(psVar59 + -8);
          uVar84 = *(undefined8 *)(psVar59 + 4);
          uVar80 = *(undefined8 *)psVar59;
          uVar55 = uVar55 - 0x10;
          *(ulong *)(psVar59 + -4) =
               CONCAT26((short)((long)uVar90 >> 0x31),
                        CONCAT24((short)((ulong)uVar90 >> 0x20) >> 1,
                                 CONCAT22((short)((ulong)uVar90 >> 0x10) >> 1,(short)uVar90 >> 1)));
          *(ulong *)(psVar59 + -8) =
               CONCAT26((short)((long)uVar81 >> 0x31),
                        CONCAT24((short)((ulong)uVar81 >> 0x20) >> 1,
                                 CONCAT22((short)((ulong)uVar81 >> 0x10) >> 1,(short)uVar81 >> 1)));
          *(ulong *)(psVar59 + 4) =
               CONCAT26((short)((long)uVar84 >> 0x31),
                        CONCAT24((short)((ulong)uVar84 >> 0x20) >> 1,
                                 CONCAT22((short)((ulong)uVar84 >> 0x10) >> 1,(short)uVar84 >> 1)));
          *(ulong *)psVar59 =
               CONCAT26((short)((long)uVar80 >> 0x31),
                        CONCAT24((short)((ulong)uVar80 >> 0x20) >> 1,
                                 CONCAT22((short)((ulong)uVar80 >> 0x10) >> 1,(short)uVar80 >> 1)));
          psVar59 = psVar59 + 0x10;
        } while (uVar55 != 0);
        if (uVar58 == uVar73) goto LAB_00112a48;
      }
      lVar56 = uVar73 - uVar58;
      psVar59 = param_14 + uVar58;
      do {
        lVar56 = lVar56 + -1;
        *psVar59 = (short)((ulong)(long)*psVar59 >> 1);
        psVar59 = psVar59 + 1;
      } while (lVar56 != 0);
    }
  }
LAB_00112a48:
  local_128 = param_14;
  local_138 = psVar54;
  local_120 = (undefined8 *)param_6;
  local_110 = psVar53;
  if ((int)param_9 < 1) {
    iir_mem16(__src,param_2,__src,uVar73,param_9,__s,param_11);
  }
  else {
    local_168 = (undefined4 *)CONCAT44(local_168._4_4_,param_18);
    local_148 = __n;
    memset(__s,0,(ulong)param_9 << 2);
    iir_mem16(__src,param_2,__src,uVar73,param_9,__s,param_11);
    __n = local_148;
    param_18 = (int)local_168;
    memset(__s,0,(ulong)param_9 << 2);
  }
  filter_mem16(__src,local_140,local_118,__src,uVar73,param_9,__s,param_11);
  uVar74 = param_10 - 1;
  if (0 < (int)param_10) {
    memcpy(local_110,__src,__n);
  }
  psVar59 = local_110;
  lVar56 = (long)(int)param_10;
  uVar57 = ~local_fc;
  sVar86 = *param_13;
  iVar75 = (int)*(short *)(param_12 + (long)(int)uVar57 * 2 + 2) >> (param_18 != 0);
  *local_108 = (short)((uint)(sVar86 * iVar75) >> 0xe);
  psVar53 = local_128;
  uVar55 = local_130;
  psVar54 = local_138;
  if (1 < (int)param_10) {
    uVar58 = (ulong)uVar74;
    if ((uVar74 < 0x10) ||
       ((local_138 + lVar56 + 1 < local_138 + local_130 + uVar58 &&
        (psVar59 < local_138 + lVar56 + uVar58 + 1)))) {
      uVar65 = 0;
    }
    else {
      uVar65 = uVar58 & 0xfffffff0;
      psVar49 = param_13 + 9;
      psVar52 = local_138 + local_130 + 8;
      psVar61 = local_138 + lVar56 + 9;
      uVar68 = uVar65;
      do {
        uVar88 = *(undefined8 *)(psVar49 + -4);
        uVar87 = *(undefined8 *)(psVar49 + -8);
        uVar91 = *(undefined8 *)(psVar49 + 4);
        uVar89 = *(undefined8 *)psVar49;
        uVar90 = *(undefined8 *)(psVar52 + -4);
        uVar81 = *(undefined8 *)(psVar52 + -8);
        uVar84 = *(undefined8 *)(psVar52 + 4);
        uVar80 = *(undefined8 *)psVar52;
        uVar68 = uVar68 - 0x10;
        psVar49 = psVar49 + 0x10;
        psVar52 = psVar52 + 0x10;
        *(ulong *)(psVar61 + -4) =
             CONCAT26((short)((ulong)uVar90 >> 0x30) +
                      (short)(iVar75 * (short)((ulong)uVar88 >> 0x30) + 0x2000U >> 0xe),
                      CONCAT24((short)((ulong)uVar90 >> 0x20) +
                               (short)(iVar75 * (short)((ulong)uVar88 >> 0x20) + 0x2000U >> 0xe),
                               CONCAT22((short)((ulong)uVar90 >> 0x10) +
                                        (short)(iVar75 * (short)((ulong)uVar88 >> 0x10) + 0x2000U >>
                                               0xe),
                                        (short)uVar90 +
                                        (short)(iVar75 * (short)uVar88 + 0x2000U >> 0xe))));
        *(ulong *)(psVar61 + -8) =
             CONCAT26((short)((ulong)uVar81 >> 0x30) +
                      (short)(iVar75 * (short)((ulong)uVar87 >> 0x30) + 0x2000U >> 0xe),
                      CONCAT24((short)((ulong)uVar81 >> 0x20) +
                               (short)(iVar75 * (short)((ulong)uVar87 >> 0x20) + 0x2000U >> 0xe),
                               CONCAT22((short)((ulong)uVar81 >> 0x10) +
                                        (short)(iVar75 * (short)((ulong)uVar87 >> 0x10) + 0x2000U >>
                                               0xe),
                                        (short)uVar81 +
                                        (short)(iVar75 * (short)uVar87 + 0x2000U >> 0xe))));
        *(ulong *)(psVar61 + 4) =
             CONCAT26((short)((ulong)uVar84 >> 0x30) +
                      (short)(iVar75 * (short)((ulong)uVar91 >> 0x30) + 0x2000U >> 0xe),
                      CONCAT24((short)((ulong)uVar84 >> 0x20) +
                               (short)(iVar75 * (short)((ulong)uVar91 >> 0x20) + 0x2000U >> 0xe),
                               CONCAT22((short)((ulong)uVar84 >> 0x10) +
                                        (short)(iVar75 * (short)((ulong)uVar91 >> 0x10) + 0x2000U >>
                                               0xe),
                                        (short)uVar84 +
                                        (short)(iVar75 * (short)uVar91 + 0x2000U >> 0xe))));
        *(ulong *)psVar61 =
             CONCAT26((short)((ulong)uVar80 >> 0x30) +
                      (short)(iVar75 * (short)((ulong)uVar89 >> 0x30) + 0x2000U >> 0xe),
                      CONCAT24((short)((ulong)uVar80 >> 0x20) +
                               (short)(iVar75 * (short)((ulong)uVar89 >> 0x20) + 0x2000U >> 0xe),
                               CONCAT22((short)((ulong)uVar80 >> 0x10) +
                                        (short)(iVar75 * (short)((ulong)uVar89 >> 0x10) + 0x2000U >>
                                               0xe),
                                        (short)uVar80 +
                                        (short)(iVar75 * (short)uVar89 + 0x2000U >> 0xe))));
        psVar61 = psVar61 + 0x10;
      } while (uVar68 != 0);
      if (uVar65 == uVar58) goto LAB_00112c24;
    }
    psVar49 = param_13 + uVar65;
    psVar52 = local_138 + uVar65 + lVar56;
    lVar63 = uVar58 - uVar65;
    psVar61 = local_138 + uVar65 + local_130;
    do {
      psVar52 = psVar52 + 1;
      psVar49 = psVar49 + 1;
      lVar63 = lVar63 + -1;
      *psVar52 = *psVar61 + (short)(*psVar49 * iVar75 + 0x2000U >> 0xe);
      psVar61 = psVar61 + 1;
    } while (lVar63 != 0);
  }
LAB_00112c24:
  iVar75 = (int)*(short *)(param_12 + (long)(int)uVar57 * 2) >> (param_18 != 0);
  uVar57 = (uint)(sVar86 * iVar75) >> 0xe;
  *local_138 = (short)uVar57;
  uVar71 = uStack_160._4_4_;
  if (1 < (int)param_10) {
    uVar58 = (ulong)uVar74;
    if ((uVar74 < 0x10) ||
       ((psVar54 + 1 < psVar54 + lVar56 + uVar58 && (local_108 < psVar54 + uVar58 + 1)))) {
      uVar65 = 0;
    }
    else {
      uVar65 = uVar58 & 0xfffffff0;
      psVar49 = param_13 + 9;
      psVar52 = psVar54 + 8;
      uVar68 = uVar65;
      do {
        uVar80 = *(undefined8 *)(psVar49 + -4);
        uVar81 = *(undefined8 *)(psVar49 + -8);
        uVar88 = *(undefined8 *)(psVar49 + 4);
        uVar87 = *(undefined8 *)psVar49;
        psVar61 = psVar52 + lVar56;
        uVar91 = *(undefined8 *)(psVar61 + -4);
        uVar89 = *(undefined8 *)(psVar61 + -8);
        uVar84 = *(undefined8 *)(psVar61 + 4);
        uVar90 = *(undefined8 *)psVar61;
        uVar68 = uVar68 - 0x10;
        psVar49 = psVar49 + 0x10;
        *(ulong *)(psVar52 + -3) =
             CONCAT26((short)((ulong)uVar91 >> 0x30) +
                      (short)(iVar75 * (short)((ulong)uVar80 >> 0x30) + 0x2000U >> 0xe),
                      CONCAT24((short)((ulong)uVar91 >> 0x20) +
                               (short)(iVar75 * (short)((ulong)uVar80 >> 0x20) + 0x2000U >> 0xe),
                               CONCAT22((short)((ulong)uVar91 >> 0x10) +
                                        (short)(iVar75 * (short)((ulong)uVar80 >> 0x10) + 0x2000U >>
                                               0xe),
                                        (short)uVar91 +
                                        (short)(iVar75 * (short)uVar80 + 0x2000U >> 0xe))));
        *(ulong *)(psVar52 + -7) =
             CONCAT26((short)((ulong)uVar89 >> 0x30) +
                      (short)(iVar75 * (short)((ulong)uVar81 >> 0x30) + 0x2000U >> 0xe),
                      CONCAT24((short)((ulong)uVar89 >> 0x20) +
                               (short)(iVar75 * (short)((ulong)uVar81 >> 0x20) + 0x2000U >> 0xe),
                               CONCAT22((short)((ulong)uVar89 >> 0x10) +
                                        (short)(iVar75 * (short)((ulong)uVar81 >> 0x10) + 0x2000U >>
                                               0xe),
                                        (short)uVar89 +
                                        (short)(iVar75 * (short)uVar81 + 0x2000U >> 0xe))));
        *(ulong *)(psVar52 + 5) =
             CONCAT26((short)((ulong)uVar84 >> 0x30) +
                      (short)(iVar75 * (short)((ulong)uVar88 >> 0x30) + 0x2000U >> 0xe),
                      CONCAT24((short)((ulong)uVar84 >> 0x20) +
                               (short)(iVar75 * (short)((ulong)uVar88 >> 0x20) + 0x2000U >> 0xe),
                               CONCAT22((short)((ulong)uVar84 >> 0x10) +
                                        (short)(iVar75 * (short)((ulong)uVar88 >> 0x10) + 0x2000U >>
                                               0xe),
                                        (short)uVar84 +
                                        (short)(iVar75 * (short)uVar88 + 0x2000U >> 0xe))));
        *(ulong *)(psVar52 + 1) =
             CONCAT26((short)((ulong)uVar90 >> 0x30) +
                      (short)(iVar75 * (short)((ulong)uVar87 >> 0x30) + 0x2000U >> 0xe),
                      CONCAT24((short)((ulong)uVar90 >> 0x20) +
                               (short)(iVar75 * (short)((ulong)uVar87 >> 0x20) + 0x2000U >> 0xe),
                               CONCAT22((short)((ulong)uVar90 >> 0x10) +
                                        (short)(iVar75 * (short)((ulong)uVar87 >> 0x10) + 0x2000U >>
                                               0xe),
                                        (short)uVar90 +
                                        (short)(iVar75 * (short)uVar87 + 0x2000U >> 0xe))));
        psVar52 = psVar52 + 0x10;
      } while (uVar68 != 0);
      if (uVar65 == uVar58) goto LAB_00112cb4;
    }
    lVar63 = uVar58 - uVar65;
    param_13 = param_13 + uVar65;
    psVar49 = psVar54 + uVar65;
    do {
      param_13 = param_13 + 1;
      lVar63 = lVar63 + -1;
      psVar49[1] = psVar49[lVar56] + (short)(*param_13 * iVar75 + 0x2000U >> 0xe);
      psVar49 = psVar49 + 1;
    } while (lVar63 != 0);
  }
LAB_00112cb4:
  uVar74 = (int)param_10 >> 2;
  if (uVar74 == 0) {
    iStack_cc = 0;
    local_c8 = 0;
LAB_00112e40:
    local_d0 = 0;
  }
  else {
    lVar63 = 0;
    local_c8 = 0;
    psVar49 = psVar54 + 2;
    while( true ) {
      uVar81 = *(undefined8 *)(psVar53 + lVar63 * 4);
      local_c8 = local_c8 +
                 ((int)(short)uVar81 * (int)(short)uVar57 +
                  (int)(short)((ulong)uVar81 >> 0x10) * (int)psVar49[-1] +
                  (int)(short)((ulong)uVar81 >> 0x20) * (int)*psVar49 +
                  (int)(short)((ulong)uVar81 >> 0x30) * (int)psVar49[1] >> 6);
      if (uVar74 - 1 == (int)lVar63) break;
      uVar57 = (uint)(ushort)psVar49[2];
      psVar49 = psVar49 + 4;
      lVar63 = lVar63 + 1;
    }
    if (uVar74 == 0) {
      iStack_cc = 0;
      goto LAB_00112e40;
    }
    uVar58 = (ulong)(uVar74 - 1) + 1;
    if (7 < uVar58) {
      psVar49 = psVar54 + lVar56 + 0x10;
      uVar62 = param_10 >> 2 & 7;
      lVar63 = uVar58 - uVar62;
      psVar52 = psVar53 + 0x10;
      iVar75 = 0;
      iVar76 = 0;
      iVar77 = 0;
      iVar78 = 0;
      uVar57 = uVar74 - (int)lVar63;
      psVar61 = local_108 + lVar63 * 4;
      psVar66 = psVar53 + lVar63 * 4;
      iVar79 = 0;
      iVar82 = 0;
      iVar83 = 0;
      iVar85 = 0;
      do {
        psVar72 = psVar52 + -0x10;
        sVar86 = *psVar52;
        psVar19 = psVar52 + 1;
        psVar20 = psVar52 + 2;
        psVar21 = psVar52 + 3;
        psVar22 = psVar52 + 4;
        psVar23 = psVar52 + 5;
        psVar24 = psVar52 + 6;
        psVar25 = psVar52 + 7;
        psVar26 = psVar52 + 8;
        psVar27 = psVar52 + 9;
        psVar28 = psVar52 + 10;
        psVar29 = psVar52 + 0xb;
        psVar30 = psVar52 + 0xc;
        psVar31 = psVar52 + 0xd;
        psVar32 = psVar52 + 0xe;
        psVar33 = psVar52 + 0xf;
        psVar34 = psVar52 + -0xf;
        psVar35 = psVar52 + -0xe;
        psVar36 = psVar52 + -0xd;
        psVar37 = psVar52 + -0xc;
        psVar38 = psVar52 + -0xb;
        psVar39 = psVar52 + -10;
        psVar40 = psVar52 + -9;
        psVar41 = psVar52 + -8;
        psVar42 = psVar52 + -7;
        psVar43 = psVar52 + -6;
        psVar44 = psVar52 + -5;
        psVar45 = psVar52 + -4;
        psVar46 = psVar52 + -3;
        psVar47 = psVar52 + -2;
        psVar48 = psVar52 + -1;
        psVar52 = psVar52 + 0x20;
        lVar63 = lVar63 + -8;
        iVar79 = iVar79 + ((int)*psVar19 * (int)psVar49[1] + (int)sVar86 * (int)*psVar49 +
                           (int)*psVar20 * (int)psVar49[2] + (int)*psVar21 * (int)psVar49[3] >> 6);
        iVar82 = iVar82 + ((int)*psVar23 * (int)psVar49[5] + (int)*psVar22 * (int)psVar49[4] +
                           (int)*psVar24 * (int)psVar49[6] + (int)*psVar25 * (int)psVar49[7] >> 6);
        iVar83 = iVar83 + ((int)*psVar27 * (int)psVar49[9] + (int)*psVar26 * (int)psVar49[8] +
                           (int)*psVar28 * (int)psVar49[10] + (int)*psVar29 * (int)psVar49[0xb] >> 6
                          );
        iVar85 = iVar85 + ((int)*psVar31 * (int)psVar49[0xd] + (int)*psVar30 * (int)psVar49[0xc] +
                           (int)*psVar32 * (int)psVar49[0xe] + (int)*psVar33 * (int)psVar49[0xf] >>
                          6);
        iVar75 = iVar75 + ((int)*psVar34 * (int)psVar49[-0xf] + (int)*psVar72 * (int)psVar49[-0x10]
                           + (int)*psVar35 * (int)psVar49[-0xe] + (int)*psVar36 * (int)psVar49[-0xd]
                          >> 6);
        iVar76 = iVar76 + ((int)*psVar38 * (int)psVar49[-0xb] + (int)*psVar37 * (int)psVar49[-0xc] +
                           (int)*psVar39 * (int)psVar49[-10] + (int)*psVar40 * (int)psVar49[-9] >> 6
                          );
        iVar77 = iVar77 + ((int)*psVar42 * (int)psVar49[-7] + (int)*psVar41 * (int)psVar49[-8] +
                           (int)*psVar43 * (int)psVar49[-6] + (int)*psVar44 * (int)psVar49[-5] >> 6)
        ;
        iVar78 = iVar78 + ((int)*psVar46 * (int)psVar49[-3] + (int)*psVar45 * (int)psVar49[-4] +
                           (int)*psVar47 * (int)psVar49[-2] + (int)*psVar48 * (int)psVar49[-1] >> 6)
        ;
        psVar49 = psVar49 + 0x20;
      } while (lVar63 != 0);
      iStack_cc = iVar79 + iVar75 + iVar82 + iVar76 + iVar83 + iVar77 + iVar85 + iVar78;
      goto joined_r0x00112dd8;
    }
    iStack_cc = 0;
    psVar61 = local_108;
    psVar66 = psVar53;
    uVar57 = uVar74;
    do {
      sVar86 = *psVar61;
      psVar49 = psVar61 + 1;
      psVar52 = psVar61 + 2;
      psVar21 = psVar61 + 3;
      uVar57 = uVar57 - 1;
      psVar61 = psVar61 + 4;
      iStack_cc = iStack_cc +
                  ((int)*psVar66 * (int)sVar86 + (int)psVar66[1] * (int)*psVar49 +
                   (int)psVar66[2] * (int)*psVar52 + (int)psVar66[3] * (int)*psVar21 >> 6);
      psVar66 = psVar66 + 4;
      uVar62 = uVar57;
joined_r0x00112dd8:
    } while (uVar62 != 0);
    if (uVar74 == 0) goto LAB_00112e40;
    if (7 < uVar58) {
      uVar62 = param_10 >> 2 & 7;
      lVar70 = uVar58 - uVar62;
      psVar49 = psVar53 + 0x10;
      iVar75 = 0;
      iVar76 = 0;
      iVar77 = 0;
      iVar78 = 0;
      psVar52 = psVar54 + uVar55 + 0x10;
      lVar63 = ((ulong)(uVar74 - 1) + 1) - (ulong)uVar62;
      uVar57 = uVar74 - (int)lVar70;
      psVar61 = psVar59 + lVar70 * 4;
      psVar53 = psVar53 + lVar70 * 4;
      iVar79 = 0;
      iVar82 = 0;
      iVar83 = 0;
      iVar85 = 0;
      do {
        psVar35 = psVar49 + -0x10;
        sVar86 = *psVar49;
        psVar26 = psVar49 + 1;
        psVar25 = psVar49 + 2;
        psVar24 = psVar49 + 3;
        psVar28 = psVar49 + 4;
        psVar23 = psVar49 + 5;
        psVar19 = psVar49 + 6;
        psVar22 = psVar49 + 7;
        psVar20 = psVar49 + 8;
        psVar33 = psVar49 + 9;
        psVar29 = psVar49 + 10;
        psVar30 = psVar49 + 0xb;
        psVar31 = psVar49 + 0xc;
        psVar27 = psVar49 + 0xd;
        psVar21 = psVar49 + 0xe;
        psVar66 = psVar49 + 0xf;
        psVar36 = psVar49 + -0xf;
        psVar48 = psVar49 + -0xe;
        psVar37 = psVar49 + -0xd;
        psVar38 = psVar49 + -0xc;
        psVar47 = psVar49 + -0xb;
        psVar39 = psVar49 + -10;
        psVar40 = psVar49 + -9;
        psVar46 = psVar49 + -8;
        psVar45 = psVar49 + -7;
        psVar44 = psVar49 + -6;
        psVar43 = psVar49 + -5;
        psVar41 = psVar49 + -4;
        psVar42 = psVar49 + -3;
        psVar34 = psVar49 + -2;
        psVar32 = psVar49 + -1;
        psVar49 = psVar49 + 0x20;
        lVar63 = lVar63 + -8;
        iVar79 = iVar79 + ((int)*psVar26 * (int)psVar52[1] + (int)sVar86 * (int)*psVar52 +
                           (int)*psVar25 * (int)psVar52[2] + (int)*psVar24 * (int)psVar52[3] >> 6);
        iVar82 = iVar82 + ((int)*psVar23 * (int)psVar52[5] + (int)*psVar28 * (int)psVar52[4] +
                           (int)*psVar19 * (int)psVar52[6] + (int)*psVar22 * (int)psVar52[7] >> 6);
        iVar83 = iVar83 + ((int)*psVar33 * (int)psVar52[9] + (int)*psVar20 * (int)psVar52[8] +
                           (int)*psVar29 * (int)psVar52[10] + (int)*psVar30 * (int)psVar52[0xb] >> 6
                          );
        iVar85 = iVar85 + ((int)*psVar27 * (int)psVar52[0xd] + (int)*psVar31 * (int)psVar52[0xc] +
                           (int)*psVar21 * (int)psVar52[0xe] + (int)*psVar66 * (int)psVar52[0xf] >>
                          6);
        iVar75 = iVar75 + ((int)*psVar36 * (int)psVar52[-0xf] + (int)*psVar35 * (int)psVar52[-0x10]
                           + (int)*psVar48 * (int)psVar52[-0xe] + (int)*psVar37 * (int)psVar52[-0xd]
                          >> 6);
        iVar76 = iVar76 + ((int)*psVar47 * (int)psVar52[-0xb] + (int)*psVar38 * (int)psVar52[-0xc] +
                           (int)*psVar39 * (int)psVar52[-10] + (int)*psVar40 * (int)psVar52[-9] >> 6
                          );
        iVar77 = iVar77 + ((int)*psVar45 * (int)psVar52[-7] + (int)*psVar46 * (int)psVar52[-8] +
                           (int)*psVar44 * (int)psVar52[-6] + (int)*psVar43 * (int)psVar52[-5] >> 6)
        ;
        iVar78 = iVar78 + ((int)*psVar42 * (int)psVar52[-3] + (int)*psVar41 * (int)psVar52[-4] +
                           (int)*psVar34 * (int)psVar52[-2] + (int)*psVar32 * (int)psVar52[-1] >> 6)
        ;
        psVar52 = psVar52 + 0x20;
      } while (lVar63 != 0);
      local_d0 = iVar79 + iVar75 + iVar82 + iVar76 + iVar83 + iVar77 + iVar85 + iVar78;
      goto joined_r0x00112ff8;
    }
    local_d0 = 0;
    psVar61 = psVar59;
    uVar57 = uVar74;
    do {
      sVar86 = *psVar61;
      psVar49 = psVar61 + 1;
      psVar52 = psVar61 + 2;
      psVar66 = psVar61 + 3;
      uVar57 = uVar57 - 1;
      psVar61 = psVar61 + 4;
      local_d0 = local_d0 +
                 ((int)*psVar53 * (int)sVar86 + (int)psVar53[1] * (int)*psVar49 +
                  (int)psVar53[2] * (int)*psVar52 + (int)psVar53[3] * (int)*psVar66 >> 6);
      psVar53 = psVar53 + 4;
      uVar62 = uVar57;
joined_r0x00112ff8:
    } while (uVar62 != 0);
  }
  local_168 = param_15;
  if (uVar74 == 0) {
    local_ac = 0;
  }
  else {
    uVar58 = (ulong)(uVar74 - 1) + 1;
    if (uVar58 < 8) {
      local_ac = 0;
      psVar49 = psVar54;
      psVar53 = psVar54;
      uVar57 = uVar74;
    }
    else {
      uVar62 = param_10 >> 2 & 7;
      lVar63 = uVar58 - uVar62;
      psVar53 = psVar54 + 0x10;
      iVar75 = 0;
      iVar76 = 0;
      iVar77 = 0;
      iVar78 = 0;
      psVar49 = psVar54 + lVar63 * 4;
      uVar57 = uVar74 - (int)lVar63;
      iVar79 = 0;
      iVar82 = 0;
      iVar83 = 0;
      iVar85 = 0;
      do {
        psVar36 = psVar53 + -0x10;
        sVar86 = *psVar53;
        psVar61 = psVar53 + 1;
        psVar66 = psVar53 + 2;
        psVar52 = psVar53 + 3;
        psVar19 = psVar53 + 4;
        psVar23 = psVar53 + 5;
        psVar28 = psVar53 + 6;
        psVar22 = psVar53 + 7;
        psVar20 = psVar53 + 8;
        psVar33 = psVar53 + 9;
        psVar29 = psVar53 + 10;
        psVar30 = psVar53 + 0xb;
        psVar31 = psVar53 + 0xc;
        psVar27 = psVar53 + 0xd;
        psVar21 = psVar53 + 0xe;
        psVar24 = psVar53 + 0xf;
        psVar47 = psVar53 + -0xf;
        psVar38 = psVar53 + -0xe;
        psVar37 = psVar53 + -0xd;
        psVar48 = psVar53 + -0xc;
        psVar25 = psVar53 + -0xb;
        psVar26 = psVar53 + -10;
        psVar32 = psVar53 + -9;
        psVar42 = psVar53 + -8;
        psVar41 = psVar53 + -7;
        psVar43 = psVar53 + -6;
        psVar44 = psVar53 + -5;
        psVar45 = psVar53 + -4;
        psVar46 = psVar53 + -3;
        psVar40 = psVar53 + -2;
        psVar39 = psVar53 + -1;
        lVar63 = lVar63 + -8;
        psVar53 = psVar53 + 0x20;
        iVar79 = iVar79 + ((int)*psVar61 * (int)*psVar61 + (int)sVar86 * (int)sVar86 +
                           (int)*psVar66 * (int)*psVar66 + (int)*psVar52 * (int)*psVar52 >> 6);
        iVar82 = iVar82 + ((int)*psVar23 * (int)*psVar23 + (int)*psVar19 * (int)*psVar19 +
                           (int)*psVar28 * (int)*psVar28 + (int)*psVar22 * (int)*psVar22 >> 6);
        iVar83 = iVar83 + ((int)*psVar33 * (int)*psVar33 + (int)*psVar20 * (int)*psVar20 +
                           (int)*psVar29 * (int)*psVar29 + (int)*psVar30 * (int)*psVar30 >> 6);
        iVar85 = iVar85 + ((int)*psVar27 * (int)*psVar27 + (int)*psVar31 * (int)*psVar31 +
                           (int)*psVar21 * (int)*psVar21 + (int)*psVar24 * (int)*psVar24 >> 6);
        iVar75 = iVar75 + ((int)*psVar47 * (int)*psVar47 + (int)*psVar36 * (int)*psVar36 +
                           (int)*psVar38 * (int)*psVar38 + (int)*psVar37 * (int)*psVar37 >> 6);
        iVar76 = iVar76 + ((int)*psVar25 * (int)*psVar25 + (int)*psVar48 * (int)*psVar48 +
                           (int)*psVar26 * (int)*psVar26 + (int)*psVar32 * (int)*psVar32 >> 6);
        iVar77 = iVar77 + ((int)*psVar41 * (int)*psVar41 + (int)*psVar42 * (int)*psVar42 +
                           (int)*psVar43 * (int)*psVar43 + (int)*psVar44 * (int)*psVar44 >> 6);
        iVar78 = iVar78 + ((int)*psVar46 * (int)*psVar46 + (int)*psVar45 * (int)*psVar45 +
                           (int)*psVar40 * (int)*psVar40 + (int)*psVar39 * (int)*psVar39 >> 6);
      } while (lVar63 != 0);
      local_ac = iVar79 + iVar75 + iVar82 + iVar76 + iVar83 + iVar77 + iVar85 + iVar78;
      psVar53 = psVar49;
      if (uVar62 == 0) goto LAB_0011312c;
    }
    do {
      uVar57 = uVar57 - 1;
      local_ac = local_ac +
                 ((int)*psVar53 * (int)*psVar49 + (int)psVar53[1] * (int)psVar49[1] +
                  (int)psVar53[2] * (int)psVar49[2] + (int)psVar53[3] * (int)psVar49[3] >> 6);
      psVar49 = psVar49 + 4;
      psVar53 = psVar53 + 4;
    } while (uVar57 != 0);
  }
LAB_0011312c:
  local_148 = (size_t)(uVar74 - 1);
  uVar57 = param_10 >> 2 & 7;
  local_118 = (ulong)uVar57;
  local_f8 = (void *)(local_148 + 1);
  lVar70 = (long)local_f8 - local_118;
  local_140 = lVar56;
  lVar63 = 0;
  psVar53 = psVar54;
  while( true ) {
    if (uVar74 == 0) {
      iVar75 = 0;
    }
    else {
      if (7 < local_f8) {
        psVar49 = psVar53 + 0x10;
        iVar75 = 0;
        iVar76 = 0;
        iVar77 = 0;
        iVar78 = 0;
        iVar79 = 0;
        iVar82 = 0;
        iVar83 = 0;
        iVar85 = 0;
        lVar51 = lVar70;
        psVar52 = psVar54 + lVar56 + 0x10;
        do {
          psVar34 = psVar49 + -0x10;
          sVar86 = *psVar49;
          psVar23 = psVar49 + 1;
          psVar28 = psVar49 + 2;
          psVar24 = psVar49 + 3;
          psVar25 = psVar49 + 4;
          psVar66 = psVar49 + 5;
          psVar19 = psVar49 + 6;
          psVar61 = psVar49 + 7;
          psVar27 = psVar49 + 8;
          psVar22 = psVar49 + 9;
          psVar20 = psVar49 + 10;
          psVar33 = psVar49 + 0xb;
          psVar29 = psVar49 + 0xc;
          psVar30 = psVar49 + 0xd;
          psVar31 = psVar49 + 0xe;
          psVar21 = psVar49 + 0xf;
          psVar39 = psVar49 + -0xf;
          psVar47 = psVar49 + -0xe;
          psVar38 = psVar49 + -0xd;
          psVar37 = psVar49 + -0xc;
          psVar48 = psVar49 + -0xb;
          psVar36 = psVar49 + -10;
          psVar26 = psVar49 + -9;
          psVar41 = psVar49 + -8;
          psVar42 = psVar49 + -7;
          psVar32 = psVar49 + -6;
          psVar43 = psVar49 + -5;
          psVar44 = psVar49 + -4;
          psVar45 = psVar49 + -3;
          psVar46 = psVar49 + -2;
          psVar40 = psVar49 + -1;
          psVar49 = psVar49 + 0x20;
          lVar51 = lVar51 + -8;
          iVar79 = iVar79 + ((int)*psVar23 * (int)psVar52[1] + (int)sVar86 * (int)*psVar52 +
                             (int)*psVar28 * (int)psVar52[2] + (int)*psVar24 * (int)psVar52[3] >> 6)
          ;
          iVar82 = iVar82 + ((int)*psVar66 * (int)psVar52[5] + (int)*psVar25 * (int)psVar52[4] +
                             (int)*psVar19 * (int)psVar52[6] + (int)*psVar61 * (int)psVar52[7] >> 6)
          ;
          iVar83 = iVar83 + ((int)*psVar22 * (int)psVar52[9] + (int)*psVar27 * (int)psVar52[8] +
                             (int)*psVar20 * (int)psVar52[10] + (int)*psVar33 * (int)psVar52[0xb] >>
                            6);
          iVar85 = iVar85 + ((int)*psVar30 * (int)psVar52[0xd] + (int)*psVar29 * (int)psVar52[0xc] +
                             (int)*psVar31 * (int)psVar52[0xe] + (int)*psVar21 * (int)psVar52[0xf]
                            >> 6);
          iVar75 = iVar75 + ((int)*psVar39 * (int)psVar52[-0xf] +
                             (int)*psVar34 * (int)psVar52[-0x10] +
                             (int)*psVar47 * (int)psVar52[-0xe] + (int)*psVar38 * (int)psVar52[-0xd]
                            >> 6);
          iVar76 = iVar76 + ((int)*psVar48 * (int)psVar52[-0xb] + (int)*psVar37 * (int)psVar52[-0xc]
                             + (int)*psVar36 * (int)psVar52[-10] + (int)*psVar26 * (int)psVar52[-9]
                            >> 6);
          iVar77 = iVar77 + ((int)*psVar42 * (int)psVar52[-7] + (int)*psVar41 * (int)psVar52[-8] +
                             (int)*psVar32 * (int)psVar52[-6] + (int)*psVar43 * (int)psVar52[-5] >>
                            6);
          iVar78 = iVar78 + ((int)*psVar45 * (int)psVar52[-3] + (int)*psVar44 * (int)psVar52[-4] +
                             (int)*psVar46 * (int)psVar52[-2] + (int)*psVar40 * (int)psVar52[-1] >>
                            6);
          psVar52 = psVar52 + 0x20;
        } while (lVar51 != 0);
        iVar75 = iVar79 + iVar75 + iVar82 + iVar76 + iVar83 + iVar77 + iVar85 + iVar78;
        psVar49 = local_108 + lVar70 * 4;
        uVar62 = uVar74 - (int)lVar70;
        psVar53 = psVar53 + lVar70 * 4;
        uVar64 = uVar57;
        goto joined_r0x00113244;
      }
      iVar75 = 0;
      psVar49 = local_108;
      uVar62 = uVar74;
      do {
        sVar86 = *psVar49;
        psVar52 = psVar49 + 1;
        psVar61 = psVar49 + 2;
        psVar66 = psVar49 + 3;
        uVar62 = uVar62 - 1;
        psVar49 = psVar49 + 4;
        iVar75 = iVar75 + ((int)*psVar53 * (int)sVar86 + (int)psVar53[1] * (int)*psVar52 +
                           (int)psVar53[2] * (int)*psVar61 + (int)psVar53[3] * (int)*psVar66 >> 6);
        psVar53 = psVar53 + 4;
        uVar64 = uVar62;
joined_r0x00113244:
      } while (uVar64 != 0);
    }
    lVar51 = lVar63 + 1;
    local_a0[lVar63 * 3 + -2] = iVar75;
    local_a0[lVar63] = iVar75;
    if (lVar51 == 2) break;
    psVar53 = local_88[lVar51];
    lVar63 = lVar51;
  }
  lVar63 = (local_148 + 1) - local_118;
  psVar53 = psVar54 + uVar55 + 0x10;
  lVar56 = 0;
  while( true ) {
    if (uVar74 == 0) {
      iVar75 = 0;
    }
    else {
      if (7 < local_f8) {
        psVar49 = psVar54 + 0x10;
        iVar75 = 0;
        iVar76 = 0;
        iVar77 = 0;
        iVar78 = 0;
        iVar79 = 0;
        iVar82 = 0;
        iVar83 = 0;
        iVar85 = 0;
        lVar70 = lVar63;
        psVar52 = psVar53;
        do {
          psVar34 = psVar49 + -0x10;
          sVar86 = *psVar49;
          psVar27 = psVar49 + 1;
          psVar31 = psVar49 + 2;
          psVar30 = psVar49 + 3;
          psVar29 = psVar49 + 4;
          psVar33 = psVar49 + 5;
          psVar20 = psVar49 + 6;
          psVar22 = psVar49 + 7;
          psVar19 = psVar49 + 8;
          psVar23 = psVar49 + 9;
          psVar28 = psVar49 + 10;
          psVar24 = psVar49 + 0xb;
          psVar25 = psVar49 + 0xc;
          psVar66 = psVar49 + 0xd;
          psVar61 = psVar49 + 0xe;
          psVar21 = psVar49 + 0xf;
          psVar42 = psVar49 + -0xf;
          psVar43 = psVar49 + -0xe;
          psVar44 = psVar49 + -0xd;
          psVar45 = psVar49 + -0xc;
          psVar46 = psVar49 + -0xb;
          psVar40 = psVar49 + -10;
          psVar39 = psVar49 + -9;
          psVar47 = psVar49 + -8;
          psVar38 = psVar49 + -7;
          psVar37 = psVar49 + -6;
          psVar48 = psVar49 + -5;
          psVar36 = psVar49 + -4;
          psVar26 = psVar49 + -3;
          psVar41 = psVar49 + -2;
          psVar32 = psVar49 + -1;
          psVar49 = psVar49 + 0x20;
          lVar70 = lVar70 + -8;
          iVar79 = iVar79 + ((int)*psVar27 * (int)psVar52[1] + (int)sVar86 * (int)*psVar52 +
                             (int)*psVar31 * (int)psVar52[2] + (int)*psVar30 * (int)psVar52[3] >> 6)
          ;
          iVar82 = iVar82 + ((int)*psVar33 * (int)psVar52[5] + (int)*psVar29 * (int)psVar52[4] +
                             (int)*psVar20 * (int)psVar52[6] + (int)*psVar22 * (int)psVar52[7] >> 6)
          ;
          iVar83 = iVar83 + ((int)*psVar23 * (int)psVar52[9] + (int)*psVar19 * (int)psVar52[8] +
                             (int)*psVar28 * (int)psVar52[10] + (int)*psVar24 * (int)psVar52[0xb] >>
                            6);
          iVar85 = iVar85 + ((int)*psVar66 * (int)psVar52[0xd] + (int)*psVar25 * (int)psVar52[0xc] +
                             (int)*psVar61 * (int)psVar52[0xe] + (int)*psVar21 * (int)psVar52[0xf]
                            >> 6);
          iVar75 = iVar75 + ((int)*psVar42 * (int)psVar52[-0xf] +
                             (int)*psVar34 * (int)psVar52[-0x10] +
                             (int)*psVar43 * (int)psVar52[-0xe] + (int)*psVar44 * (int)psVar52[-0xd]
                            >> 6);
          iVar76 = iVar76 + ((int)*psVar46 * (int)psVar52[-0xb] + (int)*psVar45 * (int)psVar52[-0xc]
                             + (int)*psVar40 * (int)psVar52[-10] + (int)*psVar39 * (int)psVar52[-9]
                            >> 6);
          iVar77 = iVar77 + ((int)*psVar38 * (int)psVar52[-7] + (int)*psVar47 * (int)psVar52[-8] +
                             (int)*psVar37 * (int)psVar52[-6] + (int)*psVar48 * (int)psVar52[-5] >>
                            6);
          iVar78 = iVar78 + ((int)*psVar26 * (int)psVar52[-3] + (int)*psVar36 * (int)psVar52[-4] +
                             (int)*psVar41 * (int)psVar52[-2] + (int)*psVar32 * (int)psVar52[-1] >>
                            6);
          psVar52 = psVar52 + 0x20;
        } while (lVar70 != 0);
        iVar75 = iVar79 + iVar75 + iVar82 + iVar76 + iVar83 + iVar77 + iVar85 + iVar78;
        uVar62 = uVar74 + (uVar57 - (int)local_f8);
        psVar49 = psVar59 + lVar63 * 4;
        psVar54 = psVar54 + lVar63 * 4;
        uVar64 = uVar57;
        goto joined_r0x001133b4;
      }
      iVar75 = 0;
      psVar49 = psVar59;
      uVar62 = uVar74;
      do {
        sVar86 = *psVar49;
        psVar52 = psVar49 + 1;
        psVar61 = psVar49 + 2;
        psVar66 = psVar49 + 3;
        uVar62 = uVar62 - 1;
        psVar49 = psVar49 + 4;
        iVar75 = iVar75 + ((int)*psVar54 * (int)sVar86 + (int)psVar54[1] * (int)*psVar52 +
                           (int)psVar54[2] * (int)*psVar61 + (int)psVar54[3] * (int)*psVar66 >> 6);
        psVar54 = psVar54 + 4;
        uVar64 = uVar62;
joined_r0x001133b4:
      } while (uVar64 != 0);
    }
    lVar70 = lVar56 + 1;
    local_a0[lVar56 * 3 + -1] = iVar75;
    local_a0[lVar56 + 3] = iVar75;
    if (lVar70 == 3) break;
    psVar54 = local_88[lVar70];
    lVar56 = lVar70;
  }
  if (param_16 < 3) {
    param_16 = 2;
  }
  local_d0 = local_d0 << 1;
  iStack_cc = iStack_cc << 1;
  local_c8 = local_c8 << 1;
  if (0x1d < param_16) {
    param_16 = 0x1e;
  }
  local_c0 = CONCAT44((int)((ulong)local_a8 >> 0x20) << 1,(int)local_a8 << 1);
  uVar57 = (uint)(param_16 * 0x28f0000) >> 0x10;
  local_c4 = local_a0[2] << 1;
  uVar55 = CONCAT44(local_a0[1],local_a0[5]) & 0x7fff00007fff;
  local_b0 = local_ac + ((local_ac & 0x7fff) * uVar57 >> 0xf) +
             ((int)(local_ac << 1) >> 0x10) * uVar57;
  local_b8 = CONCAT44(local_a0[1] + ((int)(uVar55 >> 0x20) * uVar57 >> 0xf) +
                      ((local_a0[1] << 1) >> 0x10) * uVar57,
                      local_a0[5] + ((int)uVar55 * uVar57 >> 0xf) +
                      ((local_a0[5] << 1) >> 0x10) * uVar57);
  normalize16(&local_d0,&local_e4,0x7fff,9);
  if ((int)uVar71 < 1) {
    uVar55 = 0;
  }
  else {
    iVar75 = 0x1f;
    uVar65 = 0;
    uVar58 = 0;
    uVar55 = 0;
    if (param_17 < 0x40001) {
      iVar75 = 0x80;
    }
    iVar76 = -0x7fffffff;
    do {
      pcVar4 = (char *)((long)local_120 + (uVar65 & 0xfffffffc));
      sVar86 = (short)(pcVar4[1] + 0x20);
      sVar17 = (short)(*pcVar4 + 0x20);
      sVar18 = (short)(pcVar4[2] + 0x20);
      iVar77 = ((pcVar4[1] + 0x20) * (int)local_e2 * 0x40 + (*pcVar4 + 0x20) * (int)local_e4 * 0x40
               + (pcVar4[2] + 0x20) * (int)local_e0 * 0x40) -
               ((int)(short)(sVar17 * sVar17) * (int)local_d8 +
                (int)(short)(sVar86 * sVar86) * (int)local_d6 +
                (int)(short)(sVar86 * sVar17) * (int)local_de +
                (int)(short)(sVar18 * sVar17) * (int)local_da +
                (int)(short)(sVar18 * sVar18) * (int)local_d4 +
               (int)(short)(sVar18 * sVar86) * (int)local_dc);
      if (iVar76 < iVar77) {
        uVar57 = (uint)uVar55;
        if (pcVar4[3] <= iVar75) {
          uVar57 = (uint)uVar58;
          iVar76 = iVar77;
        }
        uVar55 = (ulong)uVar57;
      }
      uVar58 = uVar58 + 1;
      uVar65 = uVar65 + 4;
    } while (uVar71 != uVar58);
  }
  uVar58 = (ulong)(int)(uVar55 << 2);
  uStack_160._4_4_ =
       *(char *)((long)local_120 + (-(uVar55 >> 0x1f) & 0xfffffffc00000000 | uVar55 << 2)) + 0x20;
  local_ec[0] = (short)uStack_160._4_4_;
  local_16c = *(char *)((long)local_120 + (uVar58 | 1)) + 0x20;
  local_ec[1] = (short)local_16c;
  local_170 = *(char *)((long)local_120 + (uVar58 | 2)) + 0x20;
  local_ec[2] = (short)local_170;
  *local_168 = (int)uVar55;
  memset(param_5,0,local_140 << 2);
  lVar56 = 0;
  uVar12 = ~param_10;
  iVar75 = local_fc + 1;
  uVar14 = local_fc * -2 - 2;
  local_120 = (undefined8 *)((long)param_5 + 0x10);
  uVar71 = ~local_fc;
  uVar15 = -local_fc - 2;
  uVar64 = uVar14 | 1;
  local_108 = (short *)CONCAT44(local_108._4_4_,iVar75);
  local_110 = (short *)CONCAT44(local_110._4_4_,uVar15);
  uVar57 = uVar15;
  iVar76 = iVar75;
  uVar62 = uVar14;
  do {
    iVar77 = (int)lVar56;
    uVar2 = uVar14 + iVar77;
    uVar3 = uVar15 + iVar77;
    uVar16 = iVar75 - iVar77;
    uVar5 = uVar57;
    if ((int)uVar57 <= (int)uVar12) {
      uVar5 = uVar12;
    }
    uVar6 = uVar62;
    if ((int)uVar62 <= (int)uVar12) {
      uVar6 = uVar12;
    }
    uVar8 = param_10;
    if ((int)~uVar3 <= (int)param_10) {
      uVar8 = ~uVar3;
    }
    uVar9 = param_10;
    if ((int)~uVar2 <= (int)param_10) {
      uVar9 = ~uVar2;
    }
    if ((int)uVar3 <= (int)uVar12) {
      uVar3 = uVar12;
    }
    uVar10 = param_10;
    if ((int)~uVar57 <= (int)param_10) {
      uVar10 = ~uVar57;
    }
    uVar13 = ~uVar5;
    uVar7 = uVar16;
    if ((int)param_10 <= (int)uVar16) {
      uVar7 = param_10;
    }
    uVar55 = (ulong)(int)uVar8;
    if (0 < (int)uVar7) {
      iVar77 = (int)(short)(local_ec[2 - lVar56] << 7);
      if (uVar8 < 8) {
        uVar58 = 0;
        iVar78 = 0;
      }
      else {
        uVar58 = uVar55 & 0xfffffffffffffff8;
        uVar65 = (long)(int)uVar13 & 0xfffffffffffffff8;
        iVar78 = (int)uVar58;
        puVar50 = local_120;
        uVar8 = uVar71;
        do {
          puVar1 = (undefined8 *)(param_12 + (long)(int)uVar8 * 2);
          uVar81 = *puVar1;
          uVar90 = puVar1[1];
          uVar65 = uVar65 - 8;
          uVar8 = uVar8 + 8;
          puVar50[-1] = CONCAT44((int)((ulong)puVar50[-1] >> 0x20) +
                                 iVar77 * (short)((ulong)uVar81 >> 0x30),
                                 (int)puVar50[-1] + iVar77 * (short)((ulong)uVar81 >> 0x20));
          puVar50[-2] = CONCAT44((int)((ulong)puVar50[-2] >> 0x20) +
                                 iVar77 * (short)((ulong)uVar81 >> 0x10),
                                 (int)puVar50[-2] + iVar77 * (short)uVar81);
          puVar50[1] = CONCAT44((int)((ulong)puVar50[1] >> 0x20) +
                                iVar77 * (short)((ulong)uVar90 >> 0x30),
                                (int)puVar50[1] + iVar77 * (short)((ulong)uVar90 >> 0x20));
          *puVar50 = CONCAT44((int)((ulong)*puVar50 >> 0x20) +
                              iVar77 * (short)((ulong)uVar90 >> 0x10),
                              (int)*puVar50 + iVar77 * (short)uVar90);
          puVar50 = puVar50 + 4;
        } while (uVar65 != 0);
        if (uVar58 == uVar55) goto LAB_00113840;
      }
      psVar53 = (short *)(param_12 + ((long)iVar78 - (long)iVar76) * 2);
      do {
        lVar63 = uVar58 * 4;
        uVar58 = uVar58 + 1;
        *(int *)((long)param_5 + lVar63) = *(int *)((long)param_5 + lVar63) + iVar77 * *psVar53;
        psVar53 = psVar53 + 1;
      } while ((long)uVar58 < (long)(int)uVar7);
    }
LAB_00113840:
    uVar8 = uVar16 + local_fc;
    if ((int)param_10 <= (int)(uVar16 + local_fc)) {
      uVar8 = param_10;
    }
    if ((int)uVar7 < (int)uVar8) {
      uVar55 = (long)(int)uVar9 - uVar55;
      lVar63 = (long)(int)uVar10;
      iVar77 = (int)(short)(local_ec[2 - lVar56] << 7);
      if (((7 < uVar55) &&
          (uVar58 = (long)(int)uVar9 + (long)(int)uVar3,
          (int)(uVar2 - uVar3) <= (int)((uVar2 - uVar3) + (int)uVar58))) && (uVar58 >> 0x20 == 0)) {
        iVar78 = uVar62 - uVar5;
        puVar50 = (undefined8 *)((long)local_120 + (long)(int)uVar13 * 4);
        lVar63 = (uVar55 & 0xfffffffffffffff8) + lVar63;
        uVar58 = (long)(int)~uVar6 - (long)(int)uVar13 & 0xfffffffffffffff8;
        do {
          puVar1 = (undefined8 *)(param_12 + (long)iVar78 * 2);
          uVar81 = *puVar1;
          uVar90 = puVar1[1];
          iVar78 = iVar78 + 8;
          uVar58 = uVar58 - 8;
          puVar50[-1] = CONCAT44((int)((ulong)puVar50[-1] >> 0x20) +
                                 iVar77 * (short)((ulong)uVar81 >> 0x30),
                                 (int)puVar50[-1] + iVar77 * (short)((ulong)uVar81 >> 0x20));
          puVar50[-2] = CONCAT44((int)((ulong)puVar50[-2] >> 0x20) +
                                 iVar77 * (short)((ulong)uVar81 >> 0x10),
                                 (int)puVar50[-2] + iVar77 * (short)uVar81);
          puVar50[1] = CONCAT44((int)((ulong)puVar50[1] >> 0x20) +
                                iVar77 * (short)((ulong)uVar90 >> 0x30),
                                (int)puVar50[1] + iVar77 * (short)((ulong)uVar90 >> 0x20));
          *puVar50 = CONCAT44((int)((ulong)*puVar50 >> 0x20) +
                              iVar77 * (short)((ulong)uVar90 >> 0x10),
                              (int)*puVar50 + iVar77 * (short)uVar90);
          puVar50 = puVar50 + 4;
        } while (uVar58 != 0);
        if (uVar55 == (uVar55 & 0xfffffffffffffff8)) goto LAB_001138ac;
      }
      do {
        lVar70 = lVar63 * 4;
        iVar78 = (int)lVar63;
        lVar63 = lVar63 + 1;
        *(int *)((long)param_5 + lVar70) =
             *(int *)((long)param_5 + lVar70) +
             iVar77 * *(short *)(param_12 + (long)(int)(uVar64 + iVar78) * 2);
      } while (lVar63 < (int)uVar8);
    }
LAB_001138ac:
    lVar56 = lVar56 + 1;
    uVar57 = uVar57 + 1;
    uVar71 = uVar71 + 1;
    iVar76 = iVar76 + -1;
    uVar62 = uVar62 + 1;
    uVar64 = uVar64 + 1;
  } while (lVar56 != 3);
  if (0 < (int)param_10) {
    if (param_10 < 8) {
      uVar58 = 0;
    }
    else {
      uVar58 = uVar73 & 0xfffffff8;
      uVar55 = uVar58;
      psVar53 = local_128;
      psVar54 = local_138;
      do {
        uVar90 = *(undefined8 *)(psVar54 + local_130 + 4);
        uVar81 = *(undefined8 *)(psVar54 + local_130);
        uVar84 = *(undefined8 *)(psVar54 + local_140 + 4);
        uVar80 = *(undefined8 *)(psVar54 + local_140);
        uVar88 = *(undefined8 *)(psVar54 + 4);
        uVar87 = *(undefined8 *)psVar54;
        uVar91 = *(undefined8 *)(psVar53 + 4);
        uVar89 = *(undefined8 *)psVar53;
        uVar55 = uVar55 - 8;
        *(ulong *)(psVar53 + 4) =
             CONCAT26((short)((ulong)uVar91 >> 0x30) -
                      (short)(uStack_160._4_4_ * (int)(short)((ulong)uVar90 >> 0x30) +
                              local_16c * (short)((ulong)uVar84 >> 0x30) +
                              local_170 * (short)((ulong)uVar88 >> 0x30) + 0x20 >> 6),
                      CONCAT24((short)((ulong)uVar91 >> 0x20) -
                               (short)(uStack_160._4_4_ * (int)(short)((ulong)uVar90 >> 0x20) +
                                       local_16c * (short)((ulong)uVar84 >> 0x20) +
                                       local_170 * (short)((ulong)uVar88 >> 0x20) + 0x20 >> 6),
                               CONCAT22((short)((ulong)uVar91 >> 0x10) -
                                        (short)(uStack_160._4_4_ *
                                                (int)(short)((ulong)uVar90 >> 0x10) +
                                                local_16c * (short)((ulong)uVar84 >> 0x10) +
                                                local_170 * (short)((ulong)uVar88 >> 0x10) + 0x20 >>
                                               6),
                                        (short)uVar91 -
                                        (short)(uStack_160._4_4_ * (int)(short)uVar90 +
                                                local_16c * (short)uVar84 +
                                                local_170 * (short)uVar88 + 0x20 >> 6))));
        *(ulong *)psVar53 =
             CONCAT26((short)((ulong)uVar89 >> 0x30) -
                      (short)(uStack_160._4_4_ * (int)(short)((ulong)uVar81 >> 0x30) +
                              local_16c * (short)((ulong)uVar80 >> 0x30) +
                              local_170 * (short)((ulong)uVar87 >> 0x30) + 0x20 >> 6),
                      CONCAT24((short)((ulong)uVar89 >> 0x20) -
                               (short)(uStack_160._4_4_ * (int)(short)((ulong)uVar81 >> 0x20) +
                                       local_16c * (short)((ulong)uVar80 >> 0x20) +
                                       local_170 * (short)((ulong)uVar87 >> 0x20) + 0x20 >> 6),
                               CONCAT22((short)((ulong)uVar89 >> 0x10) -
                                        (short)(uStack_160._4_4_ *
                                                (int)(short)((ulong)uVar81 >> 0x10) +
                                                local_16c * (short)((ulong)uVar80 >> 0x10) +
                                                local_170 * (short)((ulong)uVar87 >> 0x10) + 0x20 >>
                                               6),
                                        (short)uVar89 -
                                        (short)(uStack_160._4_4_ * (int)(short)uVar81 +
                                                local_16c * (short)uVar80 +
                                                local_170 * (short)uVar87 + 0x20 >> 6))));
        psVar53 = psVar53 + 8;
        psVar54 = psVar54 + 8;
      } while (uVar55 != 0);
      if (uVar58 == uVar73) goto LAB_001139f0;
    }
    psVar53 = local_138 + uVar58;
    lVar56 = uVar73 - uVar58;
    psVar54 = local_128 + uVar58;
    do {
      lVar56 = lVar56 + -1;
      *psVar54 = *psVar54 -
                 (short)(psVar53[local_140] * local_16c + (int)psVar53[local_130] * uStack_160._4_4_
                         + *psVar53 * local_170 + 0x20 >> 6);
      psVar53 = psVar53 + 1;
      psVar54 = psVar54 + 1;
    } while (lVar56 != 0);
  }
LAB_001139f0:
  if (uVar74 == 0) {
    iVar75 = 0;
  }
  else {
    if (local_f8 < 8) {
      iVar75 = 0;
      psVar54 = local_128;
    }
    else {
      psVar53 = local_128 + 0x10;
      iVar75 = 0;
      iVar76 = 0;
      iVar77 = 0;
      iVar78 = 0;
      iVar79 = 0;
      iVar82 = 0;
      iVar83 = 0;
      iVar85 = 0;
      uVar74 = uVar74 - (int)((long)local_f8 - local_118);
      psVar54 = local_128 + ((long)local_f8 - local_118) * 4;
      lVar56 = (local_148 + 1) - local_118;
      do {
        psVar37 = psVar53 + -0x10;
        sVar86 = *psVar53;
        psVar27 = psVar53 + 1;
        psVar59 = psVar53 + 2;
        psVar31 = psVar53 + 3;
        psVar30 = psVar53 + 4;
        psVar33 = psVar53 + 5;
        psVar20 = psVar53 + 6;
        psVar23 = psVar53 + 7;
        psVar29 = psVar53 + 8;
        psVar22 = psVar53 + 9;
        psVar19 = psVar53 + 10;
        psVar49 = psVar53 + 0xb;
        psVar52 = psVar53 + 0xc;
        psVar61 = psVar53 + 0xd;
        psVar66 = psVar53 + 0xe;
        psVar21 = psVar53 + 0xf;
        psVar47 = psVar53 + -0xf;
        psVar39 = psVar53 + -0xe;
        psVar40 = psVar53 + -0xd;
        psVar46 = psVar53 + -0xc;
        psVar45 = psVar53 + -0xb;
        psVar44 = psVar53 + -10;
        psVar43 = psVar53 + -9;
        psVar41 = psVar53 + -8;
        psVar38 = psVar53 + -7;
        psVar24 = psVar53 + -6;
        psVar28 = psVar53 + -5;
        psVar25 = psVar53 + -4;
        psVar26 = psVar53 + -3;
        psVar32 = psVar53 + -2;
        psVar42 = psVar53 + -1;
        lVar56 = lVar56 + -8;
        psVar53 = psVar53 + 0x20;
        iVar79 = iVar79 + ((uint)((int)*psVar27 * (int)*psVar27 + (int)sVar86 * (int)sVar86 +
                                  (int)*psVar59 * (int)*psVar59 + (int)*psVar31 * (int)*psVar31) >>
                          6);
        iVar82 = iVar82 + ((uint)((int)*psVar33 * (int)*psVar33 + (int)*psVar30 * (int)*psVar30 +
                                  (int)*psVar20 * (int)*psVar20 + (int)*psVar23 * (int)*psVar23) >>
                          6);
        iVar83 = iVar83 + ((uint)((int)*psVar22 * (int)*psVar22 + (int)*psVar29 * (int)*psVar29 +
                                  (int)*psVar19 * (int)*psVar19 + (int)*psVar49 * (int)*psVar49) >>
                          6);
        iVar85 = iVar85 + ((uint)((int)*psVar61 * (int)*psVar61 + (int)*psVar52 * (int)*psVar52 +
                                  (int)*psVar66 * (int)*psVar66 + (int)*psVar21 * (int)*psVar21) >>
                          6);
        iVar75 = iVar75 + ((uint)((int)*psVar47 * (int)*psVar47 + (int)*psVar37 * (int)*psVar37 +
                                  (int)*psVar39 * (int)*psVar39 + (int)*psVar40 * (int)*psVar40) >>
                          6);
        iVar76 = iVar76 + ((uint)((int)*psVar45 * (int)*psVar45 + (int)*psVar46 * (int)*psVar46 +
                                  (int)*psVar44 * (int)*psVar44 + (int)*psVar43 * (int)*psVar43) >>
                          6);
        iVar77 = iVar77 + ((uint)((int)*psVar38 * (int)*psVar38 + (int)*psVar41 * (int)*psVar41 +
                                  (int)*psVar24 * (int)*psVar24 + (int)*psVar28 * (int)*psVar28) >>
                          6);
        iVar78 = iVar78 + ((uint)((int)*psVar26 * (int)*psVar26 + (int)*psVar25 * (int)*psVar25 +
                                  (int)*psVar32 * (int)*psVar32 + (int)*psVar42 * (int)*psVar42) >>
                          6);
      } while (lVar56 != 0);
      iVar75 = iVar79 + iVar75 + iVar82 + iVar76 + iVar83 + iVar77 + iVar85 + iVar78;
      if ((int)local_118 == 0) goto LAB_00113acc;
    }
    do {
      uVar74 = uVar74 - 1;
      iVar75 = iVar75 + ((uint)((int)*psVar54 * (int)*psVar54 + (int)psVar54[1] * (int)psVar54[1] +
                                (int)psVar54[2] * (int)psVar54[2] +
                               (int)psVar54[3] * (int)psVar54[3]) >> 6);
      psVar54 = psVar54 + 4;
    } while (uVar74 != 0);
  }
LAB_00113acc:
  if (*(long *)(local_158 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar75);
}

