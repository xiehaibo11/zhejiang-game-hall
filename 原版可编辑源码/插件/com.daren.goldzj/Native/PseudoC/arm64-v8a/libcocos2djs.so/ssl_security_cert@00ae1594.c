
undefined4
ssl_security_cert(long param_1,undefined8 param_2,undefined8 param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  char *name;
  EVP_MD *md;
  uint uVar5;
  int local_44;
  
                    /* try { // try from 00ae1598 to 00be15a3 has its CatchHandler @ 00ae15e0 */
                    /* try { // try from 00ae15a4 to 00be168f has its CatchHandler @ 00ae0ed0 */
  uVar5 = 0;
  if (param_4 != 0) {
    uVar5 = 0x1000;
  }
  if (param_5 == 0) {
                    /* catch() { ... } // from try @ 00ae1108 with catch @ 00ae1608 */
                    /* catch() { ... } // from try @ 00ae1098 with catch @ 00ae160c */
                    /* catch() { ... } // from try @ 00ae1020 with catch @ 00ae1610 */
                    /* catch() { ... } // from try @ 00ae0fa8 with catch @ 00ae1614 */
    lVar4 = X509_get0_pubkey(param_3);
    if (lVar4 == 0) {
      uVar1 = 0xffffffff;
      if (param_1 != 0) goto LAB_00ae1628;
LAB_00ae1674:
      iVar2 = ssl_ctx_security(param_2,uVar5 | 0x60011,uVar1,0,param_3);
    }
    else {
      uVar1 = EVP_PKEY_security_bits();
      if (param_1 == 0) goto LAB_00ae1674;
LAB_00ae1628:
                    /* catch() { ... } // from try @ 00ae0f1c with catch @ 00ae1634 */
      iVar2 = ssl_security(param_1,uVar5 | 0x60011,uVar1,0,param_3);
    }
    if (iVar2 == 0) {
      return 0x18d;
    }
  }
  else {
    lVar4 = X509_get0_pubkey(param_3);
    if (lVar4 == 0) {
      uVar1 = 0xffffffff;
      if (param_1 != 0) goto LAB_00ae15ec;
LAB_00ae164c:
      iVar2 = ssl_ctx_security(param_2,uVar5 | 0x60010,uVar1,0,param_3);
    }
    else {
                    /* catch() { ... } // from try @ 00ae1598 with catch @ 00ae15e0 */
      uVar1 = EVP_PKEY_security_bits();
                    /* catch() { ... } // from try @ 00ae1520 with catch @ 00ae15e4 */
                    /* catch() { ... } // from try @ 00ae14a4 with catch @ 00ae15e8 */
      if (param_1 == 0) goto LAB_00ae164c;
LAB_00ae15ec:
                    /* catch() { ... } // from try @ 00ae1430 with catch @ 00ae15ec */
                    /* catch() { ... } // from try @ 00ae13c4 with catch @ 00ae15f0 */
                    /* catch() { ... } // from try @ 00ae1350 with catch @ 00ae15f4 */
                    /* catch() { ... } // from try @ 00ae12d4 with catch @ 00ae15f8 */
                    /* catch() { ... } // from try @ 00ae1260 with catch @ 00ae15fc */
      iVar2 = ssl_security(param_1,uVar5 | 0x60010,uVar1,0,param_3);
    }
                    /* catch() { ... } // from try @ 00ae11f0 with catch @ 00ae1600 */
    if (iVar2 == 0) {
      return 399;
    }
  }
  local_44 = 0;
  uVar3 = X509_get_extension_flags(param_3);
  if ((uVar3 >> 0xd & 1) != 0) {
    iVar2 = 1;
    goto LAB_00ae171c;
  }
  iVar2 = X509_get_signature_nid(param_3);
  if (((iVar2 == 0) || (iVar2 = OBJ_find_sigid_algs(iVar2,&local_44,(int *)0x0), iVar2 == 0)) ||
     (local_44 == 0)) {
LAB_00ae1700:
    iVar2 = -1;
  }
  else {
    name = OBJ_nid2sn(local_44);
    md = EVP_get_digestbyname(name);
    if (md == (EVP_MD *)0x0) goto LAB_00ae1700;
    iVar2 = EVP_MD_size(md);
    iVar2 = iVar2 << 2;
  }
  if (param_1 == 0) {
    iVar2 = ssl_ctx_security(param_2,uVar5 | 0x60012,iVar2,local_44,param_3);
  }
  else {
    iVar2 = ssl_security(param_1,uVar5 | 0x60012,iVar2,local_44,param_3);
  }
LAB_00ae171c:
  uVar1 = 0x18e;
  if (iVar2 != 0) {
    uVar1 = 1;
  }
  return uVar1;
}

