
undefined8 SSL_CONF_CTX_finish(uint *param_1)

{
  int iVar1;
  SSL_CTX *ctx;
  stack_st_X509_NAME *name_list;
  SSL *pSVar2;
  char *pcVar3;
  ulong uVar4;
  
                    /* catch() { ... } // from try @ 00ae6608 with catch @ 00ae66bc */
  ctx = *(SSL_CTX **)(param_1 + 6);
  if (ctx == (SSL_CTX *)0x0) {
                    /* catch() { ... } // from try @ 00ae6870 with catch @ 00ae68f4
                       catch() { ... } // from try @ 00ae68ec with catch @ 00ae68f4
                       try { // try from 00ae68f4 to 00be6907 has its CatchHandler @ 00ae67dc */
    if (*(long *)(param_1 + 8) == 0) goto LAB_00ae6908;
    uVar4 = *(ulong *)(*(long *)(param_1 + 8) + 0x148);
  }
  else {
    uVar4 = ctx->mode;
  }
  if ((uVar4 != 0) && ((*param_1 >> 6 & 1) != 0)) {
    pcVar3 = *(char **)(param_1 + 0xc);
    if ((pcVar3 != (char *)0x0) && ((*(long *)(uVar4 + 0x28) == 0 && ((*param_1 >> 5 & 1) != 0)))) {
      if (ctx == (SSL_CTX *)0x0) {
        iVar1 = 1;
        pSVar2 = *(SSL **)(param_1 + 8);
      }
      else {
        iVar1 = SSL_CTX_use_PrivateKey_file(ctx,pcVar3,1);
        pSVar2 = *(SSL **)(param_1 + 8);
      }
      if (pSVar2 != (SSL *)0x0) {
        iVar1 = SSL_use_PrivateKey_file(pSVar2,pcVar3,1);
      }
      if (iVar1 < 1) {
        return 0;
      }
    }
    pcVar3 = *(char **)(param_1 + 0xe);
    if (((pcVar3 != (char *)0x0) && (*(long *)(uVar4 + 0x50) == 0)) &&
       (((byte)*param_1 >> 5 & 1) != 0)) {
      if (*(SSL_CTX **)(param_1 + 6) == (SSL_CTX *)0x0) {
        iVar1 = 1;
        pSVar2 = *(SSL **)(param_1 + 8);
      }
      else {
        iVar1 = SSL_CTX_use_PrivateKey_file(*(SSL_CTX **)(param_1 + 6),pcVar3,1);
        pSVar2 = *(SSL **)(param_1 + 8);
      }
      if (pSVar2 != (SSL *)0x0) {
        iVar1 = SSL_use_PrivateKey_file(pSVar2,pcVar3,1);
      }
      if (iVar1 < 1) {
        return 0;
      }
    }
    pcVar3 = *(char **)(param_1 + 0x10);
    if (((pcVar3 != (char *)0x0) && (*(long *)(uVar4 + 0x78) == 0)) &&
       (((byte)*param_1 >> 5 & 1) != 0)) {
      if (*(SSL_CTX **)(param_1 + 6) == (SSL_CTX *)0x0) {
        iVar1 = 1;
        pSVar2 = *(SSL **)(param_1 + 8);
      }
      else {
        iVar1 = SSL_CTX_use_PrivateKey_file(*(SSL_CTX **)(param_1 + 6),pcVar3,1);
        pSVar2 = *(SSL **)(param_1 + 8);
      }
      if (pSVar2 != (SSL *)0x0) {
        iVar1 = SSL_use_PrivateKey_file(pSVar2,pcVar3,1);
      }
      if (iVar1 < 1) {
        return 0;
      }
    }
    pcVar3 = *(char **)(param_1 + 0x12);
    if (((pcVar3 != (char *)0x0) && (*(long *)(uVar4 + 0xa0) == 0)) &&
       (((byte)*param_1 >> 5 & 1) != 0)) {
      if (*(SSL_CTX **)(param_1 + 6) == (SSL_CTX *)0x0) {
        iVar1 = 1;
        pSVar2 = *(SSL **)(param_1 + 8);
      }
      else {
                    /* try { // try from 00ae67dc to 00be686f has its CatchHandler @ 00ae67dc
                       catch() { ... } // from try @ 00ae67dc with catch @ 00ae67dc
                       catch() { ... } // from try @ 00ae6878 with catch @ 00ae67dc
                       catch() { ... } // from try @ 00ae68f4 with catch @ 00ae67dc */
        iVar1 = SSL_CTX_use_PrivateKey_file(*(SSL_CTX **)(param_1 + 6),pcVar3,1);
        pSVar2 = *(SSL **)(param_1 + 8);
      }
      if (pSVar2 != (SSL *)0x0) {
        iVar1 = SSL_use_PrivateKey_file(pSVar2,pcVar3,1);
      }
      if (iVar1 < 1) {
        return 0;
      }
    }
    pcVar3 = *(char **)(param_1 + 0x14);
    if (((pcVar3 != (char *)0x0) && (*(long *)(uVar4 + 200) == 0)) &&
       (((byte)*param_1 >> 5 & 1) != 0)) {
      if (*(SSL_CTX **)(param_1 + 6) == (SSL_CTX *)0x0) {
        iVar1 = 1;
        pSVar2 = *(SSL **)(param_1 + 8);
      }
      else {
        iVar1 = SSL_CTX_use_PrivateKey_file(*(SSL_CTX **)(param_1 + 6),pcVar3,1);
        pSVar2 = *(SSL **)(param_1 + 8);
      }
      if (pSVar2 != (SSL *)0x0) {
        iVar1 = SSL_use_PrivateKey_file(pSVar2,pcVar3,1);
      }
      if (iVar1 < 1) {
        return 0;
      }
    }
    pcVar3 = *(char **)(param_1 + 0x16);
    if (((pcVar3 != (char *)0x0) && (*(long *)(uVar4 + 0xf0) == 0)) &&
       (((byte)*param_1 >> 5 & 1) != 0)) {
                    /* try { // try from 00ae6870 to 00be6877 has its CatchHandler @ 00ae68f4 */
      if (*(SSL_CTX **)(param_1 + 6) == (SSL_CTX *)0x0) {
        iVar1 = 1;
        pSVar2 = *(SSL **)(param_1 + 8);
      }
      else {
                    /* try { // try from 00ae6878 to 00be68eb has its CatchHandler @ 00ae67dc */
        iVar1 = SSL_CTX_use_PrivateKey_file(*(SSL_CTX **)(param_1 + 6),pcVar3,1);
        pSVar2 = *(SSL **)(param_1 + 8);
      }
      if (pSVar2 != (SSL *)0x0) {
        iVar1 = SSL_use_PrivateKey_file(pSVar2,pcVar3,1);
      }
      if (iVar1 < 1) {
        return 0;
      }
    }
    pcVar3 = *(char **)(param_1 + 0x18);
    if (((pcVar3 != (char *)0x0) && (*(long *)(uVar4 + 0x118) == 0)) &&
       (((byte)*param_1 >> 5 & 1) != 0)) {
      if (*(SSL_CTX **)(param_1 + 6) == (SSL_CTX *)0x0) {
        iVar1 = 1;
        pSVar2 = *(SSL **)(param_1 + 8);
      }
      else {
        iVar1 = SSL_CTX_use_PrivateKey_file(*(SSL_CTX **)(param_1 + 6),pcVar3,1);
        pSVar2 = *(SSL **)(param_1 + 8);
      }
      if (pSVar2 != (SSL *)0x0) {
        iVar1 = SSL_use_PrivateKey_file(pSVar2,pcVar3,1);
      }
      if (iVar1 < 1) {
        return 0;
      }
    }
  }
LAB_00ae6908:
  name_list = *(stack_st_X509_NAME **)(param_1 + 0x26);
  if (name_list != (stack_st_X509_NAME *)0x0) {
    if (*(SSL **)(param_1 + 8) == (SSL *)0x0) {
      if (*(SSL_CTX **)(param_1 + 6) == (SSL_CTX *)0x0) {
        OPENSSL_sk_pop_free(name_list,X509_NAME_free);
      }
      else {
        SSL_CTX_set_client_CA_list(*(SSL_CTX **)(param_1 + 6),name_list);
      }
    }
    else {
      SSL_set_client_CA_list(*(SSL **)(param_1 + 8),name_list);
    }
    param_1[0x26] = 0;
    param_1[0x27] = 0;
  }
  return 1;
}

