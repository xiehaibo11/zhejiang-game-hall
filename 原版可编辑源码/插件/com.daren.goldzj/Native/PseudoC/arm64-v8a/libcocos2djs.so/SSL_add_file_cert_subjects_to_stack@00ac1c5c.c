
int SSL_add_file_cert_subjects_to_stack(stack_st_X509_NAME *stackCAs,char *file)

{
  int iVar1;
  undefined8 uVar2;
  BIO_METHOD *type;
  BIO *bp;
  long lVar3;
  X509 *pXVar4;
  X509_NAME *pXVar5;
  X509 *local_38;
  
                    /* try { // try from 00ac1c74 to 00bc1ee7 has its CatchHandler @ 00ac1c74
                       catch() { ... } // from try @ 00ac1c74 with catch @ 00ac1c74
                       catch() { ... } // from try @ 00ac220c with catch @ 00ac1c74
                       catch() { ... } // from try @ 00ac2388 with catch @ 00ac1c74
                       catch() { ... } // from try @ 00ac24fc with catch @ 00ac1c74
                       catch() { ... } // from try @ 00ac2568 with catch @ 00ac1c74 */
  local_38 = (X509 *)0x0;
  uVar2 = OPENSSL_sk_set_cmp_func(stackCAs,&LAB_00ac1d7c);
  type = BIO_s_file();
  bp = BIO_new(type);
  if (bp == (BIO *)0x0) {
    ERR_put_error(0x14,0xd8,0x41,"ssl/ssl_cert.c",0x28b);
  }
  else {
    lVar3 = BIO_ctrl(bp,0x6c,3,file);
    if ((int)lVar3 != 0) {
      do {
        while( true ) {
          pXVar4 = PEM_read_bio_X509(bp,&local_38,(undefined1 *)0x0,(void *)0x0);
          if (pXVar4 == (X509 *)0x0) {
            ERR_clear_error();
            iVar1 = 1;
            goto LAB_00ac1d48;
          }
          pXVar5 = X509_get_subject_name(local_38);
          if (pXVar5 == (X509_NAME *)0x0) goto LAB_00ac1d38;
          pXVar5 = X509_NAME_dup(pXVar5);
          iVar1 = 0;
          if (pXVar5 == (X509_NAME *)0x0) goto LAB_00ac1d48;
          iVar1 = OPENSSL_sk_find(stackCAs,pXVar5);
          if (iVar1 < 0) break;
          X509_NAME_free(pXVar5);
        }
        iVar1 = OPENSSL_sk_push(stackCAs,pXVar5);
      } while (iVar1 != 0);
      X509_NAME_free(pXVar5);
    }
  }
LAB_00ac1d38:
  iVar1 = 0;
LAB_00ac1d48:
  BIO_free(bp);
  X509_free(local_38);
  OPENSSL_sk_set_cmp_func(stackCAs,uVar2);
  return iVar1;
}

