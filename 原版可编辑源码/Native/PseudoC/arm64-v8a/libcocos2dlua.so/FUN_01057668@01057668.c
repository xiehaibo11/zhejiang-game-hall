
void FUN_01057668(long param_1,uint param_2)

{
  long lVar1;
  undefined1 uVar2;
  uint uVar4;
  uint uVar3;
  
  lVar1 = lws_get_context();
  if ((*(byte *)(lVar1 + 0xc79) >> 2 & 1) == 0) {
    return;
  }
  if (*(long *)(*(long *)(param_1 + 0x220) + (ulong)*(byte *)(param_1 + 0x304) * 0x6f8 + 0x130) == 0
     ) {
    return;
  }
  if (*(long *)(param_1 + 0x208) == 0) {
    return;
  }
  uVar4 = (uint)*(byte *)(param_1 + 0x210);
  if (((param_2 & 0xc) == 0) || ((param_2 & 3) == 0)) {
                    /* try { // try from 0105770c to 01157763 has its CatchHandler @ 0105770c
                       catch() { ... } // from try @ 0105770c with catch @ 0105770c
                       catch() { ... } // from try @ 01057768 with catch @ 0105770c */
    _lws_log(1,"%s: assert: flags %d","lws_libuv_io",param_2);
    if ((param_2 >> 2 & 1) == 0) goto LAB_010576d0;
LAB_0105771c:
    uVar3 = param_2 & 3 | uVar4 & 3;
  }
  else {
    if ((param_2 >> 2 & 1) != 0) goto LAB_0105771c;
LAB_010576d0:
    uVar3 = uVar4 & 3;
    if ((param_2 & 2) != 0) {
      uVar3 = uVar4 & 1;
    }
    if ((param_2 & 1) != 0) {
      uVar3 = uVar3 & 2;
    }
    if (uVar3 == 0) {
                    /* catch() { ... } // from try @ 010575b8 with catch @ 010576f0 */
      uv_poll_stop(param_1 + 0x168);
      uVar2 = 0;
      goto LAB_01057734;
    }
  }
  uVar2 = (undefined1)uVar3;
  uv_poll_start(param_1 + 0x168,uVar3,FUN_01057ba4);
LAB_01057734:
  *(undefined1 *)(param_1 + 0x210) = uVar2;
  return;
}

