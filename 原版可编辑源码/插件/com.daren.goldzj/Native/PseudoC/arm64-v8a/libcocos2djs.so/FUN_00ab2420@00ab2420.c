
long * FUN_00ab2420(long *param_1,void *param_2,ulong param_3)

{
  int iVar1;
  void *__dest;
  long lVar2;
  
                    /* try { // try from 00ab2434 to 00bb248b has its CatchHandler @ 00ab2434
                       catch() { ... } // from try @ 00ab2434 with catch @ 00ab2434
                       catch() { ... } // from try @ 00ab2510 with catch @ 00ab2434
                       catch() { ... } // from try @ 00ab254c with catch @ 00ab2434 */
  if (param_1 == (long *)0x0) {
    return (long *)0x0;
  }
  if (param_2 == (void *)0x0) {
    return param_1;
  }
  if (param_3 == 0) {
    return param_1;
  }
  if (param_3 < 0x801) {
    lVar2 = *param_1;
    if (lVar2 == 0) {
      iVar1 = FUN_00aa50ac(param_1,0);
      if (iVar1 != 0) {
                    /* try { // try from 00ab2544 to 00bb254b has its CatchHandler @ 00ab2608 */
        _lws_log(1,"%s: deferring handling ah\n","adopt_socket_readbuf");
                    /* try { // try from 00ab254c to 00bb268f has its CatchHandler @ 00ab2434 */
        __dest = (void *)thunk_FUN_00aa8a48(0,param_3,"preamble_rx");
        param_1[2] = (long)__dest;
        if (__dest != (void *)0x0) {
          memcpy(__dest,param_2,param_3);
          *(int *)(param_1 + 4) = (int)param_3;
          return param_1;
        }
        _lws_log(1,"OOM\n");
        goto LAB_00ab2468;
      }
      lVar2 = *param_1;
    }
                    /* try { // try from 00ab248c to 00bb24a7 has its CatchHandler @ 00ab2674 */
    memcpy((void *)(lVar2 + 0x35b),param_2,param_3);
    *(short *)(lVar2 + 0xb5e) = (short)param_3;
    *(undefined2 *)(lVar2 + 0xb5c) = 0;
    _lws_log(4,"%s: calling service on readbuf ah\n","adopt_socket_readbuf");
                    /* try { // try from 00ab24d0 to 00bb24d7 has its CatchHandler @ 00ab2630 */
    lVar2 = *(long *)(param_1[0x44] + (ulong)*(byte *)((long)param_1 + 0x304) * 0x6f8 + 0xe0) +
            (long)*(int *)((long)param_1 + 0x2d4) * 8;
    *(ushort *)(lVar2 + 6) = *(ushort *)(lVar2 + 6) | 1;
    _lws_log(1,"%s: calling service\n","adopt_socket_readbuf");
                    /* try { // try from 00ab2500 to 00bb250f has its CatchHandler @ 00ab2614 */
    iVar1 = lws_service_fd_tsi(param_1[0x44],lVar2,*(undefined1 *)((long)param_1 + 0x304));
    if (iVar1 != 0) {
      param_1 = (long *)0x0;
    }
  }
  else {
    _lws_log(1,"%s: rx in too big\n","adopt_socket_readbuf");
LAB_00ab2468:
    FUN_00a9f034(param_1,0);
    param_1 = (long *)0x0;
  }
                    /* try { // try from 00ab2510 to 00bb2543 has its CatchHandler @ 00ab2434 */
  return param_1;
}

