
undefined4 ssl_cipher_get_cert_index(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
                    /* try { // try from 00ac521c to 00bc52db has its CatchHandler @ 00ac5334 */
  uVar1 = *(uint *)(param_1 + 0x18);
  if ((uVar1 >> 3 & 1) != 0) {
    return 3;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    return 2;
  }
  if ((uVar1 & 1) != 0) {
    return 0;
  }
  if ((uVar1 >> 7 & 1) == 0) {
    uVar2 = 4;
    if ((uVar1 & 0x20) == 0) {
      uVar2 = 0xffffffff;
    }
    return uVar2;
  }
  return 8;
}

