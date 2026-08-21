
undefined4
SSL_get0_dane_tlsa(long param_1,undefined1 *param_2,undefined1 *param_3,undefined1 *param_4,
                  undefined8 *param_5,undefined8 *param_6)

{
  int iVar1;
  undefined4 uVar2;
  
                    /* try { // try from 00ac6a48 to 00bc6a4f has its CatchHandler @ 00ac7050 */
  iVar1 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 200));
  if ((iVar1 < 1) || (*(long *)(param_1 + 0x1c8) != 0)) {
    uVar2 = 0xffffffff;
  }
  else {
    if (*(undefined1 **)(param_1 + 0xd8) != (undefined1 *)0x0) {
      if (param_2 != (undefined1 *)0x0) {
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
        *param_6 = *(undefined8 *)(*(long *)(param_1 + 0xd8) + 0x10);
      }
    }
    uVar2 = *(undefined4 *)(param_1 + 0xec);
  }
  return uVar2;
}

