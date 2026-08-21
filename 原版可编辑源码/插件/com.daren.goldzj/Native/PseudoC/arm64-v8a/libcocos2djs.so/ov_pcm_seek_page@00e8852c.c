
ulong ov_pcm_seek_page(long *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  int iVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  long local_d8;
  ulong local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  long local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  lVar7 = ov_pcm_total(param_1,0xffffffff);
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  iVar6 = (int)param_1[0x16];
  if (iVar6 < 2) {
    uVar14 = 0xffffff7d;
    goto LAB_00e88a74;
  }
  if ((int)param_1[1] == 0) {
    uVar14 = 0xffffff76;
    goto LAB_00e88a74;
  }
  uVar14 = 0xffffff7d;
  if ((param_2 < 0) || (lVar7 < param_2)) goto LAB_00e88a74;
  iVar1 = (int)param_1[5];
  lVar12 = 0;
  lVar16 = -((long)iVar1 << 0x20);
  iVar3 = iVar1 * 2 + -1;
  do {
    iVar11 = iVar3;
    lVar8 = lVar16;
    lVar10 = lVar12;
    if (iVar1 + lVar10 < 1) break;
    lVar7 = lVar7 - *(long *)(param_1[9] + (long)iVar11 * 8);
    lVar12 = lVar10 + -1;
    lVar16 = lVar8 + 0x100000000;
    iVar3 = iVar11 + -2;
  } while (param_2 < lVar7);
  if (((iVar1 + -1) - (int)param_1[0x17]) + (int)lVar10 == 0) {
    vorbis_dsp_restart(param_1[0x1b]);
LAB_00e886e0:
    ogg_stream_reset_serialno
              (param_1[0x1a],*(undefined4 *)(param_1[8] + (-0x100000000 - lVar8 >> 0x1e)));
    uVar13 = *(ulong *)(param_1[6] + (-lVar8 >> 0x1d));
    local_c8 = *(ulong *)(param_1[6] + (-0x100000000 - lVar8 >> 0x1d));
    if ((long)local_c8 < (long)uVar13) {
      lVar16 = *(long *)(param_1[9] + (long)(iVar11 + -1) * 8);
      lVar12 = lVar16 + (param_2 - lVar7);
      local_d8 = *(long *)(param_1[9] + (long)iVar11 * 8) + lVar16;
      uVar15 = local_c8;
      do {
        uVar9 = uVar15;
        if (0x3ff < (long)(uVar13 - uVar15)) {
          lVar10 = 0;
          if (local_d8 - lVar16 != 0) {
            lVar10 = (long)((lVar12 - lVar16) * (uVar13 - uVar15)) / (local_d8 - lVar16);
          }
          uVar9 = (uVar15 + lVar10) - 0x400;
          if ((long)uVar9 <= (long)uVar15) {
            uVar9 = uVar15 + 1;
          }
        }
        uVar4 = uVar13;
        if (*param_1 != 0) {
          (*(code *)param_1[0x1d])(*param_1,uVar9,0);
          param_1[2] = uVar9;
          ogg_sync_reset(param_1[4]);
        }
LAB_00e887ac:
        do {
          uVar13 = uVar4;
          do {
            while( true ) {
              lVar10 = local_d8;
              if ((long)uVar13 <= (long)uVar15) goto LAB_00e888cc;
              uVar14 = FUN_00e88420(param_1,&local_90,uVar13 - param_1[2]);
              if (uVar14 == 0xffffffffffffff80) goto LAB_00e88a18;
              uVar4 = uVar15;
              if (-1 < (long)uVar14) break;
              if ((long)uVar9 <= (long)(uVar15 + 1)) goto LAB_00e887ac;
              if (uVar9 == 0) goto LAB_00e88a18;
              uVar9 = uVar9 - 0x400;
              if ((long)uVar9 <= (long)uVar15) {
                uVar9 = uVar15 + 1;
              }
              if (*param_1 != 0) {
                (*(code *)param_1[0x1d])(*param_1,uVar9,0);
                param_1[2] = uVar9;
                ogg_sync_reset(param_1[4]);
              }
            }
            lVar8 = ogg_page_granulepos(&local_90);
          } while (lVar8 == -1);
          if (lVar12 <= lVar8) {
            if ((long)(uVar15 + 1) < (long)uVar9) {
              bVar5 = uVar13 != param_1[2];
              uVar13 = uVar14;
              lVar10 = lVar8;
              if (bVar5) break;
              uVar9 = uVar9 - 0x400;
              if ((long)uVar9 <= (long)uVar15) {
                uVar9 = uVar15 + 1;
              }
              uVar4 = uVar14;
              if (*param_1 != 0) {
                (*(code *)param_1[0x1d])(*param_1,uVar9,0);
                param_1[2] = uVar9;
                ogg_sync_reset(param_1[4]);
              }
            }
            goto LAB_00e887ac;
          }
          uVar15 = param_1[2];
          local_c8 = uVar14;
          uVar9 = uVar15;
          lVar16 = lVar8;
          uVar4 = uVar13;
        } while (lVar12 - lVar8 < 0xac45);
LAB_00e888cc:
        local_d8 = lVar10;
      } while ((long)uVar15 < (long)uVar13);
    }
    if (*param_1 != 0) {
      (*(code *)param_1[0x1d])(*param_1,local_c8,0);
      param_1[2] = local_c8;
      ogg_sync_reset(param_1[4]);
    }
    param_1[0x15] = -1;
    lVar12 = FUN_00e88420(param_1,&local_90,0xffffffffffffffff);
    if (lVar12 < 0) {
      ogg_page_release(&local_90);
      uVar14 = 0xfffffffe;
      goto LAB_00e88a74;
    }
    ogg_stream_pagein(param_1[0x1a],&local_90);
    while (iVar6 = ogg_stream_packetpeek(param_1[0x1a],&local_c0), iVar6 != 0) {
      if (iVar6 < 0) {
        uVar14 = 0xffffffffffffff78;
        goto LAB_00e88a18;
      }
      if (local_a0 != -1) {
        uVar14 = local_a0 - *(long *)(param_1[9] + (long)(int)param_1[0x17] * 0x10);
        lVar7 = (uVar14 & ((long)uVar14 >> 0x3f ^ 0xffffffffffffffffU)) + lVar7;
        param_1[0x15] = lVar7;
        if ((lVar7 <= param_2) && (lVar7 = ov_pcm_total(param_1,0xffffffff), param_2 <= lVar7)) {
          param_1[0x18] = 0;
          param_1[0x19] = 0;
          ogg_page_release(&local_90);
          ogg_packet_release(&local_c0);
          uVar14 = 0;
          goto LAB_00e88a74;
        }
        uVar14 = 0xffffffffffffff7f;
        goto LAB_00e88a18;
      }
      ogg_stream_packetout(param_1[0x1a],0);
    }
    if (*param_1 != 0) {
      (*(code *)param_1[0x1d])(*param_1,local_c8,0);
      param_1[2] = local_c8;
      ogg_sync_reset(param_1[4]);
    }
    while (uVar14 = FUN_00e88ac8(param_1,&local_90), -1 < (long)uVar14) {
      lVar7 = ogg_page_granulepos(&local_90);
      if ((-1 < lVar7) || (iVar6 = ogg_page_continued(&local_90), iVar6 == 0)) {
        uVar14 = ov_raw_seek(param_1,uVar14);
        uVar14 = uVar14 & 0xffffffff;
        goto LAB_00e88a74;
      }
      param_1[2] = uVar14;
    }
  }
  else {
    if (iVar6 == 5) {
      vorbis_dsp_destroy(param_1[0x1b]);
      param_1[0x1b] = 0;
      *(undefined4 *)(param_1 + 0x16) = 3;
LAB_00e8864c:
      vorbis_info_clear(param_1 + 10);
      vorbis_comment_clear(param_1 + 0x11);
      *(undefined4 *)(param_1 + 0x16) = 2;
    }
    else if (2 < iVar6) goto LAB_00e8864c;
    if (*param_1 != 0) {
      lVar12 = *(long *)(param_1[6] + (-0x100000000 - lVar8 >> 0x1d));
      (*(code *)param_1[0x1d])(*param_1,lVar12,0);
      param_1[2] = lVar12;
      ogg_sync_reset(param_1[4]);
    }
    lVar12 = (-0x100000000 - lVar8 >> 0x20) * 4;
    ogg_stream_reset_serialno(param_1[0x1a],*(undefined4 *)(param_1[8] + lVar12));
    *(undefined4 *)((long)param_1 + 0xb4) = *(undefined4 *)(param_1[8] + lVar12);
    *(int *)(param_1 + 0x17) = iVar1 + -1 + (int)lVar10;
    iVar6 = FUN_00e89234(param_1,param_1 + 10,param_1 + 0x11,(long)param_1 + 0xb4,0);
    uVar14 = 0;
    if (iVar6 == 0) goto LAB_00e886e0;
  }
LAB_00e88a18:
  ogg_page_release(&local_90);
  ogg_packet_release(&local_c0);
  param_1[0x15] = -1;
  if ((int)param_1[0x16] == 5) {
    vorbis_dsp_destroy(param_1[0x1b]);
    param_1[0x1b] = 0;
    *(undefined4 *)(param_1 + 0x16) = 3;
  }
  else if ((int)param_1[0x16] < 3) goto LAB_00e88a74;
  vorbis_info_clear(param_1 + 10);
  vorbis_comment_clear(param_1 + 0x11);
  *(undefined4 *)(param_1 + 0x16) = 2;
LAB_00e88a74:
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar14 & 0xffffffff;
}

