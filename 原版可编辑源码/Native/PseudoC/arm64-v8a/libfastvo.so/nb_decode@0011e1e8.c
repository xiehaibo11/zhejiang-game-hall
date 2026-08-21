
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void nb_decode(long param_1,long param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  short sVar3;
  short sVar4;
  undefined2 uVar5;
  short sVar6;
  uint uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  int *piVar11;
  int *piVar12;
  int *piVar13;
  int *piVar14;
  bool bVar15;
  short *psVar16;
  short *psVar23;
  short sVar30;
  int iVar31;
  int iVar32;
  undefined8 uVar33;
  char *pcVar34;
  undefined8 uVar35;
  ulong uVar36;
  int *piVar37;
  code *pcVar38;
  undefined1 *puVar39;
  undefined4 uVar40;
  long lVar41;
  int *piVar42;
  long lVar43;
  short *psVar44;
  undefined8 *puVar45;
  ulong uVar46;
  ulong uVar47;
  undefined8 *puVar48;
  ulong uVar49;
  ulong uVar50;
  long lVar51;
  long lVar52;
  undefined2 *puVar53;
  long lVar54;
  int *piVar55;
  short *psVar56;
  ulong uVar57;
  undefined8 *puVar58;
  undefined8 *puVar59;
  undefined8 *puVar60;
  uint uVar61;
  void *pvVar62;
  ulong uVar63;
  int *__s;
  uint uVar64;
  int iVar65;
  int iVar68;
  int iVar69;
  int iVar70;
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  int iVar71;
  undefined2 uVar72;
  uint uVar73;
  int iVar74;
  uint uVar75;
  int iVar76;
  int iVar78;
  int iVar79;
  int iVar80;
  undefined1 auVar77 [16];
  int iVar81;
  undefined8 uVar82;
  int iVar83;
  int iVar84;
  int iVar85;
  undefined8 uVar86;
  undefined4 uStack_180;
  ulong local_178;
  undefined8 *local_170 [2];
  long local_160;
  int local_154;
  long local_150;
  int *local_148;
  uint local_13c;
  int local_138;
  uint local_134;
  undefined8 local_130;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  int *local_f8;
  int local_ec;
  ulong local_e8;
  undefined1 *local_e0;
  int local_d8;
  int local_d4;
  long local_d0;
  int local_c4;
  long local_c0;
  int local_b8;
  int local_b4;
  long local_b0;
  void *local_a8;
  ulong local_a0;
  undefined8 uStack_98;
  undefined8 local_88;
  int local_7c;
  short local_78;
  short local_76;
  short local_74;
  long local_70;
  short *psVar17;
  short *psVar18;
  short *psVar19;
  short *psVar20;
  short *psVar21;
  short *psVar22;
  short *psVar24;
  short *psVar25;
  short *psVar26;
  short *psVar27;
  short *psVar28;
  short *psVar29;
  
  lVar43 = tpidr_el0;
  local_70 = *(long *)(lVar43 + 0x28);
  local_88 = *(undefined8 *)(param_1 + 0x30);
  if (param_2 == 0) {
    if (*(int *)(param_1 + 0x360) == 0) {
      if (*(int *)(param_1 + 0xc) < 10) {
        iVar31 = (int)*(short *)(attenuation + (long)*(int *)(param_1 + 0xc) * 2) << 1;
      }
      else {
        iVar31 = 0;
      }
      iVar32 = (int)*(short *)(param_1 + 0x88);
      iVar68 = (int)*(short *)(param_1 + 0x86);
      iVar65 = (int)*(short *)(param_1 + 0x8a);
      if (*(short *)(param_1 + 0x86) < *(short *)(param_1 + 0x88)) {
        if (*(short *)(param_1 + 0x8a) <= iVar32) {
          bVar15 = SBORROW4(iVar68,iVar65);
          iVar69 = iVar68 - iVar65;
LAB_0011e4d0:
          iVar32 = iVar65;
          if (iVar69 < 0 == bVar15) {
            iVar32 = iVar68;
          }
        }
      }
      else if (iVar32 <= iVar65) {
        bVar15 = SBORROW4(iVar65,iVar68);
        iVar69 = iVar65 - iVar68;
        goto LAB_0011e4d0;
      }
      iVar68 = (int)*(short *)(param_1 + 0x84);
      if ((short)iVar32 < *(short *)(param_1 + 0x84)) {
        *(short *)(param_1 + 0x84) = (short)iVar32;
        iVar68 = iVar32;
      }
      if (0x35 < (short)iVar68) {
        iVar68 = 0x36;
      }
      sVar30 = compute_rms16(*(undefined8 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x10));
      uVar61 = *(int *)(param_1 + 0x14) + *(int *)(param_1 + 0x24) * 2 + 0xc;
      iVar68 = iVar31 * (short)(iVar68 << 9) >> 0x10;
      memmove(*(void **)(param_1 + 0x38),
              (void *)((long)*(void **)(param_1 + 0x38) + (long)*(int *)(param_1 + 0x10) * 2),
              -(ulong)(uVar61 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar61 << 1);
      iVar69 = *(int *)(param_1 + 0x90) * 0x19660d + 0x3c6ef35f;
      iVar32 = (iVar69 >> 0x10) * (*(int *)(param_1 + 0xc) * 0x10000 + 0x10000 >> 0x10);
      iVar32 = *(int *)(param_1 + 0x80) + (((iVar32 + 0x2000) - (iVar32 >> 3)) * 4 >> 0x1e);
      lVar52 = (long)*(int *)(param_1 + 0x10);
      iVar65 = *(int *)(param_1 + 0x24);
      if (iVar32 <= *(int *)(param_1 + 0x24)) {
        iVar65 = iVar32;
      }
      *(int *)(param_1 + 0x90) = iVar69;
      if (0 < *(int *)(param_1 + 0x10)) {
        iVar32 = *(int *)(param_1 + 0x20);
        if (*(int *)(param_1 + 0x20) <= iVar65) {
          iVar32 = iVar65;
        }
        psVar44 = *(short **)(param_1 + 0x40);
        do {
          iVar69 = iVar69 * 0x19660d + 0x3c6ef35f;
          iVar65 = (iVar69 >> 0x10) *
                   ((int)sVar30 *
                    (((int)(0x7fff0000 - (iVar68 * iVar68 * 2 & 0xffff0000U)) >> 0x10) * iVar31 >>
                    0x10) * 2 >> 0x10);
          lVar52 = lVar52 + -1;
          *psVar44 = (short)((uint)((iVar65 + 0x2000) - (iVar65 >> 3)) >> 0xe) +
                     (short)((uint)(iVar68 * psVar44[-(long)iVar32]) >> 0xf);
          psVar44 = psVar44 + 1;
        } while (lVar52 != 0);
        *(int *)(param_1 + 0x90) = iVar69;
      }
      bw_lpc(0x7d71,*(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x50),
             *(undefined4 *)(param_1 + 0x1c));
      iir_mem16(*(long *)(param_1 + 0x40) + (long)*(int *)(param_1 + 0x14) * -2,
                *(undefined8 *)(param_1 + 0x50),param_3,*(undefined4 *)(param_1 + 0x10),
                *(undefined4 *)(param_1 + 0x1c),*(undefined8 *)(param_1 + 0x58),local_88);
      highpass(param_3,param_3,*(undefined4 *)(param_1 + 0x10),1,param_1 + 0x60);
      iVar31 = *(int *)(param_1 + 0x8c);
      uVar33 = 0;
      *(undefined4 *)(param_1 + 8) = 0;
      *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
      *(int *)(param_1 + 0x8c) = iVar31 + 1;
      *(short *)(param_1 + (long)iVar31 * 2 + 0x86) = (short)(iVar68 + 0x100U >> 9);
      if (1 < iVar31) {
        uVar33 = 0;
        *(undefined4 *)(param_1 + 0x8c) = 0;
      }
      goto LAB_0011f7c0;
    }
    *(undefined4 *)(param_1 + 0xa0) = 0;
  }
  else if (*(int *)(param_1 + 0x94) != 0) {
    iVar31 = speex_bits_remaining(param_2);
    if (4 < iVar31) {
      do {
        iVar31 = speex_bits_unpack_unsigned(param_2,1);
        if (iVar31 != 0) {
          iVar31 = speex_bits_unpack_unsigned(param_2,3);
          speex_bits_advance(param_2,*(int *)(&DAT_00136a78 + (long)iVar31 * 4) + -4);
          iVar31 = speex_bits_remaining(param_2);
          if (4 < iVar31) {
            iVar31 = speex_bits_unpack_unsigned(param_2,1);
            if (iVar31 == 0) goto LAB_0011e38c;
            iVar31 = speex_bits_unpack_unsigned(param_2,3);
            speex_bits_advance(param_2,*(int *)(&DAT_00136a78 + (long)iVar31 * 4) + -4);
            iVar31 = speex_bits_unpack_unsigned(param_2,1);
            if (iVar31 == 0) goto LAB_0011e38c;
            pcVar34 = "More than two wideband layers found. The stream is corrupted.";
LAB_0011f8bc:
            fprintf((FILE *)0x14d168,"notification: %s\n",pcVar34);
            uVar33 = 0xfffffffe;
            goto LAB_0011f7c0;
          }
          break;
        }
LAB_0011e38c:
        iVar31 = speex_bits_remaining(param_2);
        if (iVar31 < 4) break;
        iVar31 = speex_bits_unpack_unsigned(param_2,4);
        if (iVar31 == 0xd) {
          uVar33 = (**(code **)(param_1 + 0x330))(param_2,param_1,*(undefined8 *)(param_1 + 0x338));
          iVar31 = (int)uVar33;
        }
        else {
          if (iVar31 != 0xe) {
            if (iVar31 != 0xf) {
              if (8 < iVar31) {
                pcVar34 = "Invalid mode encountered. The stream is corrupted.";
                goto LAB_0011f8bc;
              }
              *(int *)(param_1 + 0xa0) = iVar31;
              goto LAB_0011e264;
            }
            break;
          }
          uVar33 = speex_inband_handler(param_2,param_1 + 0xa8,param_1);
          iVar31 = (int)uVar33;
        }
        if (iVar31 != 0) goto LAB_0011f7c0;
        iVar31 = speex_bits_remaining(param_2);
      } while (4 < iVar31);
    }
    uVar33 = 0xffffffff;
    goto LAB_0011f7c0;
  }
LAB_0011e264:
  local_f8 = (int *)(param_1 + 0xa0);
  uVar61 = *(int *)(param_1 + 0x14) + *(int *)(param_1 + 0x24) * 2 + 0xc;
  memmove(*(void **)(param_1 + 0x38),
          (void *)((long)*(void **)(param_1 + 0x38) + (long)*(int *)(param_1 + 0x10) * 2),
          -(ulong)(uVar61 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar61 << 1);
  lVar52 = -((ulong)*(uint *)(param_1 + 0x1c) * 2 + 0xf & 0x3fffffff0);
  uVar63 = (long)&uStack_180 + lVar52;
  if (*(long *)(*(long *)(param_1 + 0x98) + (long)*(int *)(param_1 + 0xa0) * 8) == 0) {
    bw_lpc(0x770a,*(undefined8 *)(param_1 + 0x50),uVar63,*(undefined4 *)(param_1 + 0x1c));
    sVar30 = compute_rms16(*(undefined8 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x10));
    iVar31 = *(int *)(param_1 + 0x10);
    if (iVar31 < 1) {
      lVar52 = *(long *)(param_1 + 0x40);
    }
    else {
      lVar52 = *(long *)(param_1 + 0x40);
      iVar32 = *(int *)(param_1 + 0x90);
      lVar54 = 0;
      do {
        iVar32 = iVar32 * 0x19660d + 0x3c6ef35f;
        iVar68 = (iVar32 >> 0x10) * (int)sVar30;
        *(short *)(lVar52 + lVar54 * 2) = (short)((uint)((iVar68 + 0x2000) - (iVar68 >> 3)) >> 0xe);
        lVar54 = lVar54 + 1;
      } while (lVar54 < iVar31);
      *(int *)(param_1 + 0x90) = iVar32;
    }
    *(undefined4 *)(param_1 + 8) = 1;
    iir_mem16(lVar52,uVar63,param_3,(long)iVar31,*(undefined4 *)(param_1 + 0x1c),
              *(undefined8 *)(param_1 + 0x58),local_88);
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  else {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x98) + (long)*(int *)(param_1 + 0xa0) * 8) + 0x18))
              (uVar63,*(undefined4 *)(param_1 + 0x1c),param_2);
    if (*(int *)(param_1 + 0xc) != 0) {
      uVar61 = *(uint *)(param_1 + 0x1c);
      uVar36 = (ulong)(int)uVar61;
      if (0 < (int)uVar61) {
        if (uVar61 < 8) {
          uVar46 = 0;
          uVar64 = 0;
LAB_0011e734:
          do {
            lVar54 = uVar46 * 2;
            uVar46 = uVar46 + 1;
            iVar32 = (int)*(short *)(*(long *)(param_1 + 0x48) + lVar54) -
                     (int)*(short *)(uVar63 + lVar54);
            iVar31 = -iVar32;
            if (-1 < iVar32) {
              iVar31 = iVar32;
            }
            uVar64 = iVar31 + uVar64;
          } while ((long)uVar46 < (long)uVar36);
        }
        else {
          uVar46 = uVar36 & 0xfffffffffffffff8;
          puVar48 = (undefined8 *)(*(long *)(param_1 + 0x48) + 8);
          puVar45 = (undefined8 *)((long)&local_178 + lVar52);
          iVar68 = 0;
          iVar65 = 0;
          iVar69 = 0;
          iVar70 = 0;
          iVar31 = 0;
          iVar32 = 0;
          iVar71 = 0;
          iVar74 = 0;
          uVar47 = uVar46;
          do {
            uVar35 = puVar48[-1];
            uVar82 = *puVar48;
            uVar33 = puVar45[-1];
            uVar86 = *puVar45;
            puVar48 = puVar48 + 2;
            uVar47 = uVar47 - 8;
            puVar45 = puVar45 + 2;
            iVar76 = MP_INT_ABS((int)(short)uVar35 - (int)(short)uVar33);
            iVar78 = MP_INT_ABS((int)(short)((ulong)uVar35 >> 0x10) -
                                (int)(short)((ulong)uVar33 >> 0x10));
            iVar79 = MP_INT_ABS((int)(short)((ulong)uVar35 >> 0x20) -
                                (int)(short)((ulong)uVar33 >> 0x20));
            iVar80 = MP_INT_ABS((int)(short)((ulong)uVar35 >> 0x30) -
                                (int)(short)((ulong)uVar33 >> 0x30));
            iVar81 = MP_INT_ABS((int)(short)uVar82 - (int)(short)uVar86);
            iVar83 = MP_INT_ABS((int)(short)((ulong)uVar82 >> 0x10) -
                                (int)(short)((ulong)uVar86 >> 0x10));
            iVar84 = MP_INT_ABS((int)(short)((ulong)uVar82 >> 0x20) -
                                (int)(short)((ulong)uVar86 >> 0x20));
            iVar85 = MP_INT_ABS((int)(short)((ulong)uVar82 >> 0x30) -
                                (int)(short)((ulong)uVar86 >> 0x30));
            iVar68 = iVar76 + iVar68;
            iVar65 = iVar78 + iVar65;
            iVar69 = iVar79 + iVar69;
            iVar70 = iVar80 + iVar70;
            iVar31 = iVar81 + iVar31;
            iVar32 = iVar83 + iVar32;
            iVar71 = iVar84 + iVar71;
            iVar74 = iVar85 + iVar74;
          } while (uVar47 != 0);
          uVar64 = iVar31 + iVar68 + iVar32 + iVar65 + iVar71 + iVar69 + iVar74 + iVar70;
          if (uVar46 != uVar36) goto LAB_0011e734;
        }
        if (0 < (int)uVar61) {
          lVar41 = *(long *)(param_1 + 0x58);
          lVar54 = 0;
          iVar31 = (int)(short)(0x4ccd >> (ulong)(uVar64 >> 0xf & 0x1f));
          do {
            lVar51 = lVar54 * 4;
            uVar61 = *(uint *)(lVar41 + lVar51);
            lVar54 = lVar54 + 1;
            *(int *)(lVar41 + lVar51) =
                 ((int)(uVar61 << 1) >> 0x10) * iVar31 + ((int)((uVar61 & 0x7fff) * iVar31) >> 0xf);
          } while (lVar54 < *(int *)(param_1 + 0x1c));
        }
      }
    }
    if ((*(int *)(param_1 + 8) != 0) || (*(int *)(param_1 + 0xc) != 0)) {
      uVar61 = *(uint *)(param_1 + 0x1c);
      uVar36 = (ulong)(int)uVar61;
      if (0 < (int)uVar61) {
        uVar46 = *(ulong *)(param_1 + 0x48);
        if (uVar61 < 0x10) {
          uVar47 = 0;
        }
        else if ((uVar46 < uVar63 + uVar36 * 2) && (uVar63 < uVar46 + uVar36 * 2)) {
          uVar47 = 0;
        }
        else {
          uVar47 = uVar36 & 0xfffffffffffffff0;
          puVar48 = (undefined8 *)((long)local_170 + lVar52);
          puVar45 = (undefined8 *)(uVar46 + 0x10);
          uVar49 = uVar47;
          do {
            auVar10 = *(undefined1 (*) [16])(puVar48 + -2);
            uVar35 = puVar48[1];
            uVar33 = *puVar48;
            puVar48 = puVar48 + 4;
            uVar49 = uVar49 - 0x10;
            puVar45[-1] = auVar10._8_8_;
            puVar45[-2] = auVar10._0_8_;
            puVar45[1] = uVar35;
            *puVar45 = uVar33;
            puVar45 = puVar45 + 4;
          } while (uVar49 != 0);
          if (uVar47 == uVar36) goto LAB_0011e844;
        }
        do {
          lVar52 = uVar47 * 2;
          uVar47 = uVar47 + 1;
          *(undefined2 *)(uVar46 + lVar52) = *(undefined2 *)(uVar63 + lVar52);
        } while ((long)uVar47 < (long)uVar36);
      }
    }
LAB_0011e844:
    piVar37 = *(int **)(*(long *)(param_1 + 0x98) + (long)*(int *)(param_1 + 0xa0) * 8);
    if (*piVar37 == -1) {
      local_e8 = 0;
      local_170[0] = (undefined8 *)&uStack_180;
    }
    else {
      iVar31 = *(int *)(param_1 + 0x20);
      local_170[0] = (undefined8 *)&uStack_180;
      iVar32 = speex_bits_unpack_unsigned(param_2,7);
      piVar37 = *(int **)(*(long *)(param_1 + 0x98) + (long)*(int *)(param_1 + 0xa0) * 8);
      local_e8 = (ulong)(uint)(iVar32 + iVar31);
    }
    local_178 = uVar63;
    local_170[1] = param_3;
    local_160 = lVar43;
    if (piVar37[1] == 0) {
      local_ec = 0;
    }
    else {
      sVar30 = speex_bits_unpack_unsigned(param_2,4);
      local_ec = (short)(sVar30 << 6) * 0x889 + 0x4000 >> 0xf;
    }
    iVar31 = speex_bits_unpack_unsigned(param_2,5);
    uVar61 = *(uint *)(ol_gain_table + (long)iVar31 * 4);
    uVar63 = uVar63 - ((ulong)*(uint *)(param_1 + 0x1c) * 2 + 0xf & 0x3fffffff0);
    uVar36 = (ulong)*(uint *)(param_1 + 0x14) * 4 + 0xf & 0x7fffffff0;
    __s = (int *)(uVar63 - uVar36);
    piVar37 = (int *)((long)__s - uVar36);
    iVar31 = *(int *)(param_1 + 0xa0);
    if (iVar31 == 1) {
      iVar32 = speex_bits_unpack_unsigned(param_2,4);
      iVar31 = *(int *)(param_1 + 0xa0);
      *(uint *)(param_1 + 0x360) = (uint)(iVar32 == 0xf);
    }
    local_134 = ((int)(uVar61 << 1) >> 0x10) * 0x6ef6 + ((uVar61 & 0x7fff) * 0x6ef6 >> 0xf);
    if (1 < iVar31) {
      *(undefined4 *)(param_1 + 0x360) = 0;
    }
    if (*(int *)(param_1 + 0x18) < 1) {
      uVar72 = 0;
      local_d4 = 0x28;
    }
    else {
      local_138 = (int)(local_134 * 4) >> 0x10;
      local_13c = local_134 & 0x3fff;
      local_d0 = param_1 + 0x90;
      uVar61 = (short)((short)local_ec + -0xd) * 0x6000 + 0x2000;
      sVar30 = (short)(uVar61 >> 0xe);
      if ((uVar61 & 0x20000000) != 0) {
        sVar30 = 0;
      }
      if (0x3f < sVar30) {
        sVar30 = 0x40;
      }
      uVar73 = (uint)local_e8;
      uVar64 = -(uVar73 >> 0xf & 1) & 0xfffe0000 | (uVar73 & 0xffff) << 1;
      bVar15 = uVar64 >> 0x10 != 0;
      uVar61 = uVar64 >> 0x10;
      if (!bVar15) {
        uVar61 = uVar64;
      }
      uVar75 = uVar61 >> 8;
      if (uVar61 < 0x100) {
        uVar75 = uVar61;
      }
      uVar2 = (uint)bVar15 << 3 | 4;
      if (uVar61 < 0x100) {
        uVar2 = (uint)bVar15 << 3;
      }
      uVar61 = uVar75 >> 4;
      if (uVar75 < 0x10) {
        uVar61 = uVar75;
      }
      uVar7 = uVar2 | 2;
      if (uVar75 < 0x10) {
        uVar7 = uVar2;
      }
      uVar7 = uVar7 | 3 < uVar61;
      uVar61 = 0xd - uVar7;
      sVar3 = (short)((int)uVar64 >> (uVar7 * 2 - 0xc & 0x1f));
      if ((ushort)uVar7 < 7) {
        sVar3 = (short)(uVar64 << (ulong)(uVar7 * -2 + 0xc & 0x1f));
      }
      iVar31 = (int)sVar3;
      iVar31 = (int)((((int)(((iVar31 * 0x41b0 + -0x31530000 >> 0x10) * iVar31 * 4 & 0xffff0000U) +
                            0x52b50000) >> 0x10) * iVar31 * 4 & 0xffff0000U) + 0xe320000) >> 0x10;
      local_150 = (long)(int)uVar73;
      uVar36 = (ulong)*(uint *)(param_1 + 0x14);
      local_154 = iVar31 >> (uVar61 & 0x1f);
      if ((int)uVar61 < 1) {
        local_154 = iVar31 << (ulong)(-uVar61 & 0x1f);
      }
      local_154 = (((int)(local_134 * 4 + 0x8000) >> 0x10) * (int)sVar30 + 0x20U >> 6) * local_154;
      local_148 = __s + 4;
      iVar31 = 0;
      iVar32 = 0;
      iVar65 = 0x28;
      uStack_118 = 0xe0002000e0002000;
      local_120 = 0xe0002000e0002000;
      uStack_108 = 0x1fffdfff1fffdfff;
      local_110 = 0x1fffdfff1fffdfff;
      uStack_128 = 0x8001;
      uStack_124 = 0x8001;
      local_130 = 0x800100008001;
      piVar14 = piVar37;
      iVar68 = 0;
      do {
        local_b0 = *(long *)(param_1 + 0x40);
        uVar61 = (int)uVar36 * iVar31;
        local_a0 = (ulong)uVar61;
        uVar46 = -(ulong)(uVar61 >> 0x1f) & 0xfffffffe00000000 | local_a0 << 1;
        local_a8 = (void *)(local_b0 + uVar46);
        local_c0 = 0;
        if (*(long *)(param_1 + 0x70) != 0) {
          local_c0 = *(long *)(param_1 + 0x70) + uVar46;
        }
        local_b8 = iVar32;
        memset(local_a8,0,-(uVar36 >> 0x1f) & 0xfffffffe00000000 | uVar36 << 1);
        piVar42 = *(int **)(*(long *)(param_1 + 0x98) + (long)*(int *)(param_1 + 0xa0) * 8);
        pcVar38 = *(code **)(piVar42 + 10);
        if (pcVar38 == (code *)0x0) {
          FUN_0011e004("assertion failed: SUBMODE(ltp_unquant)",0x529);
LAB_0011f8e4:
          uVar33 = FUN_0011e004("assertion failed: SUBMODE(innovation_unquant)",0x575);
          goto LAB_0011f8f4;
        }
        iVar32 = *piVar42;
        if (iVar32 == -1) {
          uVar36 = (ulong)*(uint *)(param_1 + 0x20);
          uVar46 = (ulong)*(uint *)(param_1 + 0x24);
        }
        else {
          uVar36 = local_e8 & 0xffffffff;
          uVar46 = local_e8 & 0xffffffff;
          if (iVar32 != 0) {
            iVar69 = (int)local_e8 - iVar32;
            uVar61 = iVar32 + (int)local_e8;
            uVar64 = *(uint *)(param_1 + 0x20);
            if ((int)uVar64 <= iVar69 + 1) {
              uVar64 = iVar69 + 1;
            }
            uVar36 = (ulong)uVar64;
            uVar64 = *(uint *)(param_1 + 0x24);
            if ((int)uVar61 <= (int)*(uint *)(param_1 + 0x24)) {
              uVar64 = uVar61;
            }
            uVar46 = (ulong)uVar64;
          }
        }
        uVar35 = *(undefined8 *)(piVar42 + 0xc);
        uVar40 = *(undefined4 *)(param_1 + 0x14);
        uVar72 = *(undefined2 *)(param_1 + 0x84);
        piVar14[-10] = *(int *)(param_1 + 0xc);
        uVar33 = local_88;
        *(undefined2 *)(piVar14 + -6) = uVar72;
        uVar47 = local_a0;
        pvVar62 = local_a8;
        iVar32 = local_ec;
        *(long *)(piVar14 + -0xe) = param_2;
        *(undefined8 *)(piVar14 + -0xc) = uVar33;
        piVar14[-4] = 0;
        piVar14[-8] = (int)uVar47;
        *(short **)(piVar14 + -0x10) = &local_78;
        (*pcVar38)(pvVar62,piVar37,uVar36,uVar46,iVar32,uVar35,uVar40,&local_7c);
        sanitize_values32(piVar37,0xf0600000,0xfa00000,*(undefined4 *)(param_1 + 0x14));
        sVar3 = local_78;
        if (local_78 < 1) {
          sVar3 = -(short)((ulong)(long)local_78 >> 1);
        }
        sVar4 = local_74;
        if (local_74 < 1) {
          sVar4 = -(short)((ulong)(long)local_74 >> 1);
        }
        local_c4 = (int)(short)(sVar3 + (local_76 + (local_76 >> 0xf) ^ local_76 >> 0xf) + sVar4);
        iVar32 = (int)(short)iVar68;
        local_b4 = iVar68;
        if (iVar32 < local_c4) {
          iVar70 = iVar65 * 2 - local_7c;
          iVar69 = -iVar70;
          if (-1 < iVar70) {
            iVar69 = iVar70;
          }
          if (iVar69 < 3) goto LAB_0011ecfc;
          iVar70 = iVar65 * 3 - local_7c;
          iVar69 = -iVar70;
          if (-1 < iVar70) {
            iVar69 = iVar70;
          }
          if (iVar69 < 4) goto LAB_0011ecfc;
          iVar70 = iVar65 * 4 - local_7c;
          iVar69 = -iVar70;
          if (-1 < iVar70) {
            iVar69 = iVar70;
          }
          if (iVar69 < 5) goto LAB_0011ecfc;
LAB_0011eda4:
          local_b4 = local_c4;
          iVar65 = local_7c;
          if (local_c4 <= (short)iVar68) {
            local_b4 = iVar68;
          }
        }
        else {
LAB_0011ecfc:
          if (iVar32 * 0x4ccd >> 0xf < local_c4) {
            iVar70 = iVar65 + local_7c * -2;
            iVar69 = -iVar70;
            if (-1 < iVar70) {
              iVar69 = iVar70;
            }
            if (2 < iVar69) {
              iVar69 = local_7c * -3 + iVar65;
              iVar70 = -iVar69;
              if (-1 < iVar69) {
                iVar70 = iVar69;
              }
              if (3 < iVar70) {
                iVar70 = iVar65 + local_7c * -4;
                iVar69 = -iVar70;
                if (-1 < iVar70) {
                  iVar69 = iVar70;
                }
                if (4 < iVar69) goto LAB_0011ed50;
              }
            }
            goto LAB_0011eda4;
          }
LAB_0011ed50:
          if (iVar32 < local_c4 * 0x55c3 >> 0xf) {
            iVar69 = iVar65 * 2 - local_7c;
            iVar32 = -iVar69;
            if (-1 < iVar69) {
              iVar32 = iVar69;
            }
            if (2 < iVar32) {
              iVar69 = iVar65 * 3 - local_7c;
              iVar32 = -iVar69;
              if (-1 < iVar69) {
                iVar32 = iVar69;
              }
              if (3 < iVar32) {
                iVar69 = iVar65 * 4 - local_7c;
                iVar32 = -iVar69;
                if (-1 < iVar69) {
                  iVar32 = iVar69;
                }
                if (4 < iVar32) goto LAB_0011edb0;
              }
            }
            goto LAB_0011eda4;
          }
        }
LAB_0011edb0:
        memset(__s,0,(long)*(int *)(param_1 + 0x14) << 2);
        iVar32 = *(int *)(*(long *)(*(long *)(param_1 + 0x98) + (long)*(int *)(param_1 + 0xa0) * 8)
                         + 8);
        if (iVar32 == 1) {
          iVar32 = speex_bits_unpack_unsigned(param_2,1);
          puVar39 = &exc_gain_quant_scal1;
LAB_0011ee1c:
          uVar61 = local_138 * *(short *)(puVar39 + (long)iVar32 * 2) +
                   ((int)(local_13c * (int)*(short *)(puVar39 + (long)iVar32 * 2)) >> 0xe);
        }
        else {
          uVar61 = local_134;
          if (iVar32 == 3) {
            iVar32 = speex_bits_unpack_unsigned(param_2,3);
            puVar39 = exc_gain_quant_scal3;
            goto LAB_0011ee1c;
          }
        }
        lVar43 = *(long *)(*(long *)(param_1 + 0x98) + (long)*(int *)(param_1 + 0xa0) * 8);
        pcVar38 = *(code **)(lVar43 + 0x40);
        if (pcVar38 == (code *)0x0) goto LAB_0011f8e4;
        (*pcVar38)(__s,*(undefined8 *)(lVar43 + 0x48),*(undefined4 *)(param_1 + 0x14),param_2,
                   local_88,local_d0);
        signal_mul(__s,__s,uVar61,*(undefined4 *)(param_1 + 0x14));
        if (*(int *)(*(long *)(*(long *)(param_1 + 0x98) + (long)*(int *)(param_1 + 0xa0) * 8) + 0xc
                    ) != 0) {
          pvVar62 = (void *)((long)piVar14 -
                            ((ulong)*(uint *)(param_1 + 0x14) * 4 + 0xf & 0x7fffffff0));
          iVar32 = *(int *)(param_1 + 0x14);
          local_e0 = (undefined1 *)piVar14;
          local_d8 = iVar31;
          local_d4 = iVar65;
          memset(pvVar62,0,(long)iVar32 << 2);
          lVar43 = *(long *)(*(long *)(param_1 + 0x98) + (long)*(int *)(param_1 + 0xa0) * 8);
          (**(code **)(lVar43 + 0x40))
                    (pvVar62,*(undefined8 *)(lVar43 + 0x48),iVar32,param_2,local_88,local_d0);
          signal_mul(pvVar62,pvVar62,
                     ((int)(uVar61 << 1) >> 0x10) * 0x3a2f + ((uVar61 & 0x7fff) * 0x3a2f >> 0xf),
                     *(undefined4 *)(param_1 + 0x14));
          uVar61 = *(uint *)(param_1 + 0x14);
          uVar36 = (ulong)(int)uVar61;
          piVar14 = (int *)local_e0;
          iVar31 = local_d8;
          iVar65 = local_d4;
          if (0 < (int)uVar61) {
            if (uVar61 < 8) {
              uVar47 = 0;
            }
            else {
              uVar47 = uVar36 & 0xfffffffffffffff8;
              puVar48 = (undefined8 *)((long)pvVar62 + 0x10);
              uVar46 = uVar47;
              piVar42 = local_148;
              do {
                auVar10 = *(undefined1 (*) [16])(puVar48 + -2);
                uVar35 = puVar48[1];
                uVar33 = *puVar48;
                uVar46 = uVar46 - 8;
                puVar48 = puVar48 + 4;
                iVar32 = (int)((ulong)uVar33 >> 0x20) + (int)((ulong)*(undefined8 *)piVar42 >> 0x20)
                ;
                piVar42[-2] = auVar10._8_4_ + piVar42[-2];
                piVar42[-1] = auVar10._12_4_ + piVar42[-1];
                piVar42[-4] = auVar10._0_4_ + piVar42[-4];
                piVar42[-3] = auVar10._4_4_ + piVar42[-3];
                *(ulong *)(piVar42 + 2) =
                     CONCAT44((int)((ulong)uVar35 >> 0x20) +
                              (int)((ulong)*(undefined8 *)(piVar42 + 2) >> 0x20),
                              (int)uVar35 + (int)*(undefined8 *)(piVar42 + 2));
                *(ulong *)piVar42 =
                     CONCAT26((short)((uint)iVar32 >> 0x10),
                              CONCAT24((short)iVar32,(int)uVar33 + (int)*(undefined8 *)piVar42));
                piVar42 = piVar42 + 8;
              } while (uVar46 != 0);
              if (uVar47 == uVar36) goto LAB_0011efb4;
            }
            do {
              uVar46 = uVar47 + 1;
              __s[uVar47] = *(int *)((long)pvVar62 + uVar47 * 4) + __s[uVar47];
              piVar14 = (int *)local_e0;
              uVar47 = uVar46;
              iVar31 = local_d8;
              iVar65 = local_d4;
            } while ((long)uVar46 < (long)uVar36);
          }
        }
LAB_0011efb4:
        uVar61 = *(uint *)(param_1 + 0x14);
        uVar36 = (ulong)uVar61;
        auVar10._8_4_ = uStack_128;
        auVar10._0_8_ = local_130;
        uVar46 = (ulong)(int)uVar61;
        if (0 < (int)uVar61) {
          if (uVar61 < 4) {
            uVar47 = 0;
LAB_0011f084:
            do {
              iVar32 = __s[uVar47] + piVar37[uVar47] * 2;
              uVar72 = 0x8001;
              if (-0x1fffe001 < iVar32) {
                uVar72 = (short)(iVar32 + 0x2000U >> 0xe);
              }
              uVar5 = 0x7fff;
              if (iVar32 < 0x1fffe000) {
                uVar5 = uVar72;
              }
              *(undefined2 *)(local_b0 + (long)(int)local_a0 * 2 + uVar47 * 2) = uVar5;
              uVar47 = uVar47 + 1;
            } while ((long)uVar47 < (long)uVar46);
          }
          else {
            uVar47 = uVar46 & 0xfffffffffffffffc;
            puVar48 = (undefined8 *)(local_b0 + (long)(int)local_a0 * 2);
            uVar49 = uVar47;
            piVar42 = __s;
            piVar55 = piVar37;
            do {
              uVar49 = uVar49 - 4;
              iVar32 = *piVar55 * 2 + (int)*(undefined8 *)piVar42;
              iVar68 = piVar55[1] * 2 + (int)((ulong)*(undefined8 *)piVar42 >> 0x20);
              iVar69 = piVar55[2] * 2 + (int)*(undefined8 *)(piVar42 + 2);
              iVar70 = piVar55[3] * 2 + (int)((ulong)*(undefined8 *)(piVar42 + 2) >> 0x20);
              auVar77._0_4_ = -(uint)((int)local_110 < iVar32);
              auVar77._4_4_ = -(uint)((int)((ulong)local_110 >> 0x20) < iVar68);
              auVar77._8_4_ = -(uint)((int)uStack_108 < iVar69);
              auVar77._12_4_ = -(uint)((int)((ulong)uStack_108 >> 0x20) < iVar70);
              auVar66._0_4_ = -(uint)(iVar32 < (int)local_120);
              auVar66._4_4_ = -(uint)(iVar68 < (int)((ulong)local_120 >> 0x20));
              auVar66._8_4_ = -(uint)(iVar69 < (int)uStack_118);
              auVar66._12_4_ = -(uint)(iVar70 < (int)((ulong)uStack_118 >> 0x20));
              uVar64 = iVar32 + 0x2000U >> 0xe;
              uVar72 = (undefined2)(iVar68 + 0x2000U >> 0xe);
              uVar73 = iVar69 + 0x2000U >> 0xe;
              uVar75 = iVar70 + 0x2000U >> 0xe;
              auVar8._8_4_ = uVar73;
              auVar8._0_8_ = (ulong)CONCAT24(uVar72,uVar64) & 0xffffffff0000ffff;
              auVar8._12_4_ = uVar75;
              auVar10._12_4_ = uStack_124;
              auVar67._8_4_ = uVar73;
              auVar67._0_8_ = (ulong)CONCAT24(uVar72,uVar64) & 0xffffffff0000ffff;
              auVar67._12_4_ = uVar75;
              auVar67 = auVar67 ^ (auVar8 ^ auVar10) & auVar66;
              auVar9._8_4_ = 0x7fff;
              auVar9._0_8_ = 0x7fff00007fff;
              auVar9._12_4_ = 0x7fff;
              auVar67 = auVar67 ^ (auVar67 ^ auVar9) & auVar77;
              *puVar48 = CONCAT26(auVar67._12_2_,
                                  CONCAT24(auVar67._8_2_,CONCAT22(auVar67._4_2_,auVar67._0_2_)));
              puVar48 = puVar48 + 1;
              piVar42 = piVar42 + 4;
              piVar55 = piVar55 + 4;
            } while (uVar49 != 0);
            if (uVar47 != uVar46) goto LAB_0011f084;
          }
          if ((local_c0 != 0) && (0 < (int)uVar61)) {
            if (uVar61 < 8) {
              uVar49 = 0;
            }
            else {
              uVar49 = uVar36 & 0xfffffff8;
              puVar48 = (undefined8 *)(local_c0 + 8);
              uVar47 = uVar49;
              piVar42 = local_148;
              do {
                piVar55 = piVar42 + -4;
                piVar11 = piVar42 + -3;
                piVar12 = piVar42 + -2;
                piVar13 = piVar42 + -1;
                uVar35 = *(undefined8 *)(piVar42 + 2);
                uVar33 = *(undefined8 *)piVar42;
                piVar42 = piVar42 + 8;
                uVar47 = uVar47 - 8;
                puVar48[-1] = CONCAT26((short)(*piVar13 + 0x2000U >> 0xe),
                                       CONCAT24((short)(*piVar12 + 0x2000U >> 0xe),
                                                CONCAT22((short)(*piVar11 + 0x2000U >> 0xe),
                                                         (short)(*piVar55 + 0x2000U >> 0xe))));
                *puVar48 = CONCAT26((short)((int)((ulong)uVar35 >> 0x20) + 0x2000U >> 0xe),
                                    CONCAT24((short)((int)uVar35 + 0x2000U >> 0xe),
                                             CONCAT22((short)((int)((ulong)uVar33 >> 0x20) + 0x2000U
                                                             >> 0xe),
                                                      (short)((int)uVar33 + 0x2000U >> 0xe))));
                puVar48 = puVar48 + 2;
              } while (uVar47 != 0);
              if (uVar49 == uVar36) goto LAB_0011f14c;
            }
            lVar43 = uVar36 - uVar49;
            puVar53 = (undefined2 *)(local_c0 + uVar49 * 2);
            piVar42 = __s + uVar49;
            do {
              lVar43 = lVar43 + -1;
              *puVar53 = (short)(*piVar42 + 0x2000U >> 0xe);
              puVar53 = puVar53 + 1;
              piVar42 = piVar42 + 1;
            } while (lVar43 != 0);
          }
        }
LAB_0011f14c:
        sVar3 = (short)local_b8;
        sVar4 = (short)local_c4;
        if (*local_f8 == 1) {
          memset(local_a8,0,uVar46 << 1);
          uVar61 = *(uint *)(param_1 + 0x35c);
          uVar46 = (ulong)uVar61;
          uVar64 = *(uint *)(param_1 + 0x14);
          uVar36 = (ulong)uVar64;
          if ((int)uVar61 < (int)uVar64) {
            uVar46 = (ulong)(int)uVar61;
            do {
              if (-1 < (long)uVar46) {
                *(short *)(local_b0 + (long)(int)local_a0 * 2 + uVar46 * 2) = (short)local_154;
              }
              uVar46 = uVar46 + local_150;
            } while ((long)uVar46 < (long)(int)uVar64);
            *(int *)(param_1 + 0x35c) = (int)uVar46;
          }
          *(uint *)(param_1 + 0x35c) = (int)uVar46 - uVar64;
          if (0 < (int)uVar64) {
            iVar32 = *(int *)(param_1 + 0x354);
            psVar44 = (short *)(local_b0 + (long)(int)local_a0 * 2);
            uVar46 = uVar36;
            piVar42 = __s;
            do {
              sVar6 = *psVar44;
              iVar68 = iVar32 * 4;
              iVar32 = *piVar42;
              *psVar44 = ((short)((uint)((iVar32 * 4 + 0x8000 >> 0x10) *
                                        (int)(short)(sVar30 * -0x1b3 + 0x7fff)) >> 0xf) +
                         (short)((sVar6 * 0xb334 & 0xffff0000U) +
                                 *(short *)(param_1 + 0x350) * 0x4ccc >> 0x10)) -
                         (short)((uint)((iVar68 + 0x8000 >> 0x10) * (int)(short)(sVar30 * 0x4d)) >>
                                0xf);
              *(short *)(param_1 + 0x350) = sVar6;
              uVar46 = uVar46 - 1;
              sVar6 = (short)(*psVar44 * 0x199a + *(short *)(param_1 + 0x358) * 0x6666 + 0x4000U >>
                             0xf);
              *(short *)(param_1 + 0x358) = sVar6;
              *psVar44 = *psVar44 - sVar6;
              psVar44 = psVar44 + 1;
              piVar42 = piVar42 + 1;
            } while (uVar46 != 0);
            *(int *)(param_1 + 0x354) = iVar32;
          }
        }
        iVar32 = (int)(short)(sVar3 + sVar4);
        iVar31 = iVar31 + 1;
        iVar68 = local_b4;
      } while (iVar31 < *(int *)(param_1 + 0x18));
      uVar72 = (undefined2)(iVar32 + 2 >> 2);
      piVar37 = piVar14;
      local_d4 = iVar65;
    }
    uVar33 = local_88;
    lVar43 = local_160;
    puVar48 = local_170[1];
    uVar36 = local_178;
    uVar61 = *(uint *)(param_1 + 0x1c);
    lVar52 = (long)piVar37 - ((ulong)uVar61 * 2 + 0xf & 0x3fffffff0);
    if (((*(int *)(param_1 + 0xa4) == 0) ||
        (*(short *)(*(long *)(*(long *)(param_1 + 0x98) + (long)*(int *)(param_1 + 0xa0) * 8) + 0x50
                   ) < 1)) || (*(int *)(param_1 + 0xc) != 0)) {
      memcpy(local_170[1],(void *)(*(long *)(param_1 + 0x40) + (long)*(int *)(param_1 + 0x14) * -2),
             (long)*(int *)(param_1 + 0x10) << 1);
      iVar31 = *(int *)(param_1 + 0xc);
    }
    else {
      lVar54 = *(long *)(param_1 + 0x40);
      iVar31 = *(int *)(param_1 + 0x14);
      uVar35 = *(undefined8 *)(param_1 + 0x50);
      *(undefined8 *)(lVar52 + -0x10) = local_88;
      iVar32 = local_d4;
      multicomb(lVar54 + (long)iVar31 * -2,puVar48,uVar35,(ulong)uVar61,iVar31 << 1,local_d4,0x28);
      lVar41 = *(long *)(param_1 + 0x40);
      uVar35 = *(undefined8 *)(param_1 + 0x50);
      uVar40 = *(undefined4 *)(param_1 + 0x1c);
      iVar31 = *(int *)(param_1 + 0x14);
      uVar5 = *(undefined2 *)
               (*(long *)(*(long *)(param_1 + 0x98) + (long)*(int *)(param_1 + 0xa0) * 8) + 0x50);
      lVar54 = (long)iVar31 * 2;
      *(undefined8 *)(lVar52 + -0x10) = uVar33;
      multicomb(lVar41 + lVar54,(long)puVar48 + (long)iVar31 * 4,uVar35,uVar40,lVar54,iVar32,0x28,
                uVar5);
      iVar31 = *(int *)(param_1 + 0xc);
    }
    if (iVar31 != 0) {
      sVar30 = compute_rms16(*(undefined8 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x10));
      uVar61 = *(uint *)(param_1 + 0x10);
      uVar46 = (ulong)(int)uVar61;
      if (0 < (int)uVar61) {
        iVar32 = (int)(short)(sVar30 + 1);
        puVar45 = *(undefined8 **)(param_1 + 0x40);
        lVar54 = (long)*(int *)(param_1 + 0x14);
        iVar31 = 0;
        if (iVar32 != 0) {
          iVar31 = (int)(local_134 + (iVar32 >> 1)) / iVar32;
        }
        if (0x7ffe < iVar31) {
          iVar31 = 0x7fff;
        }
        iVar31 = (int)(short)iVar31;
        if (uVar61 < 8) {
          uVar47 = 0;
          uVar49 = 0;
        }
        else {
          puVar58 = (undefined8 *)((long)puVar48 + uVar46 * 2);
          puVar60 = (undefined8 *)((long)puVar45 + uVar46 * 2);
          puVar1 = (undefined8 *)((long)puVar45 + (uVar46 - lVar54) * 2);
          puVar59 = (undefined8 *)((long)puVar45 + lVar54 * -2);
          uVar49 = 0;
          uVar47 = 0;
          if (((puVar58 <= puVar45 || puVar60 <= puVar48) &&
              (puVar1 <= puVar45 || puVar60 <= puVar59)) &&
             (puVar1 <= puVar48 || puVar58 <= puVar59)) {
            uVar47 = uVar46 & 0xfffffffffffffff8;
            uVar49 = uVar46 & 0xfffffff8;
            uVar61 = -*(int *)(param_1 + 0x14);
            uVar50 = uVar47;
            puVar58 = puVar48;
            puVar60 = puVar45;
            do {
              uVar57 = (ulong)uVar61;
              uVar35 = puVar60[1];
              uVar33 = *puVar60;
              uVar64 = uVar61 >> 0x1f;
              uVar50 = uVar50 - 8;
              uVar61 = uVar61 + 8;
              puVar60[1] = CONCAT26((short)((uint)(iVar31 * (short)((ulong)uVar35 >> 0x30)) >> 0xe),
                                    CONCAT24((short)((uint)(iVar31 * (short)((ulong)uVar35 >> 0x20))
                                                    >> 0xe),
                                             CONCAT22((short)((uint)(iVar31 * (short)((ulong)uVar35
                                                                                     >> 0x10)) >>
                                                             0xe),
                                                      (short)((uint)(iVar31 * (short)uVar35) >> 0xe)
                                                     )));
              *puVar60 = CONCAT26((short)((uint)(iVar31 * (short)((ulong)uVar33 >> 0x30)) >> 0xe),
                                  CONCAT24((short)((uint)(iVar31 * (short)((ulong)uVar33 >> 0x20))
                                                  >> 0xe),
                                           CONCAT22((short)((uint)(iVar31 * (short)((ulong)uVar33 >>
                                                                                   0x10)) >> 0xe),
                                                    (short)((uint)(iVar31 * (short)uVar33) >> 0xe)))
                                 );
              puVar1 = (undefined8 *)
                       ((long)puVar45 + (-(ulong)uVar64 & 0xfffffffe00000000 | uVar57 << 1));
              uVar33 = *puVar1;
              puVar58[1] = puVar1[1];
              *puVar58 = uVar33;
              puVar58 = puVar58 + 2;
              puVar60 = puVar60 + 2;
            } while (uVar50 != 0);
            if (uVar47 == uVar46) goto LAB_0011f3b4;
          }
        }
        lVar54 = (-(uVar49 >> 0x1f) & 0xfffffffe00000000 | uVar49 << 1) + lVar54 * -2;
        do {
          lVar41 = uVar47 * 2;
          uVar47 = uVar47 + 1;
          *(short *)((long)puVar45 + lVar41) =
               (short)((uint)(iVar31 * *(short *)((long)puVar45 + lVar41)) >> 0xe);
          puVar53 = (undefined2 *)((long)puVar45 + lVar54);
          lVar54 = lVar54 + 2;
          *(undefined2 *)((long)puVar48 + lVar41) = *puVar53;
        } while ((long)uVar47 < (long)uVar46);
      }
    }
LAB_0011f3b4:
    if (0 < *(int *)(param_1 + 0x18)) {
      uVar61 = *(uint *)(param_1 + 0x1c);
      uVar46 = 0;
      uStack_98 = DAT_001364b0._8_8_;
      local_a0 = (ulong)DAT_001364b0;
      do {
        lVar54 = (long)puVar48 + (long)(*(int *)(param_1 + 0x14) * (int)uVar46) * 2;
        lsp_interpolate(*(undefined8 *)(param_1 + 0x48),uVar36,lVar52,uVar61,uVar46 & 0xffffffff);
        lsp_enforce_margin(lVar52,*(undefined4 *)(param_1 + 0x1c),0x10);
        lsp_to_lpc(lVar52,uVar63,*(undefined4 *)(param_1 + 0x1c),local_88);
        iVar31 = *(int *)(param_1 + 0x1c);
        if (iVar31 < 1) {
          iVar32 = 0x2000;
        }
        else {
          uVar47 = ((long)iVar31 - 1U >> 1) + 1;
          if (uVar47 < 8) {
            lVar41 = 0;
            iVar32 = 0x2000;
          }
          else {
            iVar74 = (int)uStack_98;
            iVar76 = (int)((ulong)uStack_98 >> 0x20);
            iVar32 = (int)local_a0;
            iVar68 = (int)(local_a0 >> 0x20);
            uVar50 = uVar47 & 0xfffffffffffffff8;
            lVar41 = uVar50 << 1;
            iVar65 = 0;
            iVar69 = 0;
            iVar70 = 0;
            iVar71 = 0;
            uVar49 = uVar50;
            psVar44 = (short *)(uVar63 + 0x10);
            do {
              psVar56 = psVar44 + -8;
              sVar30 = *psVar44;
              psVar16 = psVar44 + 1;
              psVar17 = psVar44 + 2;
              psVar18 = psVar44 + 3;
              psVar19 = psVar44 + 4;
              psVar20 = psVar44 + 5;
              psVar21 = psVar44 + 6;
              psVar22 = psVar44 + 7;
              psVar23 = psVar44 + -7;
              psVar24 = psVar44 + -6;
              psVar25 = psVar44 + -5;
              psVar26 = psVar44 + -4;
              psVar27 = psVar44 + -3;
              psVar28 = psVar44 + -2;
              psVar29 = psVar44 + -1;
              uVar49 = uVar49 - 8;
              psVar44 = psVar44 + 0x10;
              iVar65 = (iVar65 + *psVar16) - (int)sVar30;
              iVar69 = (iVar69 + *psVar18) - (int)*psVar17;
              iVar70 = (iVar70 + *psVar20) - (int)*psVar19;
              iVar71 = (iVar71 + *psVar22) - (int)*psVar21;
              iVar32 = (iVar32 + *psVar23) - (int)*psVar56;
              iVar68 = (iVar68 + *psVar25) - (int)*psVar24;
              iVar74 = (iVar74 + *psVar27) - (int)*psVar26;
              iVar76 = (iVar76 + *psVar29) - (int)*psVar28;
            } while (uVar49 != 0);
            iVar32 = iVar65 + iVar32 + iVar69 + iVar68 + iVar70 + iVar74 + iVar71 + iVar76;
            if (uVar47 == uVar50) goto LAB_0011f4c4;
          }
          do {
            psVar44 = (short *)(uVar63 + lVar41 * 2);
            lVar41 = lVar41 + 2;
            iVar32 = (iVar32 + psVar44[1]) - (int)*psVar44;
          } while (lVar41 < iVar31);
        }
LAB_0011f4c4:
        *(int *)(*(long *)(param_1 + 0x68) + uVar46 * 4) = iVar32;
        iir_mem16(lVar54,*(undefined8 *)(param_1 + 0x50),lVar54,*(undefined4 *)(param_1 + 0x14),
                  *(undefined4 *)(param_1 + 0x1c),*(undefined8 *)(param_1 + 0x58),local_88);
        uVar61 = *(uint *)(param_1 + 0x1c);
        if (0 < (int)uVar61) {
          uVar47 = *(ulong *)(param_1 + 0x50);
          uVar49 = (ulong)(int)uVar61;
          if (uVar61 < 0x10) {
            uVar50 = 0;
          }
          else if ((uVar47 < uVar63 + uVar49 * 2) && (uVar63 < uVar47 + uVar49 * 2)) {
            uVar50 = 0;
          }
          else {
            uVar50 = uVar49 & 0xfffffffffffffff0;
            puVar45 = (undefined8 *)(uVar47 + 0x10);
            uVar57 = uVar50;
            psVar44 = (short *)(uVar63 + 0x10);
            do {
              auVar10 = *(undefined1 (*) [16])(psVar44 + -8);
              uVar35 = *(undefined8 *)(psVar44 + 4);
              uVar33 = *(undefined8 *)psVar44;
              psVar44 = psVar44 + 0x10;
              uVar57 = uVar57 - 0x10;
              puVar45[-1] = auVar10._8_8_;
              puVar45[-2] = auVar10._0_8_;
              puVar45[1] = uVar35;
              *puVar45 = uVar33;
              puVar45 = puVar45 + 4;
            } while (uVar57 != 0);
            if (uVar50 == uVar49) goto LAB_0011f578;
          }
          do {
            lVar54 = uVar50 * 2;
            uVar50 = uVar50 + 1;
            *(undefined2 *)(uVar47 + lVar54) = *(undefined2 *)(uVar63 + lVar54);
          } while ((long)uVar50 < (long)uVar49);
        }
LAB_0011f578:
        uVar46 = uVar46 + 1;
      } while ((long)uVar46 < (long)*(int *)(param_1 + 0x18));
    }
    if (*(int *)(param_1 + 0x368) != 0) {
      uVar40 = 3;
      if (*(int *)(param_1 + 0x364) == 0) {
        uVar40 = 1;
      }
      highpass(puVar48,puVar48,*(undefined4 *)(param_1 + 0x10),uVar40,param_1 + 0x60);
    }
    sVar30 = (short)(local_134 + 0x2000 >> 0xe) + 1;
    *(short *)(param_1 + 0x78) = sVar30;
    iVar32 = (int)sVar30;
    iVar31 = *(short *)(param_1 + 0x7a) * 0x7eb8 >> 0xf;
    if (iVar31 <= iVar32) {
      iVar31 = iVar32;
    }
    *(short *)(param_1 + 0x7a) = (short)iVar31;
    iVar68 = *(short *)(param_1 + 0x7c) * 0x10290 + 0x10000 >> 0x10;
    if (iVar32 <= iVar68) {
      iVar68 = iVar32;
    }
    *(short *)(param_1 + 0x7c) = (short)iVar68;
    if ((short)iVar31 <= iVar68) {
      *(short *)(param_1 + 0x7a) = (short)iVar68 + 1;
    }
    uVar61 = *(uint *)(param_1 + 0x1c);
    uVar63 = (ulong)(int)uVar61;
    if (0 < (int)uVar61) {
      uVar46 = *(ulong *)(param_1 + 0x48);
      if (uVar61 < 0x10) {
        uVar47 = 0;
      }
      else if ((uVar46 < uVar36 + uVar63 * 2) && (uVar36 < uVar46 + uVar63 * 2)) {
        uVar47 = 0;
      }
      else {
        uVar47 = uVar63 & 0xfffffffffffffff0;
        puVar48 = (undefined8 *)(uVar36 + 0x10);
        puVar45 = (undefined8 *)(uVar46 + 0x10);
        uVar49 = uVar47;
        do {
          uVar82 = puVar48[-2];
          puVar58 = puVar48 + -1;
          uVar35 = puVar48[1];
          uVar33 = *puVar48;
          puVar48 = puVar48 + 4;
          uVar49 = uVar49 - 0x10;
          puVar45[-1] = *puVar58;
          puVar45[-2] = uVar82;
          puVar45[1] = uVar35;
          *puVar45 = uVar33;
          puVar45 = puVar45 + 4;
        } while (uVar49 != 0);
        if (uVar47 == uVar63) goto LAB_0011f77c;
      }
      do {
        lVar52 = uVar47 * 2;
        uVar47 = uVar47 + 1;
        *(undefined2 *)(uVar46 + lVar52) = *(undefined2 *)(uVar36 + lVar52);
      } while ((long)uVar47 < (long)uVar63);
    }
LAB_0011f77c:
    *(undefined8 *)(param_1 + 8) = 0;
    iVar31 = *(int *)(param_1 + 0x8c);
    *(undefined2 *)(param_1 + 0x84) = uVar72;
    *(int *)(param_1 + 0x80) = local_d4;
    *(int *)(param_1 + 0x8c) = iVar31 + 1;
    *(undefined2 *)(param_1 + (long)iVar31 * 2 + 0x86) = uVar72;
    if (1 < iVar31) {
      *(undefined4 *)(param_1 + 0x8c) = 0;
    }
    *(short *)(param_1 + 0x2c) = (short)local_134;
  }
  uVar33 = 0;
LAB_0011f7c0:
  if (*(long *)(lVar43 + 0x28) == local_70) {
    return;
  }
LAB_0011f8f4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar33);
}

