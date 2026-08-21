
EVP_PKEY * ssl_generate_pkey_curve(undefined8 param_1)

{
  int p1;
  bool bVar1;
  int iVar2;
  EVP_PKEY_CTX *ctx;
  int id;
  uint local_2c;
  EVP_PKEY *local_28;
  
                    /* catch() { ... } // from try @ 00ac01d0 with catch @ 00ac0328 */
                    /* catch() { ... } // from try @ 00ac01b0 with catch @ 00ac0330 */
                    /* catch() { ... } // from try @ 00ac0184 with catch @ 00ac0338 */
  local_28 = (EVP_PKEY *)0x0;
  iVar2 = tls1_ec_curve_id2nid(param_1,&local_2c);
  if (iVar2 == 0) {
    ctx = (EVP_PKEY_CTX *)0x0;
  }
  else {
    bVar1 = (local_2c & 3) != 2;
    id = iVar2;
    if (bVar1) {
      id = 0x198;
    }
    p1 = 0;
    if (bVar1) {
      p1 = iVar2;
    }
    ctx = EVP_PKEY_CTX_new_id(id,(ENGINE *)0x0);
                    /* try { // try from 00ac0374 to 00bc039b has its CatchHandler @ 00ac03e4 */
    if ((((ctx != (EVP_PKEY_CTX *)0x0) && (iVar2 = EVP_PKEY_keygen_init(ctx), 0 < iVar2)) &&
        ((p1 == 0 || (iVar2 = EVP_PKEY_CTX_ctrl(ctx,0x198,6,0x1001,p1,(void *)0x0), 0 < iVar2)))) &&
       (iVar2 = EVP_PKEY_keygen(ctx,&local_28), iVar2 < 1)) {
      EVP_PKEY_free(local_28);
      local_28 = (EVP_PKEY *)0x0;
    }
  }
  EVP_PKEY_CTX_free(ctx);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ac0374 with catch @ 00ac03e4
                        */
  return local_28;
}

