
undefined8 ov_clear(long *param_1)

{
  if (param_1 != (long *)0x0) {
    vorbis_dsp_destroy(param_1[0x1b]);
    param_1[0x1b] = 0;
    ogg_stream_destroy(param_1[0x1a]);
    vorbis_info_clear(param_1 + 10);
    vorbis_comment_clear(param_1 + 0x11);
    if ((void *)param_1[7] != (void *)0x0) {
      free((void *)param_1[7]);
    }
    if ((void *)param_1[9] != (void *)0x0) {
      free((void *)param_1[9]);
    }
    if ((void *)param_1[8] != (void *)0x0) {
      free((void *)param_1[8]);
    }
    if ((void *)param_1[6] != (void *)0x0) {
      free((void *)param_1[6]);
    }
    ogg_sync_destroy(param_1[4]);
    if (*param_1 != 0) {
      (*(code *)param_1[0x1e])();
    }
    param_1[0x1d] = 0;
    param_1[0x1c] = 0;
    param_1[0x1f] = 0;
    param_1[0x1e] = 0;
    param_1[0x19] = 0;
    param_1[0x18] = 0;
    param_1[0x1b] = 0;
    param_1[0x1a] = 0;
    param_1[0x15] = 0;
    param_1[0x14] = 0;
    param_1[0x17] = 0;
    param_1[0x16] = 0;
    param_1[0x11] = 0;
    param_1[0x10] = 0;
    param_1[0x13] = 0;
    param_1[0x12] = 0;
    param_1[0xd] = 0;
    param_1[0xc] = 0;
    param_1[0xf] = 0;
    param_1[0xe] = 0;
    param_1[9] = 0;
    param_1[8] = 0;
    param_1[0xb] = 0;
    param_1[10] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
  }
  return 0;
}

