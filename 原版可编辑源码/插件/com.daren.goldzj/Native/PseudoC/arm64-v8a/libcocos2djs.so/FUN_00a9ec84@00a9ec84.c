
void FUN_00a9ec84(long param_1)

{
  byte bVar1;
  long *plVar2;
  long lVar3;
  
                    /* try { // try from 00a9ec84 to 00b9ecb3 has its CatchHandler @ 00a9eb44 */
  if (param_1 == 0) {
    return;
  }
  lVar3 = *(long *)(param_1 + 0x220);
  bVar1 = *(byte *)(param_1 + 0x304);
                    /* try { // try from 00a9ecb4 to 00b9ecbf has its CatchHandler @ 00a9ed1c */
                    /* try { // try from 00a9ecc0 to 00b9ed0b has its CatchHandler @ 00a9eb44 */
  if ((((*(long *)(param_1 + 0x248) != 0) && (*(long *)(*(long *)(param_1 + 0x248) + 0x10) != 0)) &&
      (*(long *)(param_1 + 0x270) != 0)) && ((*(byte *)(param_1 + 0x2f4) >> 5 & 1) == 0)) {
    thunk_FUN_00aa8a48(*(long *)(param_1 + 0x270),0,"lws_free");
  }
  thunk_FUN_00aa8a48(*(undefined8 *)(param_1 + 0x280),0,"free");
  *(undefined8 *)(param_1 + 0x280) = 0;
  thunk_FUN_00aa8a48(*(undefined8 *)(param_1 + 0x288),0,"free");
  *(undefined8 *)(param_1 + 0x288) = 0;
  FUN_00aa5308(param_1);
                    /* try { // try from 00a9ed0c to 00b9ed17 has its CatchHandler @ 00a9ed18 */
  FUN_00aa5364(param_1,0);
                    /* catch() { ... } // from try @ 00a9eb7c with catch @ 00a9ed18
                       catch() { ... } // from try @ 00a9ed0c with catch @ 00a9ed18
                       try { // try from 00a9ed18 to 00b9ed3b has its CatchHandler @ 00a9eb44 */
                    /* catch() { ... } // from try @ 00a9ecb4 with catch @ 00a9ed1c */
                    /* catch() { ... } // from try @ 00a9ebd0 with catch @ 00a9ed20 */
  if (*(long *)(*(long *)(param_1 + 0x228) + 0x168) == param_1) {
    *(undefined8 *)(*(long *)(param_1 + 0x228) + 0x168) = 0;
  }
  plVar2 = *(long **)(lVar3 + (ulong)bVar1 * 0x6f8 + 0x110);
  do {
    if (plVar2 == (long *)0x0) {
      lws_ssl_remove_wsi_from_buffered_list(param_1);
      plVar2 = *(long **)(param_1 + 0x268);
      if (plVar2 != (long *)0x0) {
LAB_00a9ed68:
        lVar3 = *(long *)(param_1 + 0x260);
        if (lVar3 != 0) {
          *(long **)(lVar3 + 0x268) = plVar2;
          plVar2 = *(long **)(param_1 + 0x268);
        }
        *plVar2 = lVar3;
        *(undefined8 *)(param_1 + 0x260) = 0;
        *(undefined8 *)(param_1 + 0x268) = 0;
      }
LAB_00a9ed84:
      *(int *)(*(long *)(param_1 + 0x220) + 0xc70) =
           *(int *)(*(long *)(param_1 + 0x220) + 0xc70) + -1;
      thunk_FUN_00aa8a48(param_1,0,"lws_free");
      return;
    }
    if ((*(char *)((long)plVar2 + 0xb8a) != '\0') && (plVar2[1] == param_1)) {
      _lws_log(1,"%s: ah leak: wsi %p\n","lws_free_wsi",param_1);
      *(undefined1 *)((long)plVar2 + 0xb8a) = 0;
      plVar2[1] = 0;
      lVar3 = lVar3 + (ulong)bVar1 * 0x6f8;
      *(short *)(lVar3 + 2000) = *(short *)(lVar3 + 2000) + -1;
      lws_ssl_remove_wsi_from_buffered_list(param_1);
      plVar2 = *(long **)(param_1 + 0x268);
      if (plVar2 == (long *)0x0) goto LAB_00a9ed84;
      goto LAB_00a9ed68;
    }
    plVar2 = (long *)*plVar2;
  } while( true );
}

