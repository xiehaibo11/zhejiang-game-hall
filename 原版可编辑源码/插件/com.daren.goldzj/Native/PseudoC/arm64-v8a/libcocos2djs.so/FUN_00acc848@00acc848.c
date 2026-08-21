
int FUN_00acc848(SSL_CTX *param_1,SSL *param_2,void *param_3)

{
  void **ppvVar1;
  undefined1 **ppuVar2;
  int iVar3;
  int iVar4;
  BIO_METHOD *type;
  BIO *bp;
  long lVar5;
  X509 *a;
  _func_3151 *p_Var6;
  ulong uVar7;
  X509 *a_00;
  int line;
  void *u;
  undefined1 *cb;
  
  ERR_clear_error();
  ppvVar1 = &param_1->default_passwd_callback_userdata;
  ppuVar2 = &param_1->default_passwd_callback;
  if (param_1 == (SSL_CTX *)0x0) {
    ppvVar1 = (void **)(param_2[6].sid_ctx + 0xc);
    ppuVar2 = (undefined1 **)(param_2[6].sid_ctx + 4);
  }
  u = *ppvVar1;
  cb = *ppuVar2;
  type = BIO_s_file();
  bp = BIO_new(type);
  if (bp == (BIO *)0x0) {
    iVar3 = 7;
    iVar4 = 0x25e;
  }
  else {
    lVar5 = BIO_ctrl(bp,0x6c,3,param_3);
    if (0 < (int)lVar5) {
      a = PEM_read_bio_X509_AUX(bp,(X509 **)0x0,cb,u);
      if (a == (X509 *)0x0) {
        ERR_put_error(0x14,0xdc,9,"ssl/ssl_rsa.c",0x26a);
        goto LAB_00acc950;
      }
      if (param_1 == (SSL_CTX *)0x0) {
        iVar3 = ssl_security_cert(param_2,0,a,0,1);
        if (iVar3 == 1) {
          p_Var6 = param_2->verify_callback;
          goto LAB_00acc9c8;
        }
        iVar4 = 0xc6;
        line = 0x1d;
LAB_00acca04:
        ERR_put_error(0x14,iVar4,iVar3,"ssl/ssl_rsa.c",line);
        iVar3 = 0;
      }
      else {
        iVar3 = ssl_security_cert(0,param_1,a,0,1);
        if (iVar3 != 1) {
          iVar4 = 0xab;
          line = 0x131;
          goto LAB_00acca04;
        }
        p_Var6 = (_func_3151 *)param_1->mode;
LAB_00acc9c8:
        iVar3 = FUN_00acb7e8(p_Var6,a);
      }
      uVar7 = ERR_peek_error();
      if (uVar7 != 0) {
        iVar3 = 0;
      }
      if (iVar3 == 0) goto LAB_00acc954;
      if (param_1 == (SSL_CTX *)0x0) {
        lVar5 = SSL_ctrl(param_2,0x58,0,(void *)0x0);
        iVar4 = (int)lVar5;
      }
      else {
        lVar5 = SSL_CTX_ctrl(param_1,0x58,0,(void *)0x0);
        iVar4 = (int)lVar5;
      }
      if (iVar4 != 0) {
        if (param_1 == (SSL_CTX *)0x0) {
          do {
            a_00 = PEM_read_bio_X509(bp,(X509 **)0x0,cb,u);
            if (a_00 == (X509 *)0x0) goto LAB_00accad4;
            lVar5 = SSL_ctrl(param_2,0x59,0,a_00);
          } while ((int)lVar5 != 0);
        }
        else {
          do {
            a_00 = PEM_read_bio_X509(bp,(X509 **)0x0,cb,u);
            if (a_00 == (X509 *)0x0) goto LAB_00accad4;
            lVar5 = SSL_CTX_ctrl(param_1,0x59,0,a_00);
          } while ((int)lVar5 != 0);
        }
        X509_free(a_00);
      }
      goto LAB_00acc950;
    }
    iVar3 = 2;
    iVar4 = 0x263;
  }
  ERR_put_error(0x14,0xdc,iVar3,"ssl/ssl_rsa.c",iVar4);
  a = (X509 *)0x0;
LAB_00acc950:
  iVar3 = 0;
LAB_00acc954:
  X509_free(a);
  BIO_free(bp);
  return iVar3;
LAB_00accad4:
  uVar7 = ERR_peek_last_error();
  if ((uVar7 & 0xff000fff) == 0x900006c) {
    ERR_clear_error();
    goto LAB_00acc954;
  }
  goto LAB_00acc950;
}

