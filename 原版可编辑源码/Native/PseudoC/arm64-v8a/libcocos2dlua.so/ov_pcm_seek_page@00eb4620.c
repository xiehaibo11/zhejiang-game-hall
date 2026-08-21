
ulong ov_pcm_seek_page(long *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
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
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00eb45dc with catch @ 00eb4620
                        */
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  lVar5 = ov_pcm_total(param_1,0xffffffff);
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
  iVar4 = (int)param_1[0x16];
  if (iVar4 < 2) {
    uVar13 = 0xffffff7d;
    goto LAB_00eb4b70;
  }
  if ((int)param_1[1] == 0) {
    uVar13 = 0xffffff76;
    goto LAB_00eb4b70;
  }
  uVar13 = 0xffffff7d;
  if ((param_2 < 0) || (lVar5 < param_2)) goto LAB_00eb4b70;
  iVar1 = (int)param_1[5];
  lVar10 = 0;
  lVar15 = -((long)iVar1 << 0x20);
  iVar3 = iVar1 * 2 + -1;
  do {
    iVar9 = iVar3;
    lVar6 = lVar15;
    lVar8 = lVar10;
    if (iVar1 + lVar8 < 1) break;
    lVar5 = lVar5 - *(long *)(param_1[9] + (long)iVar9 * 8);
    lVar10 = lVar8 + -1;
    lVar15 = lVar6 + 0x100000000;
    iVar3 = iVar9 + -2;
  } while (param_2 < lVar5);
  if (((iVar1 + -1) - (int)param_1[0x17]) + (int)lVar8 == 0) {
    vorbis_dsp_restart(param_1[0x1b]);
LAB_00eb47d8:
    ogg_stream_reset_serialno
              (param_1[0x1a],*(undefined4 *)(param_1[8] + (-0x100000000 - lVar6 >> 0x1e)));
    uVar11 = *(ulong *)(param_1[6] + (-lVar6 >> 0x1d));
    local_c8 = *(ulong *)(param_1[6] + (-0x100000000 - lVar6 >> 0x1d));
    if ((long)local_c8 < (long)uVar11) {
      lVar15 = *(long *)(param_1[9] + (long)(iVar9 + -1) * 8);
      lVar10 = lVar15 + (param_2 - lVar5);
      local_d8 = *(long *)(param_1[9] + (long)iVar9 * 8) + lVar15;
      uVar14 = local_c8;
      do {
        uVar7 = uVar14;
        if (0x3ff < (long)(uVar11 - uVar14)) {
          lVar8 = 0;
          if (local_d8 - lVar15 != 0) {
            lVar8 = (long)((lVar10 - lVar15) * (uVar11 - uVar14)) / (local_d8 - lVar15);
          }
          uVar7 = (uVar14 + lVar8) - 0x400;
          if ((long)uVar7 <= (long)uVar14) {
            uVar7 = uVar14 + 1;
          }
        }
        if (*param_1 != 0) {
          (*(code *)param_1[0x1d])(*param_1,uVar7,0);
          param_1[2] = uVar7;
          ogg_sync_reset(param_1[4]);
        }
LAB_00eb489c:
        do {
          uVar12 = uVar11;
          do {
            while( true ) {
              uVar11 = uVar12;
              lVar8 = local_d8;
              if ((long)uVar12 <= (long)uVar14) goto LAB_00eb49c8;
              uVar13 = FUN_00eb4510(param_1,&local_90,uVar12 - param_1[2]);
              if (uVar13 == 0xffffffffffffff80) goto LAB_00eb4b14;
              uVar11 = uVar14;
              if (-1 < (long)uVar13) break;
              if ((long)uVar7 <= (long)(uVar14 + 1)) goto LAB_00eb489c;
              if (uVar7 == 0) goto LAB_00eb4b14;
              uVar7 = uVar7 - 0x400;
              if ((long)uVar7 <= (long)uVar14) {
                uVar7 = uVar14 + 1;
              }
              if (*param_1 != 0) {
                (*(code *)param_1[0x1d])(*param_1,uVar7,0);
                param_1[2] = uVar7;
                ogg_sync_reset(param_1[4]);
              }
            }
            lVar6 = ogg_page_granulepos(&local_90);
          } while (lVar6 == -1);
          if (lVar10 <= lVar6) {
            if ((long)(uVar14 + 1) < (long)uVar7) {
              uVar11 = uVar13;
              lVar8 = lVar6;
              if (uVar12 != param_1[2]) break;
              uVar7 = uVar7 - 0x400;
              if ((long)uVar7 <= (long)uVar14) {
                uVar7 = uVar14 + 1;
              }
              if (*param_1 != 0) {
                (*(code *)param_1[0x1d])(*param_1,uVar7,0);
                param_1[2] = uVar7;
                ogg_sync_reset(param_1[4]);
              }
            }
            goto LAB_00eb489c;
          }
          uVar14 = param_1[2];
          local_c8 = uVar13;
          uVar11 = uVar12;
          uVar7 = uVar14;
          lVar15 = lVar6;
        } while (lVar10 - lVar6 < 0xac45);
LAB_00eb49c8:
        local_d8 = lVar8;
      } while ((long)uVar14 < (long)uVar11);
    }
    if (*param_1 != 0) {
      (*(code *)param_1[0x1d])(*param_1,local_c8,0);
      param_1[2] = local_c8;
      ogg_sync_reset(param_1[4]);
    }
    param_1[0x15] = -1;
    lVar10 = FUN_00eb4510(param_1,&local_90,0xffffffffffffffff);
    if (lVar10 < 0) {
      ogg_page_release(&local_90);
      uVar13 = 0xfffffffe;
                    /* try { // try from 00eb4a5c to 00fb4aa7 has its CatchHandler @ 00eb4bd0 */
      goto LAB_00eb4b70;
    }
    ogg_stream_pagein(param_1[0x1a],&local_90);
                    /* catch() { ... } // from try @ 00eb4b54 with catch @ 00eb4a28 */
    while (iVar4 = ogg_stream_packetpeek(param_1[0x1a],&local_c0), iVar4 != 0) {
      if (iVar4 < 0) {
        uVar13 = 0xffffffffffffff78;
        goto LAB_00eb4b14;
      }
      if (local_a0 != -1) {
                    /* try { // try from 00eb4ae4 to 00fb4afb has its CatchHandler @ 00eb4bb0 */
        uVar13 = local_a0 - *(long *)(param_1[9] + (long)(int)param_1[0x17] * 0x10);
        lVar5 = (uVar13 & ((long)uVar13 >> 0x3f ^ 0xffffffffffffffffU)) + lVar5;
        param_1[0x15] = lVar5;
                    /* try { // try from 00eb4afc to 00fb4b07 has its CatchHandler @ 00eb4b78 */
        if ((lVar5 <= param_2) && (lVar5 = ov_pcm_total(param_1,0xffffffff), param_2 <= lVar5)) {
          param_1[0x18] = 0;
          param_1[0x19] = 0;
          ogg_page_release(&local_90);
                    /* catch() { ... } // from try @ 00eb4ae4 with catch @ 00eb4bb0 */
          ogg_packet_release(&local_c0);
          uVar13 = 0;
          goto LAB_00eb4b70;
        }
        uVar13 = 0xffffffffffffff7f;
        goto LAB_00eb4b14;
      }
      ogg_stream_packetout(param_1[0x1a],0);
    }
    if (*param_1 != 0) {
      (*(code *)param_1[0x1d])(*param_1,local_c8,0);
      param_1[2] = local_c8;
      ogg_sync_reset(param_1[4]);
    }
    while (uVar13 = FUN_00eb4bc4(param_1,&local_90), -1 < (long)uVar13) {
      lVar5 = ogg_page_granulepos(&local_90);
      if ((-1 < lVar5) || (iVar4 = ogg_page_continued(&local_90), iVar4 == 0)) {
        uVar13 = ov_raw_seek(param_1,uVar13);
        uVar13 = uVar13 & 0xffffffff;
        goto LAB_00eb4b70;
      }
      param_1[2] = uVar13;
    }
  }
  else {
    if (iVar4 == 5) {
      vorbis_dsp_destroy(param_1[0x1b]);
      param_1[0x1b] = 0;
      *(undefined4 *)(param_1 + 0x16) = 3;
LAB_00eb4740:
      vorbis_info_clear(param_1 + 10);
      vorbis_comment_clear(param_1 + 0x11);
      *(undefined4 *)(param_1 + 0x16) = 2;
    }
    else if (2 < iVar4) goto LAB_00eb4740;
    if (*param_1 != 0) {
      lVar10 = *(long *)(param_1[6] + (-0x100000000 - lVar6 >> 0x1d));
      (*(code *)param_1[0x1d])(*param_1,lVar10,0);
      param_1[2] = lVar10;
      ogg_sync_reset(param_1[4]);
    }
    lVar10 = (-0x100000000 - lVar6 >> 0x20) * 4;
    ogg_stream_reset_serialno(param_1[0x1a],*(undefined4 *)(param_1[8] + lVar10));
    *(undefined4 *)((long)param_1 + 0xb4) = *(undefined4 *)(param_1[8] + lVar10);
    *(int *)(param_1 + 0x17) = iVar1 + -1 + (int)lVar8;
    iVar4 = FUN_00eb5334(param_1,param_1 + 10,param_1 + 0x11,(undefined4 *)((long)param_1 + 0xb4),0)
    ;
    uVar13 = 0;
    if (iVar4 == 0) goto LAB_00eb47d8;
  }
LAB_00eb4b14:
  ogg_page_release(&local_90);
  ogg_packet_release(&local_c0);
  param_1[0x15] = -1;
  if ((int)param_1[0x16] == 5) {
    vorbis_dsp_destroy(param_1[0x1b]);
                    /* try { // try from 00eb4b44 to 00fb4b53 has its CatchHandler @ 00eb4b74 */
    param_1[0x1b] = 0;
    *(undefined4 *)(param_1 + 0x16) = 3;
  }
  else {
                    /* try { // try from 00eb4b54 to 00fb4beb has its CatchHandler @ 00eb4a28 */
    if ((int)param_1[0x16] < 3) goto LAB_00eb4b70;
  }
  vorbis_info_clear(param_1 + 10);
  vorbis_comment_clear(param_1 + 0x11);
  *(undefined4 *)(param_1 + 0x16) = 2;
LAB_00eb4b70:
                    /* catch() { ... } // from try @ 00eb4b44 with catch @ 00eb4b74 */
                    /* catch() { ... } // from try @ 00eb4afc with catch @ 00eb4b78 */
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar13 & 0xffffffff;
}

