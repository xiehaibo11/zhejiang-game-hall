
undefined8 X509v3_addr_inherits(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00b6a2d4 with catch @ 00b6a378
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00b6a340 with catch @ 00b6a37c
                        */
  if ((param_1 != 0) && (iVar1 = OPENSSL_sk_num(param_1), 0 < iVar1)) {
    iVar1 = 0;
    do {
      lVar3 = OPENSSL_sk_value(param_1,iVar1);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00b6a250 with catch @ 00b6a390
                        */
      if (**(int **)(lVar3 + 8) == 0) {
        return 1;
      }
                    /* try { // try from 00b6a3a0 to 00c6a3a3 has its CatchHandler @ 00b6a3a4 */
      iVar1 = iVar1 + 1;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00b6a3a0 with catch @ 00b6a3a4
                        */
      iVar2 = OPENSSL_sk_num(param_1);
                    /* try { // try from 00b6a3a8 to 00c6a3ab has its CatchHandler @ 00b6a3b0 */
    } while (iVar1 < iVar2);
  }
  return 0;
}

