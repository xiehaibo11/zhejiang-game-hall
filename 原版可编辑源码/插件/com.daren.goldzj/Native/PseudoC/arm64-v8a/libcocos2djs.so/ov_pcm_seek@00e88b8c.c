
void ov_pcm_seek(long *param_1,long param_2)

{
  long *plVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
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
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
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
  uVar8 = ov_pcm_seek_page();
  if ((int)uVar8 < 0) goto LAB_00e89200;
  iVar7 = (int)param_1[0x16];
  if (iVar7 - 2U < 2) {
    lVar9 = 0;
    lVar17 = 0x100000000;
    do {
      lVar14 = lVar17;
      lVar13 = lVar9;
      if ((int)param_1[5] <= lVar13) break;
      lVar9 = lVar13 + 1;
      lVar17 = lVar14 + 0x100000000;
    } while (*(long *)(param_1[6] + lVar13 * 8 + 8) < param_1[2]);
    iVar5 = (int)lVar13;
    if ((int)param_1[5] == iVar5) goto LAB_00e88d14;
    lVar9 = param_1[2];
    if ((int)param_1[0x17] == iVar5) {
      if (iVar7 < 3) goto LAB_00e88cac;
    }
    else {
      if (iVar7 == 5) {
        vorbis_dsp_destroy(param_1[0x1b]);
        param_1[0x1b] = 0;
        *(undefined4 *)(param_1 + 0x16) = 3;
      }
      else if (iVar7 < 3) goto LAB_00e88cac;
      vorbis_info_clear(param_1 + 10);
      vorbis_comment_clear(param_1 + 0x11);
      *(undefined4 *)(param_1 + 0x16) = 2;
LAB_00e88cac:
      if (*param_1 != 0) {
        lVar17 = *(long *)(param_1[6] + lVar13 * 8);
        (*(code *)param_1[0x1d])(*param_1,lVar17,0);
        param_1[2] = lVar17;
        ogg_sync_reset(param_1[4]);
      }
      ogg_stream_reset_serialno(param_1[0x1a],*(undefined4 *)(param_1[8] + lVar13 * 4));
      *(undefined4 *)((long)param_1 + 0xb4) = *(undefined4 *)(param_1[8] + lVar13 * 4);
      *(int *)(param_1 + 0x17) = iVar5;
      iVar7 = FUN_00e89234(param_1,param_1 + 10,param_1 + 0x11,(long)param_1 + 0xb4,0);
      if (iVar7 != 0) goto LAB_00e88d14;
    }
    if (*param_1 != 0) {
      (*(code *)param_1[0x1d])(*param_1,lVar9,0);
      param_1[2] = lVar9;
      ogg_sync_reset(param_1[4]);
    }
    if ((lVar9 < *(long *)(param_1[6] + lVar13 * 8)) ||
       (*(long *)(param_1[6] + (lVar14 >> 0x1d)) <= lVar9)) {
      *(undefined4 *)(param_1 + 0x16) = 3;
    }
  }
  else if (iVar7 != 4) {
    if (iVar7 == 5) goto LAB_00e88d90;
LAB_00e88d14:
    uVar8 = 0xffffff77;
LAB_00e89200:
    if (*(long *)(lVar4 + 0x28) == local_68) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar8);
  }
  lVar9 = vorbis_dsp_create(param_1 + 10);
  param_1[0x18] = 0;
  param_1[0x1b] = lVar9;
  *(undefined4 *)(param_1 + 0x16) = 5;
  param_1[0x19] = 0;
LAB_00e88d90:
  plVar15 = param_1 + 10;
  plVar1 = param_1 + 0x11;
  iVar7 = 0;
  while( true ) {
    while (iVar5 = ogg_stream_packetpeek(param_1[0x1a],&uStack_a0), 0 < iVar5) {
      iVar5 = vorbis_packet_blocksize(plVar15,&uStack_a0);
      if (iVar5 < 0) {
        ogg_stream_packetout(param_1[0x1a],0);
      }
      else {
        if (iVar7 == 0) {
          lVar9 = param_1[0x15];
        }
        else {
          lVar9 = param_1[0x15] + (long)(iVar7 + iVar5 >> 2);
          param_1[0x15] = lVar9;
        }
        iVar7 = vorbis_info_blocksize(plVar15,1);
        if (param_2 <= lVar9 + (iVar7 + iVar5 >> 2)) goto LAB_00e89134;
        ogg_stream_packetout(param_1[0x1a],0);
        vorbis_dsp_synthesis(param_1[0x1b],&uStack_a0,0);
        iVar7 = iVar5;
        if (-1 < local_80) {
          uVar3 = *(uint *)(param_1 + 0x17);
          uVar10 = local_80 - *(long *)(param_1[9] + (long)(int)uVar3 * 0x10);
          uVar10 = uVar10 & ((long)uVar10 >> 0x3f ^ 0xffffffffffffffffU);
          param_1[0x15] = uVar10;
          if (0 < (int)uVar3) {
            uVar11 = (ulong)uVar3;
            plVar12 = (long *)(param_1[9] + 8);
            do {
              uVar11 = uVar11 - 1;
              uVar10 = uVar10 + *plVar12;
              param_1[0x15] = uVar10;
              plVar12 = plVar12 + 2;
            } while (uVar11 != 0);
          }
        }
      }
    }
    if (((iVar5 != 0) && (iVar5 != -3)) ||
       (lVar9 = FUN_00e88420(param_1,&local_c0,0xffffffffffffffff), lVar9 < 0)) break;
    iVar5 = *(int *)((long)param_1 + 0xb4);
    iVar6 = ogg_page_serialno(&local_c0);
    iVar2 = (int)param_1[0x16];
    if (iVar5 == iVar6) {
      if (iVar2 < 3) goto LAB_00e88f10;
    }
    else {
      if (iVar2 == 5) {
        vorbis_dsp_destroy(param_1[0x1b]);
        param_1[0x1b] = 0;
        *(undefined4 *)(param_1 + 0x16) = 3;
      }
      else if (iVar2 < 3) goto LAB_00e88f10;
      vorbis_info_clear(plVar15);
      vorbis_comment_clear(plVar1);
      *(undefined4 *)(param_1 + 0x16) = 2;
LAB_00e88f10:
      iVar5 = ogg_page_serialno(&local_c0);
      iVar7 = (int)param_1[5];
      *(int *)((long)param_1 + 0xb4) = iVar5;
      if (iVar7 < 1) {
        lVar9 = 0;
      }
      else {
        lVar9 = 0;
        do {
          if (*(int *)(param_1[8] + lVar9 * 4) == iVar5) break;
          lVar9 = lVar9 + 1;
        } while (lVar9 < iVar7);
      }
      if ((int)lVar9 == iVar7) {
        ogg_page_release(&local_c0);
        ogg_packet_release(&uStack_a0);
LAB_00e891f0:
        uVar8 = 0xffffff77;
        goto LAB_00e89200;
      }
      *(int *)(param_1 + 0x17) = (int)lVar9;
      uVar8 = FUN_00e89234(param_1,plVar15,plVar1,(long)param_1 + 0xb4,&local_c0);
      if ((int)uVar8 != 0) goto LAB_00e89200;
      iVar7 = (int)param_1[0x16];
      if (iVar7 - 2U < 2) {
        lVar9 = 0;
        lVar17 = 0x100000000;
        do {
          lVar14 = lVar17;
          lVar13 = lVar9;
          if ((int)param_1[5] <= lVar13) break;
          lVar9 = lVar13 + 1;
          lVar17 = lVar14 + 0x100000000;
        } while (*(long *)(param_1[6] + lVar13 * 8 + 8) < param_1[2]);
        iVar5 = (int)lVar13;
        if ((int)param_1[5] == iVar5) goto LAB_00e891f0;
        lVar9 = param_1[2];
        if ((int)param_1[0x17] == iVar5) {
          if (iVar7 < 3) goto LAB_00e89040;
        }
        else {
          if (iVar7 == 5) {
            vorbis_dsp_destroy(param_1[0x1b]);
            param_1[0x1b] = 0;
            *(undefined4 *)(param_1 + 0x16) = 3;
          }
          else if (iVar7 < 3) goto LAB_00e89040;
          vorbis_info_clear(plVar15);
          vorbis_comment_clear(plVar1);
          *(undefined4 *)(param_1 + 0x16) = 2;
LAB_00e89040:
          if (*param_1 != 0) {
            lVar17 = *(long *)(param_1[6] + lVar13 * 8);
            (*(code *)param_1[0x1d])(*param_1,lVar17,0);
            param_1[2] = lVar17;
            ogg_sync_reset(param_1[4]);
          }
          ogg_stream_reset_serialno(param_1[0x1a],*(undefined4 *)(param_1[8] + lVar13 * 4));
          *(undefined4 *)((long)param_1 + 0xb4) = *(undefined4 *)(param_1[8] + lVar13 * 4);
          *(int *)(param_1 + 0x17) = iVar5;
          iVar7 = FUN_00e89234(param_1,plVar15,plVar1,(long)param_1 + 0xb4,0);
          if (iVar7 != 0) goto LAB_00e891f0;
        }
        if (*param_1 != 0) {
          (*(code *)param_1[0x1d])(*param_1,lVar9,0);
          param_1[2] = lVar9;
          ogg_sync_reset(param_1[4]);
        }
        if ((lVar9 < *(long *)(param_1[6] + lVar13 * 8)) ||
           (*(long *)(param_1[6] + (lVar14 >> 0x1d)) <= lVar9)) {
          *(undefined4 *)(param_1 + 0x16) = 3;
        }
      }
      else if (iVar7 != 4) {
        if (iVar7 == 5) {
          iVar7 = 0;
          goto LAB_00e89124;
        }
        goto LAB_00e891f0;
      }
      lVar9 = vorbis_dsp_create(plVar15);
      iVar7 = 0;
      param_1[0x1b] = lVar9;
      *(undefined4 *)(param_1 + 0x16) = 5;
      param_1[0x18] = 0;
      param_1[0x19] = 0;
    }
LAB_00e89124:
    ogg_stream_pagein(param_1[0x1a],&local_c0);
  }
LAB_00e89134:
  lVar9 = param_1[0x15];
  param_1[0x18] = 0;
  param_1[0x19] = 0;
joined_r0x00e89144:
  if (lVar9 < param_2) {
    do {
      uVar11 = param_2 - lVar9;
      iVar7 = vorbis_dsp_pcmout(param_1[0x1b],0,0);
      uVar16 = (ulong)iVar7;
      uVar10 = uVar11;
      if ((long)uVar16 <= (long)uVar11) {
        uVar10 = uVar16;
      }
      vorbis_dsp_read(param_1[0x1b],uVar10 & 0xffffffff);
      lVar9 = param_1[0x15] + uVar10;
      param_1[0x15] = lVar9;
      if ((long)uVar16 < (long)uVar11) {
        iVar7 = FUN_00e89414(param_1);
        if (iVar7 < 1) goto LAB_00e891b0;
        lVar9 = param_1[0x15];
      }
      if (param_2 <= lVar9) break;
    } while( true );
  }
  ogg_page_release(&local_c0);
  ogg_packet_release(&uStack_a0);
  uVar8 = 0;
  goto LAB_00e89200;
LAB_00e891b0:
  lVar9 = ov_pcm_total(param_1,0xffffffff);
  param_1[0x15] = lVar9;
  goto joined_r0x00e89144;
}

