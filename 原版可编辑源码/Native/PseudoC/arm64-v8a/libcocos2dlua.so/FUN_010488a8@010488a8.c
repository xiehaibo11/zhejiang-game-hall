
undefined8 FUN_010488a8(long *param_1,char param_2)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  
                    /* try { // try from 010488ac to 011488bb has its CatchHandler @ 01048d28 */
  lVar2 = *param_1;
  uVar1 = *(uint *)(lVar2 + 0xb60);
                    /* try { // try from 010488c4 to 011488e7 has its CatchHandler @ 01048d70 */
  if (*(uint *)(param_1[0x44] + 0xc88) <= uVar1) {
    if (uVar1 == *(uint *)(param_1[0x44] + 0xc88)) {
                    /* try { // try from 0104892c to 0114894f has its CatchHandler @ 01048d64 */
      _lws_log(1,"Ran out of header data space\n");
      return 0xffffffff;
    }
                    /* try { // try from 01048994 to 011489b7 has its CatchHandler @ 01048d84 */
    _lws_log(1,"%s: pos %d, limit %d\n","lws_pos_in_bounds");
    return 0xffffffff;
  }
  uVar3 = (uint)*(ushort *)(lVar2 + (ulong)*(byte *)(lVar2 + 0xb8b) * 8 + 0x20);
  if (uVar3 < *(uint *)(param_1 + 6)) {
                    /* try { // try from 010488e8 to 011488f3 has its CatchHandler @ 01048d4c */
    *(uint *)(lVar2 + 0xb60) = uVar1 + 1;
    *(char *)(*(long *)(lVar2 + 0x10) + (ulong)uVar1) = param_2;
    if (param_2 != '\0') {
      lVar2 = *param_1 + (ulong)*(byte *)(*param_1 + 0xb8b) * 8;
      *(short *)(lVar2 + 0x20) = *(short *)(lVar2 + 0x20) + 1;
    }
                    /* try { // try from 01048914 to 01148923 has its CatchHandler @ 01048d48 */
    return 0;
  }
  if (*(uint *)(param_1 + 6) == uVar3) {
                    /* try { // try from 01048950 to 01148957 has its CatchHandler @ 01048d40 */
    *(uint *)(lVar2 + 0xb60) = uVar1 + 1;
    *(undefined1 *)(*(long *)(lVar2 + 0x10) + (ulong)uVar1) = 0;
    _lws_log(2,"header %i exceeds limit %d\n",*(undefined1 *)((long)param_1 + 0x36),(int)param_1[6])
    ;
  }
                    /* try { // try from 0104897c to 0114898b has its CatchHandler @ 01048d3c */
  return 1;
}

