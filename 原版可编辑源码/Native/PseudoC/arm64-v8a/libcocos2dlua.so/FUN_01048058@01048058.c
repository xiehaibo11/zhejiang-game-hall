
undefined8 FUN_01048058(long *param_1,ulong param_2,char *param_3)

{
  uint uVar1;
  char cVar2;
  long lVar3;
  
  *(char *)(*param_1 + 0xb8b) = *(char *)(*param_1 + 0xb8b) + '\x01';
  cVar2 = *(char *)(*param_1 + 0xb8b);
  if (cVar2 == '[') {
    _lws_log(2,"More hdr frags than we can deal with, dropping\n");
    return 0xffffffff;
  }
  *(char *)(*param_1 + (param_2 & 0xffffffff) + 0x300) = cVar2;
  lVar3 = *param_1;
  *(undefined4 *)(lVar3 + (ulong)*(byte *)(lVar3 + 0xb8b) * 8 + 0x1c) =
       *(undefined4 *)(lVar3 + 0xb60);
                    /* try { // try from 010480c4 to 011480cb has its CatchHandler @ 010481bc */
  *(undefined2 *)(*param_1 + (ulong)*(byte *)(*param_1 + 0xb8b) * 8 + 0x20) = 0;
                    /* try { // try from 010480cc to 0114810f has its CatchHandler @ 01047fc0 */
  *(undefined1 *)(*param_1 + (ulong)*(byte *)(*param_1 + 0xb8b) * 8 + 0x22) = 0;
  while( true ) {
    lVar3 = *param_1;
    uVar1 = *(uint *)(lVar3 + 0xb60);
    if (*(uint *)(param_1[0x44] + 0xc88) <= uVar1) {
      if (uVar1 != *(uint *)(param_1[0x44] + 0xc88)) {
        _lws_log(1,"%s: pos %d, limit %d\n","lws_pos_in_bounds");
        return 0xffffffff;
      }
      _lws_log(1,"Ran out of header data space\n");
      return 0xffffffff;
    }
    cVar2 = *param_3;
    *(uint *)(lVar3 + 0xb60) = uVar1 + 1;
    *(char *)(*(long *)(lVar3 + 0x10) + (ulong)uVar1) = cVar2;
    if (*param_3 == '\0') break;
                    /* try { // try from 01048110 to 0114811b has its CatchHandler @ 010481d0 */
    lVar3 = *param_1 + (ulong)*(byte *)(*param_1 + 0xb8b) * 8;
    *(short *)(lVar3 + 0x20) = *(short *)(lVar3 + 0x20) + 1;
    cVar2 = *param_3;
    param_3 = param_3 + 1;
    if (cVar2 == '\0') {
      return 0;
    }
  }
  return 0;
}

