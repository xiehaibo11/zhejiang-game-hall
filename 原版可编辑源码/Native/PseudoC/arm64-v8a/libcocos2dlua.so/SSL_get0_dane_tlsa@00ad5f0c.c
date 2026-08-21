
undefined4
SSL_get0_dane_tlsa(long param_1,undefined1 *param_2,undefined1 *param_3,undefined1 *param_4,
                  undefined8 *param_5,undefined8 *param_6)

{
  int iVar1;
  undefined4 uVar2;
  
                    /* try { // try from 00ad5f30 to 00bd5f33 has its CatchHandler @ 00ad5fd8 */
  iVar1 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 200));
                    /* try { // try from 00ad5f48 to 00bd5f53 has its CatchHandler @ 00ad5fbc */
  if ((iVar1 < 1) || (*(long *)(param_1 + 0x1c8) != 0)) {
    uVar2 = 0xffffffff;
  }
  else {
                    /* try { // try from 00ad5f5c to 00bd5f63 has its CatchHandler @ 00ad5fa4 */
    if (*(undefined1 **)(param_1 + 0xd8) != (undefined1 *)0x0) {
      if (param_2 != (undefined1 *)0x0) {
                    /* try { // try from 00ad5f64 to 00bd5feb has its CatchHandler @ 00ad5eec */
        *param_2 = **(undefined1 **)(param_1 + 0xd8);
      }
      if (param_3 != (undefined1 *)0x0) {
        *param_3 = *(undefined1 *)(*(long *)(param_1 + 0xd8) + 1);
      }
      if (param_4 != (undefined1 *)0x0) {
        *param_4 = *(undefined1 *)(*(long *)(param_1 + 0xd8) + 2);
      }
      if (param_5 != (undefined8 *)0x0) {
        *param_5 = *(undefined8 *)(*(long *)(param_1 + 0xd8) + 8);
      }
      if (param_6 != (undefined8 *)0x0) {
                    /* catch() { ... } // from try @ 00ad5f5c with catch @ 00ad5fa4 */
        *param_6 = *(undefined8 *)(*(long *)(param_1 + 0xd8) + 0x10);
      }
    }
    uVar2 = *(undefined4 *)(param_1 + 0xec);
  }
                    /* catch() { ... } // from try @ 00ad5f48 with catch @ 00ad5fbc */
  return uVar2;
}

