
undefined8
SSL_dane_tlsa_add(long param_1,uint param_2,byte param_3,byte param_4,uchar *param_5,size_t param_6)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  EVP_MD *md;
  undefined1 *ptr;
  void *__dest;
  byte *pbVar4;
  X509 *pXVar5;
  EVP_PKEY *pEVar6;
  long lVar7;
  EVP_PKEY *local_70;
  X509 *local_68;
  uchar *local_58;
  
                    /* catch() { ... } // from try @ 00ad5f30 with catch @ 00ad5fd8 */
                    /* try { // try from 00ad5fec to 00bd602f has its CatchHandler @ 00ad5fec
                       catch() { ... } // from try @ 00ad5fec with catch @ 00ad5fec
                       catch() { ... } // from try @ 00ad6110 with catch @ 00ad5fec
                       catch() { ... } // from try @ 00ad6178 with catch @ 00ad5fec */
  if (*(long *)(param_1 + 200) == 0) {
    iVar2 = 0xaf;
    iVar1 = 0x116;
LAB_00ad6080:
    ERR_put_error(0x14,0x18a,iVar2,"ssl/ssl_lib.c",iVar1);
LAB_00ad6084:
    uVar3 = 0xffffffff;
  }
  else {
    iVar2 = (int)param_6;
    if ((iVar2 < 0) || ((long)iVar2 != param_6)) {
      iVar2 = 0xbd;
      iVar1 = 0x11b;
    }
    else if ((param_2 & 0xff) < 4) {
      if (param_3 < 2) {
                    /* try { // try from 00ad60d4 to 00bd60fb has its CatchHandler @ 00ad61b8 */
        if (param_4 == 0) {
LAB_00ad6108:
          if (param_5 != (uchar *)0x0) {
                    /* try { // try from 00ad6110 to 00bd616f has its CatchHandler @ 00ad5fec */
            ptr = (undefined1 *)CRYPTO_zalloc(0x20,"ssl/ssl_lib.c",0x13a);
            if (ptr == (undefined1 *)0x0) {
                    /* catch() { ... } // from try @ 00ad6094 with catch @ 00ad621c */
              iVar2 = 0x41;
              iVar1 = 0x13b;
              goto LAB_00ad6080;
            }
            *ptr = (char)param_2;
            ptr[1] = param_3;
            ptr[2] = param_4;
            __dest = CRYPTO_malloc(iVar2,"ssl/ssl_lib.c",0x142);
            *(void **)(ptr + 8) = __dest;
            if (__dest == (void *)0x0) {
              CRYPTO_free((void *)0x0);
              EVP_PKEY_free(*(EVP_PKEY **)(ptr + 0x18));
                    /* catch() { ... } // from try @ 00ad6030 with catch @ 00ad6268 */
              CRYPTO_free(ptr);
                    /* catch() { ... } // from try @ 00ad62b4 with catch @ 00ad627c
                       catch() { ... } // from try @ 00ad62ec with catch @ 00ad627c */
              iVar1 = 0x145;
LAB_00ad63d0:
              iVar2 = 0x41;
              goto LAB_00ad6080;
            }
            memcpy(__dest,param_5,param_6);
            *(size_t *)(ptr + 0x10) = param_6;
            if (param_4 != 0) {
LAB_00ad6168:
              iVar2 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 200));
                    /* try { // try from 00ad6170 to 00bd6177 has its CatchHandler @ 00ad61d0 */
                    /* try { // try from 00ad6178 to 00bd627b has its CatchHandler @ 00ad5fec */
              if (iVar2 < 1) {
                iVar1 = 0;
              }
              else {
                iVar1 = 0;
                do {
                  pbVar4 = (byte *)OPENSSL_sk_value(*(undefined8 *)(param_1 + 200),iVar1);
                    /* catch() { ... } // from try @ 00ad60d4 with catch @ 00ad61b8 */
                    /* catch() { ... } // from try @ 00ad6064 with catch @ 00ad61c8 */
                  if (((uint)*pbVar4 <= (param_2 & 0xff)) &&
                     (((uint)*pbVar4 < (param_2 & 0xff) ||
                      ((pbVar4[1] <= param_3 &&
                       ((pbVar4[1] < param_3 ||
                        (lVar7 = *(long *)(*(long *)(param_1 + 0xc0) + 8),
                        *(byte *)(lVar7 + (ulong)pbVar4[2]) <= *(byte *)(lVar7 + (ulong)param_4)))))
                      )))) break;
                  iVar1 = iVar1 + 1;
                    /* catch() { ... } // from try @ 00ad6170 with catch @ 00ad61d0 */
                } while (iVar1 < iVar2);
              }
              iVar2 = OPENSSL_sk_insert(*(undefined8 *)(param_1 + 200),ptr,iVar1);
              if (iVar2 != 0) {
                    /* catch() { ... } // from try @ 00ad631c with catch @ 00ad6388 */
                *(uint *)(param_1 + 0xe8) = *(uint *)(param_1 + 0xe8) | 1 << (ulong)(param_2 & 0x1f)
                ;
                return 1;
              }
                    /* catch() { ... } // from try @ 00ad632c with catch @ 00ad6394 */
              CRYPTO_free(*(void **)(ptr + 8));
              EVP_PKEY_free(*(EVP_PKEY **)(ptr + 0x18));
              CRYPTO_free(ptr);
              iVar1 = 0x1ab;
              goto LAB_00ad63d0;
            }
            local_70 = (EVP_PKEY *)0x0;
            local_68 = (X509 *)0x0;
            local_58 = param_5;
            if (param_3 == 1) {
              pEVar6 = d2i_PUBKEY(&local_70,&local_58,param_6);
              if (((pEVar6 == (EVP_PKEY *)0x0) || (local_58 < param_5)) ||
                 ((long)local_58 - (long)param_5 != param_6)) {
                CRYPTO_free(*(void **)(ptr + 8));
                EVP_PKEY_free(*(EVP_PKEY **)(ptr + 0x18));
                CRYPTO_free(ptr);
                iVar2 = 0xc9;
                iVar1 = 0x179;
                goto LAB_00ad605c;
              }
              if ((param_2 & 0xff) == 2) {
                *(EVP_PKEY **)(ptr + 0x18) = local_70;
              }
              else {
                EVP_PKEY_free(local_70);
              }
              goto LAB_00ad6168;
            }
            if (param_3 != 0) goto LAB_00ad6168;
                    /* try { // try from 00ad62b0 to 00bd62b3 has its CatchHandler @ 00ad6300 */
            pXVar5 = d2i_X509(&local_68,&local_58,param_6);
                    /* try { // try from 00ad62b4 to 00bd62e3 has its CatchHandler @ 00ad627c */
            if (((pXVar5 == (X509 *)0x0) || (local_58 < param_5)) ||
               ((long)local_58 - (long)param_5 != param_6)) {
              CRYPTO_free(*(void **)(ptr + 8));
              EVP_PKEY_free(*(EVP_PKEY **)(ptr + 0x18));
              CRYPTO_free(ptr);
              iVar2 = 0xb4;
              iVar1 = 0x156;
              goto LAB_00ad605c;
            }
            lVar7 = X509_get0_pubkey(local_68);
            if (lVar7 == 0) {
              CRYPTO_free(*(void **)(ptr + 8));
              EVP_PKEY_free(*(EVP_PKEY **)(ptr + 0x18));
              CRYPTO_free(ptr);
              iVar2 = 0xb4;
              iVar1 = 0x15b;
              goto LAB_00ad605c;
            }
                    /* try { // try from 00ad62e4 to 00bd62eb has its CatchHandler @ 00ad6300 */
            if ((1 << (ulong)(param_2 & 0x1f) & 5U) == 0) {
              X509_free(local_68);
              goto LAB_00ad6168;
            }
                    /* try { // try from 00ad62ec to 00bd6307 has its CatchHandler @ 00ad627c */
            lVar7 = *(long *)(param_1 + 0xd0);
            if (lVar7 == 0) {
              lVar7 = OPENSSL_sk_new_null();
              *(long *)(param_1 + 0xd0) = lVar7;
              if (lVar7 != 0) goto LAB_00ad6300;
            }
            else {
LAB_00ad6300:
                    /* catch() { ... } // from try @ 00ad62b0 with catch @ 00ad6300
                       catch() { ... } // from try @ 00ad62e4 with catch @ 00ad6300 */
              iVar2 = OPENSSL_sk_push(lVar7,local_68);
                    /* catch() { ... } // from try @ 00ad6350 with catch @ 00ad6308 */
              if (iVar2 != 0) goto LAB_00ad6168;
            }
                    /* try { // try from 00ad631c to 00bd631f has its CatchHandler @ 00ad6388 */
            ERR_put_error(0x14,0x18a,0x41,"ssl/ssl_lib.c",0x16e);
                    /* try { // try from 00ad632c to 00bd634f has its CatchHandler @ 00ad6394 */
            X509_free(local_68);
            CRYPTO_free(*(void **)(ptr + 8));
            EVP_PKEY_free(*(EVP_PKEY **)(ptr + 0x18));
                    /* try { // try from 00ad6350 to 00bd63c3 has its CatchHandler @ 00ad6308 */
            CRYPTO_free(ptr);
            goto LAB_00ad6084;
          }
          iVar2 = 0xcb;
          iVar1 = 0x136;
        }
        else if ((*(byte *)(*(long **)(param_1 + 0xc0) + 2) < param_4) ||
                (md = *(EVP_MD **)(**(long **)(param_1 + 0xc0) + (ulong)param_4 * 8),
                md == (EVP_MD *)0x0)) {
                    /* catch() { ... } // from try @ 00ad6100 with catch @ 00ad61e8 */
          iVar2 = 200;
          iVar1 = 300;
        }
        else {
          iVar1 = EVP_MD_size(md);
                    /* try { // try from 00ad6100 to 00bd610f has its CatchHandler @ 00ad61e8 */
          if ((long)iVar1 == param_6) goto LAB_00ad6108;
          iVar2 = 0xc0;
          iVar1 = 0x132;
        }
      }
      else {
        iVar2 = 0xca;
        iVar1 = 0x125;
      }
    }
    else {
                    /* try { // try from 00ad6030 to 00bd6033 has its CatchHandler @ 00ad6268 */
      iVar2 = 0xb8;
      iVar1 = 0x120;
    }
LAB_00ad605c:
    ERR_put_error(0x14,0x18a,iVar2,"ssl/ssl_lib.c",iVar1);
    uVar3 = 0;
                    /* try { // try from 00ad6064 to 00bd608f has its CatchHandler @ 00ad61c8 */
  }
                    /* try { // try from 00ad6094 to 00bd609b has its CatchHandler @ 00ad621c */
  return uVar3;
}

