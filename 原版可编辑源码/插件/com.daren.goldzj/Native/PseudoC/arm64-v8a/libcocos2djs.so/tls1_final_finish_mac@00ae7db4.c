
ulong tls1_final_finish_mac(long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  int iVar1;
  ulong uVar2;
  undefined1 auStack_80 [64];
  
  uVar2 = ssl3_digest_cached_records(param_1,0);
  if ((int)uVar2 != 0) {
    uVar2 = ssl_handshake_hash(param_1,auStack_80,0x40);
    iVar1 = (int)uVar2;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ae7d08 with catch @ 00ae7dfc
                        */
    if (iVar1 != 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ae7b54 with catch @ 00ae7e20
                        */
      uVar2 = FUN_00ae7e74(param_1,param_2,param_3,auStack_80,uVar2 & 0xffffffff,0,0,0,0,
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

