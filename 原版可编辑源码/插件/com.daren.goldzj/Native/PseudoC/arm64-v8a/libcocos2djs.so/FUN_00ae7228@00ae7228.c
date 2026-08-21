
bool FUN_00ae7228(long param_1,void *param_2)

{
  bool bVar1;
  int iVar2;
  BIO_METHOD *type;
  BIO *bp;
  long lVar3;
  DH *dh;
  SSL *ssl;
  
                    /* catch() { ... } // from try @ 00ae6fe4 with catch @ 00ae7230
                       catch() { ... } // from try @ 00ae71e8 with catch @ 00ae7230 */
                    /* catch() { ... } // from try @ 00ae70c8 with catch @ 00ae7238 */
                    /* catch() { ... } // from try @ 00ae6f6c with catch @ 00ae723c */
                    /* catch() { ... } // from try @ 00ae7028 with catch @ 00ae7244
                       catch() { ... } // from try @ 00ae7110 with catch @ 00ae7244
                       catch() { ... } // from try @ 00ae71cc with catch @ 00ae7244 */
  if ((*(long *)(param_1 + 0x18) == 0) && (*(long *)(param_1 + 0x20) == 0)) {
    bVar1 = true;
  }
  else {
    type = BIO_s_file();
    bp = BIO_new(type);
    if ((bp == (BIO *)0x0) || (lVar3 = BIO_ctrl(bp,0x6c,3,param_2), (int)lVar3 < 1)) {
      iVar2 = 0;
      dh = (DH *)0x0;
    }
    else {
                    /* try { // try from 00ae7288 to 00be735b has its CatchHandler @ 00ae7288
                       catch() { ... } // from try @ 00ae7288 with catch @ 00ae7288
                       catch() { ... } // from try @ 00ae736c with catch @ 00ae7288 */
      dh = PEM_read_bio_DHparams(bp,(DH **)0x0,(undefined1 *)0x0,(void *)0x0);
      if (dh == (DH *)0x0) {
        iVar2 = 0;
      }
      else {
        if (*(SSL_CTX **)(param_1 + 0x18) == (SSL_CTX *)0x0) {
          iVar2 = 0;
          ssl = *(SSL **)(param_1 + 0x20);
        }
        else {
          lVar3 = SSL_CTX_ctrl(*(SSL_CTX **)(param_1 + 0x18),3,0,dh);
          iVar2 = (int)lVar3;
          ssl = *(SSL **)(param_1 + 0x20);
        }
        if (ssl != (SSL *)0x0) {
          lVar3 = SSL_ctrl(ssl,3,0,dh);
          iVar2 = (int)lVar3;
        }
      }
    }
    DH_free(dh);
    BIO_free(bp);
    bVar1 = 0 < iVar2;
  }
  return bVar1;
}

