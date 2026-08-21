
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
  
                    /* try { // try from 00ac6b10 to 00bc6b23 has its CatchHandler @ 00ac7080 */
  if (*(long *)(param_1 + 200) == 0) {
    iVar2 = 0xaf;
    iVar1 = 0x116;
LAB_00ac6b98:
    ERR_put_error(0x14,0x18a,iVar2,"ssl/ssl_lib.c",iVar1);
LAB_00ac6b9c:
    uVar3 = 0xffffffff;
  }
  else {
    iVar2 = (int)param_6;
    if ((iVar2 < 0) || ((long)iVar2 != param_6)) {
                    /* try { // try from 00ac6b5c to 00bc6b6b has its CatchHandler @ 00ac7070 */
      iVar2 = 0xbd;
      iVar1 = 0x11b;
    }
    else if ((param_2 & 0xff) < 4) {
      if (param_3 < 2) {
                    /* try { // try from 00ac6be8 to 00bc6bef has its CatchHandler @ 00ac704c */
        if (param_4 == 0) {
LAB_00ac6c20:
          if (param_5 != (uchar *)0x0) {
            ptr = (undefined1 *)CRYPTO_zalloc(0x20,"ssl/ssl_lib.c",0x13a);
            if (ptr == (undefined1 *)0x0) {
                    /* try { // try from 00ac6d30 to 00bc6d37 has its CatchHandler @ 00ac7048 */
              iVar2 = 0x41;
              iVar1 = 0x13b;
              goto LAB_00ac6b98;
            }
            *ptr = (char)param_2;
            ptr[1] = param_3;
            ptr[2] = param_4;
            __dest = CRYPTO_malloc(iVar2,"ssl/ssl_lib.c",0x142);
            *(void **)(ptr + 8) = __dest;
            if (__dest == (void *)0x0) {
              CRYPTO_free((void *)0x0);
              EVP_PKEY_free(*(EVP_PKEY **)(ptr + 0x18));
              CRYPTO_free(ptr);
              iVar1 = 0x145;
LAB_00ac6ee8:
              iVar2 = 0x41;
              goto LAB_00ac6b98;
            }
            memcpy(__dest,param_5,param_6);
            *(size_t *)(ptr + 0x10) = param_6;
            if (param_4 != 0) {
LAB_00ac6c80:
              iVar2 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 200));
              if (iVar2 < 1) {
                iVar1 = 0;
              }
              else {
                iVar1 = 0;
                do {
                  pbVar4 = (byte *)OPENSSL_sk_value(*(undefined8 *)(param_1 + 200),iVar1);
                  if (((uint)*pbVar4 <= (param_2 & 0xff)) &&
                     (((uint)*pbVar4 < (param_2 & 0xff) ||
                      ((pbVar4[1] <= param_3 &&
                       ((pbVar4[1] < param_3 ||
                        (lVar7 = *(long *)(*(long *)(param_1 + 0xc0) + 8),
                        *(byte *)(lVar7 + (ulong)pbVar4[2]) <= *(byte *)(lVar7 + (ulong)param_4)))))
                      )))) break;
                  iVar1 = iVar1 + 1;
                } while (iVar1 < iVar2);
              }
              iVar2 = OPENSSL_sk_insert(*(undefined8 *)(param_1 + 200),ptr,iVar1);
              if (iVar2 != 0) {
                *(uint *)(param_1 + 0xe8) = *(uint *)(param_1 + 0xe8) | 1 << (ulong)(param_2 & 0x1f)
                ;
                return 1;
              }
              CRYPTO_free(*(void **)(ptr + 8));
              EVP_PKEY_free(*(EVP_PKEY **)(ptr + 0x18));
                    /* try { // try from 00ac6ec8 to 00bc6ecf has its CatchHandler @ 00ac70b4 */
                    /* try { // try from 00ac6ed0 to 00bc6f27 has its CatchHandler @ 00ac6880 */
              CRYPTO_free(ptr);
              iVar1 = 0x1ab;
              goto LAB_00ac6ee8;
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
                goto LAB_00ac6b74;
              }
              if ((param_2 & 0xff) == 2) {
                    /* try { // try from 00ac6f28 to 00bc6f37 has its CatchHandler @ 00ac70c4 */
                *(EVP_PKEY **)(ptr + 0x18) = local_70;
              }
              else {
                EVP_PKEY_free(local_70);
              }
              goto LAB_00ac6c80;
            }
            if (param_3 != 0) goto LAB_00ac6c80;
            pXVar5 = d2i_X509(&local_68,&local_58,param_6);
            if (((pXVar5 == (X509 *)0x0) || (local_58 < param_5)) ||
               ((long)local_58 - (long)param_5 != param_6)) {
              CRYPTO_free(*(void **)(ptr + 8));
              EVP_PKEY_free(*(EVP_PKEY **)(ptr + 0x18));
                    /* try { // try from 00ac6f50 to 00bc6f57 has its CatchHandler @ 00ac70c8 */
                    /* try { // try from 00ac6f58 to 00bc7017 has its CatchHandler @ 00ac6880 */
              CRYPTO_free(ptr);
              iVar2 = 0xb4;
              iVar1 = 0x156;
              goto LAB_00ac6b74;
            }
            lVar7 = X509_get0_pubkey(local_68);
            if (lVar7 == 0) {
              CRYPTO_free(*(void **)(ptr + 8));
              EVP_PKEY_free(*(EVP_PKEY **)(ptr + 0x18));
              CRYPTO_free(ptr);
              iVar2 = 0xb4;
              iVar1 = 0x15b;
              goto LAB_00ac6b74;
            }
            if ((1 << (ulong)(param_2 & 0x1f) & 5U) == 0) {
              X509_free(local_68);
                    /* try { // try from 00ac7018 to 00bc701f has its CatchHandler @ 00ac7044 */
              goto LAB_00ac6c80;
            }
            lVar7 = *(long *)(param_1 + 0xd0);
                    /* try { // try from 00ac6e08 to 00bc6e1f has its CatchHandler @ 00ac7060 */
            if (lVar7 == 0) {
              lVar7 = OPENSSL_sk_new_null();
              *(long *)(param_1 + 0xd0) = lVar7;
              if (lVar7 != 0) goto LAB_00ac6e18;
            }
            else {
LAB_00ac6e18:
              iVar2 = OPENSSL_sk_push(lVar7,local_68);
              if (iVar2 != 0) goto LAB_00ac6c80;
            }
            ERR_put_error(0x14,0x18a,0x41,"ssl/ssl_lib.c",0x16e);
            X509_free(local_68);
            CRYPTO_free(*(void **)(ptr + 8));
            EVP_PKEY_free(*(EVP_PKEY **)(ptr + 0x18));
            CRYPTO_free(ptr);
            goto LAB_00ac6b9c;
          }
          iVar2 = 0xcb;
          iVar1 = 0x136;
        }
        else if ((*(byte *)(*(long **)(param_1 + 0xc0) + 2) < param_4) ||
                (md = *(EVP_MD **)(**(long **)(param_1 + 0xc0) + (ulong)param_4 * 8),
                md == (EVP_MD *)0x0)) {
          iVar2 = 200;
          iVar1 = 300;
        }
        else {
          iVar1 = EVP_MD_size(md);
          if ((long)iVar1 == param_6) goto LAB_00ac6c20;
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
      iVar2 = 0xb8;
      iVar1 = 0x120;
    }
LAB_00ac6b74:
    ERR_put_error(0x14,0x18a,iVar2,"ssl/ssl_lib.c",iVar1);
    uVar3 = 0;
  }
  return uVar3;
}

