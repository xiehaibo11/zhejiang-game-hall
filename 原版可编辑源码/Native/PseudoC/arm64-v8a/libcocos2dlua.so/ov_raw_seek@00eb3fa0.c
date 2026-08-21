
void ov_raw_seek(long *param_1,long param_2)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  int *piVar12;
  int unaff_w24;
  long lVar13;
  ulong uVar14;
  int local_e4;
  undefined1 auStack_e0 [32];
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
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
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
  if (1 < (int)param_1[0x16]) {
    if ((int)param_1[1] == 0) {
      uVar6 = 0xffffff76;
      goto LAB_00eb4430;
    }
    if ((-1 < param_2) && (param_2 <= param_1[3])) {
      param_1[0x15] = -1;
      piVar12 = (int *)((long)param_1 + 0xb4);
      ogg_stream_reset_serialno(param_1[0x1a],*piVar12);
      vorbis_dsp_restart(param_1[0x1b]);
      if (*param_1 != 0) {
        (*(code *)param_1[0x1d])(*param_1,param_2,0);
        param_1[2] = param_2;
        ogg_sync_reset(param_1[4]);
      }
      uVar6 = ogg_stream_create(*(undefined4 *)((long)param_1 + 0xb4));
      iVar5 = 0;
      plVar8 = param_1 + 10;
      plVar1 = param_1 + 0x11;
      local_e4 = 0;
      do {
        while (((int)param_1[0x16] < 3 || (iVar4 = ogg_stream_packetout(uVar6,&local_c0), iVar4 < 1)
               )) {
LAB_00eb4104:
          if (iVar5 != 0) {
            lVar7 = -1;
            goto LAB_00eb43e4;
          }
          lVar7 = FUN_00eb4510(param_1,&local_90,0xffffffffffffffff);
          if (lVar7 < 0) {
            lVar7 = ov_pcm_total(param_1,0xffffffff);
            goto LAB_00eb43e4;
          }
          if ((int)param_1[0x16] < 3) {
LAB_00eb4194:
            iVar4 = ogg_page_serialno(&local_90);
            iVar5 = (int)param_1[5];
            *(int *)((long)param_1 + 0xb4) = iVar4;
            if (iVar5 < 1) {
              uVar14 = 0;
            }
            else {
              uVar14 = 0;
              do {
                if (*(int *)(param_1[8] + uVar14 * 4) == iVar4) break;
                uVar14 = uVar14 + 1;
              } while ((long)uVar14 < (long)iVar5);
            }
            iVar4 = (int)uVar14;
            if (iVar4 == iVar5) {
LAB_00eb438c:
              ogg_packet_release(&local_c0);
              ogg_page_release(&local_90);
              param_1[0x15] = -1;
              ogg_stream_destroy(uVar6);
              if ((int)param_1[0x16] == 5) {
                vorbis_dsp_destroy(param_1[0x1b]);
                param_1[0x1b] = 0;
                *(undefined4 *)(param_1 + 0x16) = 3;
LAB_00eb4414:
                vorbis_info_clear(plVar8);
                vorbis_comment_clear(plVar1);
                *(undefined4 *)(param_1 + 0x16) = 2;
              }
              else if (2 < (int)param_1[0x16]) goto LAB_00eb4414;
              uVar6 = 0xffffff77;
              goto LAB_00eb4430;
            }
            lVar7 = param_1[2];
            iVar5 = (int)param_1[0x16];
            if ((int)param_1[0x17] == iVar4) {
              if (iVar5 < 3) goto LAB_00eb423c;
            }
            else {
              if (iVar5 == 5) {
                vorbis_dsp_destroy(param_1[0x1b]);
                param_1[0x1b] = 0;
                *(undefined4 *)(param_1 + 0x16) = 3;
              }
              else if (iVar5 < 3) goto LAB_00eb423c;
              vorbis_info_clear(plVar8);
              vorbis_comment_clear(plVar1);
              *(undefined4 *)(param_1 + 0x16) = 2;
LAB_00eb423c:
              if (*param_1 != 0) {
                lVar13 = *(long *)(param_1[6] + (uVar14 & 0xffffffff) * 8);
                (*(code *)param_1[0x1d])(*param_1,lVar13,0);
                param_1[2] = lVar13;
                ogg_sync_reset(param_1[4]);
              }
                    /* try { // try from 00eb4270 to 00fb42cb has its CatchHandler @ 00eb4270
                       catch(type#1 @ 00000000) { ... } // from try @ 00eb4270 with catch @ 00eb4270
                       catch(type#1 @ 00000000) { ... } // from try @ 00eb432c with catch @ 00eb4270
                       catch(type#1 @ 00000000) { ... } // from try @ 00eb448c with catch @ 00eb4270
                        */
              lVar13 = (uVar14 & 0xffffffff) * 4;
              ogg_stream_reset_serialno(param_1[0x1a],*(undefined4 *)(param_1[8] + lVar13));
              *(undefined4 *)((long)param_1 + 0xb4) = *(undefined4 *)(param_1[8] + lVar13);
              *(int *)(param_1 + 0x17) = iVar4;
              iVar5 = FUN_00eb5334(param_1,plVar8,plVar1,piVar12,0);
              if (iVar5 != 0) goto LAB_00eb438c;
            }
            if (*param_1 != 0) {
              (*(code *)param_1[0x1d])(*param_1,lVar7,0);
              param_1[2] = lVar7;
              ogg_sync_reset(param_1[4]);
            }
                    /* try { // try from 00eb42cc to 00fb42cf has its CatchHandler @ 00eb4474 */
            if ((lVar7 < *(long *)(param_1[6] + (uVar14 & 0xffffffff) * 8)) ||
               (*(long *)(param_1[6] + (ulong)(iVar4 + 1) * 8) <= lVar7)) {
              *(undefined4 *)(param_1 + 0x16) = 3;
            }
            ogg_stream_reset_serialno(param_1[0x1a],*(undefined4 *)((long)param_1 + 0xb4));
            ogg_stream_reset_serialno(uVar6,*(undefined4 *)((long)param_1 + 0xb4));
          }
          else {
            iVar5 = *piVar12;
            iVar4 = ogg_page_serialno(&local_90);
            if (iVar5 != iVar4) {
              if ((int)param_1[0x16] == 5) {
                vorbis_dsp_destroy(param_1[0x1b]);
                param_1[0x1b] = 0;
                *(undefined4 *)(param_1 + 0x16) = 3;
LAB_00eb4168:
                vorbis_info_clear(plVar8);
                vorbis_comment_clear(plVar1);
                *(undefined4 *)(param_1 + 0x16) = 2;
              }
              else if (2 < (int)param_1[0x16]) goto LAB_00eb4168;
              ogg_stream_destroy(uVar6);
            }
            if ((int)param_1[0x16] < 3) goto LAB_00eb4194;
          }
          ogg_page_dup(auStack_e0,&local_90);
          unaff_w24 = ogg_page_eos(&local_90);
          ogg_stream_pagein(param_1[0x1a],&local_90);
          ogg_stream_pagein(uVar6,auStack_e0);
          iVar5 = 0;
        }
        if (param_1[0x10] == 0) {
          ogg_stream_packetout(param_1[0x1a],0);
          goto LAB_00eb4104;
        }
        iVar4 = vorbis_packet_blocksize(plVar8,&local_c0);
        if (iVar4 < 0) {
          ogg_stream_packetout(param_1[0x1a],0);
          iVar4 = 0;
                    /* try { // try from 00eb4328 to 00fb432b has its CatchHandler @ 00eb4470 */
        }
        else if (unaff_w24 == 0) {
                    /* try { // try from 00eb432c to 00fb4487 has its CatchHandler @ 00eb4270 */
          if (iVar5 != 0) {
            local_e4 = local_e4 + (iVar5 + iVar4 >> 2);
          }
        }
        else {
          ogg_stream_packetout(param_1[0x1a],0);
        }
        iVar5 = iVar4;
      } while (local_a0 == -1);
      uVar2 = *(uint *)(param_1 + 0x17);
      lVar7 = param_1[9];
      uVar14 = local_a0 - *(long *)(lVar7 + (long)(int)uVar2 * 0x10);
      uVar14 = uVar14 & ((long)uVar14 >> 0x3f ^ 0xffffffffffffffffU);
      if (0 < (int)uVar2) {
        uVar9 = (ulong)uVar2;
        if (uVar2 == 1) {
          uVar10 = 0;
        }
        else {
          uVar10 = uVar9 & 0xfffffffe;
          lVar13 = 0;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00eb4328 with catch @ 00eb4470
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00eb42cc with catch @ 00eb4474
                        */
          plVar8 = (long *)(lVar7 + 0x18);
          uVar11 = uVar10;
          do {
            uVar11 = uVar11 - 2;
            uVar14 = plVar8[-2] + uVar14;
                    /* try { // try from 00eb4488 to 00fb448b has its CatchHandler @ 00eb44b8 */
            lVar13 = *plVar8 + lVar13;
            plVar8 = plVar8 + 4;
                    /* try { // try from 00eb448c to 00fb44cb has its CatchHandler @ 00eb4270 */
          } while (uVar11 != 0);
          uVar14 = lVar13 + uVar14;
          if (uVar10 == uVar9) goto LAB_00eb44bc;
        }
        lVar13 = uVar9 - uVar10;
        plVar8 = (long *)(lVar7 + uVar10 * 0x10 + 8);
        do {
          lVar13 = lVar13 + -1;
          uVar14 = *plVar8 + uVar14;
          plVar8 = plVar8 + 2;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00eb4488 with catch @ 00eb44b8
                        */
        } while (lVar13 != 0);
      }
LAB_00eb44bc:
      lVar7 = uVar14 - (long)local_e4;
LAB_00eb43e4:
      param_1[0x15] = lVar7;
      ogg_packet_release(&local_c0);
      ogg_page_release(&local_90);
      ogg_stream_destroy(uVar6);
      uVar6 = 0;
      param_1[0x18] = 0;
      param_1[0x19] = 0;
      goto LAB_00eb4430;
    }
  }
  uVar6 = 0xffffff7d;
LAB_00eb4430:
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}

