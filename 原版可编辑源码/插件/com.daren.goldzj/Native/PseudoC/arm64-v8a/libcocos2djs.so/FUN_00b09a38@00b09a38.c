
undefined4 FUN_00b09a38(long param_1,long param_2)

{
  int iVar1;
  undefined4 uVar2;
  EC_GROUP *group;
  EC_POINT *a;
  EC_POINT *b;
  
                    /* try { // try from 00b09a3c to 00c09a43 has its CatchHandler @ 00b09a44 */
                    /* catch() { ... } // from try @ 00b09a3c with catch @ 00b09a44
                       try { // try from 00b09a44 to 00c09b53 has its CatchHandler @ 00b091d8 */
                    /* catch() { ... } // from try @ 00b098c0 with catch @ 00b09a48 */
                    /* catch() { ... } // from try @ 00b09784 with catch @ 00b09a4c */
                    /* catch() { ... } // from try @ 00b0993c with catch @ 00b09a50 */
  group = EC_KEY_get0_group(*(EC_KEY **)(param_2 + 0x20));
  a = EC_KEY_get0_public_key(*(EC_KEY **)(param_1 + 0x20));
  b = EC_KEY_get0_public_key(*(EC_KEY **)(param_2 + 0x20));
  uVar2 = 0xfffffffe;
  if (((group != (EC_GROUP *)0x0) && (a != (EC_POINT *)0x0)) && (b != (EC_POINT *)0x0)) {
                    /* catch() { ... } // from try @ 00b09900 with catch @ 00b09a90 */
    iVar1 = EC_POINT_cmp(group,a,b,(BN_CTX *)0x0);
    uVar2 = 0;
    if (iVar1 != 1) {
      uVar2 = 0xfffffffe;
    }
    if (iVar1 == 0) {
      uVar2 = 1;
    }
  }
                    /* catch() { ... } // from try @ 00b09854 with catch @ 00b09ab4 */
                    /* catch() { ... } // from try @ 00b0932c with catch @ 00b09ab8 */
                    /* catch() { ... } // from try @ 00b093d4 with catch @ 00b09abc */
  return uVar2;
}

