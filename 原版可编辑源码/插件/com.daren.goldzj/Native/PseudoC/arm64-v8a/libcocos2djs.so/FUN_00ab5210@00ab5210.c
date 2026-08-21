
void FUN_00ab5210(long param_1,int param_2)

{
  undefined8 *puVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  if ((*(byte *)(param_1 + 0xc79) >> 2 & 1) != 0) {
    lVar6 = (long)param_2;
    lVar7 = param_1 + lVar6 * 0x6f8;
                    /* try { // try from 00ab5244 to 00bb531b has its CatchHandler @ 00ab539c */
    if (*(long *)(lVar7 + 0x130) != 0) {
      if (*(int *)(param_1 + 0xc5c) != 0) {
        lVar5 = param_1 + lVar6 * 0x6f8;
        uv_signal_stop(lVar5 + 0x708);
        lVar8 = 0;
        lVar5 = lVar5 + 0x138;
        lVar2 = 5;
        if ((*(byte *)(param_1 + 0xc7a) & 4) != 0) {
          lVar2 = 2;
        }
        do {
          uv_signal_stop(lVar5);
          uv_close(lVar5,FUN_00ab53ac);
          lVar8 = lVar8 + 1;
          lVar5 = lVar5 + 0x98;
        } while (lVar8 < lVar2);
      }
      lVar5 = param_1 + lVar6 * 0x6f8;
      lVar8 = lVar5 + 0x5f8;
      puVar1 = (undefined8 *)(lVar7 + 0x130);
      uv_timer_stop(lVar8);
      uv_close(lVar8,FUN_00ab53ac);
      lVar5 = lVar5 + 0x690;
      uv_idle_stop(lVar5);
      uv_close(lVar5,FUN_00ab53ac);
      iVar4 = -100;
      do {
        iVar3 = uv_run(*puVar1,2);
        if (iVar3 == 0) break;
        iVar4 = iVar4 + 1;
      } while (iVar4 != 0);
      if ((*(byte *)(param_1 + lVar6 * 0x6f8 + 0x7a8) & 1) == 0) {
        uv_stop(*puVar1);
                    /* try { // try from 00ab5320 to 00bb5323 has its CatchHandler @ 00ab5384 */
                    /* try { // try from 00ab5328 to 00bb532f has its CatchHandler @ 00ab539c */
        uv_walk(*puVar1,FUN_00ab51d4,0);
        do {
                    /* try { // try from 00ab5334 to 00bb5337 has its CatchHandler @ 00ab5380 */
          iVar4 = uv_run(*puVar1,2);
        } while (iVar4 != 0);
                    /* try { // try from 00ab5344 to 00bb5367 has its CatchHandler @ 00ab539c */
        iVar4 = uv_loop_close(*puVar1);
        if (iVar4 == -0x10) {
                    /* try { // try from 00ab5368 to 00bb541b has its CatchHandler @ 00ab51d8 */
          _lws_log(1,"%s: uv_loop_close: UV_EBUSY\n","lws_libuv_destroyloop");
        }
                    /* catch() { ... } // from try @ 00ab5334 with catch @ 00ab5380 */
                    /* catch() { ... } // from try @ 00ab5320 with catch @ 00ab5384 */
        thunk_FUN_00aa8a48(*puVar1,0,"lws_free");
        return;
      }
    }
  }
                    /* catch() { ... } // from try @ 00ab5244 with catch @ 00ab539c
                       catch() { ... } // from try @ 00ab5328 with catch @ 00ab539c
                       catch() { ... } // from try @ 00ab5344 with catch @ 00ab539c */
  return;
}

