
undefined8 ov_clear(long *param_1)

{
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00eb3280 with catch @ 00eb34d8
                        */
  if (param_1 != (long *)0x0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00eb3430 with catch @ 00eb34dc
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00eb3354 with catch @ 00eb34e0
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00eb3340 with catch @ 00eb34e4
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00eb3368 with catch @ 00eb34e8
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00eb3320 with catch @ 00eb34ec
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00eb33bc with catch @ 00eb34f0
                        */
    vorbis_dsp_destroy(param_1[0x1b]);
    param_1[0x1b] = 0;
    ogg_stream_destroy(param_1[0x1a]);
                    /* try { // try from 00eb3504 to 00fb3507 has its CatchHandler @ 00eb3548 */
    vorbis_info_clear(param_1 + 10);
                    /* try { // try from 00eb3508 to 00fb355f has its CatchHandler @ 00eb3208 */
    vorbis_comment_clear(param_1 + 0x11);
    if ((void *)param_1[7] != (void *)0x0) {
      free((void *)param_1[7]);
    }
    if ((void *)param_1[9] != (void *)0x0) {
      free((void *)param_1[9]);
    }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00eb3298 with catch @ 00eb352c
                        */
    if ((void *)param_1[8] != (void *)0x0) {
      free((void *)param_1[8]);
    }
    if ((void *)param_1[6] != (void *)0x0) {
      free((void *)param_1[6]);
    }
    ogg_sync_destroy(param_1[4]);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00eb3504 with catch @ 00eb3548
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00eb3470 with catch @ 00eb354c
                        */
    if (*param_1 != 0) {
      (*(code *)param_1[0x1e])();
    }
    param_1[0x1d] = 0;
    param_1[0x1c] = 0;
    param_1[0x1f] = 0;
    param_1[0x1e] = 0;
                    /* catch() { ... } // from try @ 00eb358c with catch @ 00eb3560 */
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
                    /* try { // try from 00eb3584 to 00fb358b has its CatchHandler @ 00eb35c8 */
  return 0;
}

