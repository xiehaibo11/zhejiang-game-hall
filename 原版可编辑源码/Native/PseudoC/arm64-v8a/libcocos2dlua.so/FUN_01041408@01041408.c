
void FUN_01041408(long param_1)

{
  byte bVar1;
  long *plVar2;
  long lVar3;
  
  if (param_1 == 0) {
    return;
  }
  lVar3 = *(long *)(param_1 + 0x220);
  bVar1 = *(byte *)(param_1 + 0x304);
  if ((((*(long *)(param_1 + 0x248) != 0) && (*(long *)(*(long *)(param_1 + 0x248) + 0x10) != 0)) &&
      (*(long *)(param_1 + 0x270) != 0)) && ((*(byte *)(param_1 + 0x2f4) >> 5 & 1) == 0)) {
    thunk_FUN_0104b1cc(*(long *)(param_1 + 0x270),0,"lws_free");
  }
  thunk_FUN_0104b1cc(*(undefined8 *)(param_1 + 0x280),0,"free");
  *(undefined8 *)(param_1 + 0x280) = 0;
  thunk_FUN_0104b1cc(*(undefined8 *)(param_1 + 0x288),0,"free");
  *(undefined8 *)(param_1 + 0x288) = 0;
  FUN_01047a8c(param_1);
  FUN_01047ae8(param_1,0);
  if (*(long *)(*(long *)(param_1 + 0x228) + 0x168) == param_1) {
    *(undefined8 *)(*(long *)(param_1 + 0x228) + 0x168) = 0;
  }
  plVar2 = *(long **)(lVar3 + (ulong)bVar1 * 0x6f8 + 0x110);
  do {
    if (plVar2 == (long *)0x0) {
      lws_ssl_remove_wsi_from_buffered_list(param_1);
      plVar2 = *(long **)(param_1 + 0x268);
      if (plVar2 != (long *)0x0) {
LAB_010414ec:
        lVar3 = *(long *)(param_1 + 0x260);
        if (lVar3 != 0) {
          *(long **)(lVar3 + 0x268) = plVar2;
          plVar2 = *(long **)(param_1 + 0x268);
        }
        *plVar2 = lVar3;
        *(undefined8 *)(param_1 + 0x260) = 0;
        *(undefined8 *)(param_1 + 0x268) = 0;
      }
LAB_01041508:
                    /* try { // try from 01041518 to 01141527 has its CatchHandler @ 01041560 */
      *(int *)(*(long *)(param_1 + 0x220) + 0xc70) =
           *(int *)(*(long *)(param_1 + 0x220) + 0xc70) + -1;
                    /* try { // try from 01041528 to 0114157b has its CatchHandler @ 010413a8 */
      thunk_FUN_0104b1cc(param_1,0,"lws_free");
      return;
    }
    if ((*(char *)((long)plVar2 + 0xb8a) != '\0') && (plVar2[1] == param_1)) {
                    /* catch() { ... } // from try @ 01041518 with catch @ 01041560 */
      _lws_log(1,"%s: ah leak: wsi %p\n","lws_free_wsi",param_1);
      *(undefined1 *)((long)plVar2 + 0xb8a) = 0;
      plVar2[1] = 0;
      lVar3 = lVar3 + (ulong)bVar1 * 0x6f8;
      *(short *)(lVar3 + 2000) = *(short *)(lVar3 + 2000) + -1;
      lws_ssl_remove_wsi_from_buffered_list(param_1);
      plVar2 = *(long **)(param_1 + 0x268);
      if (plVar2 == (long *)0x0) goto LAB_01041508;
      goto LAB_010414ec;
    }
    plVar2 = (long *)*plVar2;
  } while( true );
}

