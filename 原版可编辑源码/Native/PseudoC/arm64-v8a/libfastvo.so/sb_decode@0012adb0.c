
int sb_decode(undefined8 *param_1,long param_2,long param_3)

{
  int *piVar1;
  undefined2 uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  undefined8 *puVar7;
  int *piVar8;
  bool bVar9;
  short *psVar10;
  short sVar17;
  int iVar18;
  uint uVar19;
  ulong uVar20;
  uint uVar21;
  long lVar22;
  int iVar23;
  uint uVar24;
  int *piVar25;
  undefined2 *puVar26;
  undefined1 *puVar27;
  ulong uVar28;
  int iVar29;
  ulong uVar30;
  undefined8 *puVar31;
  int iVar32;
  long lVar33;
  undefined8 *puVar34;
  ulong uVar35;
  short *psVar36;
  long lVar37;
  ulong uVar38;
  void *__s;
  long lVar39;
  int *__s_00;
  undefined8 uVar40;
  long lVar41;
  undefined1 *puVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  int iVar46;
  int iVar47;
  int iVar48;
  int iVar49;
  short sVar50;
  int iVar51;
  int iVar52;
  undefined8 local_110;
  long local_108;
  long local_100;
  undefined8 *local_f8;
  long local_f0;
  long local_e8;
  long local_e0;
  long local_d8;
  long local_d0;
  int *local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  ulong local_a8;
  void *local_a0;
  long local_98;
  undefined1 *local_90;
  long local_88;
  undefined8 local_80;
  int local_74;
  long local_70;
  short *psVar11;
  short *psVar12;
  short *psVar13;
  short *psVar14;
  short *psVar15;
  short *psVar16;
  
  lVar22 = tpidr_el0;
  local_70 = *(long *)(lVar22 + 0x28);
  uVar40 = param_1[6];
  lVar39 = (long)*(int *)((long)param_1 + 0x14);
  lVar41 = *(long *)*param_1;
  speex_decoder_ctl(param_1[1],0x68,param_3 + lVar39 * 2);
  iVar18 = speex_decode_native(param_1[1],param_2,param_3);
  uVar20 = speex_decoder_ctl(param_1[1],0x67,&local_74);
  if (iVar18 != 0) goto LAB_0012b994;
  if (param_2 == 0) {
LAB_0012afb0:
    uVar20 = FUN_0012ba64(param_1,param_3,local_74,uVar40);
  }
  else {
    if (*(int *)(param_1 + 0x11) == 0) {
      iVar18 = *(int *)(param_1 + 0x13);
    }
    else {
      iVar18 = speex_bits_remaining(param_2);
      if ((iVar18 < 1) || (iVar18 = speex_bits_peek(param_2), iVar18 == 0)) {
        iVar18 = 0;
        *(undefined4 *)(param_1 + 0x13) = 0;
      }
      else {
        speex_bits_unpack_unsigned(param_2,1);
        iVar18 = speex_bits_unpack_unsigned(param_2,3);
        *(int *)(param_1 + 0x13) = iVar18;
        if ((iVar18 != 0) && (*(long *)(param_1[0x12] + (long)iVar18 * 8) == 0)) {
          uVar19 = fprintf((FILE *)0x14d168,"notification: %s\n",
                           "Invalid mode encountered. The stream is corrupted.");
          uVar20 = (ulong)uVar19;
          iVar18 = -2;
          goto LAB_0012b994;
        }
      }
    }
    if (*(long *)(param_1[0x12] + (long)iVar18 * 8) == 0) {
      if (local_74 != 0) {
        local_74 = 1;
        goto LAB_0012afb0;
      }
      uVar19 = *(uint *)((long)param_1 + 0x14);
      lVar39 = (long)(int)uVar19;
      if (0 < (int)uVar19) {
        if (uVar19 < 0x10) {
          uVar21 = 0;
        }
        else {
          uVar24 = 0;
          uVar21 = uVar19 & 0xfffffff0;
          do {
            iVar18 = uVar19 + uVar24;
            uVar24 = uVar24 + 0x10;
            puVar31 = (undefined8 *)(param_3 + (long)iVar18 * 2);
            puVar31[1] = 0;
            *puVar31 = 0;
            puVar31[3] = 0;
            puVar31[2] = 0;
          } while (uVar21 != uVar24);
          if (uVar19 == uVar21) goto LAB_0012ba0c;
        }
        puVar26 = (undefined2 *)(param_3 + (lVar39 + (int)uVar21) * 2);
        do {
          uVar21 = uVar21 + 1;
          *puVar26 = 0;
          puVar26 = puVar26 + 1;
        } while ((int)uVar21 < (int)uVar19);
      }
LAB_0012ba0c:
      lVar41 = param_3 + lVar39 * 2;
      *(undefined4 *)((long)param_1 + 0x24) = 1;
      iir_mem16(lVar41,param_1[0xb],lVar41,lVar39,*(undefined4 *)(param_1 + 4),param_1[0xc],uVar40);
      uVar20 = qmf_synth(param_3,param_3 + (long)*(int *)((long)param_1 + 0x14) * 2,&DAT_001370ac,
                         param_3,*(undefined4 *)(param_1 + 2),0x40,param_1[7],param_1[8],uVar40);
    }
    else {
      local_b0 = (long)&local_110 - ((ulong)*(uint *)((long)param_1 + 0x1c) * 4 + 0xf & 0x7fffffff0)
      ;
      lVar37 = local_b0 - ((ulong)*(uint *)((long)param_1 + 0x1c) * 2 + 0xf & 0x3fffffff0);
      local_110 = &local_110;
      speex_decoder_ctl(param_1[1],100);
      local_d0 = lVar37;
      speex_decoder_ctl(param_1[1],0x65,lVar37);
      uVar20 = (ulong)*(uint *)(param_1 + 4) * 2 + 0xf & 0x3fffffff0;
      uVar38 = lVar37 - uVar20;
      lVar37 = uVar38 - uVar20;
      local_b8 = lVar37;
      (**(code **)(*(long *)(param_1[0x12] + (long)*(int *)(param_1 + 0x13) * 8) + 0x18))
                (uVar38,(ulong)*(uint *)(param_1 + 4),param_2);
      uVar19 = *(uint *)(param_1 + 4);
      if ((*(int *)((long)param_1 + 0x24) != 0) && (0 < (int)uVar19)) {
        uVar20 = param_1[10];
        uVar28 = (ulong)(int)uVar19;
        if (uVar19 < 0x10) {
          uVar30 = 0;
        }
        else if ((uVar20 < uVar38 + uVar28 * 2) && (uVar38 < uVar20 + uVar28 * 2)) {
          uVar30 = 0;
        }
        else {
          uVar30 = uVar28 & 0xfffffffffffffff0;
          puVar31 = (undefined8 *)(uVar38 + 0x10);
          puVar34 = (undefined8 *)(uVar20 + 0x10);
          uVar35 = uVar30;
          do {
            puVar7 = puVar31 + -1;
            uVar43 = puVar31[-2];
            uVar45 = puVar31[1];
            uVar44 = *puVar31;
            puVar31 = puVar31 + 4;
            uVar35 = uVar35 - 0x10;
            puVar34[-1] = *puVar7;
            puVar34[-2] = uVar43;
            puVar34[1] = uVar45;
            *puVar34 = uVar44;
            puVar34 = puVar34 + 4;
          } while (uVar35 != 0);
          if (uVar30 == uVar28) goto LAB_0012b04c;
        }
        do {
          lVar33 = uVar30 * 2;
          uVar30 = uVar30 + 1;
          *(undefined2 *)(uVar20 + lVar33) = *(undefined2 *)(uVar38 + lVar33);
        } while ((long)uVar30 < (long)uVar28);
      }
LAB_0012b04c:
      puVar42 = (undefined1 *)(lVar37 - ((ulong)uVar19 * 2 + 0xf & 0x3fffffff0));
      local_108 = lVar22;
      local_a8 = uVar38;
      if (*(int *)((long)param_1 + 0x1c) < 1) {
        uVar19 = 0;
        puVar27 = puVar42;
      }
      else {
        local_c0 = (long)param_1 + 0x84;
        local_100 = param_3 + lVar39 * 2;
        local_f0 = param_3 + 2;
        uVar20 = 0;
        uVar19 = 0;
        local_f8 = (undefined8 *)(puVar42 + 0x10);
        local_90 = puVar42;
        local_e8 = lVar39;
        local_e0 = lVar41;
        local_d8 = param_3;
        local_88 = param_2;
        local_80 = uVar40;
        do {
          iVar18 = *(int *)((long)param_1 + 0x14);
          iVar5 = *(uint *)(param_1 + 3) * (int)uVar20;
          __s_00 = (int *)(local_90 + -((ulong)*(uint *)(param_1 + 3) * 4 + 0xf & 0x7fffffff0));
          if (param_1[0xf] == 0) {
            local_a0 = (void *)0x0;
          }
          else {
            local_a0 = (void *)(param_1[0xf] + (long)iVar5 * 4);
            memset(local_a0,0,(long)*(int *)(param_1 + 3) << 2);
          }
          lVar22 = local_b8;
          lsp_interpolate(param_1[10],local_a8,local_b8,*(undefined4 *)(param_1 + 4),
                          uVar20 & 0xffffffff,*(undefined4 *)((long)param_1 + 0x1c));
          lsp_enforce_margin(lVar22,*(undefined4 *)(param_1 + 4),0x19a);
          lsp_to_lpc(lVar22,puVar42,*(undefined4 *)(param_1 + 4),uVar40);
          lVar22 = param_1[0xd];
          iVar23 = 0x2000;
          *(undefined4 *)(lVar22 + uVar20 * 4) = 0x2000;
          if (0 < *(int *)(param_1 + 4)) {
            lVar39 = 0;
            iVar29 = 0x2000;
            iVar23 = 0x2000;
            do {
              lVar41 = lVar39 * 2;
              lVar39 = lVar39 + 2;
              iVar46 = (int)*(short *)((long)(puVar42 + lVar41) + 2);
              iVar32 = (int)*(short *)(puVar42 + lVar41);
              iVar29 = iVar32 + iVar46 + iVar29;
              *(int *)(lVar22 + uVar20 * 4) = iVar29;
              iVar23 = (iVar23 + iVar46) - iVar32;
            } while (lVar39 < *(int *)(param_1 + 4));
          }
          iVar23 = iVar23 + 0x52;
          iVar29 = 0;
          if (iVar23 != 0) {
            iVar29 = ((iVar23 * 0x10000 >> 0x11) + *(int *)(local_b0 + uVar20 * 4) * 0x80 + 0x2900)
                     / iVar23;
          }
          if (iVar29 < -0x7ffe) {
            iVar29 = -0x7fff;
          }
          lVar22 = param_3 + (long)iVar18 * 2 + (long)iVar5 * 2;
          if (0x7ffe < iVar29) {
            iVar29 = 0x7fff;
          }
          memset(__s_00,0,(long)*(int *)(param_1 + 3) << 2);
          sVar17 = (short)iVar29;
          local_98 = lVar22;
          if (*(long *)(*(long *)(param_1[0x12] + (long)*(int *)(param_1 + 0x13) * 8) + 0x40) == 0)
          {
            iVar18 = speex_bits_unpack_unsigned(local_88,5);
            iVar18 = (iVar18 * 0x10000 + 0xf60000) * 0x100 >> 0x10;
            if (iVar18 < 0x532b) {
              if (iVar18 < -0x532a) {
LAB_0012b3ec:
                iVar23 = 0;
              }
              else {
                uVar24 = iVar18 * 0x5c55 + 0x2000;
                iVar18 = (int)(uVar24 * 4) >> 0x10;
                if (iVar18 < 0x7800) {
                  if (iVar18 < -0x7800) goto LAB_0012b3ec;
                  uVar24 = uVar24 >> 0xe;
                  uVar21 = uVar24 & 0x7ff;
                  iVar18 = uVar21 * 8;
                  uVar24 = -((int)(uVar24 << 0x10) >> 0x1b) - 2;
                  iVar18 = (int)((((((uVar21 * 0x28a8 >> 0xe) + 0xe8e) * iVar18 * 4 & 0x1fff0000) +
                                   0x2c5c0000 >> 0x10) * iVar18 * 4 & 0x7fff0000) + 0x40000000) >>
                           0x10;
                  iVar23 = iVar18 >> (uVar24 & 0x1f);
                  if ((int)uVar24 < 1) {
                    iVar23 = iVar18 << (ulong)(-uVar24 & 0x1f);
                  }
                }
                else {
                  iVar23 = 0x7fffffff;
                }
              }
            }
            else {
              iVar23 = 0x7fffffff;
            }
            iVar18 = *(int *)(param_1 + 3);
            if (0 < iVar18) {
              uVar24 = 0;
              if (sVar17 != 0) {
                uVar24 = (iVar23 + ((iVar29 << 0x10) >> 0x11)) / (int)sVar17;
              }
              uVar38 = ((long)iVar18 - 1U >> 1) + 1;
              iVar29 = (int)(uVar24 << 7) >> 0x10;
              iVar23 = *(short *)(local_e0 + 0x1a) * 2;
              iVar32 = (uVar24 & 0x1ff) * 0x40;
              if (uVar38 < 4) {
                lVar22 = 0;
              }
              else {
                uVar30 = uVar38 & 0xfffffffffffffffc;
                lVar22 = uVar30 << 1;
                psVar36 = (short *)(local_100 + (long)iVar5 * 2);
                uVar28 = uVar30;
                piVar25 = __s_00;
                do {
                  sVar17 = *psVar36;
                  psVar10 = psVar36 + 1;
                  psVar11 = psVar36 + 2;
                  psVar12 = psVar36 + 3;
                  psVar13 = psVar36 + 4;
                  psVar14 = psVar36 + 5;
                  psVar15 = psVar36 + 6;
                  psVar16 = psVar36 + 7;
                  psVar36 = psVar36 + 8;
                  uVar28 = uVar28 - 4;
                  sVar17 = (short)((uint)(iVar23 * sVar17) >> 0x10);
                  sVar50 = (short)((uint)(iVar23 * *psVar11) >> 0x10);
                  iVar51 = iVar23 * *psVar13 >> 0x10;
                  iVar52 = iVar23 * *psVar15 >> 0x10;
                  iVar46 = iVar23 * *psVar10 >> 0x10;
                  iVar47 = iVar23 * *psVar12 >> 0x10;
                  iVar48 = iVar23 * *psVar14 >> 0x10;
                  iVar49 = iVar23 * *psVar16 >> 0x10;
                  *piVar25 = (sVar17 * iVar29 + (sVar17 * iVar32 + 0x4000 >> 0xf)) * 0x4000;
                  piVar25[1] = (iVar46 * iVar29 + (iVar46 * iVar32 + 0x4000 >> 0xf)) * -0x4000;
                  piVar25[2] = (sVar50 * iVar29 + (sVar50 * iVar32 + 0x4000 >> 0xf)) * 0x4000;
                  piVar25[3] = (iVar47 * iVar29 + (iVar47 * iVar32 + 0x4000 >> 0xf)) * -0x4000;
                  piVar25[4] = (iVar51 * iVar29 + (iVar51 * iVar32 + 0x4000 >> 0xf)) * 0x4000;
                  piVar25[5] = (iVar48 * iVar29 + (iVar48 * iVar32 + 0x4000 >> 0xf)) * -0x4000;
                  piVar25[6] = (iVar52 * iVar29 + (iVar52 * iVar32 + 0x4000 >> 0xf)) * 0x4000;
                  piVar25[7] = (iVar49 * iVar29 + (iVar49 * iVar32 + 0x4000 >> 0xf)) * -0x4000;
                  piVar25 = piVar25 + 8;
                } while (uVar28 != 0);
                if (uVar38 == uVar30) goto LAB_0012b62c;
              }
              psVar36 = (short *)(local_f0 + (local_e8 + lVar22 + (long)iVar5) * 2);
              piVar25 = __s_00 + lVar22 + 1;
              do {
                lVar22 = lVar22 + 2;
                iVar5 = iVar23 * psVar36[-1] >> 0x10;
                piVar25[-1] = (iVar5 * iVar29 + (iVar5 * iVar32 + 0x4000 >> 0xf)) * 0x4000;
                sVar17 = *psVar36;
                psVar36 = psVar36 + 2;
                iVar5 = iVar23 * sVar17 >> 0x10;
                *piVar25 = (iVar5 * iVar29 + (iVar5 * iVar32 + 0x4000 >> 0xf)) * -0x4000;
                piVar25 = piVar25 + 2;
              } while (lVar22 < iVar18);
            }
          }
          else {
            iVar18 = speex_bits_unpack_unsigned(local_88,4);
            sVar50 = (short)((uint)(*(short *)(&DAT_0013716c + (long)iVar18 * 2) * 0x6fd2) >> 0xf);
            if (*(int *)(param_1 + 3) == 0x50) {
              sVar50 = (short)(sVar50 * 0x5a82 + 0x2000 >> 0xe);
            }
            lVar22 = *(long *)(param_1[0x12] + (long)*(int *)(param_1 + 0x13) * 8);
            iVar18 = 0;
            if (sVar17 != 0) {
              iVar18 = ((int)*(short *)(local_d0 + uVar20 * 2) * (int)sVar50 * 8 +
                       ((iVar29 << 0x10) >> 0x11)) / (int)sVar17;
            }
            (**(code **)(lVar22 + 0x40))
                      (__s_00,*(undefined8 *)(lVar22 + 0x48),*(int *)(param_1 + 3),local_88,local_80
                       ,local_c0);
            signal_mul(__s_00,__s_00,iVar18 << 0xb,*(undefined4 *)(param_1 + 3));
            if (*(int *)(*(long *)(param_1[0x12] + (long)*(int *)(param_1 + 0x13) * 8) + 0xc) != 0)
            {
              __s = (void *)((long)__s_00 - ((ulong)*(uint *)(param_1 + 3) * 4 + 0xf & 0x7fffffff0))
              ;
              iVar5 = *(int *)(param_1 + 3);
              local_c8 = __s_00;
              memset(__s,0,(long)iVar5 << 2);
              lVar22 = *(long *)(param_1[0x12] + (long)*(int *)(param_1 + 0x13) * 8);
              (**(code **)(lVar22 + 0x40))
                        (__s,*(undefined8 *)(lVar22 + 0x48),iVar5,local_88,local_80,local_c0);
              signal_mul(__s,__s,((iVar18 << 0xc) >> 0x10) * 0x3333 +
                                 ((iVar18 << 0xb & 0x7800U) * 0x3333 + 0x4000 >> 0xf),
                         *(undefined4 *)(param_1 + 3));
              uVar24 = *(uint *)(param_1 + 3);
              uVar38 = (ulong)(int)uVar24;
              param_3 = local_d8;
              if (0 < (int)uVar24) {
                if (uVar24 < 8) {
                  uVar30 = 0;
                }
                else {
                  uVar30 = uVar38 & 0xfffffffffffffff8;
                  piVar25 = __s_00 + 4;
                  puVar31 = (undefined8 *)((long)__s + 0x10);
                  uVar28 = uVar30;
                  do {
                    puVar34 = puVar31 + -1;
                    uVar40 = puVar31[-2];
                    uVar44 = puVar31[1];
                    uVar43 = *puVar31;
                    uVar28 = uVar28 - 8;
                    puVar31 = puVar31 + 4;
                    *(ulong *)(piVar25 + -2) =
                         CONCAT44((int)((ulong)*puVar34 >> 0x20) +
                                  (int)((ulong)*(undefined8 *)(piVar25 + -2) >> 0x20),
                                  (int)*puVar34 + (int)*(undefined8 *)(piVar25 + -2));
                    *(ulong *)(piVar25 + -4) =
                         CONCAT44((int)((ulong)uVar40 >> 0x20) +
                                  (int)((ulong)*(undefined8 *)(piVar25 + -4) >> 0x20),
                                  (int)uVar40 + (int)*(undefined8 *)(piVar25 + -4));
                    *(ulong *)(piVar25 + 2) =
                         CONCAT44((int)((ulong)uVar44 >> 0x20) +
                                  (int)((ulong)*(undefined8 *)(piVar25 + 2) >> 0x20),
                                  (int)uVar44 + (int)*(undefined8 *)(piVar25 + 2));
                    *(ulong *)piVar25 =
                         CONCAT44((int)((ulong)uVar43 >> 0x20) +
                                  (int)((ulong)*(undefined8 *)piVar25 >> 0x20),
                                  (int)uVar43 + (int)*(undefined8 *)piVar25);
                    piVar25 = piVar25 + 8;
                  } while (uVar28 != 0);
                  param_3 = local_d8;
                  if (uVar30 == uVar38) goto LAB_0012b62c;
                }
                do {
                  uVar28 = uVar30 + 1;
                  __s_00[uVar30] = *(int *)((long)__s + uVar30 * 4) + __s_00[uVar30];
                  uVar30 = uVar28;
                  param_3 = local_d8;
                } while ((long)uVar28 < (long)uVar38);
              }
            }
          }
LAB_0012b62c:
          uVar40 = local_80;
          uVar24 = *(uint *)(param_1 + 3);
          uVar38 = (ulong)(int)uVar24;
          if ((param_1[0xf] != 0) && (0 < (int)uVar24)) {
            if (uVar24 < 2) {
              uVar28 = 0;
            }
            else {
              uVar28 = uVar38 & 0xfffffffffffffffe;
              piVar25 = __s_00 + 1;
              puVar26 = (undefined2 *)((long)local_a0 + 4);
              uVar30 = uVar28;
              do {
                piVar1 = piVar25 + -1;
                iVar18 = *piVar25;
                piVar25 = piVar25 + 2;
                uVar30 = uVar30 - 2;
                puVar26[-2] = (short)(*piVar1 + 0x2000U >> 0xe);
                *puVar26 = (short)(iVar18 + 0x2000U >> 0xe);
                puVar26 = puVar26 + 4;
              } while (uVar30 != 0);
              if (uVar28 == uVar38) goto LAB_0012b6c0;
            }
            puVar26 = (undefined2 *)((long)local_a0 + uVar28 * 4);
            do {
              piVar25 = __s_00 + uVar28;
              uVar28 = uVar28 + 1;
              *puVar26 = (short)(*piVar25 + 0x2000U >> 0xe);
              puVar26 = puVar26 + 2;
            } while ((long)uVar28 < (long)uVar38);
          }
LAB_0012b6c0:
          iir_mem16(param_1[9],param_1[0xb],local_98,uVar38,*(undefined4 *)(param_1 + 4),
                    param_1[0xc],local_80);
          uVar24 = *(uint *)(param_1 + 3);
          uVar38 = (ulong)(int)uVar24;
          if (0 < (int)uVar24) {
            lVar22 = param_1[9];
            if (uVar24 < 8) {
              uVar28 = 0;
            }
            else {
              uVar28 = uVar38 & 0xfffffffffffffff8;
              piVar25 = __s_00 + 4;
              puVar31 = (undefined8 *)(lVar22 + 8);
              uVar30 = uVar28;
              do {
                piVar1 = piVar25 + -4;
                piVar8 = piVar25 + -2;
                uVar44 = *(undefined8 *)(piVar25 + 2);
                uVar43 = *(undefined8 *)piVar25;
                piVar25 = piVar25 + 8;
                uVar30 = uVar30 - 8;
                puVar31[-1] = CONCAT26((short)((int)((ulong)*(undefined8 *)piVar8 >> 0x20) + 0x2000U
                                              >> 0xe),
                                       CONCAT24((short)((int)*(undefined8 *)piVar8 + 0x2000U >> 0xe)
                                                ,CONCAT22((short)((int)((ulong)*(undefined8 *)piVar1
                                                                       >> 0x20) + 0x2000U >> 0xe),
                                                          (short)((int)*(undefined8 *)piVar1 +
                                                                  0x2000U >> 0xe))));
                *puVar31 = CONCAT26((short)((int)((ulong)uVar44 >> 0x20) + 0x2000U >> 0xe),
                                    CONCAT24((short)((int)uVar44 + 0x2000U >> 0xe),
                                             CONCAT22((short)((int)((ulong)uVar43 >> 0x20) + 0x2000U
                                                             >> 0xe),
                                                      (short)((int)uVar43 + 0x2000U >> 0xe))));
                puVar31 = puVar31 + 2;
              } while (uVar30 != 0);
              if (uVar28 == uVar38) goto LAB_0012b758;
            }
            do {
              *(short *)(lVar22 + uVar28 * 2) = (short)(__s_00[uVar28] + 0x2000U >> 0xe);
              uVar28 = uVar28 + 1;
            } while ((long)uVar28 < (long)uVar38);
          }
LAB_0012b758:
          uVar24 = *(uint *)(param_1 + 4);
          uVar38 = (ulong)(int)uVar24;
          if (0 < (int)uVar24) {
            puVar27 = (undefined1 *)param_1[0xb];
            if ((uVar24 < 0x10) ||
               ((puVar27 < puVar42 + uVar38 * 2 && (puVar42 < puVar27 + uVar38 * 2)))) {
              uVar28 = 0;
            }
            else {
              uVar28 = uVar38 & 0xfffffffffffffff0;
              puVar31 = (undefined8 *)(puVar27 + 0x10);
              uVar30 = uVar28;
              puVar34 = local_f8;
              do {
                puVar7 = puVar34 + -1;
                uVar43 = puVar34[-2];
                uVar45 = puVar34[1];
                uVar44 = *puVar34;
                puVar34 = puVar34 + 4;
                uVar30 = uVar30 - 0x10;
                puVar31[-1] = *puVar7;
                puVar31[-2] = uVar43;
                puVar31[1] = uVar45;
                *puVar31 = uVar44;
                puVar31 = puVar31 + 4;
              } while (uVar30 != 0);
              if (uVar28 == uVar38) goto LAB_0012b7a8;
            }
            do {
              lVar22 = uVar28 * 2;
              uVar28 = uVar28 + 1;
              *(undefined2 *)(puVar27 + lVar22) = *(undefined2 *)(puVar42 + lVar22);
            } while ((long)uVar28 < (long)uVar38);
          }
LAB_0012b7a8:
          sVar17 = compute_rms16(param_1[9]);
          *(short *)(param_1[0xe] + uVar20 * 2) = sVar17;
          iVar18 = 0;
          if (*(int *)((long)param_1 + 0x1c) != 0) {
            iVar18 = ((int)sVar17 * (int)sVar17) / *(int *)((long)param_1 + 0x1c);
          }
          uVar19 = iVar18 + uVar19;
          uVar20 = uVar20 + 1;
          puVar27 = local_90;
        } while ((long)uVar20 < (long)*(int *)((long)param_1 + 0x1c));
      }
      bVar9 = uVar19 >> 0x10 != 0;
      uVar24 = uVar19 >> 0x10;
      if (!bVar9) {
        uVar24 = uVar19;
      }
      uVar21 = uVar24 >> 8;
      if (uVar24 < 0x100) {
        uVar21 = uVar24;
      }
      uVar3 = (uint)bVar9 << 3 | 4;
      if (uVar24 < 0x100) {
        uVar3 = (uint)bVar9 << 3;
      }
      uVar24 = uVar21 >> 4;
      if (uVar21 < 0x10) {
        uVar24 = uVar21;
      }
      uVar6 = uVar3 | 2;
      if (uVar21 < 0x10) {
        uVar6 = uVar3;
      }
      uVar6 = uVar6 | 3 < uVar24;
      uVar24 = 0xd - uVar6;
      sVar17 = (short)((int)uVar19 >> (uVar6 * 2 - 0xc & 0x1f));
      if ((ushort)uVar6 < 7) {
        sVar17 = (short)(uVar19 << (ulong)(uVar6 * -2 + 0xc & 0x1f));
      }
      iVar18 = (int)sVar17;
      uVar4 = *(undefined4 *)(param_1 + 2);
      iVar5 = *(int *)((long)param_1 + 0x14);
      iVar18 = (int)((((int)(((iVar18 * 0x41b0 + -0x31530000 >> 0x10) * iVar18 * 4 & 0xffff0000U) +
                            0x52b50000) >> 0x10) * iVar18 * 4 & 0xffff0000U) + 0xe320000) >> 0x10;
      uVar43 = param_1[7];
      uVar44 = param_1[8];
      uVar2 = (short)(iVar18 >> (uVar24 & 0x1f));
      if ((int)uVar24 < 1) {
        uVar2 = (short)(iVar18 << (ulong)(-uVar24 & 0x1f));
      }
      *(undefined2 *)(param_1 + 0x10) = uVar2;
      *(undefined8 *)(puVar27 + -0x10) = uVar40;
      uVar20 = qmf_synth(param_3,param_3 + (long)iVar5 * 2,&DAT_001370ac,param_3,uVar4,0x40,uVar43,
                         uVar44);
      uVar19 = *(uint *)(param_1 + 4);
      uVar38 = (ulong)(int)uVar19;
      if (0 < (int)uVar19) {
        uVar28 = param_1[10];
        if (uVar19 < 0x10) {
          uVar30 = 0;
        }
        else if ((uVar28 < local_a8 + uVar38 * 2) && (local_a8 < uVar28 + uVar38 * 2)) {
          uVar30 = 0;
        }
        else {
          uVar30 = uVar38 & 0xfffffffffffffff0;
          puVar31 = (undefined8 *)(local_a8 + 0x10);
          puVar34 = (undefined8 *)(uVar28 + 0x10);
          uVar35 = uVar30;
          do {
            puVar7 = puVar31 + -1;
            uVar40 = puVar31[-2];
            uVar44 = puVar31[1];
            uVar43 = *puVar31;
            puVar31 = puVar31 + 4;
            uVar35 = uVar35 - 0x10;
            puVar34[-1] = *puVar7;
            puVar34[-2] = uVar40;
            puVar34[1] = uVar44;
            *puVar34 = uVar43;
            puVar34 = puVar34 + 4;
          } while (uVar35 != 0);
          if (uVar30 == uVar38) goto LAB_0012b984;
        }
        do {
          lVar22 = uVar30 * 2;
          uVar30 = uVar30 + 1;
          *(undefined2 *)(uVar28 + lVar22) = *(undefined2 *)(local_a8 + lVar22);
        } while ((long)uVar30 < (long)uVar38);
      }
LAB_0012b984:
      *(undefined4 *)((long)param_1 + 0x24) = 0;
      lVar22 = local_108;
    }
  }
  iVar18 = 0;
LAB_0012b994:
  if (*(long *)(lVar22 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar20);
  }
  return iVar18;
}

