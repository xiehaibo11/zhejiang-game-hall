
undefined8 FUN_00aa6124(long *param_1,char param_2)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  
  lVar2 = *param_1;
                    /* catch() { ... } // from try @ 00aa603c with catch @ 00aa6134 */
  uVar1 = *(uint *)(lVar2 + 0xb60);
                    /* catch() { ... } // from try @ 00aa5f10 with catch @ 00aa6138 */
  if (*(uint *)(param_1[0x44] + 0xc88) <= uVar1) {
                    /* catch() { ... } // from try @ 00aa61d4 with catch @ 00aa619c */
    if (uVar1 == *(uint *)(param_1[0x44] + 0xc88)) {
      _lws_log(1,"Ran out of header data space\n");
      return 0xffffffff;
    }
                    /* catch() { ... } // from try @ 00aa61cc with catch @ 00aa6204 */
    _lws_log(1,"%s: pos %d, limit %d\n","lws_pos_in_bounds");
    return 0xffffffff;
  }
  uVar3 = (uint)*(ushort *)(lVar2 + (ulong)*(byte *)(lVar2 + 0xb8b) * 8 + 0x20);
                    /* catch() { ... } // from try @ 00aa5f58 with catch @ 00aa6158 */
  if (uVar3 < *(uint *)(param_1 + 6)) {
    *(uint *)(lVar2 + 0xb60) = uVar1 + 1;
    *(char *)(*(long *)(lVar2 + 0x10) + (ulong)uVar1) = param_2;
    if (param_2 != '\0') {
      lVar2 = *param_1 + (ulong)*(byte *)(*param_1 + 0xb8b) * 8;
      *(short *)(lVar2 + 0x20) = *(short *)(lVar2 + 0x20) + 1;
    }
    return 0;
  }
  if (*(uint *)(param_1 + 6) == uVar3) {
                    /* try { // try from 00aa61cc to 00ba61d3 has its CatchHandler @ 00aa6204 */
    *(uint *)(lVar2 + 0xb60) = uVar1 + 1;
                    /* try { // try from 00aa61d4 to 00ba621b has its CatchHandler @ 00aa619c */
    *(undefined1 *)(*(long *)(lVar2 + 0x10) + (ulong)uVar1) = 0;
    _lws_log(2,"header %i exceeds limit %d\n",*(undefined1 *)((long)param_1 + 0x36),(int)param_1[6])
    ;
  }
  return 1;
}

