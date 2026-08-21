
undefined4 FUN_00e89414(long *param_1)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  undefined4 uVar13;
  uint uVar14;
  ulong uVar15;
  long lVar16;
  undefined8 local_c0;
  long lStack_b8;
  undefined8 local_b0;
  long lStack_a8;
  ulong local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  plVar7 = param_1 + 10;
  plVar1 = param_1 + 0x11;
  lVar6 = (long)param_1 + 0xb4;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  lStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  lStack_b8 = 0;
  local_c0 = 0;
  do {
    iVar3 = (int)param_1[0x16];
    if (iVar3 == 5) {
      while( true ) {
        iVar3 = ogg_stream_packetout(param_1[0x1a],&local_c0);
        uVar15 = local_a0;
        if (iVar3 < 0) {
          uVar13 = 0xfffffffd;
          goto LAB_00e898ac;
        }
        if (iVar3 == 0) break;
        iVar3 = vorbis_dsp_synthesis(param_1[0x1b],&local_c0,1);
        if (iVar3 == 0) {
          iVar3 = vorbis_dsp_pcmout(param_1[0x1b],0,0);
          param_1[0x19] = param_1[0x19] + (long)iVar3;
          param_1[0x18] = param_1[0x18] + lStack_b8 * 8;
          if ((uVar15 == 0xffffffffffffffff) || (lStack_a8 != 0)) goto LAB_00e898a8;
          if ((int)param_1[1] == 0) {
            uVar14 = 0;
          }
          else {
            uVar14 = *(uint *)(param_1 + 0x17);
            if (0 < (int)uVar14) {
              uVar15 = uVar15 - *(long *)(param_1[9] + (long)(int)uVar14 * 0x10);
            }
          }
          iVar3 = vorbis_dsp_pcmout(param_1[0x1b],0,0);
          lVar6 = (uVar15 & ((long)uVar15 >> 0x3f ^ 0xffffffffffffffffU)) - (long)iVar3;
          if ((int)uVar14 < 1) goto LAB_00e898a4;
          uVar15 = (ulong)uVar14;
          if (uVar14 != 1) {
            uVar11 = uVar15 & 0xfffffffe;
            lVar9 = 0;
            plVar7 = (long *)(param_1[9] + 0x18);
            uVar12 = uVar11;
            do {
              uVar12 = uVar12 - 2;
              lVar6 = plVar7[-2] + lVar6;
              lVar9 = *plVar7 + lVar9;
              plVar7 = plVar7 + 4;
            } while (uVar12 != 0);
            lVar6 = lVar9 + lVar6;
            if (uVar11 != uVar15) {
LAB_00e89888:
              lVar9 = uVar15 - uVar11;
              plVar7 = (long *)(param_1[9] + uVar11 * 0x10 + 8);
              do {
                lVar9 = lVar9 + -1;
                lVar6 = *plVar7 + lVar6;
                plVar7 = plVar7 + 2;
              } while (lVar9 != 0);
            }
LAB_00e898a4:
            param_1[0x15] = lVar6;
LAB_00e898a8:
            uVar13 = 1;
            goto LAB_00e898ac;
          }
          uVar11 = 0;
          goto LAB_00e89888;
        }
      }
      iVar3 = (int)param_1[0x16];
    }
    if (iVar3 < 2) {
LAB_00e8955c:
      if ((int)param_1[1] == 0) {
        iVar3 = FUN_00e89234(param_1,plVar7,plVar1,lVar6,&local_90);
        if (iVar3 == 0) {
          *(int *)(param_1 + 0x17) = (int)param_1[0x17] + 1;
LAB_00e895f8:
          iVar3 = (int)param_1[0x16];
LAB_00e895fc:
          if (iVar3 - 2U < 2) {
            lVar9 = 0;
            lVar16 = 0x100000000;
            do {
              lVar10 = lVar16;
              lVar8 = lVar9;
              if ((int)param_1[5] <= lVar8) break;
              lVar9 = lVar8 + 1;
              lVar16 = lVar10 + 0x100000000;
            } while (*(long *)(param_1[6] + lVar8 * 8 + 8) < param_1[2]);
            iVar5 = (int)lVar8;
            if ((int)param_1[5] == iVar5) {
LAB_00e89810:
              uVar13 = 0xffffff77;
LAB_00e898bc:
              if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
                __stack_chk_fail();
              }
              return uVar13;
            }
            lVar9 = param_1[2];
            if ((int)param_1[0x17] == iVar5) {
              if (iVar3 < 3) goto LAB_00e896bc;
            }
            else {
              if (iVar3 == 5) {
                vorbis_dsp_destroy(param_1[0x1b]);
                param_1[0x1b] = 0;
                *(undefined4 *)(param_1 + 0x16) = 3;
              }
              else if (iVar3 < 3) goto LAB_00e896bc;
              vorbis_info_clear(plVar7);
              vorbis_comment_clear(plVar1);
              *(undefined4 *)(param_1 + 0x16) = 2;
LAB_00e896bc:
              if (*param_1 != 0) {
                lVar16 = *(long *)(param_1[6] + lVar8 * 8);
                (*(code *)param_1[0x1d])(*param_1,lVar16,0);
                param_1[2] = lVar16;
                ogg_sync_reset(param_1[4]);
              }
              ogg_stream_reset_serialno(param_1[0x1a],*(undefined4 *)(param_1[8] + lVar8 * 4));
              *(undefined4 *)((long)param_1 + 0xb4) = *(undefined4 *)(param_1[8] + lVar8 * 4);
              *(int *)(param_1 + 0x17) = iVar5;
              iVar3 = FUN_00e89234(param_1,plVar7,plVar1,lVar6,0);
              if (iVar3 != 0) goto LAB_00e89810;
            }
            if (*param_1 != 0) {
              (*(code *)param_1[0x1d])(*param_1,lVar9,0);
              param_1[2] = lVar9;
              ogg_sync_reset(param_1[4]);
            }
            if ((lVar9 < *(long *)(param_1[6] + lVar8 * 8)) ||
               (*(long *)(param_1[6] + (lVar10 >> 0x1d)) <= lVar9)) {
              *(undefined4 *)(param_1 + 0x16) = 3;
            }
          }
          else if (iVar3 != 4) {
            if (iVar3 == 5) goto LAB_00e89470;
            goto LAB_00e89810;
          }
          lVar9 = vorbis_dsp_create(plVar7);
          param_1[0x1b] = lVar9;
          *(undefined4 *)(param_1 + 0x16) = 5;
          param_1[0x18] = 0;
          param_1[0x19] = 0;
          goto LAB_00e89470;
        }
      }
      else {
        iVar5 = ogg_page_serialno(&local_90);
        iVar3 = (int)param_1[5];
        *(int *)((long)param_1 + 0xb4) = iVar5;
        if (iVar3 < 1) {
          lVar9 = 0;
        }
        else {
          lVar9 = 0;
          do {
            if (*(int *)(param_1[8] + lVar9 * 4) == iVar5) break;
            lVar9 = lVar9 + 1;
          } while (lVar9 < iVar3);
        }
        if ((int)lVar9 != iVar3) {
          *(int *)(param_1 + 0x17) = (int)lVar9;
          iVar3 = FUN_00e89234(param_1,plVar7,plVar1,lVar6,&local_90);
          if (iVar3 == 0) goto LAB_00e895f8;
        }
      }
LAB_00e89808:
      uVar13 = 0;
LAB_00e898ac:
      ogg_packet_release(&local_c0);
      ogg_page_release(&local_90);
      goto LAB_00e898bc;
    }
    iVar3 = FUN_00e88420(param_1,&local_90,0xffffffffffffffff);
    if (iVar3 < 0) goto LAB_00e89808;
    iVar3 = (int)param_1[0x16];
    param_1[0x18] = param_1[0x18] + (long)(int)uStack_88 * 8;
    if (iVar3 != 5) {
LAB_00e89514:
      if (iVar3 < 3) goto LAB_00e8955c;
      goto LAB_00e895fc;
    }
    iVar5 = *(int *)((long)param_1 + 0xb4);
    iVar4 = ogg_page_serialno(&local_90);
    iVar3 = (int)param_1[0x16];
    if (iVar5 != iVar4) {
      if (iVar3 == 5) {
        vorbis_dsp_destroy(param_1[0x1b]);
        param_1[0x1b] = 0;
        *(undefined4 *)(param_1 + 0x16) = 3;
      }
      else if (iVar3 < 3) goto LAB_00e8955c;
      vorbis_info_clear(plVar7);
      vorbis_comment_clear(plVar1);
      *(undefined4 *)(param_1 + 0x16) = 2;
      goto LAB_00e8955c;
    }
    if (iVar3 != 5) goto LAB_00e89514;
LAB_00e89470:
    ogg_stream_pagein(param_1[0x1a],&local_90);
  } while( true );
}

