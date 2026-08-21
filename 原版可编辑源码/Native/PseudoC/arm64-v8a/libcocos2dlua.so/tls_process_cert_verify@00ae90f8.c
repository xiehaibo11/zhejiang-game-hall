
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
    goto LAB_00ae918c;
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
    if ((param_2[1] == 0x40) && (iVar4 = EVP_PKEY_id(pubkey), iVar4 == 0x32b)) {
      siz = 0x40;
LAB_00ae926c:
      iVar4 = EVP_PKEY_size(pubkey);
      uVar3 = (uint)siz;
      if (((iVar4 < (int)uVar3) || (uVar8 = param_2[1], uVar8 == 0)) || (iVar4 < (int)uVar8)) {
        iVar4 = 0x109;
        iVar7 = 0xad9;
      }
      else {
        if (siz <= uVar8) {
          in = (uchar *)*param_2;
          *param_2 = (long)(in + siz);
          param_2[1] = uVar8 - siz;
          cnt = BIO_ctrl(*(BIO **)(*(long *)(param_1 + 0x24) + 0xd8),3,0,&local_58);
          if ((long)cnt < 1) {
            iVar4 = 0x44;
            iVar7 = 0xae5;
          }
          else {
                    /* try { // try from 00ae937c to 00be937f has its CatchHandler @ 00ae9398 */
                    /* try { // try from 00ae9380 to 00be95d7 has its CatchHandler @ 00ae92f0 */
            iVar4 = EVP_DigestInit_ex(ctx,local_48,(ENGINE *)0x0);
                    /* catch() { ... } // from try @ 00ae937c with catch @ 00ae9398 */
            if ((iVar4 != 0) && (iVar4 = EVP_DigestUpdate(ctx,local_58,cnt), iVar4 != 0)) {
              iVar4 = EVP_PKEY_id(pubkey);
              if ((iVar4 - 0x3d3U < 2) || (iVar4 == 0x32b)) {
                out = CRYPTO_malloc(uVar3,"ssl/statem/statem_srvr.c",0xaf8);
                if (out != (uchar *)0x0) {
                  BUF_reverse(out,in,siz);
                  in = out;
                  goto LAB_00ae9444;
                }
                iVar4 = 0x41;
                iVar7 = 0xaf9;
              }
              else {
                out = (uchar *)0x0;
LAB_00ae9444:
                if ((*param_1 != 0x300) ||
                   (iVar4 = EVP_MD_CTX_ctrl(ctx,0x1d,*(undefined4 *)(*(long *)(param_1 + 0x5e) + 4),
                                            *(long *)(param_1 + 0x5e) + 8), iVar4 != 0)) {
                  iVar4 = EVP_VerifyFinal(ctx,in,uVar3,pubkey);
                  if (0 < iVar4) {
                    uVar10 = 2;
                    goto LAB_00ae92f0;
                  }
                  ERR_put_error(0x14,0x17b,0x7b,"ssl/statem/statem_srvr.c",0xb0e);
                  uVar5 = 0x33;
                  goto LAB_00ae92d4;
                }
                iVar4 = 6;
                iVar7 = 0xb07;
              }
              ERR_put_error(0x14,0x17b,iVar4,"ssl/statem/statem_srvr.c",iVar7);
              uVar5 = 0x50;
              goto LAB_00ae92d4;
            }
            iVar4 = 6;
            iVar7 = 0xaee;
          }
LAB_00ae918c:
          ERR_put_error(0x14,0x17b,iVar4,"ssl/statem/statem_srvr.c",iVar7);
          goto LAB_00ae9190;
        }
        iVar4 = 0x9f;
        iVar7 = 0xade;
      }
LAB_00ae92c8:
      ERR_put_error(0x14,0x17b,iVar4,"ssl/statem/statem_srvr.c",iVar7);
    }
    else {
      if ((*(byte *)(*(long *)(*(long *)(param_1 + 2) + 0xc0) + 0x68) >> 1 & 1) == 0) {
        iVar4 = ssl_cert_type(0,pubkey);
        if ((-1 < iVar4) &&
           (local_48 = *(EVP_MD **)(*(long *)(param_1 + 0x24) + (long)iVar4 * 8 + 0x2d8),
           local_48 != (EVP_MD *)0x0)) {
LAB_00ae922c:
          if (1 < (ulong)param_2[1]) {
            puVar9 = (undefined1 *)*param_2;
            uVar1 = *puVar9;
            uVar2 = puVar9[1];
            *param_2 = (long)(puVar9 + 2);
            param_2[1] = param_2[1] - 2;
            siz = (ulong)CONCAT11(uVar1,uVar2);
            goto LAB_00ae926c;
          }
          iVar4 = 0x9f;
          iVar7 = 0xad1;
          goto LAB_00ae92c8;
        }
LAB_00ae9190:
        out = (uchar *)0x0;
        uVar5 = 0x50;
        goto LAB_00ae92d4;
      }
      if (1 < (ulong)param_2[1]) {
        lVar6 = *param_2;
        *param_2 = lVar6 + 2;
        param_2[1] = param_2[1] - 2;
        iVar4 = tls12_check_peer_sigalg(&local_48,param_1,lVar6,pubkey);
        if (iVar4 == -1) goto LAB_00ae9190;
        if (iVar4 != 0) goto LAB_00ae922c;
      }
    }
    out = (uchar *)0x0;
    uVar5 = 0x32;
  }
LAB_00ae92d4:
  ssl3_send_alert(param_1,2,uVar5);
  ossl_statem_set_error(param_1);
  uVar10 = 0;
LAB_00ae92f0:
                    /* catch() { ... } // from try @ 00ae9380 with catch @ 00ae92f0 */
  BIO_free(*(BIO **)(*(long *)(param_1 + 0x24) + 0xd8));
  *(undefined8 *)(*(long *)(param_1 + 0x24) + 0xd8) = 0;
  EVP_MD_CTX_free(ctx);
  CRYPTO_free(out);
  return uVar10;
}

