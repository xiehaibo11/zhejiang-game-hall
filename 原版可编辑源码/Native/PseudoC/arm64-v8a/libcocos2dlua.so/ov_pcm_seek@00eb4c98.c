
void ov_pcm_seek(long *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  long local_80;
  undefined8 uStack_78;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
                    /* catch() { ... } // from try @ 00eb4c6c with catch @ 00eb4cdc */
  uVar9 = ov_pcm_seek_page();
  if ((int)uVar9 < 0) goto LAB_00eb5300;
  iVar8 = (int)param_1[0x16];
  if (iVar8 - 2U < 2) {
    lVar10 = 0;
    lVar17 = 0x100000000;
    do {
      lVar15 = lVar17;
      lVar14 = lVar10;
      if ((int)param_1[5] <= lVar14) break;
      lVar10 = lVar14 + 1;
      lVar17 = lVar15 + 0x100000000;
    } while (*(long *)(param_1[6] + lVar14 * 8 + 8) < param_1[2]);
    iVar6 = (int)lVar14;
    if ((int)param_1[5] == iVar6) goto LAB_00eb4e18;
    lVar10 = param_1[2];
    if ((int)param_1[0x17] == iVar6) {
      if (iVar8 < 3) goto LAB_00eb4dac;
    }
    else {
      if (iVar8 == 5) {
        vorbis_dsp_destroy(param_1[0x1b]);
        param_1[0x1b] = 0;
        *(undefined4 *)(param_1 + 0x16) = 3;
      }
      else if (iVar8 < 3) goto LAB_00eb4dac;
      vorbis_info_clear(param_1 + 10);
      vorbis_comment_clear(param_1 + 0x11);
      *(undefined4 *)(param_1 + 0x16) = 2;
LAB_00eb4dac:
      if (*param_1 != 0) {
        lVar17 = *(long *)(param_1[6] + lVar14 * 8);
        (*(code *)param_1[0x1d])(*param_1,lVar17,0);
        param_1[2] = lVar17;
        ogg_sync_reset(param_1[4]);
      }
      ogg_stream_reset_serialno(param_1[0x1a],*(undefined4 *)(param_1[8] + lVar14 * 4));
      *(undefined4 *)((long)param_1 + 0xb4) = *(undefined4 *)(param_1[8] + lVar14 * 4);
      *(int *)(param_1 + 0x17) = iVar6;
      iVar8 = FUN_00eb5334(param_1,param_1 + 10,param_1 + 0x11,(undefined4 *)((long)param_1 + 0xb4),
                           0);
      if (iVar8 != 0) goto LAB_00eb4e18;
    }
    if (*param_1 != 0) {
      (*(code *)param_1[0x1d])(*param_1,lVar10,0);
      param_1[2] = lVar10;
      ogg_sync_reset(param_1[4]);
    }
    if ((lVar10 < *(long *)(param_1[6] + lVar14 * 8)) ||
       (*(long *)(param_1[6] + (lVar15 >> 0x1d)) <= lVar10)) {
      *(undefined4 *)(param_1 + 0x16) = 3;
    }
  }
  else if (iVar8 != 4) {
    if (iVar8 == 5) goto LAB_00eb4e84;
LAB_00eb4e18:
    uVar9 = 0xffffff77;
LAB_00eb5300:
    if (*(long *)(lVar5 + 0x28) == local_68) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar9);
  }
  lVar10 = vorbis_dsp_create(param_1 + 10);
  param_1[0x1b] = lVar10;
  *(undefined4 *)(param_1 + 0x16) = 5;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
LAB_00eb4e84:
  plVar1 = param_1 + 10;
  plVar2 = param_1 + 0x11;
  iVar8 = 0;
  while( true ) {
    while (iVar6 = ogg_stream_packetpeek(param_1[0x1a],&uStack_a0), 0 < iVar6) {
      iVar6 = vorbis_packet_blocksize(plVar1,&uStack_a0);
      if (iVar6 < 0) {
        ogg_stream_packetout(param_1[0x1a],0);
      }
      else {
        if (iVar8 == 0) {
          lVar10 = param_1[0x15];
        }
        else {
          lVar10 = param_1[0x15] + (long)(iVar8 + iVar6 >> 2);
          param_1[0x15] = lVar10;
        }
        iVar8 = vorbis_info_blocksize(plVar1,1);
        if (param_2 <= lVar10 + (iVar8 + iVar6 >> 2)) goto LAB_00eb5234;
        ogg_stream_packetout(param_1[0x1a],0);
        vorbis_dsp_synthesis(param_1[0x1b],&uStack_a0,0);
        iVar8 = iVar6;
        if (-1 < local_80) {
          uVar4 = *(uint *)(param_1 + 0x17);
          uVar11 = local_80 - *(long *)(param_1[9] + (long)(int)uVar4 * 0x10);
          uVar11 = uVar11 & ((long)uVar11 >> 0x3f ^ 0xffffffffffffffffU);
          param_1[0x15] = uVar11;
          if (0 < (int)uVar4) {
            uVar12 = (ulong)uVar4;
            plVar13 = (long *)(param_1[9] + 8);
            do {
              uVar12 = uVar12 - 1;
              uVar11 = uVar11 + *plVar13;
              param_1[0x15] = uVar11;
              plVar13 = plVar13 + 2;
            } while (uVar12 != 0);
          }
        }
      }
    }
    if (((iVar6 != 0) && (iVar6 != -3)) ||
       (lVar10 = FUN_00eb4510(param_1,&local_c0,0xffffffffffffffff), lVar10 < 0)) break;
    iVar6 = *(int *)((long)param_1 + 0xb4);
    iVar7 = ogg_page_serialno(&local_c0);
    iVar3 = (int)param_1[0x16];
    if (iVar6 == iVar7) {
      if (iVar3 < 3) goto LAB_00eb5010;
    }
    else {
      if (iVar3 == 5) {
        vorbis_dsp_destroy(param_1[0x1b]);
        param_1[0x1b] = 0;
        *(undefined4 *)(param_1 + 0x16) = 3;
      }
      else if (iVar3 < 3) goto LAB_00eb5010;
      vorbis_info_clear(plVar1);
      vorbis_comment_clear(plVar2);
      *(undefined4 *)(param_1 + 0x16) = 2;
LAB_00eb5010:
      iVar6 = ogg_page_serialno(&local_c0);
      iVar8 = (int)param_1[5];
      *(int *)((long)param_1 + 0xb4) = iVar6;
      if (iVar8 < 1) {
        lVar10 = 0;
      }
      else {
        lVar10 = 0;
        do {
          if (*(int *)(param_1[8] + lVar10 * 4) == iVar6) break;
          lVar10 = lVar10 + 1;
        } while (lVar10 < iVar8);
      }
      if ((int)lVar10 == iVar8) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00eb52a8 with catch @ 00eb52e0
                        */
        ogg_page_release(&local_c0);
        ogg_packet_release(&uStack_a0);
LAB_00eb52f0:
        uVar9 = 0xffffff77;
        goto LAB_00eb5300;
      }
      *(int *)(param_1 + 0x17) = (int)lVar10;
      uVar9 = FUN_00eb5334(param_1,plVar1,plVar2,(long)param_1 + 0xb4,&local_c0);
      if ((int)uVar9 != 0) goto LAB_00eb5300;
      iVar8 = (int)param_1[0x16];
      if (iVar8 - 2U < 2) {
        lVar10 = 0;
        lVar17 = 0x100000000;
        do {
          lVar15 = lVar17;
          lVar14 = lVar10;
          if ((int)param_1[5] <= lVar14) break;
                    /* try { // try from 00eb50c0 to 00fb50c7 has its CatchHandler @ 00eb510c */
                    /* try { // try from 00eb50c8 to 00fb5127 has its CatchHandler @ 00eb509c */
          lVar10 = lVar14 + 1;
          lVar17 = lVar15 + 0x100000000;
        } while (*(long *)(param_1[6] + lVar14 * 8 + 8) < param_1[2]);
        iVar6 = (int)lVar14;
        if ((int)param_1[5] == iVar6) goto LAB_00eb52f0;
        lVar10 = param_1[2];
        if ((int)param_1[0x17] == iVar6) {
          if (iVar8 < 3) goto LAB_00eb5140;
        }
        else {
          if (iVar8 == 5) {
                    /* catch() { ... } // from try @ 00eb50c0 with catch @ 00eb510c */
            vorbis_dsp_destroy(param_1[0x1b]);
            param_1[0x1b] = 0;
            *(undefined4 *)(param_1 + 0x16) = 3;
          }
          else if (iVar8 < 3) goto LAB_00eb5140;
                    /* catch() { ... } // from try @ 00eb5154 with catch @ 00eb5128 */
          vorbis_info_clear(plVar1);
          vorbis_comment_clear(plVar2);
          *(undefined4 *)(param_1 + 0x16) = 2;
LAB_00eb5140:
                    /* try { // try from 00eb514c to 00fb5153 has its CatchHandler @ 00eb5198 */
          if (*param_1 != 0) {
                    /* try { // try from 00eb5154 to 00fb51b3 has its CatchHandler @ 00eb5128 */
            lVar17 = *(long *)(param_1[6] + lVar14 * 8);
            (*(code *)param_1[0x1d])(*param_1,lVar17,0);
            param_1[2] = lVar17;
            ogg_sync_reset(param_1[4]);
          }
          ogg_stream_reset_serialno(param_1[0x1a],*(undefined4 *)(param_1[8] + lVar14 * 4));
                    /* catch() { ... } // from try @ 00eb514c with catch @ 00eb5198 */
          *(undefined4 *)((long)param_1 + 0xb4) = *(undefined4 *)(param_1[8] + lVar14 * 4);
          *(int *)(param_1 + 0x17) = iVar6;
          iVar8 = FUN_00eb5334(param_1,plVar1,plVar2,(long)param_1 + 0xb4,0);
                    /* try { // try from 00eb51b4 to 00fb523f has its CatchHandler @ 00eb51b4
                       catch(type#1 @ 00000000) { ... } // from try @ 00eb51b4 with catch @ 00eb51b4
                       catch(type#1 @ 00000000) { ... } // from try @ 00eb524c with catch @ 00eb51b4
                       catch(type#1 @ 00000000) { ... } // from try @ 00eb52ac with catch @ 00eb51b4
                        */
          if (iVar8 != 0) goto LAB_00eb52f0;
        }
        if (*param_1 != 0) {
          (*(code *)param_1[0x1d])(*param_1,lVar10,0);
          param_1[2] = lVar10;
          ogg_sync_reset(param_1[4]);
        }
        if ((lVar10 < *(long *)(param_1[6] + lVar14 * 8)) ||
           (*(long *)(param_1[6] + (lVar15 >> 0x1d)) <= lVar10)) {
          *(undefined4 *)(param_1 + 0x16) = 3;
        }
      }
      else if (iVar8 != 4) {
        if (iVar8 == 5) {
          iVar8 = 0;
                    /* catch() { ... } // from try @ 00eb50c8 with catch @ 00eb509c */
          goto LAB_00eb5224;
        }
        goto LAB_00eb52f0;
      }
      lVar10 = vorbis_dsp_create(plVar1);
      iVar8 = 0;
      param_1[0x1b] = lVar10;
      *(undefined4 *)(param_1 + 0x16) = 5;
      param_1[0x18] = 0;
      param_1[0x19] = 0;
    }
LAB_00eb5224:
    ogg_stream_pagein(param_1[0x1a],&local_c0);
  }
LAB_00eb5234:
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  lVar10 = param_1[0x15];
                    /* try { // try from 00eb5240 to 00fb524b has its CatchHandler @ 00eb5260 */
joined_r0x00eb5244:
  if (lVar10 < param_2) {
    do {
      uVar12 = param_2 - lVar10;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00eb5240 with catch @ 00eb5260
                        */
      iVar8 = vorbis_dsp_pcmout(param_1[0x1b],0,0);
      uVar16 = (ulong)iVar8;
      uVar11 = uVar12;
      if ((long)uVar16 <= (long)uVar12) {
        uVar11 = uVar16;
      }
      vorbis_dsp_read(param_1[0x1b],uVar11 & 0xffffffff);
      lVar10 = param_1[0x15] + uVar11;
      param_1[0x15] = lVar10;
      if ((long)uVar16 < (long)uVar12) {
        iVar8 = FUN_00eb5514(param_1);
                    /* try { // try from 00eb52a8 to 00fb52ab has its CatchHandler @ 00eb52e0 */
                    /* try { // try from 00eb52ac to 00fb52f3 has its CatchHandler @ 00eb51b4 */
        if (iVar8 < 1) goto code_r0x00eb52b0;
                    /* try { // try from 00eb524c to 00fb52a7 has its CatchHandler @ 00eb51b4 */
        lVar10 = param_1[0x15];
      }
      if (param_2 <= lVar10) break;
    } while( true );
  }
  ogg_page_release(&local_c0);
  ogg_packet_release(&uStack_a0);
  uVar9 = 0;
  goto LAB_00eb5300;
code_r0x00eb52b0:
  lVar10 = ov_pcm_total(param_1,0xffffffff);
  param_1[0x15] = lVar10;
  goto joined_r0x00eb5244;
}

