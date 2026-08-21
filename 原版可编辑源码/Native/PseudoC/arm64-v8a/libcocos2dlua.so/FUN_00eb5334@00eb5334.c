
int FUN_00eb5334(long param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
                undefined8 *param_5)

{
  long lVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long local_58;
  
                    /* try { // try from 00eb5348 to 00fb534b has its CatchHandler @ 00eb538c */
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  if (2 < *(int *)(param_1 + 0xb0)) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00eb5348 with catch @ 00eb538c
                        */
    if (*(int *)(param_1 + 0xb0) == 5) {
      vorbis_dsp_destroy(*(undefined8 *)(param_1 + 0xd8));
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00eb541c with catch @ 00eb53a0
                        */
      *(undefined8 *)(param_1 + 0xd8) = 0;
      *(undefined4 *)(param_1 + 0xb0) = 3;
    }
    vorbis_info_clear(param_1 + 0x50);
    vorbis_comment_clear(param_1 + 0x88);
    *(undefined4 *)(param_1 + 0xb0) = 2;
  }
  if (param_5 == (undefined8 *)0x0) {
    lVar4 = FUN_00eb4510(param_1,&local_80,0x400);
    if (lVar4 == -0x80) {
      iVar3 = -0x80;
      goto LAB_00eb54cc;
    }
    if (lVar4 < 0) {
      iVar3 = -0x84;
      goto LAB_00eb54cc;
    }
    param_5 = &local_80;
  }
  uVar6 = *(undefined8 *)(param_1 + 0xd0);
  uVar2 = ogg_page_serialno(param_5);
  ogg_stream_reset_serialno(uVar6,uVar2);
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = (int)*(undefined8 *)(*(long *)(param_1 + 0xd0) + 0x28);
  }
  vorbis_info_init(param_2);
                    /* try { // try from 00eb53f8 to 00fb53fb has its CatchHandler @ 00eb54b0 */
  vorbis_comment_init(param_3);
  iVar5 = 0;
  do {
    ogg_stream_pagein(*(undefined8 *)(param_1 + 0xd0),param_5);
    while( true ) {
      if (2 < iVar5) {
        ogg_packet_release(&local_b0);
        ogg_page_release(&local_80);
        iVar3 = 0;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00eb5418 with catch @ 00eb5498
                        */
        uVar2 = 4;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00eb545c with catch @ 00eb549c
                        */
        goto LAB_00eb54c8;
      }
                    /* try { // try from 00eb5418 to 00fb541b has its CatchHandler @ 00eb5498 */
                    /* try { // try from 00eb541c to 00fb545b has its CatchHandler @ 00eb53a0 */
      iVar3 = ogg_stream_packetout(*(undefined8 *)(param_1 + 0xd0),&local_b0);
      if (iVar3 == -1) goto LAB_00eb545c;
      if (iVar3 == 0) break;
      iVar5 = iVar5 + 1;
      iVar3 = vorbis_dsp_headerin(param_2,param_3,&local_b0);
      if (iVar3 != 0) goto LAB_00eb54a4;
    }
    lVar4 = FUN_00eb4510(param_1,param_5,0x400);
  } while (-1 < lVar4);
LAB_00eb545c:
                    /* try { // try from 00eb545c to 00fb545f has its CatchHandler @ 00eb549c */
  iVar3 = -0x85;
LAB_00eb54a4:
  ogg_packet_release(&local_b0);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00eb53f8 with catch @ 00eb54b0
                        */
  ogg_page_release(&local_80);
  vorbis_info_clear(param_2);
  vorbis_comment_clear(param_3);
  uVar2 = 2;
LAB_00eb54c8:
  *(undefined4 *)(param_1 + 0xb0) = uVar2;
LAB_00eb54cc:
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar3;
}

