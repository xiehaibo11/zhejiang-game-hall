
ulong tls1_final_finish_mac(long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  int iVar1;
  ulong uVar2;
  undefined1 auStack_80 [64];
  
                    /* try { // try from 00af60b8 to 00bf612b has its CatchHandler @ 00af60b8
                       catch() { ... } // from try @ 00af60b8 with catch @ 00af60b8
                       catch() { ... } // from try @ 00af6134 with catch @ 00af60b8 */
  uVar2 = ssl3_digest_cached_records(param_1,0);
  if ((int)uVar2 != 0) {
    uVar2 = ssl_handshake_hash(param_1,auStack_80,0x40);
    iVar1 = (int)uVar2;
    if (iVar1 != 0) {
                    /* try { // try from 00af612c to 00bf6133 has its CatchHandler @ 00af6188 */
                    /* try { // try from 00af6134 to 00bf61bf has its CatchHandler @ 00af60b8 */
      uVar2 = FUN_00af6178(param_1,param_2,param_3,auStack_80,uVar2 & 0xffffffff,0,0,0,0,
                           *(long *)(param_1 + 0x178) + 8,
                           *(undefined4 *)(*(long *)(param_1 + 0x178) + 4),param_4,0xc);
      if ((int)uVar2 != 0) {
        OPENSSL_cleanse(auStack_80,(long)iVar1);
        uVar2 = 0xc;
      }
    }
  }
  return uVar2;
}

