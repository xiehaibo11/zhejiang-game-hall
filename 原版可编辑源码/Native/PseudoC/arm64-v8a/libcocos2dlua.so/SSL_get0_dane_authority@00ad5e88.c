
undefined4 SSL_get0_dane_authority(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
                    /* catch() { ... } // from try @ 00ad5e2c with catch @ 00ad5ea8 */
  iVar1 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 200));
  if ((iVar1 < 1) || (*(long *)(param_1 + 0x1c8) != 0)) {
    uVar2 = 0xffffffff;
  }
  else {
    if (*(long *)(param_1 + 0xd8) != 0) {
      if (param_2 != (undefined8 *)0x0) {
        *param_2 = *(undefined8 *)(param_1 + 0xe0);
      }
      if (param_3 != (undefined8 *)0x0) {
        if (*(long *)(param_1 + 0xe0) == 0) {
                    /* try { // try from 00ad5eec to 00bd5f2f has its CatchHandler @ 00ad5eec
                       catch() { ... } // from try @ 00ad5eec with catch @ 00ad5eec
                       catch() { ... } // from try @ 00ad5f64 with catch @ 00ad5eec */
          uVar3 = *(undefined8 *)(*(long *)(param_1 + 0xd8) + 0x18);
        }
        else {
          uVar3 = 0;
        }
        *param_3 = uVar3;
      }
    }
    uVar2 = *(undefined4 *)(param_1 + 0xec);
  }
  return uVar2;
}

