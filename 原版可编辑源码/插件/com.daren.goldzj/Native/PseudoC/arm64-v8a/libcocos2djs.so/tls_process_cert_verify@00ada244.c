
undefined4 tls_process_cert_verify(int *param_1,long *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  EVP_MD_CTX *ctx;
  EVP_PKEY *pubkey;
  size_t cnt;
  undefined8 uVar5;
  long lVar6;
  int iVar7;
  ulong uVar8;
  undefined1 *puVar9;
  uchar *out;
  undefined4 uVar10;
  X509 *x;
  ulong siz;
  uchar *in;
  void *local_58;
  EVP_MD *local_48;
  
  local_48 = (EVP_MD *)0x0;
  ctx = (EVP_MD_CTX *)EVP_MD_CTX_new();
  if (ctx == (EVP_MD_CTX *)0x0) {
    iVar4 = 0x41;
    iVar7 = 0xa97;
    goto LAB_00ada2d8;
  }
  x = *(X509 **)(*(long *)(param_1 + 0x5e) + 0x98);
  pubkey = (EVP_PKEY *)X509_get0_pubkey(x);
  uVar3 = X509_certificate_type(x,pubkey);
  if ((uVar3 >> 4 & 1) == 0) {
    ERR_put_error(0x14,0x17b,0xdc,"ssl/statem/statem_srvr.c",0xaa2);
    out = (uchar *)0x0;
    uVar5 = 0x2f;
  }
  else {
                    /* catch() { ... } // from try @ 00ada314 with catch @ 00ada2e8 */
    if ((param_2[1] == 0x40) && (iVar4 = EVP_PKEY_id(pubkey), iVar4 == 0x32b)) {
      siz = 0x40;
LAB_00ada3b8:
      iVar4 = EVP_PKEY_size(pubkey);
      uVar3 = (uint)siz;
      if (((iVar4 < (int)uVar3) || (uVar8 = param_2[1], uVar8 == 0)) || (iVar4 < (int)uVar8)) {
        iVar4 = 0x109;
                    /* try { // try from 00ada410 to 00bda417 has its CatchHandler @ 00ada4a8 */
        iVar7 = 0xad9;
      }
      else {
        if (siz <= uVar8) {
          in = (uchar *)*param_2;
                    /* try { // try from 00ada4a0 to 00bda4a7 has its CatchHandler @ 00ada4a8 */
          *param_2 = (long)(in + siz);
          param_2[1] = uVar8 - siz;
                    /* catch() { ... } // from try @ 00ada410 with catch @ 00ada4a8
                       catch() { ... } // from try @ 00ada4a0 with catch @ 00ada4a8
                       try { // try from 00ada4a8 to 00bda4f3 has its CatchHandler @ 00ada350 */
          cnt = BIO_ctrl(*(BIO **)(*(long *)(param_1 + 0x24) + 0xd8),3,0,&local_58);
                    /* catch() { ... } // from try @ 00ada43c with catch @ 00ada4b8 */
          if ((long)cnt < 1) {
            iVar4 = 0x44;
            iVar7 = 0xae5;
          }
          else {
            iVar4 = EVP_DigestInit_ex(ctx,local_48,(ENGINE *)0x0);
            if ((iVar4 != 0) && (iVar4 = EVP_DigestUpdate(ctx,local_58,cnt), iVar4 != 0)) {
              iVar4 = EVP_PKEY_id(pubkey);
                    /* try { // try from 00ada4fc to 00bda5b7 has its CatchHandler @ 00ada4fc
                       catch() { ... } // from try @ 00ada4fc with catch @ 00ada4fc
                       catch() { ... } // from try @ 00ada658 with catch @ 00ada4fc
                       catch() { ... } // from try @ 00ada6e0 with catch @ 00ada4fc
                       catch() { ... } // from try @ 00ada768 with catch @ 00ada4fc
                       catch() { ... } // from try @ 00ada7f0 with catch @ 00ada4fc
                       catch() { ... } // from try @ 00ada838 with catch @ 00ada4fc
                       catch() { ... } // from try @ 00ada910 with catch @ 00ada4fc */
              if ((iVar4 - 0x3d3U < 2) || (iVar4 == 0x32b)) {
                out = CRYPTO_malloc(uVar3,"ssl/statem/statem_srvr.c",0xaf8);
                if (out != (uchar *)0x0) {
                  BUF_reverse(out,in,siz);
                  in = out;
                  goto LAB_00ada590;
                }
                iVar4 = 0x41;
                iVar7 = 0xaf9;
              }
              else {
                out = (uchar *)0x0;
LAB_00ada590:
                if ((*param_1 != 0x300) ||
                   (iVar4 = EVP_MD_CTX_ctrl(ctx,0x1d,*(undefined4 *)(*(long *)(param_1 + 0x5e) + 4),
                                            *(long *)(param_1 + 0x5e) + 8), iVar4 != 0)) {
                    /* try { // try from 00ada5b8 to 00bda5bf has its CatchHandler @ 00ada9d8 */
                  iVar4 = EVP_VerifyFinal(ctx,in,uVar3,pubkey);
                  if (0 < iVar4) {
                    uVar10 = 2;
                    goto LAB_00ada43c;
                  }
                  ERR_put_error(0x14,0x17b,0x7b,"ssl/statem/statem_srvr.c",0xb0e);
                  uVar5 = 0x33;
                  goto LAB_00ada420;
                }
                iVar4 = 6;
                iVar7 = 0xb07;
              }
              ERR_put_error(0x14,0x17b,iVar4,"ssl/statem/statem_srvr.c",iVar7);
              uVar5 = 0x50;
              goto LAB_00ada420;
            }
            iVar4 = 6;
            iVar7 = 0xaee;
          }
LAB_00ada2d8:
          ERR_put_error(0x14,0x17b,iVar4,"ssl/statem/statem_srvr.c",iVar7);
          goto LAB_00ada2dc;
        }
        iVar4 = 0x9f;
        iVar7 = 0xade;
      }
LAB_00ada414:
      ERR_put_error(0x14,0x17b,iVar4,"ssl/statem/statem_srvr.c",iVar7);
    }
    else {
                    /* try { // try from 00ada30c to 00bda313 has its CatchHandler @ 00ada32c */
                    /* try { // try from 00ada314 to 00bda347 has its CatchHandler @ 00ada2e8 */
      if ((*(byte *)(*(long *)(*(long *)(param_1 + 2) + 0xc0) + 0x68) >> 1 & 1) == 0) {
        iVar4 = ssl_cert_type(0,pubkey);
                    /* catch() { ... } // from try @ 00ada30c with catch @ 00ada32c */
        if ((-1 < iVar4) &&
           (local_48 = *(EVP_MD **)(*(long *)(param_1 + 0x24) + (long)iVar4 * 8 + 0x2d8),
           local_48 != (EVP_MD *)0x0)) {
LAB_00ada378:
          if (1 < (ulong)param_2[1]) {
            puVar9 = (undefined1 *)*param_2;
            uVar1 = *puVar9;
            uVar2 = puVar9[1];
            *param_2 = (long)(puVar9 + 2);
            param_2[1] = param_2[1] - 2;
            siz = (ulong)CONCAT11(uVar1,uVar2);
            goto LAB_00ada3b8;
          }
          iVar4 = 0x9f;
          iVar7 = 0xad1;
          goto LAB_00ada414;
        }
LAB_00ada2dc:
        out = (uchar *)0x0;
        uVar5 = 0x50;
        goto LAB_00ada420;
      }
      if (1 < (ulong)param_2[1]) {
                    /* try { // try from 00ada350 to 00bda40f has its CatchHandler @ 00ada350
                       catch() { ... } // from try @ 00ada350 with catch @ 00ada350
                       catch() { ... } // from try @ 00ada418 with catch @ 00ada350
                       catch() { ... } // from try @ 00ada454 with catch @ 00ada350
                       catch() { ... } // from try @ 00ada4a8 with catch @ 00ada350 */
        lVar6 = *param_2;
        *param_2 = lVar6 + 2;
        param_2[1] = param_2[1] - 2;
        iVar4 = tls12_check_peer_sigalg(&local_48,param_1,lVar6,pubkey);
        if (iVar4 == -1) goto LAB_00ada2dc;
        if (iVar4 != 0) goto LAB_00ada378;
      }
    }
                    /* try { // try from 00ada418 to 00bda43b has its CatchHandler @ 00ada350 */
    out = (uchar *)0x0;
    uVar5 = 0x32;
  }
LAB_00ada420:
  ssl3_send_alert(param_1,2,uVar5);
  ossl_statem_set_error(param_1);
  uVar10 = 0;
LAB_00ada43c:
                    /* try { // try from 00ada43c to 00bda453 has its CatchHandler @ 00ada4b8 */
  BIO_free(*(BIO **)(*(long *)(param_1 + 0x24) + 0xd8));
  *(undefined8 *)(*(long *)(param_1 + 0x24) + 0xd8) = 0;
                    /* try { // try from 00ada454 to 00bda49f has its CatchHandler @ 00ada350 */
  EVP_MD_CTX_free(ctx);
  CRYPTO_free(out);
  return uVar10;
}

