
ulong FUN_00e87568(long *param_1)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  void *pvVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if ((int)param_1[0x16] < 2) {
    *(undefined4 *)(param_1 + 0x16) = 2;
  }
  if ((int)param_1[1] == 0) {
    uVar6 = 0;
    goto LAB_00e878f4;
  }
  iVar4 = *(int *)((long)param_1 + 0xb4);
  lVar11 = param_1[2];
  uStack_d8 = 0;
  local_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  (*(code *)param_1[0x1d])(*param_1,0,2);
  lVar5 = (*(code *)param_1[0x1f])(*param_1);
  param_1[2] = lVar5;
  param_1[3] = lVar5;
  uVar6 = FUN_00e88ac8(param_1,&local_e0);
  if ((long)uVar6 < 0) {
LAB_00e878e4:
    if ((int)uVar6 == 0) goto LAB_00e878f4;
  }
  else {
    iVar3 = ogg_page_serialno(&local_e0);
    ogg_page_release(&local_e0);
    if (iVar3 == iVar4) {
      iVar4 = FUN_00e8a1cc(param_1,0,uVar6,uVar6 + 1,iVar4,0);
      if (iVar4 == 0) {
LAB_00e8765c:
        uStack_88 = 0;
        local_90 = 0;
        uStack_78 = 0;
        uStack_80 = 0;
        iVar4 = (int)param_1[5];
        pvVar7 = malloc((long)iVar4 << 3);
        param_1[7] = (long)pvVar7;
        pvVar7 = malloc((long)iVar4 << 4);
        param_1[9] = (long)pvVar7;
        if (0 < iVar4) {
          plVar1 = param_1 + 10;
          lVar5 = 0;
          do {
            if (lVar5 == 0) {
              plVar10 = (long *)param_1[7];
              *plVar10 = lVar11;
              if (*param_1 != 0) {
                (*(code *)param_1[0x1d])(*param_1,lVar11,0);
                param_1[2] = lVar11;
                ogg_sync_reset(param_1[4]);
                plVar10 = (long *)param_1[7];
              }
            }
            else {
              if (*param_1 != 0) {
                lVar12 = *(long *)(param_1[6] + lVar5 * 8);
                (*(code *)param_1[0x1d])(*param_1,lVar12,0);
                param_1[2] = lVar12;
                ogg_sync_reset(param_1[4]);
              }
              iVar4 = FUN_00e89234(param_1,plVar1,param_1 + 0x11,0,0);
              if (iVar4 < 0) {
                plVar10 = (long *)param_1[7];
                lVar12 = -1;
              }
              else {
                lVar12 = param_1[2];
                plVar10 = (long *)param_1[7];
              }
              plVar10[lVar5] = lVar12;
            }
            if (plVar10[lVar5] != -1) {
              ogg_stream_reset_serialno(param_1[0x1a],*(undefined4 *)(param_1[8] + lVar5 * 4));
              uVar6 = 0;
              lVar12 = -1;
              do {
                uStack_a8 = 0;
                local_b0 = 0;
                uStack_98 = 0;
                uStack_a0 = 0;
                uStack_b8 = 0;
                local_c0 = 0;
                lVar8 = FUN_00e88420(param_1,&local_90,0xffffffffffffffff);
                if ((lVar8 < 0) ||
                   (iVar4 = ogg_page_serialno(&local_90), iVar4 != *(int *)(param_1[8] + lVar5 * 4))
                   ) goto LAB_00e87818;
                lVar8 = ogg_page_granulepos(&local_90);
                ogg_stream_pagein(param_1[0x1a],&local_90);
                iVar4 = ogg_stream_packetout(param_1[0x1a],&local_c0);
                while (iVar4 != 0) {
                  lVar9 = lVar12;
                  if ((0 < iVar4) &&
                     (lVar9 = vorbis_packet_blocksize(plVar1,&local_c0), lVar12 != -1)) {
                    uVar6 = uVar6 + (lVar9 + lVar12 >> 2);
                  }
                  iVar4 = ogg_stream_packetout(param_1[0x1a],&local_c0);
                  lVar12 = lVar9;
                }
                ogg_packet_release(&local_c0);
              } while (lVar8 == -1);
              uVar6 = lVar8 - uVar6;
LAB_00e87818:
              *(ulong *)(param_1[9] + lVar5 * 0x10) =
                   uVar6 & ((long)uVar6 >> 0x3f ^ 0xffffffffffffffffU);
            }
            lVar12 = lVar5 + 1;
            if (*param_1 != 0) {
              lVar8 = *(long *)(param_1[6] + lVar12 * 8);
              (*(code *)param_1[0x1d])(*param_1,lVar8,0);
              param_1[2] = lVar8;
              ogg_sync_reset(param_1[4]);
            }
            while (lVar8 = FUN_00e88ac8(param_1,&local_90), -1 < lVar8) {
              lVar9 = ogg_page_granulepos(&local_90);
              if (lVar9 != -1) {
                lVar8 = ogg_page_granulepos(&local_90);
                *(long *)(param_1[9] + (lVar5 << 4 | 8U)) =
                     lVar8 - *(long *)(param_1[9] + lVar5 * 0x10);
                goto LAB_00e878bc;
              }
              param_1[2] = lVar8;
            }
            vorbis_info_clear(plVar1);
            vorbis_comment_clear(param_1 + 0x11);
LAB_00e878bc:
            lVar5 = lVar12;
          } while (lVar12 < (int)param_1[5]);
        }
        ogg_page_release(&local_90);
        uVar6 = ov_raw_seek(param_1,0);
        uVar6 = uVar6 & 0xffffffff;
        goto LAB_00e878e4;
      }
    }
    else {
      iVar4 = FUN_00e8a1cc(param_1,0,0,uVar6 + 1,iVar4,0);
      if (-1 < iVar4) goto LAB_00e8765c;
    }
    uVar6 = 0xffffff80;
  }
  *param_1 = 0;
  ov_clear(param_1);
LAB_00e878f4:
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return uVar6 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

