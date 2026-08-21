
long * ov_info(long *param_1,int param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  if ((int)param_1[1] == 0) goto LAB_00e89f5c;
  if ((int)param_1[5] <= param_2) {
    return (long *)0x0;
  }
  if (param_2 < 0) goto LAB_00e89f5c;
  lVar2 = param_1[2];
  iVar1 = (int)param_1[0x16];
  if ((int)param_1[0x17] == param_2) {
    if (iVar1 < 3) goto LAB_00e89e98;
  }
  else {
    if (iVar1 == 5) {
      vorbis_dsp_destroy(param_1[0x1b]);
      param_1[0x1b] = 0;
      *(undefined4 *)(param_1 + 0x16) = 3;
    }
    else if (iVar1 < 3) goto LAB_00e89e98;
    vorbis_info_clear(param_1 + 10);
    vorbis_comment_clear(param_1 + 0x11);
    *(undefined4 *)(param_1 + 0x16) = 2;
LAB_00e89e98:
    if (*param_1 != 0) {
      lVar3 = *(long *)(param_1[6] + (long)param_2 * 8);
      (*(code *)param_1[0x1d])(*param_1,lVar3,0);
      param_1[2] = lVar3;
      ogg_sync_reset(param_1[4]);
    }
    ogg_stream_reset_serialno(param_1[0x1a],*(undefined4 *)(param_1[8] + (long)param_2 * 4));
    *(undefined4 *)((long)param_1 + 0xb4) = *(undefined4 *)(param_1[8] + (long)param_2 * 4);
    *(int *)(param_1 + 0x17) = param_2;
    iVar1 = FUN_00e89234(param_1,param_1 + 10,param_1 + 0x11,(long)param_1 + 0xb4,0);
    if (iVar1 != 0) {
      return (long *)0x0;
    }
  }
  if (*param_1 != 0) {
    (*(code *)param_1[0x1d])(*param_1,lVar2,0);
    param_1[2] = lVar2;
    ogg_sync_reset(param_1[4]);
  }
  if ((lVar2 < *(long *)(param_1[6] + (long)param_2 * 8)) ||
     (*(long *)(param_1[6] + (long)param_2 * 8 + 8) <= lVar2)) {
    *(undefined4 *)(param_1 + 0x16) = 3;
  }
LAB_00e89f5c:
  return param_1 + 10;
}

