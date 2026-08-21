
void FUN_01057994(long param_1,int param_2)

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
                    /* try { // try from 010579c8 to 01157a47 has its CatchHandler @ 010579c8
                       catch() { ... } // from try @ 010579c8 with catch @ 010579c8
                       catch() { ... } // from try @ 01057b20 with catch @ 010579c8 */
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
          uv_close(lVar5,FUN_01057b30);
          lVar8 = lVar8 + 1;
          lVar5 = lVar5 + 0x98;
        } while (lVar8 < lVar2);
      }
      lVar5 = param_1 + lVar6 * 0x6f8;
      lVar8 = lVar5 + 0x5f8;
      puVar1 = (undefined8 *)(lVar7 + 0x130);
      uv_timer_stop(lVar8);
                    /* try { // try from 01057a48 to 01157a5b has its CatchHandler @ 01057bd4 */
      uv_close(lVar8,FUN_01057b30);
      lVar5 = lVar5 + 0x690;
      uv_idle_stop(lVar5);
      uv_close(lVar5,FUN_01057b30);
      iVar4 = -100;
      do {
                    /* try { // try from 01057a78 to 01157a83 has its CatchHandler @ 01057bb4 */
        iVar3 = uv_run(*puVar1,2);
        if (iVar3 == 0) break;
        iVar4 = iVar4 + 1;
      } while (iVar4 != 0);
      if ((*(byte *)(param_1 + lVar6 * 0x6f8 + 0x7a8) & 1) == 0) {
                    /* try { // try from 01057aa0 to 01157aa7 has its CatchHandler @ 01057b80 */
        uv_stop(*puVar1);
        uv_walk(*puVar1,FUN_01057958,0);
        do {
          iVar4 = uv_run(*puVar1,2);
        } while (iVar4 != 0);
        iVar4 = uv_loop_close(*puVar1);
        if (iVar4 == -0x10) {
                    /* try { // try from 01057aec to 01157b1f has its CatchHandler @ 01057be8 */
          _lws_log(1,"%s: uv_loop_close: UV_EBUSY\n","lws_libuv_destroyloop");
        }
        thunk_FUN_0104b1cc(*puVar1,0,"lws_free");
        return;
      }
    }
  }
                    /* try { // try from 01057b20 to 01157c03 has its CatchHandler @ 010579c8 */
  return;
}

