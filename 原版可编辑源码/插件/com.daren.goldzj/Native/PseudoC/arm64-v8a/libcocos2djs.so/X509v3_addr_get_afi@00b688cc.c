
undefined2 X509v3_addr_get_afi(long *param_1)

{
  undefined2 uVar1;
  undefined1 *puVar2;
  
  uVar1 = 0;
  if (param_1 != (long *)0x0) {
                    /* try { // try from 00b688d0 to 00c688db has its CatchHandler @ 00b68acc */
    if (*param_1 == 0) {
      return 0;
    }
    puVar2 = *(undefined1 **)(*param_1 + 8);
    if (puVar2 == (undefined1 *)0x0) {
                    /* try { // try from 00b688f8 to 00c68a27 has its CatchHandler @ 00b68748 */
      return 0;
    }
    uVar1 = CONCAT11(*puVar2,puVar2[1]);
  }
                    /* try { // try from 00b688ec to 00c688f7 has its CatchHandler @ 00b68a6c */
  return uVar1;
}

