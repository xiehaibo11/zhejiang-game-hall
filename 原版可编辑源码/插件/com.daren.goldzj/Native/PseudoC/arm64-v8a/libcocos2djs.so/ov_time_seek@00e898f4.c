
undefined8 ov_time_seek(long *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  
  lVar2 = ov_pcm_total(param_1,0xffffffff);
  lVar3 = ov_time_total(param_1,0xffffffff);
  iVar1 = (int)param_1[0x16];
  if (iVar1 < 2) {
    return 0xffffff7d;
  }
  if ((int)param_1[1] == 0) {
    return 0xffffff76;
  }
  if (param_2 < 0) {
    return 0xffffff7d;
  }
  if (lVar3 < param_2) {
    return 0xffffff7d;
  }
  iVar6 = (int)param_1[5];
  lVar7 = (long)iVar6 << 0x20;
  iVar9 = iVar6 * 2 + -1;
  lVar8 = (long)iVar6;
  do {
    iVar6 = iVar6 + -1;
    lVar7 = lVar7 + -0x100000000;
    if (lVar8 < 1) break;
    lVar2 = lVar2 - *(long *)(param_1[9] + (long)iVar9 * 8);
    lVar4 = ov_time_total(param_1,iVar6);
    lVar3 = lVar3 - lVar4;
    iVar9 = iVar9 + -2;
    lVar8 = lVar8 + -1;
  } while (param_2 < lVar3);
  if ((int)param_1[0x17] == iVar6) {
    if (2 < iVar1) goto LAB_00e89aa4;
  }
  else {
    if (iVar1 == 5) {
      vorbis_dsp_destroy(param_1[0x1b]);
      param_1[0x1b] = 0;
      *(undefined4 *)(param_1 + 0x16) = 3;
    }
    else if (iVar1 < 3) goto LAB_00e89a18;
    vorbis_info_clear(param_1 + 10);
    vorbis_comment_clear(param_1 + 0x11);
    *(undefined4 *)(param_1 + 0x16) = 2;
  }
LAB_00e89a18:
  if (*param_1 != 0) {
    lVar8 = *(long *)(param_1[6] + (lVar7 >> 0x1d));
    (*(code *)param_1[0x1d])(*param_1,lVar8,0);
    param_1[2] = lVar8;
    ogg_sync_reset(param_1[4]);
  }
  lVar7 = (lVar7 >> 0x20) * 4;
  ogg_stream_reset_serialno(param_1[0x1a],*(undefined4 *)(param_1[8] + lVar7));
  *(undefined4 *)((long)param_1 + 0xb4) = *(undefined4 *)(param_1[8] + lVar7);
  *(int *)(param_1 + 0x17) = iVar6;
  uVar5 = FUN_00e89234(param_1,param_1 + 10,param_1 + 0x11,(long)param_1 + 0xb4,0);
  if ((int)uVar5 != 0) {
    return uVar5;
  }
LAB_00e89aa4:
  uVar5 = ov_pcm_seek(param_1,(param_1[0xb] * (param_2 - lVar3)) / 1000 + lVar2);
  return uVar5;
}

