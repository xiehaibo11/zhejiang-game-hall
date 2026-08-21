
void FUN_00107aa4(void *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 uint *param_5,undefined4 param_6,ulong param_7,long param_8,long param_9,
                 undefined8 param_10,undefined8 param_11,int param_12)

{
  byte *pbVar1;
  void *pvVar2;
  int iVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  short *psVar13;
  undefined8 *puVar14;
  short *psVar15;
  long lVar16;
  long lVar17;
  undefined2 *puVar18;
  char *pcVar19;
  ulong uVar20;
  int *piVar21;
  undefined8 *puVar22;
  ulong uVar23;
  int *piVar24;
  long lVar25;
  ulong uVar26;
  long lVar27;
  long lVar28;
  undefined8 *puVar29;
  ulong uVar30;
  long lVar31;
  long lVar32;
  uint uVar33;
  ulong uVar34;
  long lVar35;
  void *__dest;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 auStack_150 [2];
  void *local_140;
  long local_138;
  undefined8 local_130 [3];
  undefined4 local_114;
  long local_110;
  ulong local_108;
  long local_100;
  undefined1 *local_f8;
  ulong local_f0;
  long local_e8;
  long local_e0;
  undefined8 *local_d8;
  long local_d0;
  long local_c8;
  long local_c0;
  ulong local_b8;
  long local_b0;
  long local_a8;
  ulong local_a0;
  undefined8 local_98;
  long local_90;
  ulong local_88;
  undefined8 local_80;
  undefined1 auStack_78 [4];
  int local_74;
  long local_70;
  
  local_f8 = (undefined1 *)&local_140;
  local_100 = tpidr_el0;
  local_70 = *(long *)(local_100 + 0x28);
  local_80 = param_11;
  uVar5 = param_5[5];
  uVar33 = *param_5;
  uVar4 = (ulong)uVar33;
  uVar6 = param_5[1];
  lVar32 = *(long *)(param_5 + 2);
  uVar8 = 1 << (ulong)(param_5[4] & 0x1f);
  uVar34 = (ulong)uVar8;
  lVar17 = -((ulong)(uVar33 << (ulong)(param_5[4] & 0x1f)) * 2 + 0xf & 0x3fffffff0);
  lVar35 = (long)&local_140 + lVar17;
  lVar31 = lVar35 - (uVar34 * 4 + 0xf & 0x7fffffff0);
  local_108 = param_7 & 0xffffffff;
  local_138 = local_108 * 2;
  __dest = (void *)(lVar31 - (local_138 + 0xfU & 0x3fffffff0));
  lVar16 = (long)__dest - (local_108 * 4 + 0xf & 0x7fffffff0);
  local_140 = param_1;
  local_130[0] = param_2;
  local_130[1] = param_3;
  local_130[2] = param_4;
  local_114 = param_6;
  local_110 = param_8;
  local_f0 = param_7;
  local_b0 = lVar16;
  memcpy(__dest,param_1,-(param_7 >> 0x1f & 1) & 0xfffffffe00000000 | (param_7 & 0xffffffff) << 1);
  local_90 = lVar31;
  FUN_001082ec(lVar32,param_9,lVar35,lVar31,uVar34,uVar33);
  local_88 = (ulong)uVar6;
  if (0 < (int)uVar6) {
    lVar31 = (long)(int)uVar33;
    uVar30 = 0;
    local_98 = param_10;
    local_c8 = (long)(int)local_f0;
    local_a0 = uVar4 & 0xfffffff0;
    local_b8 = uVar4 & 0xfffffffe;
    local_a8 = (long)__dest + 0x10;
    local_c0 = (long)local_130 + lVar17;
    local_e0 = lVar32 + 1;
    local_e8 = local_b0 + 4;
    local_d0 = param_9 + lVar31 * 2;
    local_d8 = (undefined8 *)(local_d0 + 0x10);
    do {
      lVar17 = local_90;
      pvVar2 = (void *)((long)__dest + uVar30 * lVar31 * 2);
      if (uVar5 == 0) {
        *(undefined8 *)(lVar16 + -0x10) = local_80;
        vq_nbest(pvVar2,lVar35,uVar33,uVar34,lVar17,1,&local_74,auStack_78);
      }
      else {
        *(undefined8 *)(lVar16 + -0x10) = local_80;
        vq_nbest_sign(pvVar2,lVar35,uVar33,uVar34,lVar17);
      }
      speex_bits_pack(local_98,local_74,param_5[4] + uVar5);
      iVar9 = local_74;
      uVar6 = 0;
      if ((int)uVar8 <= local_74) {
        uVar6 = uVar8;
      }
      lVar17 = (long)(int)((local_74 - uVar6) * uVar33);
      if (local_74 < (int)uVar8) {
        if (0 < (int)uVar33) {
          if (uVar33 < 0x10) {
            uVar20 = 0;
          }
          else {
            puVar29 = (undefined8 *)(local_a8 + lVar31 * uVar30 * 2);
            puVar22 = (undefined8 *)(local_c0 + lVar17 * 2);
            uVar20 = local_a0;
            do {
              uVar37 = puVar29[-1];
              uVar36 = puVar29[-2];
              uVar39 = puVar29[1];
              uVar38 = *puVar29;
              uVar41 = puVar22[-1];
              uVar40 = puVar22[-2];
              uVar43 = puVar22[1];
              uVar42 = *puVar22;
              uVar20 = uVar20 - 0x10;
              puVar22 = puVar22 + 4;
              puVar29[-1] = CONCAT26((short)((ulong)uVar37 >> 0x30) - (short)((ulong)uVar41 >> 0x30)
                                     ,CONCAT24((short)((ulong)uVar37 >> 0x20) -
                                               (short)((ulong)uVar41 >> 0x20),
                                               CONCAT22((short)((ulong)uVar37 >> 0x10) -
                                                        (short)((ulong)uVar41 >> 0x10),
                                                        (short)uVar37 - (short)uVar41)));
              puVar29[-2] = CONCAT26((short)((ulong)uVar36 >> 0x30) - (short)((ulong)uVar40 >> 0x30)
                                     ,CONCAT24((short)((ulong)uVar36 >> 0x20) -
                                               (short)((ulong)uVar40 >> 0x20),
                                               CONCAT22((short)((ulong)uVar36 >> 0x10) -
                                                        (short)((ulong)uVar40 >> 0x10),
                                                        (short)uVar36 - (short)uVar40)));
              puVar29[1] = CONCAT26((short)((ulong)uVar39 >> 0x30) - (short)((ulong)uVar43 >> 0x30),
                                    CONCAT24((short)((ulong)uVar39 >> 0x20) -
                                             (short)((ulong)uVar43 >> 0x20),
                                             CONCAT22((short)((ulong)uVar39 >> 0x10) -
                                                      (short)((ulong)uVar43 >> 0x10),
                                                      (short)uVar39 - (short)uVar43)));
              *puVar29 = CONCAT26((short)((ulong)uVar38 >> 0x30) - (short)((ulong)uVar42 >> 0x30),
                                  CONCAT24((short)((ulong)uVar38 >> 0x20) -
                                           (short)((ulong)uVar42 >> 0x20),
                                           CONCAT22((short)((ulong)uVar38 >> 0x10) -
                                                    (short)((ulong)uVar42 >> 0x10),
                                                    (short)uVar38 - (short)uVar42)));
              puVar29 = puVar29 + 4;
            } while (uVar20 != 0);
            uVar20 = local_a0;
            if (local_a0 == uVar4) goto LAB_00107dec;
          }
          lVar25 = uVar4 - uVar20;
          psVar13 = (short *)(lVar35 + (uVar20 + lVar17) * 2);
          psVar15 = (short *)((long)__dest + (uVar20 + lVar31 * uVar30) * 2);
          do {
            lVar25 = lVar25 + -1;
            *psVar15 = *psVar15 - *psVar13;
            psVar13 = psVar13 + 1;
            psVar15 = psVar15 + 1;
          } while (lVar25 != 0);
LAB_00107dec:
          if (iVar9 < (int)uVar8) {
            if (0 < (int)uVar33) {
              if (uVar33 == 1) {
                uVar20 = 0;
              }
              else {
                piVar21 = (int *)(local_e8 + lVar31 * uVar30 * 4);
                pcVar19 = (char *)(local_e0 + lVar17);
                uVar20 = local_b8;
                do {
                  pbVar1 = (byte *)(pcVar19 + -1);
                  cVar7 = *pcVar19;
                  pcVar19 = pcVar19 + 2;
                  uVar20 = uVar20 - 2;
                  piVar21[-1] = (uint)*pbVar1 << 9;
                  *piVar21 = (int)cVar7 << 9;
                  piVar21 = piVar21 + 2;
                } while (uVar20 != 0);
                uVar20 = local_b8;
                if (local_b8 == uVar4) goto LAB_00107f08;
              }
              lVar25 = uVar4 - uVar20;
              pcVar19 = (char *)(lVar32 + uVar20 + lVar17);
              piVar21 = (int *)(local_b0 + (uVar20 + lVar31 * uVar30) * 4);
              do {
                lVar25 = lVar25 + -1;
                *piVar21 = (int)*pcVar19 << 9;
                pcVar19 = pcVar19 + 1;
                piVar21 = piVar21 + 1;
              } while (lVar25 != 0);
LAB_00107f08:
              if (0 < (int)uVar33) {
                lVar25 = (uVar30 + 1) * lVar31;
                uVar23 = local_c8 - lVar25;
                lVar25 = lVar25 * 2;
                uVar26 = uVar23 & 0xffffffff;
                uVar20 = 0;
                iVar3 = -1;
                if (iVar9 < (int)uVar8) {
                  iVar3 = 1;
                }
                puVar22 = (undefined8 *)(local_a8 + lVar25);
                lVar27 = uVar26 - (uVar23 & 0xf);
                lVar28 = local_d0;
                puVar29 = local_d8;
                do {
                  if (0 < (long)uVar23) {
                    iVar9 = iVar3 * *(char *)(lVar32 + uVar20 + lVar17);
                    lVar10 = lVar27;
                    puVar12 = puVar29;
                    puVar14 = puVar22;
                    if (uVar26 < 0x10) {
                      lVar10 = 0;
                    }
                    else {
                      do {
                        uVar41 = puVar12[-1];
                        uVar40 = puVar12[-2];
                        uVar43 = puVar12[1];
                        uVar42 = *puVar12;
                        uVar37 = puVar14[-1];
                        uVar36 = puVar14[-2];
                        uVar39 = puVar14[1];
                        uVar38 = *puVar14;
                        lVar10 = lVar10 + -0x10;
                        puVar14[-1] = CONCAT26((short)((ulong)uVar37 >> 0x30) -
                                               (short)(iVar9 * (short)((ulong)uVar41 >> 0x30) +
                                                       0x1000U >> 0xd),
                                               CONCAT24((short)((ulong)uVar37 >> 0x20) -
                                                        (short)(iVar9 * (short)((ulong)uVar41 >>
                                                                               0x20) + 0x1000U >>
                                                               0xd),
                                                        CONCAT22((short)((ulong)uVar37 >> 0x10) -
                                                                 (short)(iVar9 * (short)((ulong)
                                                  uVar41 >> 0x10) + 0x1000U >> 0xd),
                                                  (short)uVar37 -
                                                  (short)(iVar9 * (short)uVar41 + 0x1000U >> 0xd))))
                        ;
                        puVar14[-2] = CONCAT26((short)((ulong)uVar36 >> 0x30) -
                                               (short)(iVar9 * (short)((ulong)uVar40 >> 0x30) +
                                                       0x1000U >> 0xd),
                                               CONCAT24((short)((ulong)uVar36 >> 0x20) -
                                                        (short)(iVar9 * (short)((ulong)uVar40 >>
                                                                               0x20) + 0x1000U >>
                                                               0xd),
                                                        CONCAT22((short)((ulong)uVar36 >> 0x10) -
                                                                 (short)(iVar9 * (short)((ulong)
                                                  uVar40 >> 0x10) + 0x1000U >> 0xd),
                                                  (short)uVar36 -
                                                  (short)(iVar9 * (short)uVar40 + 0x1000U >> 0xd))))
                        ;
                        puVar14[1] = CONCAT26((short)((ulong)uVar39 >> 0x30) -
                                              (short)(iVar9 * (short)((ulong)uVar43 >> 0x30) +
                                                      0x1000U >> 0xd),
                                              CONCAT24((short)((ulong)uVar39 >> 0x20) -
                                                       (short)(iVar9 * (short)((ulong)uVar43 >> 0x20
                                                                              ) + 0x1000U >> 0xd),
                                                       CONCAT22((short)((ulong)uVar39 >> 0x10) -
                                                                (short)(iVar9 * (short)((ulong)
                                                  uVar43 >> 0x10) + 0x1000U >> 0xd),
                                                  (short)uVar39 -
                                                  (short)(iVar9 * (short)uVar43 + 0x1000U >> 0xd))))
                        ;
                        *puVar14 = CONCAT26((short)((ulong)uVar38 >> 0x30) -
                                            (short)(iVar9 * (short)((ulong)uVar42 >> 0x30) + 0x1000U
                                                   >> 0xd),
                                            CONCAT24((short)((ulong)uVar38 >> 0x20) -
                                                     (short)(iVar9 * (short)((ulong)uVar42 >> 0x20)
                                                             + 0x1000U >> 0xd),
                                                     CONCAT22((short)((ulong)uVar38 >> 0x10) -
                                                              (short)(iVar9 * (short)((ulong)uVar42
                                                                                     >> 0x10) +
                                                                      0x1000U >> 0xd),
                                                              (short)uVar38 -
                                                              (short)(iVar9 * (short)uVar42 +
                                                                      0x1000U >> 0xd))));
                        puVar12 = puVar12 + 4;
                        puVar14 = puVar14 + 4;
                      } while (lVar10 != 0);
                      lVar10 = lVar27;
                      if ((uVar23 & 0xf) == 0) goto LAB_0010801c;
                    }
                    lVar11 = uVar26 - lVar10;
                    psVar13 = (short *)(lVar28 + lVar10 * 2);
                    psVar15 = (short *)((long)__dest + lVar10 * 2 + lVar25);
                    do {
                      lVar11 = lVar11 + -1;
                      *psVar15 = *psVar15 - (short)(iVar9 * *psVar13 + 0x1000U >> 0xd);
                      psVar13 = psVar13 + 1;
                      psVar15 = psVar15 + 1;
                    } while (lVar11 != 0);
                  }
LAB_0010801c:
                  uVar20 = uVar20 + 1;
                  puVar29 = (undefined8 *)((long)puVar29 + -2);
                  lVar28 = lVar28 + -2;
                } while (uVar20 != uVar4);
              }
            }
          }
          else if (0 < (int)uVar33) {
            if (uVar33 == 1) {
              uVar20 = 0;
            }
            else {
              piVar21 = (int *)(local_e8 + lVar31 * uVar30 * 4);
              pcVar19 = (char *)(local_e0 + lVar17);
              uVar20 = local_b8;
              do {
                pbVar1 = (byte *)(pcVar19 + -1);
                cVar7 = *pcVar19;
                pcVar19 = pcVar19 + 2;
                uVar20 = uVar20 - 2;
                piVar21[-1] = (uint)*pbVar1 * -0x200;
                *piVar21 = cVar7 * -0x200;
                piVar21 = piVar21 + 2;
              } while (uVar20 != 0);
              uVar20 = local_b8;
              if (local_b8 == uVar4) goto LAB_00107f08;
            }
            lVar25 = uVar4 - uVar20;
            pcVar19 = (char *)(lVar32 + uVar20 + lVar17);
            piVar21 = (int *)(local_b0 + (uVar20 + lVar31 * uVar30) * 4);
            do {
              lVar25 = lVar25 + -1;
              *piVar21 = *pcVar19 * -0x200;
              pcVar19 = pcVar19 + 1;
              piVar21 = piVar21 + 1;
            } while (lVar25 != 0);
            goto LAB_00107f08;
          }
        }
      }
      else if (0 < (int)uVar33) {
        if (uVar33 < 0x10) {
          uVar20 = 0;
        }
        else {
          puVar29 = (undefined8 *)(local_a8 + lVar31 * uVar30 * 2);
          puVar22 = (undefined8 *)(local_c0 + lVar17 * 2);
          uVar20 = local_a0;
          do {
            uVar37 = puVar29[-1];
            uVar36 = puVar29[-2];
            uVar39 = puVar29[1];
            uVar38 = *puVar29;
            uVar41 = puVar22[-1];
            uVar40 = puVar22[-2];
            uVar43 = puVar22[1];
            uVar42 = *puVar22;
            uVar20 = uVar20 - 0x10;
            puVar22 = puVar22 + 4;
            puVar29[-1] = CONCAT26((short)((ulong)uVar41 >> 0x30) + (short)((ulong)uVar37 >> 0x30),
                                   CONCAT24((short)((ulong)uVar41 >> 0x20) +
                                            (short)((ulong)uVar37 >> 0x20),
                                            CONCAT22((short)((ulong)uVar41 >> 0x10) +
                                                     (short)((ulong)uVar37 >> 0x10),
                                                     (short)uVar41 + (short)uVar37)));
            puVar29[-2] = CONCAT26((short)((ulong)uVar40 >> 0x30) + (short)((ulong)uVar36 >> 0x30),
                                   CONCAT24((short)((ulong)uVar40 >> 0x20) +
                                            (short)((ulong)uVar36 >> 0x20),
                                            CONCAT22((short)((ulong)uVar40 >> 0x10) +
                                                     (short)((ulong)uVar36 >> 0x10),
                                                     (short)uVar40 + (short)uVar36)));
            puVar29[1] = CONCAT26((short)((ulong)uVar43 >> 0x30) + (short)((ulong)uVar39 >> 0x30),
                                  CONCAT24((short)((ulong)uVar43 >> 0x20) +
                                           (short)((ulong)uVar39 >> 0x20),
                                           CONCAT22((short)((ulong)uVar43 >> 0x10) +
                                                    (short)((ulong)uVar39 >> 0x10),
                                                    (short)uVar43 + (short)uVar39)));
            *puVar29 = CONCAT26((short)((ulong)uVar42 >> 0x30) + (short)((ulong)uVar38 >> 0x30),
                                CONCAT24((short)((ulong)uVar42 >> 0x20) +
                                         (short)((ulong)uVar38 >> 0x20),
                                         CONCAT22((short)((ulong)uVar42 >> 0x10) +
                                                  (short)((ulong)uVar38 >> 0x10),
                                                  (short)uVar42 + (short)uVar38)));
            puVar29 = puVar29 + 4;
          } while (uVar20 != 0);
          uVar20 = local_a0;
          if (local_a0 == uVar4) goto LAB_00107dec;
        }
        lVar25 = uVar4 - uVar20;
        psVar13 = (short *)(lVar35 + (uVar20 + lVar17) * 2);
        psVar15 = (short *)((long)__dest + (uVar20 + lVar31 * uVar30) * 2);
        do {
          lVar25 = lVar25 + -1;
          *psVar15 = *psVar13 + *psVar15;
          psVar13 = psVar13 + 1;
          psVar15 = psVar15 + 1;
        } while (lVar25 != 0);
        goto LAB_00107dec;
      }
      uVar30 = uVar30 + 1;
    } while (uVar30 != local_88);
  }
  uVar34 = local_f0;
  uVar4 = local_108;
  uVar33 = (uint)local_f0;
  if (0 < (int)uVar33) {
    if (uVar33 < 8) {
      uVar20 = 0;
    }
    else {
      uVar20 = local_108 & 0xfffffff8;
      puVar22 = (undefined8 *)(local_110 + 0x10);
      puVar29 = (undefined8 *)(local_b0 + 0x10);
      uVar30 = uVar20;
      do {
        puVar12 = puVar29 + -1;
        uVar36 = puVar29[-2];
        uVar38 = puVar29[1];
        uVar37 = *puVar29;
        uVar30 = uVar30 - 8;
        puVar29 = puVar29 + 4;
        puVar22[-1] = CONCAT44((int)((ulong)*puVar12 >> 0x20) + (int)((ulong)puVar22[-1] >> 0x20),
                               (int)*puVar12 + (int)puVar22[-1]);
        puVar22[-2] = CONCAT44((int)((ulong)uVar36 >> 0x20) + (int)((ulong)puVar22[-2] >> 0x20),
                               (int)uVar36 + (int)puVar22[-2]);
        puVar22[1] = CONCAT44((int)((ulong)uVar38 >> 0x20) + (int)((ulong)puVar22[1] >> 0x20),
                              (int)uVar38 + (int)puVar22[1]);
        *puVar22 = CONCAT44((int)((ulong)uVar37 >> 0x20) + (int)((ulong)*puVar22 >> 0x20),
                            (int)uVar37 + (int)*puVar22);
        puVar22 = puVar22 + 4;
      } while (uVar30 != 0);
      if (uVar20 == local_108) goto LAB_001080dc;
    }
    lVar17 = local_108 - uVar20;
    piVar21 = (int *)(local_b0 + uVar20 * 4);
    piVar24 = (int *)(local_110 + uVar20 * 4);
    do {
      lVar17 = lVar17 + -1;
      *piVar24 = *piVar21 + *piVar24;
      piVar21 = piVar21 + 1;
      piVar24 = piVar24 + 1;
    } while (lVar17 != 0);
  }
LAB_001080dc:
  if (param_12 == 0) goto LAB_001082ac;
  lVar16 = lVar16 - (local_138 + 0xfU & 0x3fffffff0);
  if ((int)uVar33 < 1) {
    syn_percep_zero16(lVar16,local_130[0],local_130[1],local_130[2],lVar16,local_f0 & 0xffffffff,
                      local_114,local_80);
    goto LAB_001082ac;
  }
  if (uVar33 < 8) {
    uVar20 = 0;
LAB_00108198:
    lVar17 = uVar4 - uVar20;
    puVar18 = (undefined2 *)(lVar16 + uVar20 * 2);
    piVar21 = (int *)(local_b0 + uVar20 * 4);
    do {
      lVar17 = lVar17 + -1;
      *puVar18 = (short)(*piVar21 + 0x20U >> 6);
      puVar18 = puVar18 + 1;
      piVar21 = piVar21 + 1;
    } while (lVar17 != 0);
  }
  else {
    uVar20 = local_108 & 0xfffffff8;
    puVar22 = (undefined8 *)(lVar16 + 8);
    puVar29 = (undefined8 *)(local_b0 + 0x10);
    uVar30 = uVar20;
    do {
      puVar12 = puVar29 + -2;
      puVar14 = puVar29 + -1;
      uVar37 = puVar29[1];
      uVar36 = *puVar29;
      puVar29 = puVar29 + 4;
      uVar30 = uVar30 - 8;
      puVar22[-1] = CONCAT26((short)((int)((ulong)*puVar14 >> 0x20) + 0x20U >> 6),
                             CONCAT24((short)((int)*puVar14 + 0x20U >> 6),
                                      CONCAT22((short)((int)((ulong)*puVar12 >> 0x20) + 0x20U >> 6),
                                               (short)((int)*puVar12 + 0x20U >> 6))));
      *puVar22 = CONCAT26((short)((int)((ulong)uVar37 >> 0x20) + 0x20U >> 6),
                          CONCAT24((short)((int)uVar37 + 0x20U >> 6),
                                   CONCAT22((short)((int)((ulong)uVar36 >> 0x20) + 0x20U >> 6),
                                            (short)((int)uVar36 + 0x20U >> 6))));
      puVar22 = puVar22 + 2;
    } while (uVar30 != 0);
    if (uVar20 != uVar4) goto LAB_00108198;
  }
  syn_percep_zero16(lVar16,local_130[0],local_130[1],local_130[2],lVar16,uVar34 & 0xffffffff,
                    local_114,local_80);
  if (0 < (int)uVar33) {
    if (uVar33 < 0x10) {
      uVar30 = 0;
    }
    else {
      uVar30 = uVar4 & 0xfffffff0;
      puVar22 = (undefined8 *)(lVar16 + 0x10);
      puVar29 = (undefined8 *)((long)local_140 + 0x10);
      uVar34 = uVar30;
      do {
        uVar39 = puVar22[-1];
        uVar38 = puVar22[-2];
        uVar43 = puVar22[1];
        uVar42 = *puVar22;
        uVar37 = puVar29[-1];
        uVar36 = puVar29[-2];
        uVar41 = puVar29[1];
        uVar40 = *puVar29;
        uVar34 = uVar34 - 0x10;
        puVar22 = puVar22 + 4;
        puVar29[-1] = CONCAT26((short)((ulong)uVar37 >> 0x30) -
                               (short)((int)(short)((ulong)uVar39 >> 0x30) + 2U >> 2),
                               CONCAT24((short)((ulong)uVar37 >> 0x20) -
                                        (short)((int)(short)((ulong)uVar39 >> 0x20) + 2U >> 2),
                                        CONCAT22((short)((ulong)uVar37 >> 0x10) -
                                                 (short)((int)(short)((ulong)uVar39 >> 0x10) + 2U >>
                                                        2),
                                                 (short)uVar37 -
                                                 (short)((int)(short)uVar39 + 2U >> 2))));
        puVar29[-2] = CONCAT26((short)((ulong)uVar36 >> 0x30) -
                               (short)((int)(short)((ulong)uVar38 >> 0x30) + 2U >> 2),
                               CONCAT24((short)((ulong)uVar36 >> 0x20) -
                                        (short)((int)(short)((ulong)uVar38 >> 0x20) + 2U >> 2),
                                        CONCAT22((short)((ulong)uVar36 >> 0x10) -
                                                 (short)((int)(short)((ulong)uVar38 >> 0x10) + 2U >>
                                                        2),
                                                 (short)uVar36 -
                                                 (short)((int)(short)uVar38 + 2U >> 2))));
        puVar29[1] = CONCAT26((short)((ulong)uVar41 >> 0x30) -
                              (short)((int)(short)((ulong)uVar43 >> 0x30) + 2U >> 2),
                              CONCAT24((short)((ulong)uVar41 >> 0x20) -
                                       (short)((int)(short)((ulong)uVar43 >> 0x20) + 2U >> 2),
                                       CONCAT22((short)((ulong)uVar41 >> 0x10) -
                                                (short)((int)(short)((ulong)uVar43 >> 0x10) + 2U >>
                                                       2),
                                                (short)uVar41 -
                                                (short)((int)(short)uVar43 + 2U >> 2))));
        *puVar29 = CONCAT26((short)((ulong)uVar40 >> 0x30) -
                            (short)((int)(short)((ulong)uVar42 >> 0x30) + 2U >> 2),
                            CONCAT24((short)((ulong)uVar40 >> 0x20) -
                                     (short)((int)(short)((ulong)uVar42 >> 0x20) + 2U >> 2),
                                     CONCAT22((short)((ulong)uVar40 >> 0x10) -
                                              (short)((int)(short)((ulong)uVar42 >> 0x10) + 2U >> 2)
                                              ,(short)uVar40 - (short)((int)(short)uVar42 + 2U >> 2)
                                             )));
        puVar29 = puVar29 + 4;
      } while (uVar34 != 0);
      if (uVar30 == uVar4) goto LAB_001082ac;
    }
    lVar17 = uVar4 - uVar30;
    psVar13 = (short *)(lVar16 + uVar30 * 2);
    psVar15 = (short *)((long)local_140 + uVar30 * 2);
    do {
      lVar17 = lVar17 + -1;
      *psVar15 = *psVar15 - (short)((int)*psVar13 + 2U >> 2);
      psVar13 = psVar13 + 1;
      psVar15 = psVar15 + 1;
    } while (lVar17 != 0);
  }
LAB_001082ac:
  if (*(long *)(local_100 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

