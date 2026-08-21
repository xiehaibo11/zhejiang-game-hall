
int X509_certificate_type(X509 *x,EVP_PKEY *pubkey)

{
  int iVar1;
  uint uVar2;
  int local_24;
  
                    /* try { // try from 00b640d4 to 00c640db has its CatchHandler @ 00b640dc */
  if ((x == (X509 *)0x0) ||
     ((pubkey == (EVP_PKEY *)0x0 &&
      (pubkey = (EVP_PKEY *)X509_get0_pubkey(x), pubkey == (EVP_PKEY *)0x0)))) {
    return 0;
  }
                    /* catch() { ... } // from try @ 00b640d4 with catch @ 00b640dc
                       try { // try from 00b640dc to 00c64243 has its CatchHandler @ 00b63af8 */
  iVar1 = EVP_PKEY_id(pubkey);
                    /* catch() { ... } // from try @ 00b63c28 with catch @ 00b640e0 */
                    /* catch() { ... } // from try @ 00b64044 with catch @ 00b640e4 */
  uVar2 = 0;
  if (iVar1 < 0x198) {
    if (iVar1 == 6) {
      uVar2 = 0x31;
    }
    else if (iVar1 == 0x1c) {
      uVar2 = 0x44;
    }
    else if (iVar1 == 0x74) {
      uVar2 = 0x12;
                    /* catch() { ... } // from try @ 00b63ec0 with catch @ 00b64108 */
    }
    goto LAB_00b6414c;
  }
                    /* catch() { ... } // from try @ 00b63c9c with catch @ 00b6411c */
  if (1 < iVar1 - 0x3d3U) {
                    /* catch() { ... } // from try @ 00b63fa0 with catch @ 00b64120 */
                    /* catch() { ... } // from try @ 00b63bc4 with catch @ 00b64124 */
    if (iVar1 == 0x198) {
      uVar2 = 0x58;
      goto LAB_00b6414c;
    }
    if (iVar1 != 0x32b) goto LAB_00b6414c;
  }
  uVar2 = 0x50;
LAB_00b6414c:
                    /* catch() { ... } // from try @ 00b63d24 with catch @ 00b64150 */
  local_24 = X509_get_signature_nid(x);
  if ((local_24 != 0) && (iVar1 = OBJ_find_sigid_algs(local_24,(int *)0x0,&local_24), iVar1 != 0)) {
    if (local_24 < 0x43) {
      if ((local_24 == 6) || (local_24 == 0x13)) {
        uVar2 = uVar2 | 0x100;
      }
    }
    else if ((local_24 == 0x43) || (local_24 == 0x74)) {
      uVar2 = uVar2 | 0x200;
    }
    else if (local_24 == 0x198) {
      uVar2 = uVar2 | 0x400;
    }
  }
  return uVar2;
}

