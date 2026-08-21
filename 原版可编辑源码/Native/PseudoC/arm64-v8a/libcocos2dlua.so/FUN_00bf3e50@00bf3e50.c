
int FUN_00bf3e50(BIO *param_1,uchar *param_2,uint param_3)

{
  int *t;
  uchar *f;
  int iVar1;
  uint uVar2;
  int extraout_w0;
  int iVar3;
  int *outl;
  BIO *b;
  int iVar4;
  int *piVar5;
  int iVar6;
  uint n;
  
  outl = (int *)BIO_get_data();
  b = BIO_next(param_1);
  if ((outl == (int *)0x0) || (b == (BIO *)0x0)) {
    return 0;
  }
  BIO_clear_flags(param_1,0xf);
  if (outl[4] != 1) {
    outl[4] = 1;
    outl[0] = 0;
    outl[1] = 0;
    outl[2] = 0;
    EVP_EncodeInit(*(EVP_ENCODE_CTX **)(outl + 8));
  }
  piVar5 = outl + 1;
  iVar6 = *piVar5;
  if (0x5dd < iVar6) {
                    /* WARNING: Subroutine does not return */
    OPENSSL_die("assertion failed: ctx->buf_off < (int)sizeof(ctx->buf)","crypto/evp/bio_b64.c",
                0x154);
  }
  iVar1 = *outl;
  if (0x5de < iVar1) {
                    /* WARNING: Subroutine does not return */
    OPENSSL_die("assertion failed: ctx->buf_len <= (int)sizeof(ctx->buf)","crypto/evp/bio_b64.c",
                0x155);
  }
  iVar4 = iVar1 - iVar6;
  if (iVar1 < iVar6) {
                    /* WARNING: Subroutine does not return */
    OPENSSL_die("assertion failed: ctx->buf_len >= ctx->buf_off","crypto/evp/bio_b64.c",0x156);
  }
  while (0 < iVar4) {
    iVar1 = BIO_write(b,(void *)((long)outl + (long)iVar6 + 0x28),iVar4);
    if (iVar1 < 1) {
      BIO_copy_next_retry(param_1);
      return iVar1;
    }
    if (iVar4 < iVar1) {
                    /* WARNING: Subroutine does not return */
      OPENSSL_die("assertion failed: i <= n","crypto/evp/bio_b64.c",0x15e);
    }
    iVar6 = *piVar5 + iVar1;
    *piVar5 = iVar6;
    if (0x5de < iVar6) {
                    /* WARNING: Subroutine does not return */
      OPENSSL_die("assertion failed: ctx->buf_off <= (int)sizeof(ctx->buf)","crypto/evp/bio_b64.c",
                  0x160);
    }
    iVar4 = iVar4 - iVar1;
    if (*outl < iVar6) {
                    /* WARNING: Subroutine does not return */
      OPENSSL_die("assertion failed: ctx->buf_len >= ctx->buf_off","crypto/evp/bio_b64.c",0x161);
    }
  }
  outl[0] = 0;
  outl[1] = 0;
  if ((int)param_3 < 1) {
    return 0;
  }
  if (param_2 == (uchar *)0x0) {
    return 0;
  }
  iVar6 = 0;
  t = outl + 10;
  f = (uchar *)((long)outl + 0x606);
  do {
    n = param_3;
    if (0x3ff < (int)param_3) {
      n = 0x400;
    }
    uVar2 = BIO_test_flags(param_1,-1);
    if ((uVar2 >> 8 & 1) == 0) {
      EVP_EncodeUpdate(*(EVP_ENCODE_CTX **)(outl + 8),(uchar *)t,outl,param_2,n);
      if (extraout_w0 == 0) {
        if (iVar6 != 0) {
          return iVar6;
        }
        return -1;
      }
      iVar1 = *outl;
      if (0x5de < iVar1) {
                    /* WARNING: Subroutine does not return */
        OPENSSL_die("assertion failed: ctx->buf_len <= (int)sizeof(ctx->buf)","crypto/evp/bio_b64.c"
                    ,0x19a);
      }
      if (iVar1 < *piVar5) {
                    /* WARNING: Subroutine does not return */
        OPENSSL_die("assertion failed: ctx->buf_len >= ctx->buf_off","crypto/evp/bio_b64.c",0x19b);
      }
LAB_00bf4098:
      iVar6 = n + iVar6;
    }
    else {
      iVar1 = outl[2];
      if (iVar1 < 1) {
        if ((int)n < 3) {
          memcpy(f,param_2,(long)(int)n);
          outl[2] = n;
          return n + iVar6;
        }
        n = (n / 3) * 3;
        iVar1 = EVP_EncodeBlock((uchar *)t,param_2,n);
        *outl = iVar1;
        if (0x5de < iVar1) {
                    /* WARNING: Subroutine does not return */
          OPENSSL_die("assertion failed: ctx->buf_len <= (int)sizeof(ctx->buf)",
                      "crypto/evp/bio_b64.c",0x191);
        }
        if (iVar1 < *piVar5) {
                    /* WARNING: Subroutine does not return */
          OPENSSL_die("assertion failed: ctx->buf_len >= ctx->buf_off","crypto/evp/bio_b64.c",0x192)
          ;
        }
        goto LAB_00bf4098;
      }
      if (3 < iVar1) {
                    /* WARNING: Subroutine does not return */
        OPENSSL_die("assertion failed: ctx->tmp_len <= 3","crypto/evp/bio_b64.c",0x170);
      }
      n = param_3;
      if ((int)(3U - iVar1) <= (int)param_3) {
        n = 3U - iVar1;
      }
      memcpy(f + iVar1,param_2,(long)(int)n);
      iVar6 = n + iVar6;
      iVar1 = outl[2] + n;
      outl[2] = iVar1;
      if (iVar1 < 3) {
        return iVar6;
      }
      iVar1 = EVP_EncodeBlock((uchar *)t,f,iVar1);
      *outl = iVar1;
      if (0x5de < iVar1) {
                    /* WARNING: Subroutine does not return */
        OPENSSL_die("assertion failed: ctx->buf_len <= (int)sizeof(ctx->buf)","crypto/evp/bio_b64.c"
                    ,0x17f);
      }
      if (iVar1 < *piVar5) {
                    /* WARNING: Subroutine does not return */
        OPENSSL_die("assertion failed: ctx->buf_len >= ctx->buf_off","crypto/evp/bio_b64.c",0x180);
      }
      outl[2] = 0;
    }
    iVar4 = 0;
    param_3 = param_3 - n;
    param_2 = param_2 + (int)n;
    *piVar5 = 0;
    while (0 < iVar1) {
      iVar3 = BIO_write(b,(uchar *)((long)t + (long)iVar4),iVar1);
      if (iVar3 < 1) {
        BIO_copy_next_retry(param_1);
        if (iVar6 == 0) {
          return iVar3;
        }
        return iVar6;
      }
      if (iVar1 < iVar3) {
                    /* WARNING: Subroutine does not return */
        OPENSSL_die("assertion failed: i <= n","crypto/evp/bio_b64.c",0x1a9);
      }
      iVar4 = *piVar5 + iVar3;
      *piVar5 = iVar4;
      if (0x5de < iVar4) {
                    /* WARNING: Subroutine does not return */
        OPENSSL_die("assertion failed: ctx->buf_off <= (int)sizeof(ctx->buf)","crypto/evp/bio_b64.c"
                    ,0x1ac);
      }
      iVar1 = iVar1 - iVar3;
      if (*outl < iVar4) {
                    /* WARNING: Subroutine does not return */
        OPENSSL_die("assertion failed: ctx->buf_len >= ctx->buf_off","crypto/evp/bio_b64.c",0x1ad);
      }
    }
    outl[0] = 0;
    outl[1] = 0;
    if ((int)param_3 < 1) {
      return iVar6;
    }
  } while( true );
}

