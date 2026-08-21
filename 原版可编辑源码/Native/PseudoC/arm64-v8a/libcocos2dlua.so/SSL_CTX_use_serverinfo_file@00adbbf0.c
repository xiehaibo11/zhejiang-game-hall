
undefined4 SSL_CTX_use_serverinfo_file(long param_1,void *param_2)

{
  char *__s1;
  int iVar1;
  undefined4 uVar2;
  BIO_METHOD *type;
  BIO *bp;
  long lVar3;
  size_t sVar4;
  void *ptr;
  int iVar5;
  void *addr;
  long lVar6;
  char *local_70;
  char *local_68;
  size_t local_60;
  uchar *local_58;
  
  local_60 = 0;
  local_58 = (uchar *)0x0;
  local_70 = (char *)0x0;
  local_68 = (char *)0x0;
  if ((param_1 == 0) || (param_2 == (void *)0x0)) {
    ERR_put_error(0x14,0x151,0x43,"ssl/ssl_rsa.c",0x37e);
    ptr = (void *)0x0;
    uVar2 = 0;
    bp = (BIO *)0x0;
  }
  else {
    type = BIO_s_file();
    bp = BIO_new(type);
    if (bp == (BIO *)0x0) {
                    /* try { // try from 00adbdb0 to 00bdbdb7 has its CatchHandler @ 00adbeac */
                    /* try { // try from 00adbdb8 to 00bdbddb has its CatchHandler @ 00adbd48 */
      iVar1 = 7;
      iVar5 = 900;
    }
    else {
      lVar3 = BIO_ctrl(bp,0x6c,3,param_2);
      if (0 < (int)lVar3) {
        iVar1 = PEM_read_bio(bp,&local_68,&local_70,&local_58,(long *)&local_60);
        if (iVar1 == 0) {
                    /* try { // try from 00adbde8 to 00bdbe0f has its CatchHandler @ 00adbd48 */
          ptr = (void *)0x0;
        }
        else {
          lVar6 = 0;
          lVar3 = 0;
          addr = (void *)0x0;
          do {
            __s1 = local_68;
            sVar4 = strlen(local_68);
            if (sVar4 < 0xf) {
                    /* try { // try from 00adbe38 to 00bdbe3f has its CatchHandler @ 00adbea8 */
                    /* try { // try from 00adbe40 to 00bdbe5f has its CatchHandler @ 00adbd48 */
              iVar1 = 0x188;
              iVar5 = 0x39b;
LAB_00adbe80:
              ERR_put_error(0x14,0x151,iVar1,"ssl/ssl_rsa.c",iVar5);
              goto LAB_00adbe84;
            }
            iVar1 = strncmp(__s1,"SERVERINFO FOR ",0xf);
            if (iVar1 != 0) {
              iVar1 = 0x187;
                    /* try { // try from 00adbe60 to 00bdbe6b has its CatchHandler @ 00adbea8 */
              iVar5 = 0x3a0;
              goto LAB_00adbe80;
            }
            if (((long)local_60 < 4) || ((ulong)CONCAT11(local_58[2],local_58[3]) != local_60 - 4))
            {
                    /* try { // try from 00adbe18 to 00bdbe37 has its CatchHandler @ 00adbd48 */
              iVar1 = 0x186;
              iVar5 = 0x3a8;
              goto LAB_00adbe80;
            }
            ptr = CRYPTO_realloc(addr,(int)local_60 + (int)lVar3,"ssl/ssl_rsa.c",0x3ac);
            if (ptr == (void *)0x0) {
                    /* try { // try from 00adbe6c to 00bdbeaf has its CatchHandler @ 00adbd48 */
              iVar1 = 0x41;
              iVar5 = 0x3ae;
              goto LAB_00adbe80;
            }
            memcpy((void *)((long)ptr + lVar3),local_58,local_60);
            lVar3 = local_60 + lVar3;
            CRYPTO_free(local_68);
            local_68 = (char *)0x0;
            CRYPTO_free(local_70);
            local_70 = (char *)0x0;
            CRYPTO_free(local_58);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00adbdb8 with catch @ 00adbd48
                       catch(type#1 @ 00000000) { ... } // from try @ 00adbde8 with catch @ 00adbd48
                       catch(type#1 @ 00000000) { ... } // from try @ 00adbe18 with catch @ 00adbd48
                       catch(type#1 @ 00000000) { ... } // from try @ 00adbe40 with catch @ 00adbd48
                       catch(type#1 @ 00000000) { ... } // from try @ 00adbe6c with catch @ 00adbd48
                        */
            local_58 = (uchar *)0x0;
            iVar1 = PEM_read_bio(bp,&local_68,&local_70,&local_58,(long *)&local_60);
            lVar6 = lVar6 + -1;
            addr = ptr;
          } while (iVar1 != 0);
          if (lVar6 != 0) {
            uVar2 = SSL_CTX_use_serverinfo(param_1,ptr,lVar3);
            goto LAB_00adbe88;
          }
        }
        ERR_put_error(0x14,0x151,0x185,"ssl/ssl_rsa.c",0x394);
        uVar2 = 0;
        goto LAB_00adbe88;
      }
      iVar1 = 2;
      iVar5 = 0x388;
    }
                    /* try { // try from 00adbddc to 00bdbde7 has its CatchHandler @ 00adbeac */
    ERR_put_error(0x14,0x151,iVar1,"ssl/ssl_rsa.c",iVar5);
    addr = (void *)0x0;
LAB_00adbe84:
    uVar2 = 0;
    ptr = addr;
  }
LAB_00adbe88:
  CRYPTO_free(local_68);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00adbe10 with catch @ 00adbea8
                       catch(type#1 @ 00000000) { ... } // from try @ 00adbe38 with catch @ 00adbea8
                       catch(type#1 @ 00000000) { ... } // from try @ 00adbe60 with catch @ 00adbea8
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00adbdb0 with catch @ 00adbeac
                       catch(type#1 @ 00000000) { ... } // from try @ 00adbddc with catch @ 00adbeac
                        */
  CRYPTO_free(local_70);
  CRYPTO_free(local_58);
  CRYPTO_free(ptr);
  BIO_free(bp);
                    /* try { // try from 00adbee0 to 00bdbf7f has its CatchHandler @ 00adbee0
                       catch() { ... } // from try @ 00adbee0 with catch @ 00adbee0
                       catch() { ... } // from try @ 00adbfb8 with catch @ 00adbee0 */
  return uVar2;
}

