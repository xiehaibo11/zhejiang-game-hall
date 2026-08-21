
ulong FUN_00eb3700(long *param_1)

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
    goto LAB_00eb3a9c;
  }
  iVar4 = *(int *)((long)param_1 + 0xb4);
                    /* try { // try from 00eb3754 to 00fb3757 has its CatchHandler @ 00eb385c */
  lVar11 = param_1[2];
                    /* try { // try from 00eb3758 to 00fb37c7 has its CatchHandler @ 00eb35e4 */
  uStack_d8 = 0;
  local_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  (*(code *)param_1[0x1d])(*param_1,0,2);
  lVar5 = (*(code *)param_1[0x1f])(*param_1);
  param_1[2] = lVar5;
  param_1[3] = lVar5;
  uVar6 = FUN_00eb4bc4(param_1,&local_e0);
  if ((long)uVar6 < 0) {
LAB_00eb3a8c:
    if ((int)uVar6 == 0) goto LAB_00eb3a9c;
  }
  else {
    iVar3 = ogg_page_serialno(&local_e0);
    ogg_page_release(&local_e0);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00eb3640 with catch @ 00eb37b0
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00eb36b4 with catch @ 00eb37b4
                        */
    if (iVar3 == iVar4) {
                    /* try { // try from 00eb37c8 to 00fb37cb has its CatchHandler @ 00eb3828 */
      iVar4 = FUN_00eb62e8(param_1,0,uVar6,uVar6 + 1,iVar4,0);
      if (iVar4 == 0) {
LAB_00eb37f4:
        uStack_88 = 0;
        local_90 = 0;
        uStack_78 = 0;
        uStack_80 = 0;
        iVar4 = (int)param_1[5];
                    /* try { // try from 00eb3800 to 00fb3803 has its CatchHandler @ 00eb383c */
                    /* try { // try from 00eb3804 to 00fb386f has its CatchHandler @ 00eb35e4 */
        pvVar7 = malloc((long)iVar4 << 3);
        param_1[7] = (long)pvVar7;
        pvVar7 = malloc((long)iVar4 << 4);
        param_1[9] = (long)pvVar7;
        if (0 < iVar4) {
          lVar5 = 0;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00eb37c8 with catch @ 00eb3828
                        */
          plVar1 = param_1 + 10;
LAB_00eb38b0:
          plVar10 = (long *)param_1[7];
          *plVar10 = lVar11;
          lVar12 = lVar5;
          if (*param_1 != 0) {
            (*(code *)param_1[0x1d])(*param_1,lVar11,0);
            param_1[2] = lVar11;
            ogg_sync_reset(param_1[4]);
            plVar10 = (long *)param_1[7];
          }
          do {
            if (plVar10[lVar12] != -1) {
              ogg_stream_reset_serialno(param_1[0x1a],*(undefined4 *)(param_1[8] + lVar12 * 4));
              uVar6 = 0;
              lVar5 = -1;
              do {
                    /* try { // try from 00eb3940 to 00fb3963 has its CatchHandler @ 00eb3a5c */
                uStack_a8 = 0;
                local_b0 = 0;
                uStack_98 = 0;
                uStack_a0 = 0;
                uStack_b8 = 0;
                local_c0 = 0;
                lVar8 = FUN_00eb4510(param_1,&local_90,0xffffffffffffffff);
                    /* try { // try from 00eb3964 to 00fb3a77 has its CatchHandler @ 00eb3870 */
                if ((lVar8 < 0) ||
                   (iVar4 = ogg_page_serialno(&local_90), iVar4 != *(int *)(param_1[8] + lVar12 * 4)
                   )) goto LAB_00eb39e4;
                lVar8 = ogg_page_granulepos(&local_90);
                ogg_stream_pagein(param_1[0x1a],&local_90);
                iVar4 = ogg_stream_packetout(param_1[0x1a],&local_c0);
                while (iVar4 != 0) {
                  lVar9 = lVar5;
                  if ((0 < iVar4) &&
                     (lVar9 = vorbis_packet_blocksize(plVar1,&local_c0), lVar5 != -1)) {
                    uVar6 = uVar6 + (lVar9 + lVar5 >> 2);
                  }
                  iVar4 = ogg_stream_packetout(param_1[0x1a],&local_c0);
                  lVar5 = lVar9;
                }
                ogg_packet_release(&local_c0);
              } while (lVar8 == -1);
              uVar6 = lVar8 - uVar6;
LAB_00eb39e4:
              *(ulong *)(param_1[9] + lVar12 * 0x10) =
                   uVar6 & ((long)uVar6 >> 0x3f ^ 0xffffffffffffffffU);
            }
            lVar5 = lVar12 + 1;
            if (*param_1 != 0) {
              lVar8 = *(long *)(param_1[6] + lVar5 * 8);
              (*(code *)param_1[0x1d])(*param_1,lVar8,0);
              param_1[2] = lVar8;
              ogg_sync_reset(param_1[4]);
            }
            while (lVar8 = FUN_00eb4bc4(param_1,&local_90), -1 < lVar8) {
              lVar9 = ogg_page_granulepos(&local_90);
              if (lVar9 != -1) {
                lVar8 = ogg_page_granulepos(&local_90);
                    /* catch() { ... } // from try @ 00eb3940 with catch @ 00eb3a5c */
                *(long *)(param_1[9] + (lVar12 << 4 | 8U)) =
                     lVar8 - *(long *)(param_1[9] + lVar12 * 0x10);
                goto LAB_00eb3848;
              }
              param_1[2] = lVar8;
            }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00eb3800 with catch @ 00eb383c
                        */
            vorbis_info_clear(plVar1);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00eb3658 with catch @ 00eb3840
                        */
            vorbis_comment_clear(param_1 + 0x11);
LAB_00eb3848:
            if ((int)param_1[5] <= lVar5) break;
            if (lVar5 == 0) goto LAB_00eb38b0;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00eb3754 with catch @ 00eb385c
                        */
            if (*param_1 != 0) {
              lVar12 = *(long *)(param_1[6] + lVar5 * 8);
                    /* try { // try from 00eb3870 to 00fb393f has its CatchHandler @ 00eb3870
                       catch() { ... } // from try @ 00eb3870 with catch @ 00eb3870
                       catch() { ... } // from try @ 00eb3964 with catch @ 00eb3870 */
              (*(code *)param_1[0x1d])(*param_1,lVar12,0);
              param_1[2] = lVar12;
              ogg_sync_reset(param_1[4]);
            }
            iVar4 = FUN_00eb5334(param_1,plVar1,param_1 + 0x11,0,0);
            if (iVar4 < 0) {
              plVar10 = (long *)param_1[7];
              lVar12 = -1;
            }
            else {
              lVar12 = param_1[2];
              plVar10 = (long *)param_1[7];
            }
            plVar10[lVar5] = lVar12;
            lVar12 = lVar5;
          } while( true );
        }
        ogg_page_release(&local_90);
        uVar6 = ov_raw_seek(param_1,0);
        uVar6 = uVar6 & 0xffffffff;
        goto LAB_00eb3a8c;
      }
    }
    else {
      iVar4 = FUN_00eb62e8(param_1,0,0,uVar6 + 1,iVar4,0);
      if (-1 < iVar4) goto LAB_00eb37f4;
    }
    uVar6 = 0xffffff80;
  }
  *param_1 = 0;
  ov_clear(param_1);
LAB_00eb3a9c:
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar6 & 0xffffffff;
}

